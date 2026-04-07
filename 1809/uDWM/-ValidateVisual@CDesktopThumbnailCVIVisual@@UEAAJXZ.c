/*
 * XREFs of ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x1800AB860
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180013A04 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180022DA0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x1800B254C (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::ValidateVisual(struct CResource **this)
{
  int v2; // eax
  __int64 v3; // r9
  unsigned int v4; // edi
  char v5; // cl
  struct CResource *v6; // r15
  struct CResource *v7; // rdx
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  struct CResource *v12; // rdx
  int v13; // ecx
  int v14; // r13d
  int v15; // r12d
  unsigned __int64 v16; // r8
  __m128i v17; // xmm0
  int v18; // ecx
  double v19; // xmm0_8
  __m128i v20; // xmm2
  int v21; // eax
  double v22; // xmm2_8
  double v23; // xmm4_8
  int v24; // eax
  float v25; // xmm3_4
  float v26; // xmm1_4
  int v27; // eax
  int RectangleGeometry; // eax
  int v30[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v31; // [rsp+40h] [rbp-30h] BYREF
  __int128 v32; // [rsp+50h] [rbp-20h] BYREF

  v2 = CRenderDataVisual::ValidateVisual((CRenderDataVisual *)this);
  v3 = 0LL;
  v4 = v2;
  if ( v2 >= 0 )
  {
    if ( ((_DWORD)this[10] & 0x1000) == 0 )
      return v4;
    if ( *((_BYTE *)this + 337) || (v5 = 1, (*((_DWORD *)this + 85) & 0x100000) != 0) )
      v5 = 0;
    if ( this[35] )
    {
      v6 = this[36];
      if ( v6 )
      {
        v7 = this[39];
        if ( v7 )
        {
          v8 = *((_DWORD *)this + 30);
          *((_QWORD *)&v31 + 1) = __PAIR64__(*((_DWORD *)this + 31), v8);
          *(_QWORD *)&v31 = 0LL;
          *(_OWORD *)v30 = v31;
          v32 = 0uLL;
          if ( v5 )
          {
            v9 = 0;
            LODWORD(v32) = -*((_DWORD *)this + 28);
            DWORD1(v32) = -*((_DWORD *)this + 29);
            if ( *((_DWORD *)v7 + 47) - *((_DWORD *)v7 + 45) >= 0 )
              v9 = *((_DWORD *)v7 + 47) - *((_DWORD *)v7 + 45);
            v10 = *((_DWORD *)v7 + 48) - *((_DWORD *)v7 + 46);
            DWORD2(v32) = v9;
            v11 = 0;
            if ( v10 >= 0 )
              v11 = v10;
            HIDWORD(v32) = v11;
            IntersectRectT<MilPointAndSizeL>(v30, &v32, &v31);
            v3 = 0LL;
          }
          v12 = this[38];
          v13 = *((_DWORD *)this + 82);
          v14 = *((_DWORD *)this + 80);
          v16 = _mm_srli_si128(*(__m128i *)((char *)v12 + 40), 8).m128i_u64[0];
          v17 = _mm_cvtsi32_si128(*((_DWORD *)v12 + 14));
          v32 = *(_OWORD *)((char *)v12 + 40);
          v15 = v32;
          v18 = v13 - v14;
          *(_QWORD *)&v19 = *(_OWORD *)&_mm_cvtepi32_pd(v17);
          v20 = _mm_cvtsi32_si128((int)v16 - (int)v32);
          v21 = 0;
          if ( v18 >= 0 )
            v21 = v18;
          v22 = _mm_cvtepi32_pd(v20).m128d_f64[0];
          v23 = (double)v8 * v22 / ((double)v21 * v19);
          if ( (*((_DWORD *)this + 85) & 0x100000) != 0 )
          {
            if ( *((_BYTE *)this + 338) )
              goto LABEL_26;
            *(_QWORD *)&v31 = 0LL;
            DWORD2(v31) = (int)(v22 / v23);
            HIDWORD(v31) = (int)((double)(HIDWORD(v16) - DWORD1(v32)) / v23);
            IntersectRectT<MilPointAndSizeL>(v30, &v31, v30);
          }
          v24 = *((_DWORD *)this + 81) - DWORD1(v32);
          v25 = (double)(v14 - v15) + (double)v30[0] / v23;
          *(float *)&v31 = v25;
          *((float *)&v31 + 1) = (double)v24 + (double)v30[1] / v23;
          v26 = (double)v30[2] / v23;
          *((float *)&v31 + 2) = v26 + v25;
          *((float *)&v31 + 3) = (float)((double)v30[3] / v23) + *((float *)&v31 + 1);
          v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64))(**((_QWORD **)v6 + 2) + 312LL))(
                  *((_QWORD *)v6 + 2),
                  *((unsigned int *)v6 + 6),
                  &v31,
                  v3);
          v4 = v27;
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x1C4u);
            return v4;
          }
          RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                (unsigned int)v30[0],
                                (unsigned int)v30[1],
                                (unsigned int)v30[2],
                                (unsigned int)v30[3],
                                this + 35);
          v4 = RectangleGeometry;
          if ( RectangleGeometry < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x1C6u);
            return v4;
          }
          *((_BYTE *)this + 338) = 1;
        }
      }
    }
LABEL_26:
    *((_DWORD *)this + 20) &= ~0x1000u;
    return v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x18Fu);
  return v4;
}
