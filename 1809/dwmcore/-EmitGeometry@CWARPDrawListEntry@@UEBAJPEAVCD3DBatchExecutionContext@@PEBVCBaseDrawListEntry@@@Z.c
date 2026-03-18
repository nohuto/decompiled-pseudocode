/*
 * XREFs of ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x180186140
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18006AAA0 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ApplyEdgeFlags @ 0x180185F68 (ApplyEdgeFlags.c)
 *     ?BlendModeToWarpBlendMode@@YA?AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z @ 0x180186028 (-BlendModeToWarpBlendMode@@YA-AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z.c)
 *     ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x1801866A4 (-ExtendModeToWarpAddressMode@@YA-AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::EmitGeometry(
        const __m128i *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  __m128 v3; // xmm2
  __int32 v5; // xmm6_4
  __int32 v6; // xmm7_4
  __int32 v7; // xmm8_4
  struct CD3DBatchExecutionContext *v8; // rsi
  __int32 v9; // xmm9_4
  __m128 v10; // xmm10
  __m128 v11; // xmm11
  __int32 v12; // xmm0_4
  __int32 v13; // ecx
  int v14; // ecx
  D2DMatrixHelper *v15; // rdx
  __m128i v16; // xmm1
  float v17; // xmm3_4
  __int64 *v18; // rcx
  __int8 *v19; // rax
  float v20; // xmm2_4
  unsigned int v21; // xmm1_4
  unsigned int v22; // ebx
  __int64 v23; // rax
  unsigned int v24; // r15d
  _BYTE *v25; // r11
  char *v26; // r14
  _BYTE *v27; // r12
  __m128i *v28; // r13
  __int64 v29; // rsi
  const struct D2D1::Matrix3x2F *v30; // r8
  __int128 v31; // xmm0
  unsigned __int64 v32; // xmm1_8
  __int128 *v33; // r9
  __int64 v34; // r10
  _BYTE *v35; // r11
  BOOL v36; // eax
  int v37; // eax
  __int128 v38; // xmm0
  int v39; // edx
  int v40; // eax
  int v41; // edx
  unsigned int v42; // ebx
  bool v43; // zf
  int v44; // eax
  __int64 v45; // rcx
  __m128 v47; // [rsp+38h] [rbp-D0h]
  __int128 *v48; // [rsp+38h] [rbp-D0h]
  _BYTE *v49; // [rsp+48h] [rbp-C0h]
  _QWORD v50[4]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v51; // [rsp+70h] [rbp-98h]
  int v52; // [rsp+88h] [rbp-80h] BYREF
  __int128 *v53; // [rsp+90h] [rbp-78h]
  int v54; // [rsp+98h] [rbp-70h]
  int v55; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v56; // [rsp+A0h] [rbp-68h]
  __int128 *v57; // [rsp+A8h] [rbp-60h]
  _OWORD *v58; // [rsp+B0h] [rbp-58h]
  __int128 v59; // [rsp+B8h] [rbp-50h]
  struct CD3DBatchExecutionContext *v60; // [rsp+C8h] [rbp-40h]
  char v61[4]; // [rsp+D8h] [rbp-30h] BYREF
  char v62; // [rsp+DCh] [rbp-2Ch] BYREF
  __int128 v63; // [rsp+158h] [rbp+50h] BYREF
  __m128i v64; // [rsp+168h] [rbp+60h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+180h] [rbp+78h] BYREF
  __int128 v66; // [rsp+198h] [rbp+90h] BYREF
  _OWORD v67[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int32 v68; // [rsp+1C8h] [rbp+C0h]
  __int128 v69; // [rsp+1D0h] [rbp+C8h] BYREF
  __int128 v70; // [rsp+1E0h] [rbp+D8h]
  __int32 v71; // [rsp+1F0h] [rbp+E8h]
  _BYTE v72[48]; // [rsp+1F8h] [rbp+F0h] BYREF

  v3 = (__m128)_mm_loadu_si128(this + 1);
  v5 = this[-5].m128i_i32[0];
  v6 = this[-5].m128i_i32[1];
  v7 = this[-4].m128i_i32[0];
  v8 = a2;
  v9 = this[-4].m128i_i32[1];
  v10 = (__m128)this[-2].m128i_u32[0];
  v11 = (__m128)this[-2].m128i_u32[1];
  v54 = 0;
  v59 = 0LL;
  DWORD1(v63) = _mm_shuffle_ps(v3, v3, 85).m128_u32[0];
  LODWORD(v63) = v3.m128_i32[0];
  DWORD2(v63) = _mm_shuffle_ps(v3, v3, 170).m128_u32[0];
  HIDWORD(v63) = _mm_shuffle_ps(v3, v3, 255).m128_u32[0];
  v60 = a2;
  *(_QWORD *)&v69 = __PAIR64__(v6, v5);
  v66 = v63;
  v52 = 26;
  DWORD2(v69) = this[-5].m128i_i32[3];
  DWORD1(v70) = this[-4].m128i_i32[3];
  v12 = this[-2].m128i_i32[3];
  v13 = this[2].m128i_i32[1];
  v71 = v12;
  v68 = v12;
  v53 = &v66;
  v14 = (v13 & 3) << 6;
  v58 = v67;
  HIDWORD(v69) = v7;
  LODWORD(v70) = v9;
  *((_QWORD *)&v70 + 1) = __PAIR64__(v11.m128_u32[0], v10.m128_u32[0]);
  v55 = 0;
  v57 = 0LL;
  v56 = v14 | 0xF00;
  v67[0] = v69;
  v67[1] = v70;
  if ( v14 )
  {
    v15 = (D2DMatrixHelper *)this[2].m128i_u32[0];
    if ( (_DWORD)v15 != 50529027 )
    {
      v64.m128i_i64[0] = __PAIR64__(v6, v5);
      v64.m128i_i64[1] = __PAIR64__(v9, v7);
      *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps(v10, v11).m128_u64[0];
      v16 = this[1];
      *(__m128i *)&matrix.m11 = v64;
      v64 = v16;
      ApplyEdgeFlags((D2DMatrixHelper *)&v64, v15, &matrix, (float *)&v66);
      v64.m128i_i64[0] = __PAIR64__(v6, v5);
      v64.m128i_i64[1] = __PAIR64__(v9, v7);
      v58 = 0LL;
      *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps(v10, v11).m128_u64[0];
      *(__m128i *)&matrix.m11 = v64;
      D2D1InvertMatrix(&matrix);
    }
  }
  `vector constructor iterator'(v61, 64LL, 2LL, (void (__fastcall *)(char *))WarpTextureState::WarpTextureState);
  v17 = *(float *)&this[-6].m128i_i32[3];
  v18 = &this[8].m128i_i64[1];
  v19 = (__int8 *)v64.m128i_i64[0];
  v20 = v17 * *(float *)&this[2].m128i_i32[2];
  if ( this[3].m128i_i64[1] )
    v19 = &this[3].m128i_i8[8];
  *(float *)&v21 = *(float *)&this[-6].m128i_i32[3] * *(float *)&this[2].m128i_i32[3];
  v22 = this[3].m128i_i64[1] != 0;
  v64.m128i_i64[0] = (__int64)v19;
  v47.m128_u64[1] = __PAIR64__(v17 * *(float *)&this[3].m128i_i32[1], v17 * *(float *)this[3].m128i_i32);
  v47.m128_u64[0] = __PAIR64__(v21, LODWORD(v20));
  *(float *)&v63 = v20;
  HIDWORD(v63) = _mm_shuffle_ps(v47, v47, 255).m128_u32[0];
  DWORD1(v63) = _mm_shuffle_ps(v47, v47, 85).m128_u32[0];
  DWORD2(v63) = _mm_shuffle_ps(v47, v47, 170).m128_u32[0];
  if ( *v18 )
  {
    v23 = v22++;
    v64.m128i_i64[v23] = (__int64)v18;
  }
  v24 = 0;
  if ( v22 )
  {
    v48 = &v69;
    v25 = v72;
    v50[0] = &v69;
    v49 = v72;
    v26 = &v62;
    v27 = v72;
    v28 = &v64;
    do
    {
      v29 = v28->m128i_i64[0];
      v30 = (const struct D2D1::Matrix3x2F *)(v28->m128i_i64[0] + 24);
      if ( v58 )
      {
        v31 = *(_OWORD *)v30;
        v32 = _mm_unpacklo_ps(
                (__m128)*(unsigned int *)(v28->m128i_i64[0] + 40),
                (__m128)*(unsigned int *)(v28->m128i_i64[0] + 44)).m128_u64[0];
        *(_OWORD *)v27 = *(_OWORD *)v30;
        *((_QWORD *)v27 + 2) = v32;
        *(_OWORD *)&v50[1] = v31;
      }
      else
      {
        D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v50[1], (const struct D2D1::Matrix3x2F *)&matrix, v30);
        *(_OWORD *)v27 = *(_OWORD *)&v50[1];
        *((_QWORD *)v27 + 2) = v50[3];
      }
      *(_DWORD *)v26 = 0;
      *((_DWORD *)v26 - 1) = v24;
      *(_QWORD *)(v26 + 4) = v25;
      *((_DWORD *)v26 + 12) = ExtendModeToWarpAddressMode(v29 + 64);
      *((_DWORD *)v26 + 13) = ExtendModeToWarpAddressMode(v29 + 68);
      v36 = *(_DWORD *)(v29 + 72) != 0;
      *((_DWORD *)v26 + 8) = 0;
      *((_DWORD *)v26 + 11) = v36;
      *((_DWORD *)v26 + 9) = v29 == (_QWORD)this + 56;
      *((_DWORD *)v26 + 10) = v29 == (_QWORD)this + 136;
      if ( (unsigned __int64 *)v29 == &this[3].m128i_u64[1] )
      {
        if ( CDrawListBitmap::IsOpaque((CDrawListBitmap *)v29) )
        {
          if ( *((float *)&v63 + 3) == 1.0 )
            v37 = 1;
          else
            v37 = 3;
        }
        else
        {
          v37 = 2;
        }
        v34 = v50[0];
        v35 = v49;
        *((_DWORD *)v26 + 7) = v37;
        v33 = v48;
      }
      else if ( (unsigned __int64 *)v29 == &this[8].m128i_u64[1] )
      {
        *((_DWORD *)v26 + 7) = 4;
      }
      if ( *(_BYTE *)(v29 + 76) )
      {
        v38 = *(_OWORD *)(v29 + 48);
        *(_QWORD *)(v26 + 20) = v34;
        v51 = v38;
        *v33 = v38;
      }
      v25 = v35 + 24;
      v49 = v25;
      ++v24;
      v50[0] = v34 + 16;
      v28 = (__m128i *)((char *)v28 + 8);
      v48 = v33 + 1;
      v27 += 24;
      v26 += 64;
    }
    while ( v24 < v22 );
    v8 = v60;
  }
  v39 = this[-6].m128i_i32[2];
  v57 = &v63;
  *(_QWORD *)&v59 = v61;
  v40 = BlendModeToWarpBlendMode(v39);
  v42 = v56 & 0xFFFFFFC3 | (4 * (v22 | 0x3C0));
  v55 = v40;
  v56 = v42;
  if ( v41 == 4 || v41 == 6 || v41 == 17 || v41 == 20 )
    v43 = this[13].m128i_i8[8] == 0;
  else
    v43 = v41 == 22;
  if ( v43 )
    v56 = v42 & 0xFFFFF7FF;
  if ( !v41 && (this[-1].m128i_i8[4] & 1) != 0 )
  {
    if ( *(float *)&this[-6].m128i_i32[3] >= 0.99999988 )
      v40 = 0;
    v55 = v40;
  }
  v44 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v8 + 3) + 24LL))(*((_QWORD *)v8 + 3), &v52);
  if ( v44 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x170u);
  ++dword_180308198;
  return 0LL;
}
