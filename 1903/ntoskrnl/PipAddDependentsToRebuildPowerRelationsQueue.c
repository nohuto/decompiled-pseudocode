/*
 * XREFs of PipAddDependentsToRebuildPowerRelationsQueue @ 0x140770138
 * Callers:
 *     IoResolveDependency @ 0x140192810 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x1406A25E4 (PnpDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14085DD10 (IoDuplicateDependency.c)
 * Callees:
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1406FEA24 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiGetDependentList @ 0x1406FED34 (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x14085DF68 (PiEnumerateDependentListEntry.c)
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
