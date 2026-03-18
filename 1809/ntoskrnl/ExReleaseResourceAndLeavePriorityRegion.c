/*
 * XREFs of ExReleaseResourceAndLeavePriorityRegion @ 0x14031B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     PsBoostThreadIoEx @ 0x1400BBF70 (PsBoostThreadIoEx.c)
 */

_QWORD *__fastcall ExReleaseResourceAndLeavePriorityRegion(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  ExReleaseResourceLite(a1);
  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
}
