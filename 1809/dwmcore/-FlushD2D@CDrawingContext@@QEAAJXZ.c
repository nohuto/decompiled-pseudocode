/*
 * XREFs of ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18008E430
 * Callers:
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x18000EDE0 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180030C68 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18008DF04 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18008E3C0 (-RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017B420 (-RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017D240 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x18017D344 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAnd.c)
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017E300 (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FlushD2D(CDrawingContext *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_QWORD *)this + 45) && !*((_QWORD *)this + 787) )
    return (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 48) + 48LL))(
             *((_QWORD *)this + 48),
             (char *)this + 8);
  return result;
}
