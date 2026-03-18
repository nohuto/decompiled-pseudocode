/*
 * XREFs of _vsprintf_l @ 0x1401A1DC4
 * Callers:
 *     vsprintf @ 0x1401A1E90 (vsprintf.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1401A2C60 (_flsbuf.c)
 *     _output_l @ 0x1401A36D8 (_output_l.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

int __cdecl vsprintf_l(char *DstBuf, const char *Format, _locale_t a3, va_list ArgList)
{
  int v8; // eax
  bool v9; // sf
  int v10; // ebx
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  memset(&File, 0, sizeof(File));
  if ( Format && DstBuf )
  {
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    File._base = DstBuf;
    File._ptr = DstBuf;
    v8 = output_l(&File, Format, a3, ArgList);
    v9 = --File._cnt < 0;
    v10 = v8;
    if ( v9 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v10;
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
