/*
 * XREFs of ExpTimeRefreshCallback @ 0x140171DA0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 */

__int64 ExpTimeRefreshCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&ExpTimeRefreshDpc, 0LL, 0LL, 0LL, 0);
}
