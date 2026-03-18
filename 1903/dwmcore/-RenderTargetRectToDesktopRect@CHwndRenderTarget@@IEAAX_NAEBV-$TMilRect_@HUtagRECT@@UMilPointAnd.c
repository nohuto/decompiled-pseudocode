/*
 * XREFs of ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A996C
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180049A44 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A94C4 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800B0530 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

char __fastcall CHwndRenderTarget::RenderTargetRectToDesktopRect(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __m128i v4; // xmm0
  __m128i v6; // xmm1
  __int64 v7; // rax
  __m128i v8; // xmm0
  bool v9; // zf
  __int64 v10; // rax
  char result; // al
  __m128 v12[4]; // [rsp+20h] [rbp-88h] BYREF
  int v13; // [rsp+60h] [rbp-48h]
  _DWORD v14[4]; // [rsp+70h] [rbp-38h] BYREF
  __int128 v15; // [rsp+80h] [rbp-28h] BYREF

  v4 = _mm_cvtsi32_si128(*(_DWORD *)a3);
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
  v13 = 0;
  v7 = *(_QWORD *)(a1 + 848);
  v14[0] = _mm_cvtepi32_ps(v4).m128_u32[0];
  v8 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 8));
  v14[1] = _mm_cvtepi32_ps(v6).m128_u32[0];
  *(float *)v6.m128i_i32 = (float)*(int *)(a3 + 12);
  v14[2] = _mm_cvtepi32_ps(v8).m128_u32[0];
  v14[3] = v6.m128i_i32[0];
  if ( !v7 || (v9 = *(_BYTE *)(v7 + 13439) == 0, v10 = 288LL, v9) )
    v10 = 220LL;
  CMILMatrix::SetToInverse(v12, (const struct CMILMatrix *)(v10 + a1));
  result = CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v12, (__int64)v14, (float *)&v15);
  *a4 = v15;
  return result;
}
