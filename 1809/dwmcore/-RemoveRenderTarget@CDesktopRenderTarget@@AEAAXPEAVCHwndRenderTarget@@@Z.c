/*
 * XREFs of ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18007D540
 * Callers:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800D82D8 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x18015A460 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18015A994 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x180077164 (-RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x18007E59C (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 */

void __fastcall CDesktopRenderTarget::RemoveRenderTarget(CDesktopRenderTarget *this, struct CHwndRenderTarget *a2)
{
  struct CHwndRenderTarget *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 176, &v4);
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 64LL), a2);
  (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
}
