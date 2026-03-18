/*
 * XREFs of sprintf @ 0x1401A12B0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1401A2C60 (_flsbuf.c)
 *     _output_l @ 0x1401A36D8 (_output_l.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

int sprintf(char *Dest, const char *Format, ...)
{
  int v4; // eax
  bool v5; // sf
  int v6; // ebx
  FILE File; // [rsp+30h] [rbp-30h] BYREF
  va_list va; // [rsp+90h] [rbp+30h] BYREF

  va_start(va, Format);
  memset(&File, 0, sizeof(File));
  if ( Format && Dest )
  {
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    File._base = Dest;
    File._ptr = Dest;
    v4 = output_l(&File, Format, 0LL, (__int64 *)va);
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
