/*
 * XREFs of ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180080598
 * Callers:
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180045FC0 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18007D678 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x18007DBD0 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180086C40 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18008BA20 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008BF40 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800C4704 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800DC594 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C2BA0 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1801C2F28 (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x1801C3054 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?HasSecondaryRepresentations@CVisual@@QEAA_NXZ @ 0x1801C3888 (-HasSecondaryRepresentations@CVisual@@QEAA_NXZ.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x1801C4660 (-ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ.c)
 *     ?GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV?$CPtrArray@VCResource@@@@PEA_N3@Z @ 0x180205C8C (-GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV-$CPtrA.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x18023EE8C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
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
