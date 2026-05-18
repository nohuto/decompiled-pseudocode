/*
 * XREFs of sub_1801069C8 @ 0x1801069C8
 * Callers:
 *     sub_180106518 @ 0x180106518 (sub_180106518.c)
 *     sub_18010783C @ 0x18010783C (sub_18010783C.c)
 * Callees:
 *     sub_180106754 @ 0x180106754 (sub_180106754.c)
 *     sub_1801070A0 @ 0x1801070A0 (sub_1801070A0.c)
 *     sub_180107200 @ 0x180107200 (sub_180107200.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

unsigned __int8 __fastcall sub_1801069C8(
        float *a1,
        float *a2,
        float *a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8)
{
  float *v9; // r9
  unsigned __int8 result; // al
  float *v11; // rbx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int128 v15; // xmm6
  size_t v16; // rdi
  __int128 v17; // xmm6

  if ( a2 != a3 )
  {
    v9 = a3;
    result = a8;
    v11 = a1;
    if ( a1 != a2 )
    {
      while ( *v11 <= *a2 )
      {
        v11 += 4;
        --a4;
        if ( v11 == a2 )
          return result;
      }
      do
      {
        v13 = (__int64)v9;
        v14 = a5;
        v9 -= 4;
        --a5;
        if ( a2 == v9 )
        {
          v17 = *(_OWORD *)a2;
          result = (unsigned __int8)memmove((char *)v9 - ((char *)a2 - (char *)v11) + 16, v11, (char *)a2 - (char *)v11);
          *(_OWORD *)v11 = v17;
          return result;
        }
      }
      while ( *(a2 - 4) <= *v9 );
      if ( a4 == 1 )
      {
        v15 = *(_OWORD *)v11;
        v16 = v13 - (_QWORD)a2;
        result = (unsigned __int8)memmove(v11, a2, v16);
        *(_OWORD *)((char *)v11 + v16) = v15;
      }
      else if ( a4 > v14 || a4 > a7 )
      {
        if ( v14 > a7 )
          return sub_180106754(v11, (__int64)a2, v13, a4, v14, a6, a7, a8);
        else
          return sub_180107200(v11);
      }
      else
      {
        return sub_1801070A0(v11, a2, v13, a6, a8);
      }
    }
  }
  return result;
}
