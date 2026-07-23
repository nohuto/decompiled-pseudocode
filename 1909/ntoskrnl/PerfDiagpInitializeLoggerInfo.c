/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x14071FA78
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14071F830 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407897EC (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&OutputBuffer, 0, 0xB0uLL);
  dword_140432ED8 = -2130771792;
  dword_140432EBC = 0x20000;
  wcscpy(&xmmword_140432E6C, L"PerfDiag Logger");
  RtlInitUnicodeString(&DestinationString, &xmmword_140432E6C);
  OutputBuffer = 180;
  dword_140432F40 = 1;
  if ( a1 )
  {
    word_140432F46 = 1;
    word_140432F44 = a2 + 1;
    HIWORD(dword_140432F40) = 1;
    LOWORD(dword_140432F40) = a2 + 2;
    OutputBuffer = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
