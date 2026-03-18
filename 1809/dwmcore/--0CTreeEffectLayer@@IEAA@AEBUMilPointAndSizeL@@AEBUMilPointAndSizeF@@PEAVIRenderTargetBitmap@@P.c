/*
 * XREFs of ??0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@4MM@Z @ 0x18001133C
 * Callers:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180011038 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18002FA84 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::CTreeEffectLayer(
        __int64 a1,
        const struct MilPointAndSizeL *a2,
        __int128 *a3,
        struct IRenderTargetBitmap *a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7,
        __int128 *a8,
        int a9,
        int a10)
{
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 result; // rax

  CExternalLayer::CExternalLayer((CExternalLayer *)a1, a2, a4);
  *(_QWORD *)a1 = &CTreeEffectLayer::`vftable';
  *(_OWORD *)(a1 + 120) = *(_OWORD *)a7;
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a7 + 16);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a7 + 32);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(a7 + 48);
  v12 = *a3;
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(a7 + 64);
  v13 = *a8;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 240) = a5;
  *(_OWORD *)(a1 + 188) = v13;
  *(_OWORD *)(a1 + 220) = v12;
  result = a1;
  *(_OWORD *)(a1 + 256) = *a6;
  *(_DWORD *)(a1 + 276) = a10;
  *(_DWORD *)(a1 + 272) = a9;
  return result;
}
