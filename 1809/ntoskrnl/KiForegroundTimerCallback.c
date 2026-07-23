/*
 * XREFs of KiForegroundTimerCallback @ 0x14012DC60
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_140422FE8, 0LL, 0LL, 0LL, 0);
}
