/*
 * XREFs of ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801868B0
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180048830 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180186E70 (-IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800833E4 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  struct D2D_RECT_F v19; // [rsp+20h] [rbp-68h] BYREF

  v2 = (float *)((char *)this + 56);
  v3 = _mm_cvtsi32_si128(*((_DWORD *)a2 + 21));
  v5 = _mm_cvtsi32_si128(*((_DWORD *)a2 + 22));
  v6 = (float)*((int *)a2 + 19);
  v7 = (float)*((int *)a2 + 20);
  v19.left = v6;
  v19.top = v7;
  LODWORD(v8) = _mm_cvtepi32_ps(v3).m128_u32[0];
  LODWORD(v9) = _mm_cvtepi32_ps(v5).m128_u32[0];
  v19.right = v8;
  v19.bottom = v9;
  IsEquivalentTo = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v19, (float *)this + 14);
  if ( !IsEquivalentTo
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 16) + 88LL))(*(_QWORD *)(v11 + 16)) == 1 )
  {
    v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v6 - *v2)) & _xmm);
    if ( v12 > 0.00390625
      || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 - *((float *)this + 16))) & _xmm), v13 > 0.00390625)
      || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v7 - *((float *)this + 15))
                                                          - (float)(*((float *)this + 17) - v9))) & _xmm),
          v14 > 1.0) )
    {
      v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v7 - *((float *)this + 15))) & _xmm);
      if ( v15 <= 0.00390625 )
      {
        v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v9 - *((float *)this + 17))) & _xmm);
        if ( v16 <= 0.00390625 )
        {
          v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v6 - *v2) - (float)(*((float *)this + 16) - v8))) & _xmm);
          if ( v17 <= 1.0 )
            return 1;
        }
      }
    }
    else
    {
      return 1;
    }
  }
  return IsEquivalentTo;
}
