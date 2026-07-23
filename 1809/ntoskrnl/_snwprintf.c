/*
 * XREFs of _snwprintf @ 0x1401953F0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x140198550 (_flsbuf.c)
 *     _woutput_l @ 0x140198560 (_woutput_l.c)
 */

int snwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, ...)
{
  int v4; // edi
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-30h] BYREF
  va_list va; // [rsp+98h] [rbp+38h] BYREF

  va_start(va, Format);
  if ( Format && (!Count || Dest) )
  {
    File._flag = 66;
    File._base = (char *)Dest;
    File._ptr = (char *)Dest;
    if ( Count <= 0x3FFFFFFF )
      File._cnt = 2 * Count;
    else
      File._cnt = 0x7FFFFFFF;
    v4 = woutput_l(&File, Format, 0LL, (__int64 *)va);
    if ( Dest )
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
    return v4;
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
