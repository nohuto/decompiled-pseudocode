/*
 * XREFs of _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x18022FF68
 * Callers:
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z @ 0x180230A48 (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UAxisWi.c)
 * Callees:
 *     IsWithinThresholdF @ 0x180221EF4 (IsWithinThresholdF.c)
 *     ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x18022A2E0 (-D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x1802337C8 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 */

char __fastcall anonymous_namespace_::CanAddThisColumnVectorToMatrix(float *a1, int a2, __int64 a3)
{
  char v6; // si
  __int64 v7; // r8

  v6 = 1;
  if ( (unsigned int)D3DXVectorAreCloseToZero((const struct D2DVector3 *)a3)
    || (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(a1, v7)
    || (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(a1 + 3, a3)
    || (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(a1 + 6, a3)
    || a2 == 2
    && (IsWithinThresholdF(0.0, a1[2], 0.0049999999)
     && IsWithinThresholdF(0.0, a1[5], 0.0049999999)
     && IsWithinThresholdF(0.0, *(float *)(a3 + 8), 0.0049999999)
     || IsWithinThresholdF(0.0, a1[1], 0.0049999999)
     && IsWithinThresholdF(0.0, a1[4], 0.0049999999)
     && IsWithinThresholdF(0.0, *(float *)(a3 + 4), 0.0049999999)
     || IsWithinThresholdF(0.0, *a1, 0.0049999999)
     && IsWithinThresholdF(0.0, a1[3], 0.0049999999)
     && IsWithinThresholdF(0.0, *(float *)a3, 0.0049999999)) )
  {
    return 0;
  }
  return v6;
}
