/*
 * XREFs of ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x18020DA40
 * Callers:
 *     ?ShouldUseDrawListRenderPath@CShapeTree@@UEBA_NPEAVCDrawingContext@@@Z @ 0x18020DA90 (-ShouldUseDrawListRenderPath@CShapeTree@@UEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180213960 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     TryFillRenderState @ 0x1802506D8 (TryFillRenderState.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180052034 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawingContext::IsHDRTarget(CDrawingContext *this)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-28h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v3; // [rsp+28h] [rbp-20h]

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 44) + 24LL))(*((_QWORD *)this + 44), v2);
  return IsDXGIColorSpaceHDR(v3);
}
