/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x18010449C
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180003790 (RtlCaptureStackBackTrace.c)
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpMetadataAlloc @ 0x18006461C (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180064E90 (RtlpHpMetadataFree.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1801045C0 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180104F0C (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackAdd @ 0x18011588C (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180115F50 (RtlStackDbStackRemove.c)
 */

void __fastcall RtlpHpStackTraceAddStack(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  PVOID *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_180166388 & 1) != 0
    && (dword_180166388 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 1LL, &v9) >= 0 )
  {
    v8 = RtlpHpEnvHandle;
    v5 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0x600uLL, 0, &v8);
    v3 = (__int64)v5;
    if ( v5 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v5, 0LL) )
      {
        v6 = RtlStackDbStackAdd(&qword_180166390, v3);
        v7 = v6;
        if ( v6 )
        {
          if ( (unsigned int)RtlpHpStackTraceAllocAdd(v9, a2, v6) )
            v7 = 0LL;
          if ( v7 )
            RtlStackDbStackRemove(&qword_180166390, v7);
        }
      }
    }
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
  if ( v3 )
  {
    v8 = RtlpHpEnvHandle;
    RtlpHpMetadataFree(v3, &v8);
  }
}
