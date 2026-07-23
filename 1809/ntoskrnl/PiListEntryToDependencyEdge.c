/*
 * XREFs of PiListEntryToDependencyEdge @ 0x140287AA0
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x1406ECA40 (PipNotifyDeviceDependencyList.c)
 *     PipDeleteAllDependencyRelations @ 0x14075E9EC (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x140824AC0 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x140824D18 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x140824D4C (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x140824F64 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x14082518C (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x1408254F0 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
