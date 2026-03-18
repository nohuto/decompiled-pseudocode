/*
 * XREFs of ?IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801CBD40
 * Callers:
 *     ?IsValid@CProjectedShadow@@AEAA_NPEBVCVisualTree@@@Z @ 0x1801CBC7C (-IsValid@CProjectedShadow@@AEAA_NPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18002CB70 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180067D14 (-IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1801E258C (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1801E2F30 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

bool __fastcall CProjectedShadow::IsValidVisual(CProjectedShadow *this, const struct CVisual **a2, struct CVisual *a3)
{
  struct _LIST_ENTRY *v3; // r10
  __int64 v4; // r11
  const struct Windows::Foundation::Numerics::float4x4 *v5; // rdx
  float v6; // xmm0_4
  bool result; // al
  _BYTE v8[64]; // [rsp+30h] [rbp-58h] BYREF
  int v9; // [rsp+70h] [rbp-18h]

  result = 0;
  if ( a3 )
  {
    if ( CVisualTree::IsVisibleInTree(a2, a3) )
    {
      v9 = 0;
      if ( (int)CVisual::GetWorldTransform(v3, v4, 3, (__int64)v8, 0LL, 0LL) >= 0 )
      {
        v6 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v8, v5);
        if ( CMILMatrix::IsInvertibleDeterminant(v6) )
          return 1;
      }
    }
  }
  return result;
}
