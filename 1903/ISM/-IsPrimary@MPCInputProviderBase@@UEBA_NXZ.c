/*
 * XREFs of ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D0D0
 * Callers:
 *     ?OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18012BFA0 (-OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18012C0B0 (-PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18012C200 (-Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180131510 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801316F0 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x180131BE0 (-ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180135AE0 (-OnGazeUpdate@MPCHandProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180135FF0 (-PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180136440 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180137B90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180138A80 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180138CC0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013A6D8 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAUInputInfo@@@Z @ 0x18013B460 (-OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCMouseProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18013BED0 (-PostHitTestProcessing@MPCMouseProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18013F140 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?SupportsTouch@MPCHeadProcessor@@UEAA_NXZ @ 0x18013F470 (-SupportsTouch@MPCHeadProcessor@@UEAA_NXZ.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18013FC00 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18013FF70 (-PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18013FFF0 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

char __fastcall MPCInputProviderBase::IsPrimary(unsigned __int64 this)
{
  MPCHolographicInputManager *Instance; // rax

  Instance = MPCHolographicInputManager::GetInstance();
  return MPCHolographicInputManager::IsProviderPrimary(
           Instance,
           (const struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)));
}
