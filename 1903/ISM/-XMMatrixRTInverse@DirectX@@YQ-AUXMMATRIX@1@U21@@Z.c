/*
 * XREFs of ?XMMatrixRTInverse@DirectX@@YQ?AUXMMATRIX@1@U21@@Z @ 0x1801600A4
 * Callers:
 *     _lambda_f2d9a31b738d46358cc103eee0272db8_::operator() @ 0x1801525D0 (_lambda_f2d9a31b738d46358cc103eee0272db8_--operator().c)
 *     ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x1801694EC (-UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall DirectX::XMMatrixRTInverse(double a1, double a2, double a3)
{
  return _mm_shuffle_ps(
           _mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a2, 68),
           _mm_shuffle_ps(*(__m128 *)&a3, (__m128)0LL, 68),
           136);
}
