/*
 * XREFs of powf @ 0x1800E8E28
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1801C59B8 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x180201C40 (-Pow@CExpressionValueStack@@QEAAJXZ.c)
 *     ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x18020F370 (-CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ.c)
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x18020F5B8 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x18020F848 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x180225BE0 (-scRGBTosRGB@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf(float X, float Y)
{
  return _o_powf(X, Y);
}
