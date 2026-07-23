/*
 * XREFs of vsprintf_s @ 0x14019B7B0
 * Callers:
 *     sprintf_s @ 0x14019B780 (sprintf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 *     _soutput_s @ 0x14019CAD8 (_soutput_s.c)
 */

int __cdecl vsprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, va_list ArgList)
{
  int result; // eax

  if ( !DstBuf || !SizeInBytes || !Format )
    goto LABEL_6;
  result = soutput_s(DstBuf, SizeInBytes, Format, ArgList);
  if ( result >= 0 )
    return result;
  *DstBuf = 0;
  if ( result == -2 )
LABEL_6:
    xHalTimerWatchdogStop();
  return -1;
}
