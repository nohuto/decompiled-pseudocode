/*
 * XREFs of ?Create@COverlayRenderTargetProxy@@QEAAJIIU_LUID@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B64DC
 * Callers:
 *     ?SetOverlayRenderTarget@CWindowList@@AEAAJPEAUHWND__@@NH@Z @ 0x180092748 (-SetOverlayRenderTarget@CWindowList@@AEAAJPEAUHWND__@@NH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayRenderTargetProxy::Create(
        COverlayRenderTargetProxy *this,
        unsigned int a2,
        unsigned int a3,
        struct _LUID a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, struct _LUID, int, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 1184LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3,
           a4,
           87,
           0);
}
