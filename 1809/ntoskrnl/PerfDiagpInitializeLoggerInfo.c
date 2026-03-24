/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x140742E64
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140742AC0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140742D58 (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D1880 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(dword_14040A7B0, 0, 0xB0uLL);
  dword_14040A7F8 = -2130771792;
  wcscpy(&xmmword_14040A76C, L"Circular Kernel Context Logger");
  dword_14040A7DC = 0x20000;
  RtlInitUnicodeString(&DestinationString, &xmmword_14040A76C);
  dword_14040A7B0[0] = 180;
  dword_14040A860 = 1;
  if ( a1 )
  {
    word_14040A866 = 1;
    word_14040A864 = a2 + 1;
    HIWORD(dword_14040A860) = 1;
    LOWORD(dword_14040A860) = a2 + 2;
    dword_14040A7B0[0] = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
