/*
 * XREFs of ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1801D8A78
 * Callers:
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800EB2D8 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801DEED8 (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1801E012C (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x180207768 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x180210410 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x1801D8C20 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801DA4D8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801DEED8 (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 */

void __fastcall CInteractionTracker::AddOrUpdatePendingInertiaStateChange(__int64 a1, int a2, float a3, int a4)
{
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // xmm7_4
  double CurrentValue; // xmm0_8
  unsigned int v13; // xmm6_4
  double v14; // xmm0_8
  unsigned __int64 v15; // [rsp+20h] [rbp-58h]
  unsigned __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+38h] [rbp-40h]
  const void *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*(_DWORD *)(a1 + 496)
    || (v7 = *(_QWORD *)(a1 + 472), v8 = (unsigned int)(*(_DWORD *)(a1 + 496) - 1), *(_DWORD *)(v7 + 24 * v8) != 2) )
  {
    v11 = *(_DWORD *)(a1 + 80);
    CurrentValue = CInteractionTracker::GetCurrentValue(a1, 1LL);
    v13 = LODWORD(CurrentValue);
    v14 = CInteractionTracker::GetCurrentValue(a1, 0LL);
    v15 = __PAIR64__(v13, LODWORD(v14));
    CInteractionTracker::GetCurrentValue(a1, 2LL);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        *((float *)&v15 + 1) = a3;
      }
      else if ( a2 != 2 )
      {
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
    }
    else
    {
      *(float *)&v15 = a3;
    }
    v16 = v15;
    v17 = v11;
    CInteractionTracker::AddPendingStateChange(a1, 2LL, &v16);
    if ( a2 > 1 )
      goto LABEL_23;
LABEL_9:
    v9 = 55;
    goto LABEL_10;
  }
  if ( !a2 )
  {
    *(float *)(v7 + 24 * v8 + 4) = a3;
    goto LABEL_9;
  }
  if ( a2 == 1 )
  {
    *(float *)(v7 + 24 * v8 + 8) = a3;
    goto LABEL_9;
  }
  if ( a2 != 2 )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  *(float *)(v7 + 24 * v8 + 16) = a3;
LABEL_23:
  v9 = 56;
LABEL_10:
  CResource::InvalidateAnimationSources((CResource *)a1, v9);
  v10 = *(_QWORD *)(a1 + 632);
  if ( v10 )
  {
    if ( !a4 )
      CInteractionTrackerBindingManager::AddOrUpdatePendingInertiaStateChangeForBoundTrackers(v10, a1, (unsigned int)a2);
  }
}
