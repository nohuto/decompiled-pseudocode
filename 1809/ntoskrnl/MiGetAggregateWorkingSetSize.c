/*
 * XREFs of MiGetAggregateWorkingSetSize @ 0x1402BF7FC
 * Callers:
 *     MmLogSystemShareablePfnInfo @ 0x14085C930 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     MiGetAggregationVm @ 0x1402BF824 (MiGetAggregationVm.c)
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
