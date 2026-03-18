/*
 * XREFs of BcdInitializeBcdSyncMutant @ 0x140A22584
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateMutant @ 0x1401C16B0 (ZwCreateMutant.c)
 */

int BcdInitializeBcdSyncMutant()
{
  signed __int64 v0; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE MutantHandle; // [rsp+60h] [rbp+10h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
  ObjectAttributes.Length = 48;
  ObjectAttributes.SecurityDescriptor = BiBcdMutantDescriptor;
  ObjectAttributes.Attributes = 592;
  LODWORD(v0) = ZwCreateMutant(&MutantHandle, 0x1F0001u, &ObjectAttributes, 0);
  if ( (int)v0 >= 0 )
  {
    v0 = _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)MutantHandle, 0LL);
    if ( v0 )
      LODWORD(v0) = ZwClose(MutantHandle);
  }
  return v0;
}
