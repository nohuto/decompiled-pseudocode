/*
 * XREFs of sqrtf_0 @ 0x18012DB2F
 * Callers:
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180035844 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x1800510D8 (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x18005A4C0 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x1800C05D0 (-UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z.c)
 *     ?RefreshScreenSize@GestureSession@@SAJXZ @ 0x1800D5F48 (-RefreshScreenSize@GestureSession@@SAJXZ.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F095C (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800F1EA8 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x1800F26C8 (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1800FA994 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x18010358C (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     ??$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z @ 0x18012AA98 (--$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z.c)
 *     ??$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z @ 0x18012ACBC (--$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl sqrtf_0(float X)
{
  return sqrtf(X);
}
