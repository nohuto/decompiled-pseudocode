/*
 * XREFs of PipAddDependentsToRebuildPowerRelationsQueue @ 0x140739E08
 * Callers:
 *     IoResolveDependency @ 0x140181BB0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14059F218 (PnpDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x1408238E0 (IoDuplicateDependency.c)
 * Callees:
 *     PiGetDependentList @ 0x1406EB644 (PiGetDependentList.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1406EB940 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiEnumerateDependentListEntry @ 0x140823B38 (PiEnumerateDependentListEntry.c)
 */

__int64 *__fastcall PipAddDependentsToRebuildPowerRelationsQueue(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  result = PiGetDependentList(a1);
  v2 = result;
  v3 = (__int64 *)*result;
  while ( v3 != v2 )
  {
    result = (__int64 *)PiEnumerateDependentListEntry(v3, &v4, 0LL);
    v3 = (__int64 *)*v3;
    if ( v4 )
      result = PipAddtoRebuildPowerRelationsQueue(v4);
  }
  return result;
}
