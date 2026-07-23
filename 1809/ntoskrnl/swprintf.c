/*
 * XREFs of swprintf @ 0x1401958F0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x140198550 (_flsbuf.c)
 *     _woutput_l @ 0x140198560 (_woutput_l.c)
 */

int swprintf(wchar_t *a1, const wchar_t *a2, ...)
{
  int v2; // eax
  bool v3; // sf
  int v4; // ebx
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-38h] BYREF
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a2);
  if ( a2 && a1 )
  {
    File._base = (char *)a1;
    File._ptr = (char *)a1;
    File._flag = 66;
    File._cnt = 0x7FFFFFFF;
    v2 = woutput_l(&File, a2, 0LL, (__int64 *)va);
    v3 = --File._cnt < 0;
    v4 = v2;
    if ( v3 )
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
    return v4;
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
