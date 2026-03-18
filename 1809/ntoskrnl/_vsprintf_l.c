/*
 * XREFs of _vsprintf_l @ 0x1401975A4
 * Callers:
 *     vsprintf @ 0x140197620 (vsprintf.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1401767E0 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1401983F0 (_flsbuf.c)
 *     _output_l @ 0x140198E54 (_output_l.c)
 */

int __cdecl vsprintf_l(char *DstBuf, const char *Format, _locale_t a3, va_list ArgList)
{
  int v4; // eax
  bool v5; // sf
  int v6; // ebx
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( Format && DstBuf )
  {
    File._base = DstBuf;
    File._ptr = DstBuf;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v4 = output_l(&File, Format, a3, ArgList);
    v5 = --File._cnt < 0;
    v6 = v4;
    if ( v5 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v6;
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
