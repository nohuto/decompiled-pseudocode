/*
 * XREFs of sprintf @ 0x140196AB0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1401767E0 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1401983F0 (_flsbuf.c)
 *     _output_l @ 0x140198E54 (_output_l.c)
 */

int sprintf(char *Dest, const char *Format, ...)
{
  int v2; // eax
  bool v3; // sf
  int v4; // ebx
  FILE File; // [rsp+30h] [rbp-38h] BYREF
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format && Dest )
  {
    File._base = Dest;
    File._ptr = Dest;
    File._cnt = 0x7FFFFFFF;
    File._flag = 66;
    v2 = output_l(&File, Format, 0LL, (__int64 *)va);
    v3 = --File._cnt < 0;
    v4 = v2;
    if ( v3 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
    return v4;
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
