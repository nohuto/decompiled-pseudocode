/*
 * XREFs of DbgkpFreeDebugEvent @ 0x1408479B8
 * Callers:
 *     DbgkpWakeTarget @ 0x1408489C4 (DbgkpWakeTarget.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 */

void __fastcall DbgkpFreeDebugEvent(PVOID P)
{
  int v1; // eax
  void *v3; // rcx

  v1 = *((_DWORD *)P + 32);
  if ( v1 == 2 )
  {
    v3 = (void *)*((_QWORD *)P + 18);
  }
  else
  {
    if ( v1 != 5 )
      goto LABEL_7;
    v3 = (void *)*((_QWORD *)P + 17);
  }
  if ( v3 )
    ObCloseHandle(v3, 0);
LABEL_7:
  ObfDereferenceObjectWithTag(*((PVOID *)P + 7), 0x4F676244u);
  ObfDereferenceObjectWithTag(*((PVOID *)P + 8), 0x4F676244u);
  ExFreePoolWithTag(P, 0);
}
