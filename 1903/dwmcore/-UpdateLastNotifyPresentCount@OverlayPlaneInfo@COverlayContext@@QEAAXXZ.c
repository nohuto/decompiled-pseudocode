/*
 * XREFs of ?UpdateLastNotifyPresentCount@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x1801875D4
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x180185E80 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COverlayContext::OverlayPlaneInfo::UpdateLastNotifyPresentCount(
        COverlayContext::OverlayPlaneInfo *this)
{
  *((_DWORD *)this + 61) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 224LL))(*((_QWORD *)this + 3));
}
