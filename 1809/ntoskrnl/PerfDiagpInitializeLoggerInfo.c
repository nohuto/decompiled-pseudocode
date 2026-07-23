/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x140744054
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140743CB0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140743F48 (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&OutputBuffer, 0, 0xB0uLL);
  dword_14040B898 = -2130771792;
  wcscpy(&xmmword_14040B80C, L"Circular Kernel Context Logger");
  dword_14040B87C = 0x20000;
  RtlInitUnicodeString(&DestinationString, &xmmword_14040B80C);
  OutputBuffer = 180;
  dword_14040B900 = 1;
  if ( a1 )
  {
    word_14040B906 = 1;
    word_14040B904 = a2 + 1;
    HIWORD(dword_14040B900) = 1;
    LOWORD(dword_14040B900) = a2 + 2;
    OutputBuffer = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
