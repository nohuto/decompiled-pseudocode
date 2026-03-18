/*
 * XREFs of _sinput_s @ 0x1401A923C
 * Callers:
 *     _snscanf_s @ 0x1401A5BB0 (_snscanf_s.c)
 *     sscanf_s @ 0x1401A6650 (sscanf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177740 (xHalTimerWatchdogStop.c)
 *     _input_s @ 0x1401A88CC (_input_s.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall sinput_s(char *a1, unsigned __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  memset(&File, 0, sizeof(File));
  if ( a1 && a3 && a2 <= 0x7FFFFFFF )
  {
    File._flag = 73;
    File._base = a1;
    File._ptr = a1;
    File._cnt = a2;
    return input_s(&File, a3, a4);
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
