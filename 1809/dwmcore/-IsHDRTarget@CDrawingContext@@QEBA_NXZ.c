/*
 * XREFs of ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180177EC4
 * Callers:
 *     ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x180177BFC (-Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z.c)
 *     TryFillRenderState @ 0x180178338 (TryFillRenderState.c)
 *     ?ShouldUseDrawListRenderPath@CShapeTree@@UEBA_NPEAVCDrawingContext@@@Z @ 0x1801DAD20 (-ShouldUseDrawListRenderPath@CShapeTree@@UEBA_NPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008C59C (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawingContext::IsHDRTarget(CDrawingContext *this)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-28h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v3; // [rsp+28h] [rbp-20h]

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 44) + 24LL))(*((_QWORD *)this + 44), v2);
  return IsDXGIColorSpaceHDR(v3);
}
