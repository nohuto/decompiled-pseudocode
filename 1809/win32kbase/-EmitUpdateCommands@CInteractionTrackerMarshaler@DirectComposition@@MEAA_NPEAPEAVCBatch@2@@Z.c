/*
 * XREFs of ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016FBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005B6AC (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016EBCC (-EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitConfigureInternalProperties@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016EDE8 (-EmitConfigureInternalProperties@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitDwmRestartCompleted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016EE90 (-EmitDwmRestartCompleted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitDwmStarted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016EEFC (-EmitDwmStarted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCallbackPropertyIdSet@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016EFBC (-EmitSetCallbackPropertyIdSet@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetDefaultAnimationDuration@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F038 (-EmitSetDefaultAnimationDuration@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitSetInertiaCenterpointAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F0BC (-EmitSetInertiaCenterpointAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPE.c)
 *     ?EmitSetInertiaDecayRates@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F1B4 (-EmitSetInertiaDecayRates@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F244 (-EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F31C (-EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F4D0 (-EmitSetMaxPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F550 (-EmitSetMaxScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F5CC (-EmitSetMinPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F64C (-EmitSetMinScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F76C (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetRequestedPositionWithDefaultAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F948 (-EmitSetRequestedPositionWithDefaultAnimation@CInteractionTrackerMarshaler@DirectComposition@@AE.c)
 *     ?EmitSetRequestedScaleWithDefaultAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016FB48 (-EmitSetRequestedScaleWithDefaultAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_.c)
 */

bool __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitDwmStarted(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetCallbackPropertyIdSet(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaDecayRates(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMinPosition(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMaxPosition(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMinScale(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMaxScale(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedInOrder(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaCenterpointAnimations(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaModifierAnimations(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetManipulations(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitApplyPositionShift(
         this,
         (struct DirectComposition::CBatch ***)a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitConfigureInternalProperties(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetDefaultAnimationDuration(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPositionWithDefaultAnimation(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedScaleWithDefaultAnimation(this, a2) )
  {
    return DirectComposition::CInteractionTrackerMarshaler::EmitDwmRestartCompleted(this, a2) != 0;
  }
  return v4;
}
