/*
 * XREFs of ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x18015ACEC
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A100 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004E574 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18005D180 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x1800A93D8 (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800E8070 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?ResetWindowMove@CWindowNode@@UEAA_NXZ @ 0x18015B840 (-ResetWindowMove@CWindowNode@@UEAA_NXZ.c)
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
