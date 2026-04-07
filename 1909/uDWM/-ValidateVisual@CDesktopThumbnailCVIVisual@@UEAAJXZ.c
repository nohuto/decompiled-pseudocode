/*
 * XREFs of ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x1800AF840
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000E300 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001F3C8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x1800B84F0 (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::ValidateVisual(struct CRectangleGeometryProxy **this)
{
  int RectangleGeometry; // edi
  __int64 v3; // rdx
  char v5; // cl
  struct CRectangleGeometryProxy *v6; // r14
  struct CRectangleGeometryProxy *v7; // rdx
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  float v11; // ecx
  __m128i *v12; // rdx
  int v13; // ecx
  int v14; // r12d
  __int32 v15; // r15d
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
  int v27[4]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h] BYREF
  float v29; // [rsp+48h] [rbp-28h]
  float v30; // [rsp+4Ch] [rbp-24h]
  __m128i v31; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  RectangleGeometry = CRenderDataVisual::ValidateVisual((CRenderDataVisual *)this);
  if ( RectangleGeometry < 0 )
  {
    v3 = 390LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)RectangleGeometry);
    return (unsigned int)RectangleGeometry;
  }
  if ( ((_DWORD)this[10] & 0x1000) != 0 )
  {
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
          v31.m128i_i64[1] = __PAIR64__(*((_DWORD *)this + 31), v8);
          v31.m128i_i64[0] = 0LL;
          *(__m128i *)v27 = v31;
          if ( v5 )
          {
            *(float *)&v9 = 0.0;
            LODWORD(v28) = -*((_DWORD *)this + 28);
            HIDWORD(v28) = -*((_DWORD *)this + 29);
            if ( *((_DWORD *)v7 + 47) - *((_DWORD *)v7 + 45) >= 0 )
              v9 = *((_DWORD *)v7 + 47) - *((_DWORD *)v7 + 45);
            v10 = *((_DWORD *)v7 + 48) - *((_DWORD *)v7 + 46);
            v29 = *(float *)&v9;
            v11 = 0.0;
            if ( v10 >= 0 )
              v11 = *(float *)&v10;
            v30 = v11;
            IntersectRectT<MilPointAndSizeL>(v27, &v28, &v31);
          }
          v12 = (__m128i *)this[38];
          v13 = *((_DWORD *)this + 82);
          v14 = *((_DWORD *)this + 80);
          v16 = _mm_srli_si128(v12[2], 8).m128i_u64[0];
          v17 = _mm_cvtsi32_si128(v12[3].m128i_u32[0]);
          v31 = v12[2];
          v15 = v31.m128i_i32[0];
          v18 = v13 - v14;
          *(_QWORD *)&v19 = *(_OWORD *)&_mm_cvtepi32_pd(v17);
          v20 = _mm_cvtsi32_si128((int)v16 - v31.m128i_i32[0]);
          v21 = 0;
          if ( v18 >= 0 )
            v21 = v18;
          v22 = _mm_cvtepi32_pd(v20).m128d_f64[0];
          v23 = (double)v8 * v22 / ((double)v21 * v19);
          if ( (*((_DWORD *)this + 85) & 0x100000) == 0 )
            goto LABEL_22;
          if ( !*((_BYTE *)this + 338) )
          {
            v28 = 0LL;
            LODWORD(v29) = (int)(v22 / v23);
            LODWORD(v30) = (int)((double)(HIDWORD(v16) - v31.m128i_i32[1]) / v23);
            IntersectRectT<MilPointAndSizeL>(v27, &v28, v27);
LABEL_22:
            v24 = *((_DWORD *)this + 81) - v31.m128i_i32[1];
            v25 = (double)(v14 - v15) + (double)v27[0] / v23;
            *(float *)&v28 = v25;
            *((float *)&v28 + 1) = (double)v24 + (double)v27[1] / v23;
            v26 = (double)v27[2] / v23;
            v29 = v26 + v25;
            v30 = (float)((double)v27[3] / v23) + *((float *)&v28 + 1);
            RectangleGeometry = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)v6 + 2) + 320LL))(
                                  *((_QWORD *)v6 + 2),
                                  *((unsigned int *)v6 + 6),
                                  &v28);
            if ( RectangleGeometry < 0 )
            {
              v3 = 443LL;
              goto LABEL_3;
            }
            RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v27[0], v27[1], v27[2], v27[3], this + 35);
            if ( RectangleGeometry < 0 )
            {
              v3 = 445LL;
              goto LABEL_3;
            }
            *((_BYTE *)this + 338) = 1;
          }
        }
      }
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  return 0LL;
}
