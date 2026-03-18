/*
 * XREFs of GreLockVisRgnPublish @ 0x1C00336C0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 GreLockVisRgnPublish()
{
  EngAcquireSemaphore(ghsemVisRgnPublish);
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemVisRgnPublish", ghsemVisRgnPublish, 9LL);
}
