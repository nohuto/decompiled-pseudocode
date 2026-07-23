/*
 * XREFs of MiLdwPopupWorker @ 0x14084FB80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     CcMmLogLostDelayedWriteError @ 0x140269E30 (CcMmLogLostDelayedWriteError.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall MiLdwPopupWorker(__int64 a1)
{
  struct _FILE_OBJECT *v1; // rbx
  NTSTATUS v2; // edi

  v1 = *(struct _FILE_OBJECT **)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 48) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 44), 0);
  CcMmLogLostDelayedWriteError(v1, v2);
  return ObfDereferenceObject(v1);
}
