/*
 * XREFs of sub_1801064F0 @ 0x1801064F0
 * Callers:
 *     sub_180106798 @ 0x180106798 (sub_180106798.c)
 * Callees:
 *     sub_180106320 @ 0x180106320 (sub_180106320.c)
 */

__int64 __fastcall sub_1801064F0(
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
  __int64 v11; // rdx
  float *v12; // r8
  __int64 v13; // rdx
  float *v15; // r10
  __int64 v16; // rdx

  if ( a4 > a5 )
  {
    v15 = a1;
    v16 = (a2 - (__int64)a1) >> 4;
    while ( v16 > 0 )
    {
      if ( *(float *)(a2 + 16 * (a5 >> 1)) <= v15[4 * (v16 >> 1)] )
      {
        v15 += 4 * (v16 >> 1) + 4;
        v16 += -1 - (v16 >> 1);
      }
      else
      {
        v16 >>= 1;
      }
    }
    return sub_180106320(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             v15,
             a2 + 16 * (a5 >> 1),
             ((char *)v15 - (char *)a1) >> 4,
             a5 >> 1);
  }
  else
  {
    v10 = a2;
    v11 = a3 - a2;
    v12 = &a1[4 * (a4 >> 1)];
    v13 = v11 >> 4;
    while ( v13 > 0 )
    {
      if ( *(float *)(v10 + 16 * (v13 >> 1)) <= *v12 )
      {
        v13 >>= 1;
      }
      else
      {
        v10 += 16 * (v13 >> 1) + 16;
        v13 += -1 - (v13 >> 1);
      }
    }
    return sub_180106320(a1, a2, a3, a4, a5, a6, a7, a8, v12, v10, a4 >> 1, (v10 - a2) >> 4);
  }
}
