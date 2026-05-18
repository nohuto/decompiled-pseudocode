/*
 * XREFs of sub_180106754 @ 0x180106754
 * Callers:
 *     sub_1801069C8 @ 0x1801069C8 (sub_1801069C8.c)
 * Callees:
 *     sub_180106518 @ 0x180106518 (sub_180106518.c)
 */

__int64 __fastcall sub_180106754(
        float *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8)
{
  __int64 v10; // rdi
  float *v11; // r8
  __int64 v12; // rdx
  float *v14; // r10
  __int64 v15; // rdx

  if ( a4 > a5 )
  {
    v14 = a1;
    v15 = (a2 - (__int64)a1) >> 4;
    while ( v15 > 0 )
    {
      if ( v14[4 * (v15 >> 1)] <= *(float *)(a2 + 16 * (a5 >> 1)) )
      {
        v14 += 4 * (v15 >> 1) + 4;
        v15 += -1 - (v15 >> 1);
      }
      else
      {
        v15 >>= 1;
      }
    }
    return sub_180106518(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             v14,
             a2 + 16 * (a5 >> 1),
             ((char *)v14 - (char *)a1) >> 4,
             a5 >> 1);
  }
  else
  {
    v10 = a2;
    v11 = &a1[4 * (a4 >> 1)];
    v12 = (a3 - a2) >> 4;
    while ( v12 > 0 )
    {
      if ( *v11 <= *(float *)(v10 + 16 * (v12 >> 1)) )
      {
        v12 >>= 1;
      }
      else
      {
        v10 += 16 * (v12 >> 1) + 16;
        v12 += -1 - (v12 >> 1);
      }
    }
    return sub_180106518(a1, a2, a3, a4, a5, a6, a7, a8, v11, v10, a4 >> 1, (v10 - a2) >> 4);
  }
}
