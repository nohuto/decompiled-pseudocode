/*
 * XREFs of PiListEntryToDependencyEdge @ 0x1402877B0
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x1406EB7C0 (PipNotifyDeviceDependencyList.c)
 *     PipDeleteAllDependencyRelations @ 0x14075D81C (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x1408238E0 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x140823B38 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x140823B6C (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x140823D84 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x140823FAC (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x140824310 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
