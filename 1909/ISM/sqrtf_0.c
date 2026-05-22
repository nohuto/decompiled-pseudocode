/*
 * XREFs of sqrtf_0 @ 0x18003785B
 * Callers:
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180075934 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x18008F39C (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ?XMScalarACos@DirectX@@YAMM@Z @ 0x180096E7C (-XMScalarACos@DirectX@@YAMM@Z.c)
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_NW4HandState@1234@@Z @ 0x1800F3890 (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatia.c)
 *     ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x1800F7BC8 (-UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z.c)
 *     ?RefreshScreenSize@GestureSession@@SAJXZ @ 0x18010A8D4 (-RefreshScreenSize@GestureSession@@SAJXZ.c)
 *     ?ComputeDropOffTarget@RayStabilizer@@AEAA?AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z @ 0x18012C634 (-ComputeDropOffTarget@RayStabilizer@@AEAA-AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z.c)
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18012CE04 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x18012D4C4 (-ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x18013195C (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180131EEC (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180132F14 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180138718 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180140D54 (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     ?ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@4@1@Z @ 0x1801642DC (-ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@.c)
 *     ??$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z @ 0x18016A5B4 (--$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z.c)
 *     ??$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z @ 0x18016A848 (--$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl sqrtf_0(float X)
{
  return sqrtf(X);
}
