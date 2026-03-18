/*
 * XREFs of _snscanf_s @ 0x1401A5490
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
 *     _sinput_s @ 0x1401A8B1C (_sinput_s.c)
 */

int snscanf_s(const char *Src, size_t MaxCount, const char *Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return sinput_s(Src, MaxCount, Format, (__int64 *)va);
  xHalTimerWatchdogStop();
  return -1;
}
