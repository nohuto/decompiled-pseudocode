/*
 * XREFs of sub_1800F9440 @ 0x1800F9440
 * Callers:
 *     sub_1801119E0 @ 0x1801119E0 (sub_1801119E0.c)
 * Callees:
 *     sub_1800CC090 @ 0x1800CC090 (sub_1800CC090.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

char __fastcall sub_1800F9440(_QWORD *a1, float a2, float a3, float a4, char a5, int a6)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __m128 v16; // [rsp+28h] [rbp-69h] BYREF
  __int128 v17; // [rsp+38h] [rbp-59h]
  __int128 v18; // [rsp+48h] [rbp-49h]
  __int128 v19; // [rsp+58h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-29h]

  v7 = a1[6];
  v8 = *(_QWORD *)(v7 + 112);
  v16 = *(__m128 *)v8;
  v17 = *(_OWORD *)(v8 + 16);
  v18 = *(_OWORD *)(v8 + 32);
  v19 = *(_OWORD *)(v8 + 48);
  v20 = *(_QWORD *)(v8 + 64);
  if ( _mm_shuffle_ps(v16, v16, 255).m128_f32[0] != a2
    || *((float *)&v17 + 1) != a3
    || *(float *)&v17 != a4
    || BYTE8(v17) != a5
    || HIDWORD(v20) != a6 )
  {
    v16.m128_f32[3] = a2;
    *(_QWORD *)&v17 = __PAIR64__(LODWORD(a3), LODWORD(a4));
    BYTE8(v17) = a5;
    HIDWORD(v20) = a6;
    LOBYTE(v8) = sub_1800CC090(v7, (__int64)&v16, 0LL);
    v9 = a1[8];
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 112);
      v16 = *(__m128 *)v10;
      v17 = *(_OWORD *)(v10 + 16);
      v18 = *(_OWORD *)(v10 + 32);
      v19 = *(_OWORD *)(v10 + 48);
      LODWORD(v20) = *(_QWORD *)(v10 + 64);
      HIDWORD(v20) = a6;
      v16.m128_f32[3] = a2;
      *(_QWORD *)&v17 = __PAIR64__(LODWORD(a3), LODWORD(a4));
      BYTE8(v17) = a5;
      LOBYTE(v8) = sub_1800CC090(v9, (__int64)&v16, 0LL);
    }
    v11 = a1[10];
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 112);
      v16 = *(__m128 *)v12;
      v17 = *(_OWORD *)(v12 + 16);
      v18 = *(_OWORD *)(v12 + 32);
      v19 = *(_OWORD *)(v12 + 48);
      LODWORD(v20) = *(_QWORD *)(v12 + 64);
      HIDWORD(v20) = a6;
      v16.m128_f32[3] = a2;
      *(_QWORD *)&v17 = __PAIR64__(LODWORD(a3), LODWORD(a4));
      BYTE8(v17) = a5;
      LOBYTE(v8) = sub_1800CC090(v11, (__int64)&v16, 0LL);
    }
    v13 = a1[12];
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 112);
      v16 = *(__m128 *)v14;
      v17 = *(_OWORD *)(v14 + 16);
      v18 = *(_OWORD *)(v14 + 32);
      v19 = *(_OWORD *)(v14 + 48);
      LODWORD(v20) = *(_QWORD *)(v14 + 64);
      HIDWORD(v20) = a6;
      v16.m128_f32[3] = a2;
      *(_QWORD *)&v17 = __PAIR64__(LODWORD(a3), LODWORD(a4));
      BYTE8(v17) = a5;
      LOBYTE(v8) = sub_1800CC090(v13, (__int64)&v16, 0LL);
    }
  }
  return v8;
}
