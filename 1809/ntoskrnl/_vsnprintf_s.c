/*
 * XREFs of _vsnprintf_s @ 0x14019ACC0
 * Callers:
 *     _snprintf_s @ 0x14019AC90 (_snprintf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 *     _soutput_s @ 0x14019CAD8 (_soutput_s.c)
 */

int __cdecl vsnprintf_s(char *DstBuf, size_t SizeInBytes, size_t MaxCount, const char *Format, va_list ArgList)
{
  int result; // eax

  if ( !Format )
    goto LABEL_12;
  if ( MaxCount )
  {
    if ( !DstBuf )
    {
LABEL_12:
      xHalTimerWatchdogStop();
      return -1;
    }
  }
  else if ( !DstBuf )
  {
    if ( !SizeInBytes )
      return 0;
    goto LABEL_12;
  }
  if ( !SizeInBytes )
    goto LABEL_12;
  if ( SizeInBytes > MaxCount )
  {
    result = soutput_s(DstBuf, MaxCount + 1, Format, ArgList);
    if ( result == -2 )
      return -1;
    goto LABEL_10;
  }
  result = soutput_s(DstBuf, SizeInBytes, Format, ArgList);
  if ( result != -2 )
  {
LABEL_10:
    if ( result >= 0 )
      return result;
    goto LABEL_11;
  }
  if ( MaxCount == -1LL )
    return -1;
LABEL_11:
  *DstBuf = 0;
  if ( result == -2 )
    goto LABEL_12;
  return -1;
}
