/*
 * XREFs of ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800AA148
 * Callers:
 *     ?UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEAUIPerceptionTimestamp@Perception@4@PEA_J@Z @ 0x1800B1E84 (-UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windo.c)
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_N33@Z @ 0x1800BDF98 (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatia.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1800FA994 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAX_JAEBUPoseData@SpatialInteractionDevices@@PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@3@Z @ 0x180126528 (-UpdateSimulatedPose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@4@1@Z @ 0x1801268C0 (-ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall DirectX::XMMatrixMultiply(double a1, __m128 *a2)
{
  return _mm_add_ps(
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 170), a2[2]),
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 0), *a2)),
           _mm_add_ps(
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 255), a2[3]),
             _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a1, *(__m128 *)&a1, 85), a2[1])));
}
