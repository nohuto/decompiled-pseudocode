/*
 * XREFs of swprintf @ 0x1401A0640
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177740 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1401A3380 (_flsbuf.c)
 *     _woutput_l @ 0x1401A3390 (_woutput_l.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

int swprintf(wchar_t *a1, const wchar_t *a2, ...)
{
  int v4; // eax
  bool v5; // sf
  int v6; // ebx
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-30h] BYREF
  va_list va; // [rsp+90h] [rbp+30h] BYREF

  va_start(va, a2);
  memset(&File, 0, sizeof(File));
  if ( a2 && a1 )
  {
    File._flag = 66;
    File._base = (char *)a1;
    File._ptr = (char *)a1;
    File._cnt = 0x7FFFFFFF;
    v4 = woutput_l(&File, a2, 0LL, (__int64 *)va);
    v5 = --File._cnt < 0;
    v6 = v4;
    if ( v5 )
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
    return v6;
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
