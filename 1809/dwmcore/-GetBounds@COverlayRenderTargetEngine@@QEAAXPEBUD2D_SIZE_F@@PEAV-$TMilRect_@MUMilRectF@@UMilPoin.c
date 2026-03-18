/*
 * XREFs of ?GetBounds@COverlayRenderTargetEngine@@QEAAXPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015E8A0
 * Callers:
 *     ?CalcOcclusion@COverlayRenderTargetEngine@@IEAAJPEAVCDrawingContext@@@Z @ 0x18015E3F0 (-CalcOcclusion@COverlayRenderTargetEngine@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetBounds@COverlayRenderTarget@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015E880 (-GetBounds@COverlayRenderTarget@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMil.c)
 *     ?NotifyRenderedRect@COverlayRenderTargetEngine@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015E92C (-NotifyRenderedRect@COverlayRenderTargetEngine@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x18015ED70 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayRenderTargetEngine::GetBounds(__int64 a1, float *a2, __int64 a3)
{
  float v3; // xmm1_4
  __int64 result; // rax

  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  v3 = (float)*(int *)(a1 + 176);
  *(float *)(a3 + 8) = v3;
  result = *(unsigned int *)(a1 + 180);
  *(float *)(a3 + 12) = (float)(int)result;
  if ( a2 && *a2 != 0.0 && a2[1] != 0.0 )
  {
    *(float *)(a3 + 8) = fminf(v3, *a2);
    *(float *)(a3 + 12) = fminf((float)(int)result, a2[1]);
  }
  return result;
}
