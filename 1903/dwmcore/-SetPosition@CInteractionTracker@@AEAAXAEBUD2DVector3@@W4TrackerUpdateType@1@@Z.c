/*
 * XREFs of ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801DD044
 * Callers:
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800EB0EC (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1800EB560 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x1801D8FA8 (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801DA2A4 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801DA334 (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801DD1F0 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@@Z @ 0x1801DD3C0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801DD590 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801E0488 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x1801DDC94 (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1801DE2A4 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801E0488 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 */

void __fastcall CInteractionTracker::SetPosition(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // rcx
  float v6; // xmm1_4
  float v7; // xmm0_4
  int v8; // eax
  CInteractionTrackerBindingManager *v9; // rcx
  float v10[4]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 72) - *(_QWORD *)a2;
  if ( !v5 )
    v5 = *(unsigned int *)(a1 + 80) - (unsigned __int64)*(unsigned int *)(a2 + 8);
  if ( v5 )
  {
    v6 = *(float *)(a2 + 4) - *(float *)(a1 + 76);
    v10[0] = *(float *)a2 - *(float *)(a1 + 72);
    v7 = *(float *)(a2 + 8) - *(float *)(a1 + 80);
    v10[1] = v6;
    v10[2] = v7;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)a2;
    v8 = *(_DWORD *)(a2 + 8);
    *(_BYTE *)(a1 + 532) |= 2u;
    *(_DWORD *)(a1 + 80) = v8;
    CResource::InvalidateAnimationSources((CResource *)a1, 1);
    CResource::InvalidateAnimationSources((CResource *)a1, 57);
    if ( *(_DWORD *)(a1 + 168) == 1 )
      CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
    CInteractionTracker::TelemetrySetPosition((CInteractionTracker *)a1);
    v9 = *(CInteractionTrackerBindingManager **)(a1 + 632);
    if ( v9 )
    {
      if ( !a3 )
        CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
          v9,
          (struct CInteractionTracker *)a1,
          (const struct D2DVector3 *)v10,
          0);
    }
  }
}
