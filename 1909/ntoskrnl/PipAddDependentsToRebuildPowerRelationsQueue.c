/*
 * XREFs of PipAddDependentsToRebuildPowerRelationsQueue @ 0x14077371C
 * Callers:
 *     IoResolveDependency @ 0x140192FF0 (IoResolveDependency.c)
 *     PnpDeleteAllDependencyRelations @ 0x14066FAC4 (PnpDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14085D410 (IoDuplicateDependency.c)
 * Callees:
 *     PipAddtoRebuildPowerRelationsQueue @ 0x140700804 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PiGetDependentList @ 0x140700B14 (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x14085D668 (PiEnumerateDependentListEntry.c)
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
