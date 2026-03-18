/*
 * XREFs of MiGetAggregateWorkingSetSize @ 0x1402D8DD0
 * Callers:
 *     MmLogSystemShareablePfnInfo @ 0x140898260 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     MiGetAggregationVm @ 0x1402D8DF8 (MiGetAggregationVm.c)
 */

__int64 __fastcall MiGetAggregateWorkingSetSize(__int64 a1)
{
  __int64 AggregationVm; // rax
  __int64 v2; // rdx

  AggregationVm = MiGetAggregationVm(a1);
  if ( AggregationVm )
    return *(_QWORD *)(AggregationVm + 8);
  return v2;
}
