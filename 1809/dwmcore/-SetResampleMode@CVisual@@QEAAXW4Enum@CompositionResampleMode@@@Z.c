/*
 * XREFs of ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x18007A9BC
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18001C3C0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x18007A98C (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x18015ED70 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800A2224 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetResampleMode(__int64 a1, int a2)
{
  CSparseStorage *v2; // rcx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (CSparseStorage *)(a1 + 216);
  if ( a2 == `CVisual::SetVisualDesktopId'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x2000000u;
  else
    CSparseStorage::SetData(v2, 7u, 4u, &v3);
}
