/*
 * XREFs of _swoutput_s @ 0x18009D554
 * Callers:
 *     _vsnwprintf_s @ 0x18009A820 (_vsnwprintf_s.c)
 *     vswprintf_s @ 0x18009B780 (vswprintf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     _flsbuf @ 0x180096490 (_flsbuf.c)
 *     _woutput_s @ 0x18009D674 (_woutput_s.c)
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
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
