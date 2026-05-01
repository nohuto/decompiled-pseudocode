/*
 * XREFs of memcmp_0 @ 0x18009B2CB
 * Callers:
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1800DEC10 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     InsertEventEntryInLookUpTable @ 0x1800E3D40 (InsertEventEntryInLookUpTable.c)
 *     ?MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z @ 0x1802DC344 (-MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x18033AFD0 (--$_Insert_nohint@AEAU-$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V-$ComP.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180341898 (-find@-$_Tree@V-$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V-$ComPtr@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
