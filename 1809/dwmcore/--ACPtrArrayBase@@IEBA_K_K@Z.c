/*
 * XREFs of ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A2C30
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A100 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180032028 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004E574 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18005E6B0 (-NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180068320 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180095C10 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x1800A9030 (-ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800A9650 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800EA3F8 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1801B6734 (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x1801B68B4 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?HasSecondaryRepresentations@CVisual@@QEAA_NXZ @ 0x1801B7100 (-HasSecondaryRepresentations@CVisual@@QEAA_NXZ.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x1801B8154 (-ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ.c)
 *     ?GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV?$CPtrArray@VCResource@@@@PEA_N3@Z @ 0x1801D4734 (-GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV-$CPtrA.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1801F9560 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPtrArrayBase::operator[](__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 *v3; // rcx
  unsigned __int64 v4; // r8

  v2 = *a1;
  v3 = (unsigned __int64 *)(*a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (v2 & 2) != 0 )
    v4 = *v3;
  else
    v4 = v2 & 1;
  if ( a2 >= v4 )
    return 0LL;
  if ( v4 == 1 )
    return v2 & 0xFFFFFFFFFFFFFFFCuLL;
  return v3[a2 + 2];
}
