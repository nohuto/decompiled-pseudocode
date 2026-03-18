/*
 * XREFs of _swoutput_s @ 0x1401A7358
 * Callers:
 *     vswprintf_s @ 0x1401A4C00 (vswprintf_s.c)
 *     _vsnwprintf_s @ 0x1401A5500 (_vsnwprintf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1401A2C60 (_flsbuf.c)
 *     _woutput_s @ 0x1401A7488 (_woutput_s.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall swoutput_s(char *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // esi
  char *ptr; // rax
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  memset(&File, 0, sizeof(File));
  if ( a2 )
  {
    if ( a2 == -1LL )
    {
      File._cnt = 0x7FFFFFFF;
      goto LABEL_6;
    }
    if ( a2 <= 0x3FFFFFFF )
    {
      File._cnt = 2 * a2;
LABEL_6:
      File._base = a1;
      File._ptr = a1;
      File._flag = 66;
      v8 = woutput_s(&File, a3, a4);
      *(_WORD *)&a1[2 * a2 - 2] = 0;
      v9 = v8;
      if ( v8 < 0 )
      {
        if ( File._cnt >= 0 )
        {
          if ( a1 )
            *(_WORD *)a1 = 0;
          return v9;
        }
        return 4294967294LL;
      }
      if ( --File._cnt < 0 )
      {
        if ( flsbuf(0, &File) == -1 )
          return 4294967294LL;
        ptr = File._ptr;
      }
      else
      {
        *File._ptr = 0;
        ptr = ++File._ptr;
      }
      if ( --File._cnt >= 0 )
      {
        *ptr = 0;
        return v9;
      }
      if ( flsbuf(0, &File) != -1 )
        return v9;
      return 4294967294LL;
    }
  }
  xHalTimerWatchdogStop();
  return 0xFFFFFFFFLL;
}
