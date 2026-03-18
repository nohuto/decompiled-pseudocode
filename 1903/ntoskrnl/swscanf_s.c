/*
 * XREFs of swscanf_s @ 0x1401A6430
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1405C8BC0 (ExProcessorCounterSetCallback.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140865D60 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14086BD98 (PiDevCfgSplitDriverConfigurationId.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x1401A8FB4 (_swinput_s.c)
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
