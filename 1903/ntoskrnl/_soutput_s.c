/*
 * XREFs of _soutput_s @ 0x1401A71EC
 * Callers:
 *     _vsnprintf_s @ 0x1401A53F0 (_vsnprintf_s.c)
 *     vsprintf_s @ 0x1401A5EE0 (vsprintf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
 *     _flsbuf @ 0x1401A2C60 (_flsbuf.c)
 *     _output_s @ 0x1401A68E8 (_output_s.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall soutput_s(char *a1, unsigned __int64 a2, char *a3, int *a4)
{
  int v8; // eax
  unsigned int v9; // esi
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  memset(&File, 0, sizeof(File));
  if ( a2 )
  {
    if ( a2 == -1LL )
    {
      File._cnt = 0x7FFFFFFF;
      goto LABEL_6;
    }
    if ( a2 <= 0x7FFFFFFF )
    {
      File._cnt = a2;
LABEL_6:
      File._base = a1;
      File._ptr = a1;
      File._flag = 66;
      v8 = output_s(&File, a3, a4);
      a1[a2 - 1] = 0;
      v9 = v8;
      if ( v8 < 0 )
      {
        if ( File._cnt >= 0 )
        {
          if ( a1 )
            *a1 = 0;
          return v9;
        }
        return 4294967294LL;
      }
      if ( --File._cnt < 0 )
      {
        if ( flsbuf(0, &File) == -1 )
          return 4294967294LL;
      }
      else
      {
        *File._ptr = 0;
      }
      return v9;
    }
  }
  xHalTimerWatchdogStop();
  return 0xFFFFFFFFLL;
}
