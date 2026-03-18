/*
 * XREFs of PspTimerDelayProcess @ 0x140307EF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PspApplyTimerDelayProcess @ 0x1403076F4 (PspApplyTimerDelayProcess.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F13C0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall PspTimerDelayProcess(void *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  __int64 v4; // r8
  int v5; // ebx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandleWithTag(a1, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0, 0x624A7350u, &Object, 0LL);
  if ( result >= 0 )
  {
    v5 = PspApplyTimerDelayProcess((__int64)Object, a2, v4);
    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
    return v5;
  }
  return result;
}
