/*
 * XREFs of sub_180117E44 @ 0x180117E44
 * Callers:
 *     sub_180116BE8 @ 0x180116BE8 (sub_180116BE8.c)
 *     sub_18011735C @ 0x18011735C (sub_18011735C.c)
 * Callees:
 *     sub_180081F80 @ 0x180081F80 (sub_180081F80.c)
 *     sub_180081FFC @ 0x180081FFC (sub_180081FFC.c)
 *     sub_180083320 @ 0x180083320 (sub_180083320.c)
 *     sub_18008351C @ 0x18008351C (sub_18008351C.c)
 *     sub_1800C20F0 @ 0x1800C20F0 (sub_1800C20F0.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

void __fastcall sub_180117E44(__m128 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r12
  __m128 *v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r15
  int v12; // eax
  unsigned __int64 v13; // xmm0_8
  int v14; // eax
  unsigned __int64 v15; // xmm0_8
  int v16; // eax
  double v17; // xmm0_8
  unsigned __int64 *v18; // rax
  int v19; // xmm1_4
  unsigned __int64 *v20; // rax
  float v21; // xmm0_4
  int v22[3]; // [rsp+20h] [rbp-59h] BYREF
  int v23[3]; // [rsp+2Ch] [rbp-4Dh] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-41h] BYREF
  int v25; // [rsp+40h] [rbp-39h]
  unsigned __int64 v26; // [rsp+48h] [rbp-31h] BYREF
  int v27; // [rsp+50h] [rbp-29h]
  _DWORD v28[4]; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-11h] BYREF
  int v30; // [rsp+70h] [rbp-9h]

  if ( a2 )
  {
    v6 = &a1->m128_u64[1];
    v7 = a4;
    v8 = a2;
    v9 = a1;
    v10 = a3 - a4;
    v11 = a5 - a4;
    do
    {
      v12 = *(_DWORD *)(v10 + v7 + 8);
      v26 = *(_QWORD *)(v10 + v7);
      v13 = *(_QWORD *)v7;
      v27 = v12;
      v14 = *(_DWORD *)(v7 + 8);
      v24 = v13;
      v15 = *(_QWORD *)(v11 + v7);
      v25 = v14;
      v16 = *(_DWORD *)(v11 + v7 + 8);
      v29 = v15;
      v30 = v16;
      *(_QWORD *)&v17 = sub_18008351C(&v26, &v24).m128_u64[0];
      v18 = (unsigned __int64 *)sub_180081F80(v22, &v26, v17);
      sub_180081FFC(v28, &v24, v18);
      v19 = v28[1];
      *((_DWORD *)v6 - 2) = v28[0];
      *(_DWORD *)v6 = v28[2];
      *((_DWORD *)v6 - 1) = v19;
      sub_1800C20F0(v9);
      v20 = (unsigned __int64 *)sub_180083320(&v26, v23, &v24);
      if ( sub_18008351C(v20, &v29).m128_f32[0] >= 0.0 )
        v21 = 1.0;
      else
        v21 = -1.0;
      if ( a6 )
        v21 = -v21;
      *((float *)v6 + 1) = v21;
      ++v9;
      v6 += 2;
      v7 += 12LL;
      --v8;
    }
    while ( v8 );
  }
}
