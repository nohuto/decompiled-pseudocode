/*
 * XREFs of swscanf_s @ 0x1401A6B50
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1405C90C0 (ExProcessorCounterSetCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140865460 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14086B498 (PiDevCfgSplitDriverConfigurationId.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177740 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x1401A96D4 (_swinput_s.c)
 */

int swscanf_s(const wchar_t *Src, const wchar_t *Format, ...)
{
  __int64 v4; // rdx
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Src[v4] );
    return swinput_s(Src, v4, Format, va);
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
