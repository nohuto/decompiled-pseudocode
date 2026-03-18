/*
 * XREFs of ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800B1288
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180049A44 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800B1370 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801A9270 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800B130C (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CHwndRenderTarget::DesktopRectToRenderTargetRect(__int64 a1, char a2, __int64 a3, _OWORD *a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 result; // rax
  __int64 v9; // rax
  bool v10; // zf
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 || (v9 = *(_QWORD *)(a1 + 848)) == 0 || (v10 = *(_BYTE *)(v9 + 13439) == 0, v5 = 288LL, v10) )
    v5 = 220LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(v5 + a1), a3, (float *)&v11);
  v6 = PixelAlign(v12, &v11);
  *(_QWORD *)&v11 = *(_QWORD *)v6;
  v7 = *(_DWORD *)(v6 + 8);
  result = *(unsigned int *)(v6 + 12);
  *((_QWORD *)&v11 + 1) = __PAIR64__(result, v7);
  *a4 = v11;
  return result;
}
