/*
 * XREFs of ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18016BA38
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18016C05C (-IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AB5C8 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall COverlayContext::IsFullscreen(
        COverlayContext *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  float *v2; // rsi
  __m128i v3; // xmm9
  __m128i v5; // xmm7
  float v6; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm7_4
  char IsEquivalentTo; // bl
  __int64 v11; // r10
  int v12; // eax
  char v13; // cl
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  struct D2D_RECT_F v21; // [rsp+20h] [rbp-68h] BYREF

  v2 = (float *)((char *)this + 56);
  v3 = _mm_cvtsi32_si128(*((_DWORD *)a2 + 21));
  v5 = _mm_cvtsi32_si128(*((_DWORD *)a2 + 22));
  v6 = (float)*((int *)a2 + 19);
  v7 = (float)*((int *)a2 + 20);
  v21.left = v6;
  v21.top = v7;
  LODWORD(v8) = _mm_cvtepi32_ps(v3).m128_u32[0];
  LODWORD(v9) = _mm_cvtepi32_ps(v5).m128_u32[0];
  v21.right = v8;
  v21.bottom = v9;
  IsEquivalentTo = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v21, (float *)this + 14);
  if ( !IsEquivalentTo )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 16) + 88LL))(*(_QWORD *)(v11 + 16));
    v13 = 1;
    if ( v12 == 1 )
    {
      v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v6 - *v2)) & _xmm);
      if ( v14 <= 0.00390625 )
      {
        v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 - *((float *)this + 16))) & _xmm);
        if ( v15 <= 0.00390625 )
        {
          v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v7 - *((float *)this + 15))
                                                          - (float)(*((float *)this + 17) - v9))) & _xmm);
          if ( v16 <= 1.0 )
            return v13;
        }
      }
      v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v7 - *((float *)this + 15))) & _xmm);
      if ( v17 <= 0.00390625 )
      {
        v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v9 - *((float *)this + 17))) & _xmm);
        if ( v18 <= 0.00390625 )
        {
          v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v6 - *v2) - (float)(*((float *)this + 16) - v8))) & _xmm);
          if ( v19 > 1.0 )
            return 0;
          return v13;
        }
      }
    }
  }
  return IsEquivalentTo;
}
