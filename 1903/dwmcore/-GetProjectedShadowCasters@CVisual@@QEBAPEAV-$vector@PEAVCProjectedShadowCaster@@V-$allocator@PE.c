/*
 * XREFs of ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180006454
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180003F80 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 *     ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180003FEC (-AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180004C20 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180053E00 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18007DB20 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18007FEEC (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x180088384 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089E58 (--1CVisual@@MEAA@XZ.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800BE5E8 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetProjectedShadowCasters(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  _BYTE *v3; // r9
  __int64 v4; // rcx
  unsigned int i; // eax

  v1 = *(_DWORD **)(a1 + 224);
  if ( (*v1 & 0x20000) == 0 )
    return 0LL;
  v2 = (unsigned int)v1[1];
  v3 = v1 + 2;
  v4 = 0LL;
  for ( i = 0; i < (unsigned int)v2; ++v3 )
  {
    if ( *v3 == 15 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v2 )
    v4 = (__int64)v1 + 8LL * i - (((_BYTE)v2 + 15) & 7) + v2 + 15;
  return *(_QWORD *)v4;
}
