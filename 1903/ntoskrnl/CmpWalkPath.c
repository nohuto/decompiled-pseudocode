/*
 * XREFs of CmpWalkPath @ 0x1407655B0
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x140837104 (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A13344 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140A1378C (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x1407655F8 (CmpWalkUnicodeStringPath.c)
 */

__int64 __fastcall CmpWalkPath(__int64 a1, unsigned int a2, const WCHAR *a3)
{
  UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v6.Length = 0LL;
  v6.Buffer = 0LL;
  RtlInitUnicodeString(&v6, a3);
  return CmpWalkUnicodeStringPath(a1, a2, &v6);
}
