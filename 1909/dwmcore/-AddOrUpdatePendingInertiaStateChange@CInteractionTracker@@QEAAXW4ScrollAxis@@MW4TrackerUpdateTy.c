/*
 * XREFs of ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1801D7368
 * Callers:
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800ED4E0 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801DD7C8 (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1801DEA1C (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x180206078 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18020ED00 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x1801D7510 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801D8DC8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801DD7C8 (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 */

void __fastcall CInteractionTracker::AddOrUpdatePendingInertiaStateChange(
        __int64 a1,
        unsigned int a2,
        float a3,
        int a4)
{
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // xmm7_4
  double CurrentValue; // xmm0_8
  unsigned int v12; // xmm6_4
  double v13; // xmm0_8
  unsigned __int64 v14; // [rsp+20h] [rbp-58h]
  unsigned __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+38h] [rbp-40h]
  const void *retaddr; // [rsp+78h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 496)
    && (v7 = *(_QWORD *)(a1 + 472), v8 = (unsigned int)(*(_DWORD *)(a1 + 496) - 1), *(_DWORD *)(v7 + 24 * v8) == 2) )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        *(float *)(v7 + 24 * v8 + 8) = a3;
      }
      else
      {
        if ( a2 != 2 )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        *(float *)(v7 + 24 * v8 + 16) = a3;
      }
    }
    else
    {
      *(float *)(v7 + 24 * v8 + 4) = a3;
    }
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 80);
    CurrentValue = CInteractionTracker::GetCurrentValue(a1, 1LL);
    v12 = LODWORD(CurrentValue);
    v13 = CInteractionTracker::GetCurrentValue(a1, 0LL);
    v14 = __PAIR64__(v12, LODWORD(v13));
    CInteractionTracker::GetCurrentValue(a1, 2LL);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        *((float *)&v14 + 1) = a3;
      }
      else if ( a2 != 2 )
      {
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
    }
    else
    {
      *(float *)&v14 = a3;
    }
    v15 = v14;
    v16 = v10;
    CInteractionTracker::AddPendingStateChange(a1, 2LL, &v15);
  }
  CResource::InvalidateAnimationSources((CResource *)a1);
  v9 = *(_QWORD *)(a1 + 632);
  if ( v9 )
  {
    if ( !a4 )
      CInteractionTrackerBindingManager::AddOrUpdatePendingInertiaStateChangeForBoundTrackers(v9, a1, a2);
  }
}
