/*
 * XREFs of ?InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z @ 0x1800397DC
 * Callers:
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180021B68 (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x18004BDC8 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualProxy::InsertChildAt(CVisualProxy *this, struct CVisualProxy *a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 472LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL),
           a3);
}
