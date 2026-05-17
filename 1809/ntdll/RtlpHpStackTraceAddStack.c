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
 *     RtlStackDbStackAdd @ 0x1801158F0 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180115FB4 (RtlStackDbStackRemove.c)
 */

signed __int64 __fastcall RtlpHpStackTraceAddStack(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  PVOID *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  signed __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_180166388 & 1) != 0
    && (dword_180166388 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 1LL, &v12) >= 0 )
  {
    v11 = RtlpHpEnvHandle;
    v7 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0x600uLL, 0, &v11);
    v5 = (__int64)v7;
    if ( v7 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v7, 0LL) )
      {
        v8 = RtlStackDbStackAdd(&qword_180166390, v5);
        v9 = v8;
        if ( v8 )
        {
          if ( (unsigned int)RtlpHpStackTraceAllocAdd(v12, a2, v8) )
            v9 = 0LL;
          if ( v9 )
            RtlStackDbStackRemove(&qword_180166390, v9);
        }
      }
    }
  }
  result = RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
  if ( v5 )
  {
    v11 = RtlpHpEnvHandle;
    return RtlpHpMetadataFree(v5, &v11);
  }
  return result;
}
