/*
 * XREFs of ?SetSurfaceContentRect@CSurfaceBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C240
 * Callers:
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x18007C1B8 (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801F0054 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007C35C (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CSurfaceBrush::SetSurfaceContentRect(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rbx
  __int64 result; // rax
  __int64 v4; // r10
  _OWORD *v5; // r11
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64); // rax

  v2 = (_OWORD *)(a1 + 136);
  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a2, a1 + 136);
  if ( !(_BYTE)result )
  {
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 64LL);
    *v2 = *v5;
    return v6(v4, 0LL, v4);
  }
  return result;
}
