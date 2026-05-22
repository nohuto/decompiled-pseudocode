/*
 * XREFs of ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180084A64
 * Callers:
 *     ?GetPoints@MPCVoiceProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180036420 (-GetPoints@MPCVoiceProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@st.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180083000 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x1800838CC (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     ?UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180083D08 (-UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x18008F39C (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ?PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180131270 (-PopulateTargetingData@MPCSixDofProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x18013195C (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?ComputeHandBeamFromRelativePivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801346BC (-ComputeHandBeamFromRelativePivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULeg.c)
 *     ?ComputeHandBeamFromShoulderPivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x180134BE4 (-ComputeHandBeamFromShoulderPivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULeg.c)
 *     ?PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180135E30 (-PopulateTargetingData@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?OnPromotedToPrimary@MPCGamepadProcessor@@MEAAXXZ @ 0x180138650 (-OnPromotedToPrimary@MPCGamepadProcessor@@MEAAXXZ.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180138A90 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x18013B5C0 (-OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013C00C (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCEyeGazeProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18013EC90 (-PopulateTargetingData@MPCEyeGazeProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z @ 0x1801401A4 (-ProcessPoints@MPCClickerProcessor@@IEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall Windows::Foundation::Numerics::transform(float *a1, float *a2, float *a3)
{
  float *result; // rax
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm6_4
  float v7; // xmm3_4
  float v8; // xmm3_4

  result = a1;
  v4 = a2[1];
  v5 = a2[2];
  v6 = (float)((float)(*a2 * a3[2]) + (float)(v4 * a3[6])) + (float)(v5 * a3[10]);
  v7 = (float)((float)(*a2 * a3[1]) + (float)(v4 * a3[5])) + (float)(v5 * a3[9]);
  *a1 = (float)((float)((float)(v4 * a3[4]) + (float)(*a2 * *a3)) + (float)(v5 * a3[8])) + a3[12];
  v8 = v7 + a3[13];
  a1[2] = v6 + a3[14];
  a1[1] = v8;
  return result;
}
