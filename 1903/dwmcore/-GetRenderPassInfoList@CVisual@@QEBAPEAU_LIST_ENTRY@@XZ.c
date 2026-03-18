/*
 * XREFs of ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800DC640
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800B9890 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800DC514 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800DC594 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?ResetWindowMove@CWindowNode@@UEAA_NXZ @ 0x1801A9A40 (-ResetWindowMove@CWindowNode@@UEAA_NXZ.c)
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x1801C2A1C (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801C313C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x1801C43E8 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x1801C45DC (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CVisual::GetRenderPassInfoList(CVisual *this)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  __int64 v5; // rcx
  unsigned int i; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x40000000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  for ( i = 0; i < (unsigned int)v3; ++v4 )
  {
    if ( *v4 == 2 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v3 )
    v5 = (__int64)v1 + 8LL * i - (((_BYTE)v3 + 15) & 7) + v3 + 15;
  return *(struct _LIST_ENTRY **)v5;
}
