/*
 * XREFs of ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801DD590
 * Callers:
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800EB0EC (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1800EB560 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x1801DA3C4 (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x1801DA400 (-EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801DD1F0 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1801DD4F4 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1801E0660 (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801DD044 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1801E0660 (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 */

void __fastcall CInteractionTracker::SetScale(__int64 a1, float a2, int a3)
{
  float v4; // xmm0_4
  float v6; // xmm1_4
  CInteractionTrackerBindingManager *v7; // r8
  char v8; // di
  float v9; // xmm6_4
  int v10; // ecx
  bool v11; // dl
  int v12; // ecx
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15[4]; // [rsp+20h] [rbp-38h] BYREF

  v4 = fmaxf(0.001, a2);
  v6 = *(float *)(a1 + 128);
  if ( v4 == v6 )
    return;
  v7 = *(CInteractionTrackerBindingManager **)(a1 + 632);
  v8 = 0;
  *(float *)(a1 + 128) = v4;
  v9 = v4 / v6;
  if ( v7 )
  {
    if ( !a3 )
    {
      CInteractionTrackerBindingManager::UpdateBoundTrackerScale(v7, (struct CInteractionTracker *)a1, v9, 0);
      v7 = *(CInteractionTrackerBindingManager **)(a1 + 632);
    }
  }
  else
  {
    v7 = 0LL;
  }
  v10 = *(_DWORD *)(a1 + 168);
  v11 = 0;
  if ( v10 )
  {
    v12 = v10 - 2;
    if ( !v12 )
    {
      v11 = *(_QWORD *)(a1 + 464) != 0LL;
      goto LABEL_14;
    }
    if ( v12 != 1 )
      goto LABEL_14;
    if ( *(_QWORD *)(a1 + 344) || !*(_QWORD *)(a1 + 352) )
    {
      v11 = 0;
      goto LABEL_14;
    }
  }
  v11 = 1;
LABEL_14:
  if ( !v7 || (*(_BYTE *)(a1 + 533) & 1) != 0 )
    v8 = 1;
  if ( ((unsigned __int8)v8 & v11) != 0 )
  {
    v13 = *(float *)(a1 + 144);
    v14 = *(float *)(a1 + 76);
    v15[0] = (float)((float)(*(float *)(a1 + 72) - *(float *)(a1 + 140)) * v9) + *(float *)(a1 + 140);
    v15[2] = *(float *)(a1 + 80);
    v15[1] = (float)((float)(v14 - v13) * v9) + v13;
    CInteractionTracker::SetPosition(a1, (__int64)v15, 0);
  }
  *(_BYTE *)(a1 + 532) |= 2u;
  CResource::InvalidateAnimationSources((CResource *)a1, 2);
  CResource::InvalidateAnimationSources((CResource *)a1, 58);
}
