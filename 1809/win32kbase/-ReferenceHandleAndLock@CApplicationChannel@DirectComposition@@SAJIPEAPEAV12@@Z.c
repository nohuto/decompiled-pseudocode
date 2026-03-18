/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010378
 * Callers:
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0001464 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0001780 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0002B40 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0003C40 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0003EE0 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0004400 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     NtDCompositionSynchronize @ 0x1C000E9A0 (NtDCompositionSynchronize.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C005AA40 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionGetDeletedResources @ 0x1C007D2B0 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C007DCF0 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C007EA80 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C007EF20 (NtDCompositionTelemetryAnimationScenarioReference.c)
 *     NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C007FB10 (NtDCompositionTelemetryAnimationScenarioUnreference.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0080AF0 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionSetChannelConnectionId @ 0x1C0081560 (NtDCompositionSetChannelConnectionId.c)
 *     NtDCompositionReleaseAllResources @ 0x1C0081910 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionWaitForChannel @ 0x1C0082100 (NtDCompositionWaitForChannel.c)
 *     NtDCompositionSetDebugCounter @ 0x1C008C980 (NtDCompositionSetDebugCounter.c)
 *     NtDCompositionSuspendAnimations @ 0x1C0166A50 (NtDCompositionSuspendAnimations.c)
 *     NtVisualCaptureBits @ 0x1C0166E20 (NtVisualCaptureBits.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00103D8 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
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
