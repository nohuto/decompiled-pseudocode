/*
 * XREFs of ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x18000D1A8
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000CE60 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 * Callees:
 *     ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x18000D210 (-IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z.c)
 */

char __fastcall CVisualTree::IsAncestorInSameSpace(
        const struct CVisual ***this,
        const struct CVisual **a2,
        const struct CVisual **a3)
{
  char v3; // r10
  bool IsPreserve3D; // di
  const struct CVisual **v6; // r9
  const struct CVisual **v7; // rdx
  const struct CVisual **v8; // r11

  v3 = 0;
  if ( a2 != a3 )
  {
    IsPreserve3D = CVisual::IsPreserve3D((CVisual *)a2, a2[10]);
    if ( v6 != this[3] )
    {
      while ( IsPreserve3D == CVisual::IsPreserve3D((CVisual *)v6, v6[10]) )
      {
        if ( v7 == v8 )
          return 1;
        v6 = v7;
        if ( v7 == this[3] )
          return v3;
      }
    }
  }
  return v3;
}
