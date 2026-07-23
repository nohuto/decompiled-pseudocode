/*
 * XREFs of ExpGetNtProductTypeFromLicenseValue @ 0x140757474
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x1409D6738 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     NtQueryLicenseValue @ 0x1405A0F90 (NtQueryLicenseValue.c)
 */

char __fastcall ExpGetNtProductTypeFromLicenseValue(__int64 a1)
{
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  __int64 Type; // [rsp+50h] [rbp+8h] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp+10h] BYREF
  unsigned int Data; // [rsp+60h] [rbp+18h] BYREF

  Type = a1;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, L"Kernel-ProductType");
  if ( NtQueryLicenseValue(&ValueName, (PULONG)&Type, &Data, 4u, &ResultDataSize) < 0
    || (_DWORD)Type != 4
    || ResultDataSize != 4
    || !Data
    || Data > 3 )
  {
    return 0;
  }
  MEMORY[0xFFFFF78000000264] = Data;
  return 1;
}
