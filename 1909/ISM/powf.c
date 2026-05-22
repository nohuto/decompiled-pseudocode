/*
 * XREFs of powf @ 0x18002C1B4
 * Callers:
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x1800757DC (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x180075A74 (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18012CE04 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf(float X, float Y)
{
  return _o_powf(X, Y);
}
