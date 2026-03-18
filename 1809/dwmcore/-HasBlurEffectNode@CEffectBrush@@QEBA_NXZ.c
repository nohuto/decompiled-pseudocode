/*
 * XREFs of ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x180011448
 * Callers:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180011038 (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x180011404 (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ?HasRenderingIntermediate@CEffectBrush@@UEBA_NXZ @ 0x180195440 (-HasRenderingIntermediate@CEffectBrush@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::HasBlurEffectNode(CEffectBrush *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 16LL))(*((_QWORD *)this + 12));
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 144LL))(v1);
}
