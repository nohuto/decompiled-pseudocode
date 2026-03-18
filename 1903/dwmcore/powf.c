/*
 * XREFs of powf @ 0x1800E7F78
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1801C7158 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x180203330 (-Pow@CExpressionValueStack@@QEAAJXZ.c)
 *     ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x180210A80 (-CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ.c)
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x180210CC8 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x180210F58 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x1802272F0 (-scRGBTosRGB@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf(float X, float Y)
{
  return _o_powf(X, Y);
}
