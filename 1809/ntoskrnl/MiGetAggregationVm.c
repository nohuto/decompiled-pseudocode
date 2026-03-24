/*
 * XREFs of MiGetAggregationVm @ 0x1402BF634
 * Callers:
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     MiGetAggregateWorkingSetSize @ 0x1402BF60C (MiGetAggregateWorkingSetSize.c)
 * Callees:
 *     <none>
 */

int *__fastcall MiGetAggregationVm(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    return &dword_14043B780;
  else
    return 0LL;
}
