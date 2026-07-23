/*
 * XREFs of _sinput_s @ 0x14019E3B8
 * Callers:
 *     _snscanf_s @ 0x14019AD60 (_snscanf_s.c)
 *     sscanf_s @ 0x14019B800 (sscanf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 *     _input_s @ 0x14019DA48 (_input_s.c)
 */

__int64 __fastcall sinput_s(char *a1, unsigned __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( a1 && a3 && a2 <= 0x7FFFFFFF )
  {
    File._base = a1;
    File._ptr = a1;
    File._cnt = a2;
    File._flag = 73;
    return input_s(&File, a3, a4);
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
