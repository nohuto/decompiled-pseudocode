/*
 * XREFs of _snwscanf_s @ 0x14019AD20
 * Callers:
 *     SiGetBootDeviceName @ 0x1406AE8C4 (SiGetBootDeviceName.c)
 *     SiGetBiosSystemDisk @ 0x140704448 (SiGetBiosSystemDisk.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1401767E0 (xHalTimerWatchdogStop.c)
 *     _swinput_s @ 0x14019E6B8 (_swinput_s.c)
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
