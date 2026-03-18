/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x14016E2D0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     ExCleanupAutoExpandPushLock @ 0x1400AD870 (ExCleanupAutoExpandPushLock.c)
 */

__int64 __fastcall ExFreeAutoExpandPushLock(ULONG_PTR BugCheckParameter2)
{
  ExCleanupAutoExpandPushLock(BugCheckParameter2);
  return ExFreeHeapPool(BugCheckParameter2);
}
