/*
 * XREFs of _soutput_s @ 0x18009C614
 * Callers:
 *     _vsnprintf_s @ 0x18009A710 (_vsnprintf_s.c)
 *     vsprintf_s @ 0x18009B200 (vsprintf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     _flsbuf @ 0x180096490 (_flsbuf.c)
 *     _output_s @ 0x18009BCA0 (_output_s.c)
 */

__int64 __fastcall soutput_s(char *a1, unsigned __int64 a2, const char *a3, int *a4)
{
  int v6; // eax
  unsigned int v7; // esi
  FILE File; // [rsp+30h] [rbp-38h] BYREF

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
      v6 = output_s((__int64)&File, a3, a4);
      a1[a2 - 1] = 0;
      v7 = v6;
      if ( v6 < 0 )
      {
        if ( File._cnt >= 0 )
        {
          if ( a1 )
          {
            if ( a2 )
              *a1 = 0;
          }
          return v7;
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
      return v7;
    }
  }
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
