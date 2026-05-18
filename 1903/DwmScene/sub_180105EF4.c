/*
 * XREFs of sub_180105EF4 @ 0x180105EF4
 * Callers:
 *     sub_18010456C @ 0x18010456C (sub_18010456C.c)
 *     sub_180104894 @ 0x180104894 (sub_180104894.c)
 * Callees:
 *     sub_18010352C @ 0x18010352C (sub_18010352C.c)
 */

unsigned __int64 __fastcall sub_180105EF4(_QWORD *a1, __int64 a2, float **a3)
{
  float v3; // xmm2_4
  float *i; // rax
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  _QWORD *v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int64 result; // rax
  __int64 v12; // r15
  int v13; // edi
  int v14; // ebx

  v3 = 0.0;
  a1[17] = a2;
  a1[18] = a2;
  a1[19] = a2 * a2 * a2;
  for ( i = *a3; i != a3[1]; i += 4 )
  {
    v6 = i[1];
    v7 = fmaxf(*i, v3);
    v8 = i[2];
    v3 = fmaxf(v8, fmaxf(v6, v7));
  }
  v9 = a1 + 14;
  sub_18010352C((__int64)(a1 + 14), a2 * a2 * a2);
  v10 = 0LL;
  result = ((char *)a3[1] - (char *)*a3) >> 4;
  if ( result )
  {
    v12 = 0LL;
    do
    {
      v13 = (int)o_roundf();
      v14 = (int)o_roundf();
      v12 += 16LL;
      *(_DWORD *)(*v9 + 4 * v10++) = (int)o_roundf() | ((v14 | (v13 << 8)) << 8);
      result = ((char *)a3[1] - (char *)*a3) >> 4;
    }
    while ( v10 < result );
  }
  return result;
}
