/*
 * XREFs of sub_14073BDF0 @ 0x14073BDF0
 * Callers:
 *     ExInitLicenseData @ 0x1409C43A0 (ExInitLicenseData.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     BCryptOpenAlgorithmProvider @ 0x14073C080 (BCryptOpenAlgorithmProvider.c)
 *     TraceLoggingRegister @ 0x14080796C (TraceLoggingRegister.c)
 */

__int64 sub_14073BDF0()
{
  NTSTATUS v0; // ebx

  memset(&dword_14043FA10, 0, 0x40uLL);
  dword_14043FA14 = 0;
  dword_14043FA18 = 0;
  qword_14043FA20 = 0LL;
  qword_14043FA38 = 0LL;
  qword_14043FA30 = (__int64)sub_1406AF500;
  dword_14043FA40 = 54;
  dword_14043FA10 = 8;
  dword_14043FA28 = 10;
  v0 = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA256", 0LL, 0);
  if ( v0 >= 0 )
    TraceLoggingRegister(&stru_140400C88);
  return (unsigned int)v0;
}
