/*
 * XREFs of ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x1800A322C
 * Callers:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800AFD38 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1801A86B0 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A8BE4 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800A3808 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x1800D60E8 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 */

void __fastcall CDesktopRenderTarget::RemoveRenderTarget(CDesktopRenderTarget *this, struct CHwndRenderTarget *a2)
{
  struct CHwndRenderTarget *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 176, &v4);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 64LL), a2);
  (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
}
