/*
 * XREFs of PiListEntryToDependencyEdge @ 0x14029D70C
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x140700A38 (PipNotifyDeviceDependencyList.c)
 *     PipDeleteAllDependencyRelations @ 0x1407866D0 (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14085D410 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x14085D668 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x14085D69C (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x14085D8B4 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x14085DADC (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x14085DE40 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
