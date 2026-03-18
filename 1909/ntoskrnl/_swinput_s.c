/*
 * XREFs of _swinput_s @ 0x1401A96D4
 * Callers:
 *     _snwscanf_s @ 0x1401A5CD0 (_snwscanf_s.c)
 *     swscanf_s @ 0x1401A6B50 (swscanf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177740 (xHalTimerWatchdogStop.c)
 *     _winput_s @ 0x1401A97D0 (_winput_s.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall swinput_s(char *a1, unsigned __int64 a2, __int64 a3)
{
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  memset(&File, 0, sizeof(File));
  if ( a1 && a3 && a2 <= 0x3FFFFFFF )
  {
    File._flag = 73;
    File._cnt = 2 * a2;
    File._base = a1;
    File._ptr = a1;
    return winput_s(&File);
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
