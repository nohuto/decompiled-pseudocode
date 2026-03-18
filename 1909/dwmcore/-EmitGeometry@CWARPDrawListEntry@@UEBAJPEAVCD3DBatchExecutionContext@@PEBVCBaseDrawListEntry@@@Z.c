/*
 * XREFs of ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1801B93A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x180051138 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsCloseRealOneMatrixEpsilon@@YA_NM@Z @ 0x1800DAD5C (-IsCloseRealOneMatrixEpsilon@@YA_NM@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ApplyEdgeFlags @ 0x1801B91D8 (ApplyEdgeFlags.c)
 *     ?BlendModeToWarpBlendMode@@YA?AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z @ 0x1801B9298 (-BlendModeToWarpBlendMode@@YA-AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z.c)
 *     ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x1801B99F8 (-ExtendModeToWarpAddressMode@@YA-AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::EmitGeometry(
        const __m128i *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  __m128 v3; // xmm2
  __int32 v5; // xmm7_4
  __int32 v6; // xmm8_4
  __int32 v7; // xmm9_4
  __int32 v8; // xmm10_4
  struct CD3DBatchExecutionContext *v9; // rdi
  __m128 v10; // xmm11
  __m128 v11; // xmm12
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
  float v24; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm2_4
  float v27; // xmm2_4
  unsigned int v28; // r12d
  _BYTE *v29; // r11
  char *v30; // rsi
  _BYTE *v31; // r15
  __m128i *v32; // r13
  __int64 v33; // rdi
  const struct D2D1::Matrix3x2F *v34; // r8
  __int128 v35; // xmm0
  unsigned __int64 v36; // xmm1_8
  __int128 *v37; // r9
  __int64 v38; // r10
  _BYTE *v39; // r11
  BOOL v40; // eax
  int v41; // eax
  __int128 v42; // xmm0
  int v43; // edx
  int v44; // eax
  unsigned int v45; // edx
  unsigned int v46; // ebx
  int v47; // ecx
  bool v48; // zf
  signed int v49; // eax
  __int64 v50; // rcx
  __m128 v52; // [rsp+38h] [rbp-D0h]
  __int128 *v53; // [rsp+38h] [rbp-D0h]
  _BYTE *v54; // [rsp+48h] [rbp-C0h]
  _QWORD v55[4]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v56; // [rsp+70h] [rbp-98h]
  int v57; // [rsp+88h] [rbp-80h] BYREF
  __int128 *v58; // [rsp+90h] [rbp-78h]
  int v59; // [rsp+98h] [rbp-70h]
  int v60; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v61; // [rsp+A0h] [rbp-68h]
  __int128 *v62; // [rsp+A8h] [rbp-60h]
  __int128 *v63; // [rsp+B0h] [rbp-58h]
  __int128 v64; // [rsp+B8h] [rbp-50h]
  struct CD3DBatchExecutionContext *v65; // [rsp+C8h] [rbp-40h]
  char v66[4]; // [rsp+D8h] [rbp-30h] BYREF
  char v67; // [rsp+DCh] [rbp-2Ch] BYREF
  __int128 v68; // [rsp+158h] [rbp+50h] BYREF
  __m128i v69; // [rsp+168h] [rbp+60h] BYREF
  __int128 v70; // [rsp+180h] [rbp+78h] BYREF
  __int128 v71; // [rsp+190h] [rbp+88h]
  __int32 v72; // [rsp+1A0h] [rbp+98h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v74; // [rsp+1C0h] [rbp+B8h] BYREF
  __int128 v75; // [rsp+1D0h] [rbp+C8h] BYREF
  __int128 v76; // [rsp+1E0h] [rbp+D8h]
  __int32 v77; // [rsp+1F0h] [rbp+E8h]
  _BYTE v78[48]; // [rsp+1F8h] [rbp+F0h] BYREF

  v3 = (__m128)_mm_loadu_si128(this + 1);
  v59 = 0;
  v5 = this[-5].m128i_i32[0];
  v6 = this[-5].m128i_i32[1];
  v7 = this[-4].m128i_i32[0];
  v8 = this[-4].m128i_i32[1];
  v9 = a2;
  v10 = (__m128)this[-2].m128i_u32[0];
  v11 = (__m128)this[-2].m128i_u32[1];
  v64 = 0LL;
  DWORD1(v68) = _mm_shuffle_ps(v3, v3, 85).m128_u32[0];
  LODWORD(v68) = v3.m128_i32[0];
  DWORD2(v68) = _mm_shuffle_ps(v3, v3, 170).m128_u32[0];
  HIDWORD(v68) = _mm_shuffle_ps(v3, v3, 255).m128_u32[0];
  v65 = a2;
  *(_QWORD *)&v75 = __PAIR64__(v6, v5);
  v74 = v68;
  v57 = 26;
  DWORD2(v75) = this[-5].m128i_i32[3];
  DWORD1(v76) = this[-4].m128i_i32[3];
  v12 = this[-2].m128i_i32[3];
  v13 = this[2].m128i_i32[1];
  v77 = v12;
  v72 = v12;
  v58 = &v74;
  v14 = (v13 & 3) << 6;
  v63 = &v70;
  HIDWORD(v75) = v7;
  LODWORD(v76) = v8;
  *((_QWORD *)&v76 + 1) = __PAIR64__(v11.m128_u32[0], v10.m128_u32[0]);
  v60 = 0;
  v62 = 0LL;
  v61 = v14 | 0xF00;
  v70 = v75;
  v71 = v76;
  if ( v14 )
  {
    v15 = (D2DMatrixHelper *)this[2].m128i_u32[0];
    if ( (_DWORD)v15 != 50529027 )
    {
      v69.m128i_i64[0] = __PAIR64__(v6, v5);
      v69.m128i_i64[1] = __PAIR64__(v8, v7);
      *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps(v10, v11).m128_u64[0];
      v16 = this[1];
      *(__m128i *)&matrix.m11 = v69;
      v69 = v16;
      ApplyEdgeFlags((D2DMatrixHelper *)&v69, v15, &matrix, (float *)&v74);
      v69.m128i_i64[0] = __PAIR64__(v6, v5);
      v69.m128i_i64[1] = __PAIR64__(v8, v7);
      v63 = 0LL;
      *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps(v10, v11).m128_u64[0];
      *(__m128i *)&matrix.m11 = v69;
      D2D1InvertMatrix(&matrix);
    }
  }
  `vector constructor iterator'(v66, 64LL, 2LL, (void (__fastcall *)(char *))WarpTextureState::WarpTextureState);
  v17 = *(float *)&this[-6].m128i_i32[3];
  v18 = &this[8].m128i_i64[1];
  v19 = (__int8 *)v69.m128i_i64[0];
  v20 = v17 * *(float *)&this[2].m128i_i32[2];
  if ( this[3].m128i_i64[1] )
    v19 = &this[3].m128i_i8[8];
  *(float *)&v21 = *(float *)&this[-6].m128i_i32[3] * *(float *)&this[2].m128i_i32[3];
  v22 = this[3].m128i_i64[1] != 0;
  v69.m128i_i64[0] = (__int64)v19;
  v52.m128_u64[1] = __PAIR64__(v17 * *(float *)&this[3].m128i_i32[1], v17 * *(float *)this[3].m128i_i32);
  v52.m128_u64[0] = __PAIR64__(v21, LODWORD(v20));
  *(float *)&v68 = v20;
  HIDWORD(v68) = _mm_shuffle_ps(v52, v52, 255).m128_u32[0];
  DWORD1(v68) = _mm_shuffle_ps(v52, v52, 85).m128_u32[0];
  DWORD2(v68) = _mm_shuffle_ps(v52, v52, 170).m128_u32[0];
  if ( *v18 )
  {
    v23 = v22++;
    v69.m128i_i64[v23] = (__int64)v18;
  }
  if ( v22 && this[-1].m128i_i8[4] < 0 )
  {
    if ( IsCloseRealOneMatrixEpsilon(COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v70) & _xmm)) )
    {
      if ( v24 <= 0.0 )
        LODWORD(v70) = -1082130432;
      else
        LODWORD(v70) = 1065353216;
    }
    else
    {
      v25 = *((float *)&v70 + 1);
      if ( IsCloseRealOneMatrixEpsilon(COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v70 + 1)) & _xmm)) )
      {
        DWORD1(v70) = 1065353216;
        if ( v25 <= 0.0 )
          DWORD1(v70) = -1082130432;
      }
    }
    v26 = *(float *)&v71;
    if ( IsCloseRealOneMatrixEpsilon(COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v71) & _xmm)) )
    {
      if ( v26 <= 0.0 )
        LODWORD(v71) = -1082130432;
      else
        LODWORD(v71) = 1065353216;
    }
    else
    {
      v27 = *((float *)&v70 + 3);
      if ( IsCloseRealOneMatrixEpsilon(COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v70 + 3)) & _xmm)) )
      {
        HIDWORD(v70) = 1065353216;
        if ( v27 <= 0.0 )
          HIDWORD(v70) = -1082130432;
      }
    }
  }
  v28 = 0;
  if ( v22 )
  {
    v53 = &v75;
    v29 = v78;
    v55[0] = &v75;
    v54 = v78;
    v30 = &v67;
    v31 = v78;
    v32 = &v69;
    do
    {
      v33 = v32->m128i_i64[0];
      v34 = (const struct D2D1::Matrix3x2F *)(v32->m128i_i64[0] + 24);
      if ( v63 )
      {
        v35 = *(_OWORD *)v34;
        v36 = _mm_unpacklo_ps(
                (__m128)*(unsigned int *)(v32->m128i_i64[0] + 40),
                (__m128)*(unsigned int *)(v32->m128i_i64[0] + 44)).m128_u64[0];
        *(_OWORD *)v31 = *(_OWORD *)v34;
        *((_QWORD *)v31 + 2) = v36;
        *(_OWORD *)&v55[1] = v35;
      }
      else
      {
        D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v55[1], (const struct D2D1::Matrix3x2F *)&matrix, v34);
        *(_OWORD *)v31 = *(_OWORD *)&v55[1];
        *((_QWORD *)v31 + 2) = v55[3];
      }
      *(_DWORD *)v30 = 0;
      *((_DWORD *)v30 - 1) = v28;
      *(_QWORD *)(v30 + 4) = v29;
      *((_DWORD *)v30 + 12) = ExtendModeToWarpAddressMode(v33 + 64);
      *((_DWORD *)v30 + 13) = ExtendModeToWarpAddressMode(v33 + 68);
      v40 = *(_DWORD *)(v33 + 72) != 0;
      *((_DWORD *)v30 + 8) = 0;
      *((_DWORD *)v30 + 11) = v40;
      *((_DWORD *)v30 + 9) = v33 == (_QWORD)this + 56;
      *((_DWORD *)v30 + 10) = v33 == (_QWORD)this + 136;
      if ( (unsigned __int64 *)v33 == &this[3].m128i_u64[1] )
      {
        if ( CDrawListBitmap::IsOpaque((CDrawListBitmap *)v33) )
        {
          if ( *((float *)&v68 + 3) == 1.0 )
            v41 = 1;
          else
            v41 = 3;
        }
        else
        {
          v41 = 2;
        }
        v38 = v55[0];
        v39 = v54;
        *((_DWORD *)v30 + 7) = v41;
        v37 = v53;
      }
      else if ( (unsigned __int64 *)v33 == &this[8].m128i_u64[1] )
      {
        *((_DWORD *)v30 + 7) = 4;
      }
      if ( *(_BYTE *)(v33 + 76) )
      {
        v42 = *(_OWORD *)(v33 + 48);
        *(_QWORD *)(v30 + 20) = v38;
        v56 = v42;
        *v37 = v42;
      }
      v29 = v39 + 24;
      v54 = v29;
      ++v28;
      v55[0] = v38 + 16;
      v32 = (__m128i *)((char *)v32 + 8);
      v53 = v37 + 1;
      v31 += 24;
      v30 += 64;
    }
    while ( v28 < v22 );
    v9 = v65;
  }
  v43 = this[-6].m128i_i32[2];
  v62 = &v68;
  *(_QWORD *)&v64 = v66;
  v44 = BlendModeToWarpBlendMode(v43);
  v46 = v61 & 0xFFFFFFC3 | (4 * (v22 | 0x3C0));
  v60 = v44;
  v61 = v46;
  if ( v45 <= 0x14 && (v47 = 1179728, _bittest(&v47, v45)) )
    v48 = this[13].m128i_i8[8] == 0;
  else
    v48 = v45 == 22;
  if ( v48 )
    v61 = v46 & 0xFFFFF7FF;
  if ( !v45 && (this[-1].m128i_i8[4] & 1) != 0 )
  {
    if ( *(float *)&this[-6].m128i_i32[3] >= 0.99999988 )
      v44 = 0;
    v60 = v44;
  }
  v49 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v9 + 3) + 24LL))(*((_QWORD *)v9 + 3), &v57);
  if ( v49 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x188u, 0LL);
  ++dword_180339968;
  return 0LL;
}
