/*
 * XREFs of ExpTimeRefreshCallback @ 0x1401716B0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400BCAF0 (KiInsertQueueDpc.c)
 */

__int64 ExpTimeRefreshCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&ExpTimeRefreshDpc, 0LL, 0LL, 0LL, 0);
}
