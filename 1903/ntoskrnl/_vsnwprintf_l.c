/*
 * XREFs of _vsnwprintf_l @ 0x14019F33C
 * Callers:
 *     _vsnwprintf @ 0x14019F320 (_vsnwprintf.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1401A2C60 (_flsbuf.c)
 *     _woutput_l @ 0x1401A2C70 (_woutput_l.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

int __cdecl vsnwprintf_l(wchar_t *DstBuf, size_t MaxCount, const wchar_t *Format, _locale_t Locale, va_list ArgList)
{
  int v9; // edi
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  memset(&File, 0, sizeof(File));
  if ( Format && (!MaxCount || DstBuf) )
  {
    File._flag = 66;
    File._base = (char *)DstBuf;
    File._ptr = (char *)DstBuf;
    if ( MaxCount <= 0x3FFFFFFF )
      File._cnt = 2 * MaxCount;
    else
      File._cnt = 0x7FFFFFFF;
    v9 = woutput_l(&File, Format, Locale, ArgList);
    if ( DstBuf )
    {
      if ( --File._cnt < 0 )
      {
        flsbuf(0, &File);
        ptr = File._ptr;
      }
      else
      {
        *File._ptr = 0;
        ptr = ++File._ptr;
      }
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *ptr = 0;
    }
    return v9;
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
