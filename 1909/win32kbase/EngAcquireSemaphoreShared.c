/*
 * XREFs of EngAcquireSemaphoreShared @ 0x1C012E100
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0075F30 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

void __stdcall EngAcquireSemaphoreShared(HSEMAPHORE hsem)
{
  __int64 v1; // r8

  if ( hsem )
    ExEnterPriorityRegionAndAcquireResourceShared(hsem);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"hsem", (__int64)hsem, v1);
}
