/*
 * XREFs of ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F76C
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016FBF0 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitApplyPositionImpulse@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016EB3C (-EmitApplyPositionImpulse@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitApplyScaleImpulse@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016ED50 (-EmitApplyScaleImpulse@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRequestedDeltaPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F6C8 (-EmitSetRequestedDeltaPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBat.c)
 *     ?EmitSetRequestedPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F800 (-EmitSetRequestedPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F8A4 (-EmitSetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitSetRequestedScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F9DC (-EmitSetRequestedScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016FA7C (-EmitSetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 */

bool __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedInOrder(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedScale(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedScaleAnimation(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPosition(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedDeltaPosition(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPositionAnimation(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitApplyScaleImpulse(this, a2) )
  {
    return DirectComposition::CInteractionTrackerMarshaler::EmitApplyPositionImpulse(this, a2) != 0;
  }
  return v4;
}
