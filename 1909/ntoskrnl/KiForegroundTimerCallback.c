/*
 * XREFs of KiForegroundTimerCallback @ 0x14012DE70
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_14044D8C8, 0LL, 0LL, 0LL, 0);
}
