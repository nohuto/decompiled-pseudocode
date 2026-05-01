/*
 * XREFs of ?GetDrawTextRectForCenteredGlyph@GDIHelpers@@YA?AUCRect@Geometry@@PEAUHDC__@@GAEBU23@@Z @ 0x1803F2C80
 * Callers:
 *     ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z @ 0x1803F2F5C (-RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

_DWORD *__fastcall GDIHelpers::GetDrawTextRectForCenteredGlyph(_DWORD *a1, HDC a2, __int64 a3, __int64 a4)
{
  float v7; // xmm1_4
  float v8; // xmm3_4
  _GLYPHMETRICS gm; // [rsp+40h] [rbp-138h] BYREF
  _OUTLINETEXTMETRICW potm; // [rsp+60h] [rbp-118h] BYREF

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  if ( GetOutlineTextMetricsW(a2, 0xE8u, &potm)
    && GetGlyphOutlineW(
         a2,
         0xE784u,
         0,
         &gm,
         0,
         0LL,
         &`GDIHelpers::GetDrawTextRectForCenteredGlyph'::`2'::identityMatrix) )
  {
    v7 = (float)(int)gm.gmBlackBoxY * 0.5;
    v8 = (float)((float)(*(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4)) * 0.5) + (float)*(int *)(a4 + 4);
    *(_OWORD *)a1 = *(_OWORD *)a4;
    a1[1] = (int)(float)((float)((float)(v8 - v7) + (float)gm.gmptGlyphOrigin.y) - (float)potm.otmTextMetrics.tmAscent);
  }
  return a1;
}
