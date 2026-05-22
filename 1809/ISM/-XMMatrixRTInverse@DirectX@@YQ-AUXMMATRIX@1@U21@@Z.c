/*
 * XREFs of ?XMMatrixRTInverse@DirectX@@YQ?AUXMMATRIX@1@U21@@Z @ 0x180109DFC
 * Callers:
 *     _lambda_5c93fa6c61cd305c53357332304ca747_::operator() @ 0x1801176A0 (_lambda_5c93fa6c61cd305c53357332304ca747_--operator().c)
 *     ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x180126528 (-UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 * Callees:
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall DirectX::XMMatrixRTInverse(double a1, double a2, double a3)
{
  return _mm_shuffle_ps(
           _mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a2, 68),
           _mm_shuffle_ps(*(__m128 *)&a3, (__m128)0LL, 68),
           136);
}
