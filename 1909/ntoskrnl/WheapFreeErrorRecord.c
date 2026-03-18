/*
 * XREFs of WheapFreeErrorRecord @ 0x1403400D8
 * Callers:
 *     WheaReportHwError @ 0x14033F730 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x1403401A0 (WheapProcessWorkQueueItem.c)
 *     WheapEtwEnableCallback @ 0x14078BA40 (WheapEtwEnableCallback.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 */

__int64 __fastcall WheapFreeErrorRecord(ULONG_PTR a1)
{
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 28), 0);
  else
    return ExFreeHeapPool(a1);
}
