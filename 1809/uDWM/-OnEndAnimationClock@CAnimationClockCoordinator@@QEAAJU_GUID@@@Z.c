/*
 * XREFs of ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x18002E500
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000DE60 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x18003925C (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18002DFCC (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x18002E554 (-End@CAnimationClock@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnEndAnimationClock(CAnimationClockCoordinator *this, struct _GUID *a2)
{
  struct _GUID v2; // xmm0
  int AnimationClock; // edi
  struct _GUID v5; // [rsp+20h] [rbp-18h] BYREF
  CBaseObject *v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v6 = 0LL;
  v5 = v2;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v5, &v6);
  if ( AnimationClock >= 0 )
  {
    AnimationClock = CAnimationClock::End(v6);
    if ( v6 )
      CBaseObject::Release(v6);
  }
  return (unsigned int)AnimationClock;
}
