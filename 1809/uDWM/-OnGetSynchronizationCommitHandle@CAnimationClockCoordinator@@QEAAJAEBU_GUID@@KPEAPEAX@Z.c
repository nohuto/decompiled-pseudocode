/*
 * XREFs of ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800AF314
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000DE60 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18002EAE0 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18002DFCC (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x18004DAF0 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800AE74C (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 *     ??1?$ComPtr@VCAnimationClock@@@WRL@Microsoft@@QEAA@XZ @ 0x1800AF298 (--1-$ComPtr@VCAnimationClock@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
        CAnimationClockCoordinator *this,
        const struct _GUID *a2,
        unsigned int a3,
        void **a4)
{
  int v8; // eax
  struct _GUID v9; // xmm0
  int AnimationClock; // ebx
  int CommitHandle; // eax
  struct _GUID v13; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CAnimationClock *v15; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v8) = EvaluateCurrentState((int **)&g_Feature_3170433336_56778865_FeatureDescriptorDetails);
  if ( v8 )
    *a4 = 0LL;
  v9 = *a2;
  v15 = 0LL;
  v13 = v9;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v15);
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v13, &v15);
  if ( AnimationClock >= 0 )
  {
    CommitHandle = CAnimationClock::GetCommitHandle(v15, a3, a4);
    AnimationClock = CommitHandle;
    if ( CommitHandle >= 0 )
      AnimationClock = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD9,
        (__int64)"windows\\dwm\\udwm\\animationclockcoordinator.cpp",
        (const char *)(unsigned int)CommitHandle);
  }
  Microsoft::WRL::ComPtr<CAnimationClock>::~ComPtr<CAnimationClock>(&v15);
  return (unsigned int)AnimationClock;
}
