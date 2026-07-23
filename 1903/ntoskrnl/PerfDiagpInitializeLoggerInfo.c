/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x14071DBE8
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14071D9A0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14078748C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&OutputBuffer, 0, 0xB0uLL);
  dword_140432F38 = -2130771792;
  dword_140432F1C = 0x20000;
  wcscpy(&xmmword_140432ECC, L"PerfDiag Logger");
  RtlInitUnicodeString(&DestinationString, &xmmword_140432ECC);
  OutputBuffer = 180;
  dword_140432FA0 = 1;
  if ( a1 )
  {
    word_140432FA6 = 1;
    word_140432FA4 = a2 + 1;
    HIWORD(dword_140432FA0) = 1;
    LOWORD(dword_140432FA0) = a2 + 2;
    OutputBuffer = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
