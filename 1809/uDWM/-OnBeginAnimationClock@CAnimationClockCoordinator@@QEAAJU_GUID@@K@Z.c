/*
 * XREFs of ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18002E860
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000DE60 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18002EE48 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18002DFCC (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x18002E8C0 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnBeginAnimationClock(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        unsigned int a3)
{
  struct _GUID v3; // xmm0
  int AnimationClock; // edi
  unsigned int v6; // edx
  CBaseObject *v7; // rbx
  struct _GUID v9; // [rsp+20h] [rbp-18h] BYREF
  CBaseObject *v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v10 = 0LL;
  v9 = v3;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v9, &v10);
  if ( AnimationClock >= 0 )
  {
    v6 = a3;
    v7 = v10;
    AnimationClock = CAnimationClock::Begin(v10, v6);
    if ( v7 )
      CBaseObject::Release(v7);
  }
  return (unsigned int)AnimationClock;
}
