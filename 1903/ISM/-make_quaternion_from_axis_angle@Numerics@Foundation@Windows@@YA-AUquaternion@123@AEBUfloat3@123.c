/*
 * XREFs of ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x18012DDCC
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18012CB00 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?ComputeHandBeamFromRelativePivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801346BC (-ComputeHandBeamFromRelativePivot@MPCHandProcessor@@AEAAXPEAUMPCHolographicInputContext@@PEAULeg.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18013B6D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     cosf_0 @ 0x180037D27 (cosf_0.c)
 *     sinf_0 @ 0x180037D3F (sinf_0.c)
 */

float *__fastcall Windows::Foundation::Numerics::make_quaternion_from_axis_angle(float *a1, float *a2, float a3)
{
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float *result; // rax

  v5 = a3 * 0.5;
  v6 = sinf_0(a3 * 0.5);
  v7 = v6 * *a2;
  v8 = v6 * a2[1];
  a1[2] = v6 * a2[2];
  *a1 = v7;
  a1[1] = v8;
  v9 = cosf_0(v5);
  result = a1;
  a1[3] = v9;
  return result;
}
