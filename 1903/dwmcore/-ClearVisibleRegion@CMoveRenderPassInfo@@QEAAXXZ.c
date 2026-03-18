/*
 * XREFs of ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x1801A8FAC
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18007D678 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008BF40 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800B9890 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800DC514 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?ResetWindowMove@CWindowNode@@UEAA_NXZ @ 0x1801A9A40 (-ResetWindowMove@CWindowNode@@UEAA_NXZ.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x1801C45DC (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CMoveRenderPassInfo::ClearVisibleRegion(CMoveRenderPassInfo *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    DeleteObject(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}
