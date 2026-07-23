/*
 * XREFs of _snwscanf_s @ 0x14019AE80
 * Callers:
 *     SiGetBootDeviceName @ 0x1406AFB44 (SiGetBootDeviceName.c)
 *     SiGetBiosSystemDisk @ 0x1407056C8 (SiGetBiosSystemDisk.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x14019E818 (_swinput_s.c)
 */

int snwscanf_s(const wchar_t *Src, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return swinput_s(Src, MaxCount, Format, (__int64 *)va);
  xHalTimerWatchdogStop();
  return -1;
}
