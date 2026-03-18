/*
 * XREFs of ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x18002B8B4
 * Callers:
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x18002B850 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x18002D6AC (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x18002E3D0 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018C69C (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1801C9894 (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1801C9948 (-UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilSt.c)
 *     ?OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x180238EAC (-OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x180247960 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CVisualTree>(CDirtyRegion **a1)
{
  CDirtyRegion *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CDirtyRegion::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
