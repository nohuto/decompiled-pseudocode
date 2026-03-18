/*
 * XREFs of MiGetAggregateWorkingSetSize @ 0x1402BF50C
 * Callers:
 *     MmLogSystemShareablePfnInfo @ 0x14085B6F0 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     MiGetAggregationVm @ 0x1402BF534 (MiGetAggregationVm.c)
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
