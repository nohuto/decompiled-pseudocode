/*
 * XREFs of ApiSetTransformForInputMagnification @ 0x1C0141CB0
 * Callers:
 *     RIMApplyTransforms @ 0x1C00E8AC8 (RIMApplyTransforms.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C00E9AE0 (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetTransformForInputMagnification(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (int)IsTransformForInputMagnificationSupported() < 0 )
    return 0LL;
  else
    return TransformForInputMagnification(a1, a2, a3);
}
