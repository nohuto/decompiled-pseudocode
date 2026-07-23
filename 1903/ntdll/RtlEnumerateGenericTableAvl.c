/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x180067050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
