/*
 * XREFs of sub_140754CB0 @ 0x140754CB0
 * Callers:
 *     ExInitLicenseData @ 0x140A0E14C (ExInitLicenseData.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x140754F28 (BCryptOpenAlgorithmProvider.c)
 */

NTSTATUS sub_140754CB0()
{
  qword_14046B5A8 = 10LL;
  qword_14046B598 = 0LL;
  qword_14046B5C4 = 0LL;
  dword_14046B5CC = 0;
  qword_14046B5A0 = 0LL;
  qword_14046B5B8 = 0LL;
  dword_14046B5C0 = 54;
  qword_14046B590 = 8LL;
  qword_14046B5B0 = (__int64)sub_1406D0C20;
  return BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_14046B5C4 + 4), L"SHA256", 0LL, 0);
}
