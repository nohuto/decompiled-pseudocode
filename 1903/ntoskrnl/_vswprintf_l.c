/*
 * XREFs of _vswprintf_l @ 0x1401A000C
 * Callers:
 *     _vswprintf @ 0x14019FFF0 (_vswprintf.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1401A2C60 (_flsbuf.c)
 *     _woutput_l @ 0x1401A2C70 (_woutput_l.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall vswprintf_l(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // eax
  bool v9; // sf
  unsigned int v10; // ebx
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  memset(&File, 0, sizeof(File));
  if ( a2 && a1 )
  {
    File._flag = 66;
    File._base = a1;
    File._ptr = a1;
    File._cnt = 0x7FFFFFFF;
    v8 = woutput_l(&File, a2, a3, a4);
    v9 = --File._cnt < 0;
    v10 = v8;
    if ( v9 )
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
    return v10;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
