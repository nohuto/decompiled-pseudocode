/*
 * XREFs of _snwprintf @ 0x14019FA10
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1401A2C60 (_flsbuf.c)
 *     _woutput_l @ 0x1401A2C70 (_woutput_l.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

int snwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, ...)
{
  int v6; // edi
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-38h] BYREF
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, Format);
  memset(&File, 0, sizeof(File));
  if ( Format && (!Count || Dest) )
  {
    File._flag = 66;
    File._base = (char *)Dest;
    File._ptr = (char *)Dest;
    if ( Count <= 0x3FFFFFFF )
      File._cnt = 2 * Count;
    else
      File._cnt = 0x7FFFFFFF;
    v6 = woutput_l(&File, Format, 0LL, (__int64 *)va);
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
    return v6;
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
