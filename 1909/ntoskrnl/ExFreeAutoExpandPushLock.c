/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x14016E9C0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     ExCleanupAutoExpandPushLock @ 0x14008E890 (ExCleanupAutoExpandPushLock.c)
 */

__int64 __fastcall ExFreeAutoExpandPushLock(ULONG_PTR BugCheckParameter2)
{
  ExCleanupAutoExpandPushLock(BugCheckParameter2);
  return ExFreeHeapPool(BugCheckParameter2);
}
