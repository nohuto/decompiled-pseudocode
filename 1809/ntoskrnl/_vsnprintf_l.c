/*
 * XREFs of _vsnprintf_l @ 0x140194E7C
 * Callers:
 *     _vsnprintf @ 0x140194E60 (_vsnprintf.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x140198550 (_flsbuf.c)
 *     _output_l @ 0x140198FB4 (_output_l.c)
 */

int __cdecl vsnprintf_l(char *DstBuf, size_t MaxCount, const char *Format, _locale_t Locale, va_list ArgList)
{
  int v6; // edi
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( Format && (!MaxCount || DstBuf) )
  {
    File._flag = 66;
    File._base = DstBuf;
    if ( MaxCount > 0x7FFFFFFF )
      LODWORD(MaxCount) = 0x7FFFFFFF;
    File._ptr = DstBuf;
    File._cnt = MaxCount;
    v6 = output_l(&File, Format, Locale, ArgList);
    if ( DstBuf )
    {
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *File._ptr = 0;
    }
    return v6;
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
