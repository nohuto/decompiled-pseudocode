/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x140742E84
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140742AE0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140742D78 (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(dword_14040A7D0, 0, 0xB0uLL);
  dword_14040A818 = -2130771792;
  wcscpy(&xmmword_14040A78C, L"Circular Kernel Context Logger");
  dword_14040A7FC = 0x20000;
  RtlInitUnicodeString(&DestinationString, &xmmword_14040A78C);
  dword_14040A7D0[0] = 180;
  dword_14040A880 = 1;
  if ( a1 )
  {
    word_14040A886 = 1;
    word_14040A884 = a2 + 1;
    HIWORD(dword_14040A880) = 1;
    LOWORD(dword_14040A880) = a2 + 2;
    dword_14040A7D0[0] = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
