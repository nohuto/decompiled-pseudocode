/*
 * XREFs of ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18004D148
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180024840 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180026410 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016E244 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18004CF4C (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DrawCustomCallbackRendererInternal(
        CD2DContext *this,
        struct ID2D1PrivateCompositorRenderer *a2)
{
  CD2DContext::EnsureBeginDraw(this);
  (*(void (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorRenderer *))(**((_QWORD **)this + 30) + 120LL))(
    *((_QWORD *)this + 30),
    a2);
  return 0LL;
}
