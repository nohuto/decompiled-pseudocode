/*
 * XREFs of ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x1801C78D8
 * Callers:
 *     ?IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801D0AF0 (-IsValid@CCompositionDistantLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x180023B10 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x180087C60 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x1800BE710 (-IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18021D270 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

char __fastcall CCompositionLight::IsValidCoordinateSpace(
        CCompositionLight *this,
        const struct CVisual **a2,
        const struct CVisual *a3,
        struct CVisual *a4)
{
  struct _LIST_ENTRY *Flink; // r10
  struct _LIST_ENTRY *v6; // r11
  const struct Windows::Foundation::Numerics::float4x4 *v8; // rdx
  float v9; // xmm0_4
  _BYTE v10[64]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+70h] [rbp-18h]

  if ( !CVisualTree::IsVisibleInTree(a2, a4) )
    return 0;
  while ( Flink != v6 )
  {
    if ( !Flink )
      return 0;
    Flink = Flink[5].Flink;
  }
  v11 = 0;
  if ( (int)CVisual::GetWorldTransform(v6, (__int64)a2, 3, (__int64)v10, 0LL, 0LL) >= 0
    && (v9 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v10, v8),
        CMILMatrix::IsInvertibleDeterminant(v9)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
