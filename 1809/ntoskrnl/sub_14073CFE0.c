/*
 * XREFs of sub_14073CFE0 @ 0x14073CFE0
 * Callers:
 *     ExInitLicenseData @ 0x1409C53A0 (ExInitLicenseData.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     BCryptOpenAlgorithmProvider @ 0x14073D270 (BCryptOpenAlgorithmProvider.c)
 *     TraceLoggingRegister @ 0x140808B6C (TraceLoggingRegister.c)
 */

__int64 sub_14073CFE0()
{
  NTSTATUS v0; // ebx

  memset(&dword_140440AD0, 0, 0x40uLL);
  dword_140440AD4 = 0;
  dword_140440AD8 = 0;
  qword_140440AE0 = 0LL;
  qword_140440AF8 = 0LL;
  qword_140440AF0 = (__int64)sub_1406B07A0;
  dword_140440B00 = 54;
  dword_140440AD0 = 8;
  dword_140440AE8 = 10;
  v0 = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA256", 0LL, 0);
  if ( v0 >= 0 )
    TraceLoggingRegister(&stru_140401C88);
  return (unsigned int)v0;
}
