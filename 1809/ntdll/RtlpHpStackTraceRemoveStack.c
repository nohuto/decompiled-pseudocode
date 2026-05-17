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
 *     RtlStackDbStackRemove @ 0x180115FB4 (RtlStackDbStackRemove.c)
 */

signed __int64 __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_180166388 & 1) != 0 && (dword_180166388 & 2) != 0 && (int)RtlpHpStackTraceHeapGetContext(a1, 0, &v10) >= 0 )
  {
    v8 = RtlpHpStackTraceAllocRemove(v10, (unsigned __int64)a2, v6, v7);
    if ( v8 )
      RtlStackDbStackRemove(&qword_180166390, v8);
  }
  return RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
