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

signed __int64 __fastcall RtlpHpStackTraceRemoveStack(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_1801663A8 & 1) != 0 && (dword_1801663A8 & 2) != 0 && (int)RtlpHpStackTraceHeapGetContext(a1, 0, &v8) >= 0 )
  {
    v6 = RtlpHpStackTraceAllocRemove(v8, a2);
    if ( v6 )
      RtlStackDbStackRemove(&qword_1801663B0, v6);
  }
  return RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
