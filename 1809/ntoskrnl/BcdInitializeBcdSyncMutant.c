/*
 * XREFs of BcdInitializeBcdSyncMutant @ 0x1409DFDA8
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateMutant @ 0x1401B98B0 (ZwCreateMutant.c)
 */

void BcdInitializeBcdSyncMutant(void)
{
  OBJECT_ATTRIBUTES v0; // [rsp+20h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v0.Length = 48;
  v0.RootDirectory = 0LL;
  v0.Attributes = 592;
  v0.SecurityQualityOfService = 0LL;
  v0.ObjectName = (PUNICODE_STRING)L"8:";
  v0.SecurityDescriptor = BiBcdMutantDescriptor;
  if ( ZwCreateMutant(&Handle, 0x1F0001u, &v0, 0) >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)Handle, 0LL) )
      ZwClose(Handle);
  }
}
