/*
 * XREFs of IopFreeResetRemovalContext @ 0x140860F94
 * Callers:
 *     IoRequestDeviceRemovalForReset @ 0x140860C10 (IoRequestDeviceRemovalForReset.c)
 *     IopDeviceRemovalForResetComplete @ 0x140860DE0 (IopDeviceRemovalForResetComplete.c)
 *     IopRetryDeviceRemovalForReset @ 0x140861010 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 */

void __fastcall IopFreeResetRemovalContext(char *P)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *((_QWORD *)P + 21);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 64), 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(*((PVOID *)P + 21), 0x4B706E50u);
    *((_QWORD *)P + 21) = 0LL;
  }
  v3 = (void *)*((_QWORD *)P + 23);
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x52706E50u);
    *((_QWORD *)P + 23) = 0LL;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 200));
  ExFreePoolWithTag(P, 0);
}
