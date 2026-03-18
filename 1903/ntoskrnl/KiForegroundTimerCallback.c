/*
 * XREFs of KiForegroundTimerCallback @ 0x14012D420
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400BCAF0 (KiInsertQueueDpc.c)
 */

__int64 KiForegroundTimerCallback()
{
  return KiInsertQueueDpc((ULONG_PTR)&stru_14044DBC8, 0LL, 0LL, 0LL, 0);
}
