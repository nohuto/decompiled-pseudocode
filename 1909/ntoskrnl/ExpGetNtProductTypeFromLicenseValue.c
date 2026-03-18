/*
 * XREFs of ExpGetNtProductTypeFromLicenseValue @ 0x14075FE14
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A0A8D8 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     NtQueryLicenseValue @ 0x1406A1820 (NtQueryLicenseValue.c)
 */

char __fastcall ExpGetNtProductTypeFromLicenseValue(__int64 a1)
{
  UNICODE_STRING v2; // [rsp+30h] [rbp-18h] BYREF
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+60h] [rbp+18h] BYREF

  v3 = a1;
  *(_QWORD *)&v2.Length = 0LL;
  v2.Buffer = 0LL;
  RtlInitUnicodeString(&v2, L"Kernel-ProductType");
  if ( (int)NtQueryLicenseValue((unsigned __int64)&v2, &v3, &v5, 4u, &v4) < 0
    || (_DWORD)v3 != 4
    || v4 != 4
    || !v5
    || v5 > 3 )
  {
    return 0;
  }
  MEMORY[0xFFFFF78000000264] = v5;
  return 1;
}
