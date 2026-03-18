/*
 * XREFs of _snprintf @ 0x14019F950
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1401A2C60 (_flsbuf.c)
 *     _output_l @ 0x1401A36D8 (_output_l.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

int snprintf(char *Dest, size_t Count, const char *Format, ...)
{
  int v6; // ebx
  FILE File; // [rsp+30h] [rbp-38h] BYREF
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, Format);
  memset(&File, 0, sizeof(File));
  if ( Format && (!Count || Dest) )
  {
    File._flag = 66;
    File._base = Dest;
    File._ptr = Dest;
    if ( Count > 0x7FFFFFFF )
      LODWORD(Count) = 0x7FFFFFFF;
    File._cnt = Count;
    v6 = output_l(&File, Format, 0LL, (__int64 *)va);
    if ( Dest )
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
