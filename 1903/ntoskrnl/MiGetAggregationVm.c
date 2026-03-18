/*
 * XREFs of MiGetAggregationVm @ 0x1402D8DF8
 * Callers:
 *     MiAllocateWsle @ 0x1400CE8B0 (MiAllocateWsle.c)
 *     MiGetAggregateWorkingSetSize @ 0x1402D8DD0 (MiGetAggregateWorkingSetSize.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    return &dword_140467280;
  else
    return 0LL;
}
