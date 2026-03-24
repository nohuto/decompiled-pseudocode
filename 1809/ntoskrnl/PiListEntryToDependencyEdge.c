/*
 * XREFs of PiListEntryToDependencyEdge @ 0x1402878B0
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x1406EB7A0 (PipNotifyDeviceDependencyList.c)
 *     PipDeleteAllDependencyRelations @ 0x14075D7FC (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x1408238C0 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x140823B18 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x140823B4C (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x140823D64 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x140823F8C (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x1408242F0 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
