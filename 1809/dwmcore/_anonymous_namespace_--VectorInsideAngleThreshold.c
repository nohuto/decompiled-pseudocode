/*
 * XREFs of _anonymous_namespace_::VectorInsideAngleThreshold @ 0x1801F30EC
 * Callers:
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x1801EDC24 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x1801EFB6C (_anonymous_namespace_--CanAddThisColumnVectorToMatrix.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801F242C (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 * Callees:
 *     ?D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z @ 0x18021ABEC (-D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z.c)
 */

bool __fastcall anonymous_namespace_::VectorInsideAngleThreshold(
        const struct D2DVector3 *a1,
        const struct D2DVector3 *a2)
{
  float v2; // xmm0_4
  float v3; // xmm2_4
  float v4; // xmm1_4
  bool result; // al

  v2 = D3DXVector3Angle(a1, a2);
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v2) & _xmm);
  result = 1;
  if ( v3 >= 0.17453 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v2 - 3.1415927)) & _xmm) >= 0.17453 )
  {
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v2 + 3.1415927)) & _xmm);
    if ( v4 >= 0.17453 )
      return 0;
  }
  return result;
}
