/*
 * XREFs of GetThreadUILanguage_0 @ 0x18008578E
 * Callers:
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x18002D548 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     ?SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z @ 0x1802F7630 (-SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z.c)
 *     _lambda_a818a4d1196700db3f726f95e02b7ab7_::operator() @ 0x180301A34 (_lambda_a818a4d1196700db3f726f95e02b7ab7_--operator().c)
 *     ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x180302CB8 (-_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z.c)
 *     ?MapToChildNavDir@ElementHelpers@@YAII@Z @ 0x180308BD8 (-MapToChildNavDir@ElementHelpers@@YAII@Z.c)
 *     ?_HorizontalNavigateFromIndex@CSwitchItemGrid@@AEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KI@Z @ 0x180309BD0 (-_HorizontalNavigateFromIndex@CSwitchItemGrid@@AEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@M.c)
 *     ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x18030A7DC (-RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMet.c)
 *     ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x180310260 (-v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ.c)
 *     ?v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x180310460 (-v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA-AV-$ComPtr@UIMultitaskingViewElement@@.c)
 *     ?Scroll@AccessibleElementBase@@UEAAJW4ScrollAmount@@0@Z @ 0x180315AE0 (-Scroll@AccessibleElementBase@@UEAAJW4ScrollAmount@@0@Z.c)
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x180317880 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ?LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z @ 0x180319008 (-LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z.c)
 *     ?v_LayoutChildren@CScrollButtonContainer@@MEAAXXZ @ 0x18031BE20 (-v_LayoutChildren@CScrollButtonContainer@@MEAAXXZ.c)
 *     ?v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ @ 0x180322730 (-v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18037D5B0 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LANGID __stdcall GetThreadUILanguage_0()
{
  return GetThreadUILanguage();
}
