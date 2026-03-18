/*
 * XREFs of ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x18021EF54
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801DBE20 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x1802091A0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 *     ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x1802097B0 (-StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801DAB20 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18021F990 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

char __fastcall InteractionSourceManager::IsInertiaEnabledForAxis(InteractionSourceManager *a1, int a2)
{
  __int64 v2; // rbx
  InteractionSourceManager *v3; // r10

  v2 = a2;
  if ( InteractionSourceManager::HasActiveManipulation(a1) )
    return *((_BYTE *)InteractionSourceManager::TryGetActiveManipulation(v3) + 8 * v2 + 452) & 1;
  else
    return 1;
}
