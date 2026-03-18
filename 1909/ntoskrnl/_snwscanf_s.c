/*
 * XREFs of _snwscanf_s @ 0x1401A5CD0
 * Callers:
 *     SiGetBootDeviceName @ 0x1406D2754 (SiGetBootDeviceName.c)
 *     SiGetBiosSystemDisk @ 0x14072CA18 (SiGetBiosSystemDisk.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177740 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x1401A96D4 (_swinput_s.c)
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
