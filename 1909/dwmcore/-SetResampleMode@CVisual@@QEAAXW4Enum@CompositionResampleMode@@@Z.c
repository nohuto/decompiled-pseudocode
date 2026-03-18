/*
 * XREFs of ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x1800E6D48
 * Callers:
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x1800E6D18 (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801996B0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A36C0 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800A46E4 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
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
