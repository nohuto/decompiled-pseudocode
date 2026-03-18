/*
 * XREFs of GreLockVisRgnPublish @ 0x1C0029FF0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 GreLockVisRgnPublish()
{
  EngAcquireSemaphore(ghsemVisRgnPublish);
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemVisRgnPublish", ghsemVisRgnPublish, 9LL);
}
