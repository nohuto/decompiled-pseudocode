/*
 * XREFs of ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801AD9C0
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18004B1E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004D570 (--1CVisual@@MEAA@XZ.c)
 *     ?DirtyProjectedShadowReceivers@CVisual@@AEAAXXZ @ 0x1800664B0 (-DirtyProjectedShadowReceivers@CVisual@@AEAAXXZ.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800753F0 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x18008B8A0 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800A96E0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?RemoveVisual@CProjectedShadowCaster@@AEAAXXZ @ 0x1801ADF5C (-RemoveVisual@CProjectedShadowCaster@@AEAAXXZ.c)
 *     ?SetVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x1801AE160 (-SetVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetProjectedShadowCasters(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  char *v5; // rcx
  unsigned int i; // eax

  v1 = *(_DWORD **)(a1 + 224);
  if ( (*v1 & 0x20000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  for ( i = 0; i < (unsigned int)v3; ++v4 )
  {
    if ( *v4 == 15 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v3 )
    v5 = (char *)v1 + v3 + 8LL * i - (((_BYTE)v3 + 15) & 7) + 15;
  return *(_QWORD *)v5;
}
