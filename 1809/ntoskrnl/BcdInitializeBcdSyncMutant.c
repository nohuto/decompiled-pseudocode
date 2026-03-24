/*
 * XREFs of BcdInitializeBcdSyncMutant @ 0x1409DEDA8
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwCreateMutant @ 0x1401B9750 (ZwCreateMutant.c)
 */

int BcdInitializeBcdSyncMutant()
{
  signed __int64 v0; // rax
  OBJECT_ATTRIBUTES v2; // [rsp+20h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v2.Length = 48;
  v2.RootDirectory = 0LL;
  v2.Attributes = 592;
  v2.SecurityQualityOfService = 0LL;
  v2.ObjectName = (PUNICODE_STRING)L"8:";
  v2.SecurityDescriptor = BiBcdMutantDescriptor;
  LODWORD(v0) = ZwCreateMutant(&Handle, 0x1F0001u, &v2, 0);
  if ( (int)v0 >= 0 )
  {
    v0 = _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)Handle, 0LL);
    if ( v0 )
      LODWORD(v0) = ZwClose(Handle);
  }
  return v0;
}
