/*
 * XREFs of ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18002BBA0
 * Callers:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x18002B42C (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1801A6DF0 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A7324 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x180028570 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x1800D64A8 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 */

void __fastcall CDesktopRenderTarget::RemoveRenderTarget(CDesktopRenderTarget *this, struct CHwndRenderTarget *a2)
{
  struct CHwndRenderTarget *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 22, &v4);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 64LL), a2);
  (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
}
