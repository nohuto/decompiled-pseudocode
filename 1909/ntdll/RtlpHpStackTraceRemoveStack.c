/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x180102864
 * Callers:
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180102108 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x1801025FC (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackRemove @ 0x180115284 (RtlStackDbStackRemove.c)
 */

void __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_1801663A8 & 1) != 0
    && (dword_1801663A8 & 2) != 0
    && RtlpHpStackTraceHeapGetContext(a1, 0, (PVOID *)&v5) >= 0 )
  {
    v4 = RtlpHpStackTraceAllocRemove(v5, a2);
    if ( v4 )
      RtlStackDbStackRemove(&qword_1801663B0, v4);
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
