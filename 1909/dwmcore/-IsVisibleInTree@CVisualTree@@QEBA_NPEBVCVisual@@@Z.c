/*
 * XREFs of ?IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x1800C00C0
 * Callers:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x18000424C (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180006C14 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18007E420 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180081E30 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800BFF98 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800C0014 (-UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x1801C6138 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisualTree::IsVisibleInTree(const struct CVisual **this, const struct CVisual *a2)
{
  char v2; // r8
  const struct CVisual *v3; // rax

  v2 = 0;
  v3 = a2;
  while ( a2 && (*((_BYTE *)a2 + 95) & 4) != 0 )
  {
    if ( a2 == this[3] )
      return 1;
    if ( v3 )
    {
      v3 = (const struct CVisual *)*((_QWORD *)v3 + 10);
      if ( v3 )
        v3 = (const struct CVisual *)*((_QWORD *)v3 + 10);
    }
    if ( a2 == v3 )
      return v2;
    a2 = (const struct CVisual *)*((_QWORD *)a2 + 10);
  }
  return v2;
}
