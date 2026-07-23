/*
 * XREFs of _swoutput_s @ 0x14019CC24
 * Callers:
 *     vswprintf_s @ 0x14019A4D0 (vswprintf_s.c)
 *     _vsnwprintf_s @ 0x14019ADD0 (_vsnwprintf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x140198550 (_flsbuf.c)
 *     _woutput_s @ 0x14019CD44 (_woutput_s.c)
 */

__int64 __fastcall swoutput_s(char *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  unsigned int v7; // esi
  char *ptr; // rax
  FILE File; // [rsp+30h] [rbp-30h] BYREF

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
      v6 = woutput_s(&File, a3, a4);
      *(_WORD *)&a1[2 * a2 - 2] = 0;
      v7 = v6;
      if ( v6 < 0 )
      {
        if ( File._cnt >= 0 )
        {
          if ( a1 )
          {
            if ( a2 )
              *(_WORD *)a1 = 0;
          }
          return v7;
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
        return v7;
      }
      if ( flsbuf(0, &File) != -1 )
        return v7;
      return 4294967294LL;
    }
  }
  xHalTimerWatchdogStop();
  return 0xFFFFFFFFLL;
}
