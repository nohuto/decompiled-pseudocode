/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x180105188
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180018460 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpStackTraceAllocRemove @ 0x1801049E4 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180104F0C (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackRemove @ 0x180115F50 (RtlStackDbStackRemove.c)
 */

void __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_180166388 & 1) != 0
    && (dword_180166388 & 2) != 0
    && RtlpHpStackTraceHeapGetContext(a1, 0, (PVOID *)&v5) >= 0 )
  {
    v4 = RtlpHpStackTraceAllocRemove(v5, a2);
    if ( v4 )
      RtlStackDbStackRemove(&qword_180166390, v4);
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
