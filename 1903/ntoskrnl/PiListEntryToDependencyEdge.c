/*
 * XREFs of PiListEntryToDependencyEdge @ 0x14029D9AC
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x1406FEC58 (PipNotifyDeviceDependencyList.c)
 *     PipDeleteAllDependencyRelations @ 0x140784370 (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14085DD10 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x14085DF68 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x14085DF9C (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x14085E1B4 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x14085E3DC (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x14085E740 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
