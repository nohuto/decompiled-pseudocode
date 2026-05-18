/*
 * XREFs of sub_1800D804C @ 0x1800D804C
 * Callers:
 *     sub_1800D7AE0 @ 0x1800D7AE0 (sub_1800D7AE0.c)
 *     sub_1800D81E8 @ 0x1800D81E8 (sub_1800D81E8.c)
 * Callees:
 *     sub_180017CD4 @ 0x180017CD4 (sub_180017CD4.c)
 */

__int64 __fastcall sub_1800D804C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v8; // r13
  __int64 i; // r14
  __int64 v10; // r14
  __int64 v11; // rax
  double v12; // xmm0_8
  double v13; // xmm1_8
  double v14; // xmm0_8
  bool v15; // cf
  bool v16; // zf
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  double v20; // xmm1_8
  __int64 v21; // rdi
  __int64 v22; // rbp
  double v23; // xmm0_8
  double v24; // xmm0_8
  bool v25; // cf
  bool v26; // zf
  _QWORD *v27; // rbx
  _QWORD *v28; // rbx
  __int64 result; // rax

  v5 = (a3 - 1) >> 1;
  v8 = a2;
  for ( i = a2; i < v5; v17[5] = *(_QWORD *)(v18 + 40) )
  {
    v10 = 2 * i;
    v11 = 48 * v10;
    v12 = *(double *)(48 * v10 + a1 + 128);
    v13 = *(double *)(48 * v10 + a1 + 80);
    if ( v12 == v13 )
    {
      v14 = *(double *)(v11 + a1 + 88);
      v15 = v14 < *(double *)(v11 + a1 + 136);
      v16 = v14 == *(double *)(v11 + a1 + 136);
    }
    else
    {
      v15 = v13 < v12;
      v16 = v13 == v12;
    }
    v17 = (_QWORD *)(a1 + 48 * a2);
    i = (v15 | (unsigned __int8)v16) + 1LL + v10;
    v18 = a1 + 48 * i;
    sub_180017CD4(v17, v18);
    a2 = i;
    v17[4] = *(_QWORD *)(v18 + 32);
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    v19 = (_QWORD *)(a1 + 48 * a2);
    sub_180017CD4(v19, 48 * a3 + a1 - 48);
    a2 = a3 - 1;
    v19[4] = *(_QWORD *)(48 * a3 + a1 - 16);
    v19[5] = *(_QWORD *)(48 * a3 + a1 - 8);
  }
  if ( v8 < a2 )
  {
    do
    {
      v20 = *(double *)(a4 + 32);
      v21 = (a2 - 1) >> 1;
      v22 = 48 * v21 + a1;
      v23 = *(double *)(v22 + 32);
      if ( v23 == v20 )
      {
        v24 = *(double *)(a4 + 40);
        v25 = v24 < *(double *)(v22 + 40);
        v26 = v24 == *(double *)(v22 + 40);
      }
      else
      {
        v25 = v20 < v23;
        v26 = v20 == v23;
      }
      if ( v25 || v26 )
        break;
      v27 = (_QWORD *)(a1 + 48 * a2);
      sub_180017CD4(v27, 48 * v21 + a1);
      a2 = v21;
      v27[4] = *(_QWORD *)(v22 + 32);
      v27[5] = *(_QWORD *)(v22 + 40);
    }
    while ( v8 < v21 );
  }
  v28 = (_QWORD *)(a1 + 48 * a2);
  sub_180017CD4(v28, a4);
  v28[4] = *(_QWORD *)(a4 + 32);
  result = *(_QWORD *)(a4 + 40);
  v28[5] = result;
  return result;
}
