/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C000C384
 * Callers:
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0001AA4 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0001C10 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0002C50 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C00044C0 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0004B60 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0005510 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     NtDCompositionSynchronize @ 0x1C00095B0 (NtDCompositionSynchronize.c)
 *     NtDCompositionReleaseAllResources @ 0x1C006DC30 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C006FE90 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionGetDeletedResources @ 0x1C008DD70 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C0091C00 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0092500 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionSetChannelConnectionId @ 0x1C0093D50 (NtDCompositionSetChannelConnectionId.c)
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C0094AE0 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 *     NtDCompositionWaitForChannel @ 0x1C0094E40 (NtDCompositionWaitForChannel.c)
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C00954E0 (NtDCompositionTelemetryAnimationScenarioReference.c)
 *     NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C0095620 (NtDCompositionTelemetryAnimationScenarioUnreference.c)
 *     NtDCompositionSetDebugCounter @ 0x1C009FA50 (NtDCompositionSetDebugCounter.c)
 *     NtDCompositionSuspendAnimations @ 0x1C01A0940 (NtDCompositionSuspendAnimations.c)
 *     NtVisualCaptureBits @ 0x1C01A0D10 (NtVisualCaptureBits.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C000C3E4 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReferenceHandleAndLock(
        unsigned int a1,
        struct DirectComposition::CApplicationChannel **a2)
{
  int v3; // edi
  struct DirectComposition::CApplicationChannel *v4; // rbx
  struct DirectComposition::CChannel *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = DirectComposition::CChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CChannel *))(*(_QWORD *)v6 + 8LL))(v6) == 1 )
    {
      *a2 = v4;
    }
    else
    {
      v3 = -1073741811;
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
    }
  }
  return (unsigned int)v3;
}
