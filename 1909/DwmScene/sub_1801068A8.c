/*
 * XREFs of sub_1801068A8 @ 0x1801068A8
 * Callers:
 *     sub_180106430 @ 0x180106430 (sub_180106430.c)
 *     sub_18010775C @ 0x18010775C (sub_18010775C.c)
 * Callees:
 *     sub_180106600 @ 0x180106600 (sub_180106600.c)
 *     sub_180107000 @ 0x180107000 (sub_180107000.c)
 *     sub_180107140 @ 0x180107140 (sub_180107140.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

unsigned __int8 __fastcall sub_1801068A8(
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
      while ( *a2 <= *v11 )
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
      while ( *v9 <= *(a2 - 4) );
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
          return sub_180106600(v11, (__int64)a2, v13, a4, v14, a6, a7, a8);
        else
          return sub_180107140(v11);
      }
      else
      {
        return sub_180107000(v11, a2, v13, a6, a8);
      }
    }
  }
  return result;
}
