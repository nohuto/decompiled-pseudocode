/*
 * XREFs of MiGetAggregationVm @ 0x1402D8B58
 * Callers:
 *     MiAllocateWsle @ 0x1400AE730 (MiAllocateWsle.c)
 *     MiGetAggregateWorkingSetSize @ 0x1402D8B30 (MiGetAggregateWorkingSetSize.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    return &dword_140466F80;
  else
    return 0LL;
}
