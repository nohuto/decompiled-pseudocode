/*
 * XREFs of sub_140754220 @ 0x140754220
 * Callers:
 *     ExInitLicenseData @ 0x140A0D9CC (ExInitLicenseData.c)
 * Callees:
 *     BCryptOpenAlgorithmProvider @ 0x140754498 (BCryptOpenAlgorithmProvider.c)
 */

NTSTATUS sub_140754220()
{
  qword_14046B868 = 10LL;
  qword_14046B858 = 0LL;
  qword_14046B884 = 0LL;
  dword_14046B88C = 0;
  qword_14046B860 = 0LL;
  qword_14046B878 = 0LL;
  dword_14046B880 = 54;
  qword_14046B850 = 8LL;
  qword_14046B870 = (__int64)sub_1406D19B0;
  return BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)((char *)&qword_14046B884 + 4), L"SHA256", 0LL, 0);
}
