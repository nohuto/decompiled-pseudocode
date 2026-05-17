/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x180101C3C
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlpHpMetadataAlloc @ 0x18004CFA0 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18004F730 (RtlpHpMetadataFree.c)
 *     RtlCaptureStackBackTrace @ 0x180074CA0 (RtlCaptureStackBackTrace.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180101D60 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x1801025FC (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackAdd @ 0x180114C98 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180115284 (RtlStackDbStackRemove.c)
 */

signed __int64 __fastcall RtlpHpStackTraceAddStack(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
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
  if ( (dword_1801663A8 & 1) != 0
    && (dword_1801663A8 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 1LL, &v12) >= 0 )
  {
    v11 = RtlpHpEnvHandle;
    v7 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0x600uLL, 0, &v11);
    v5 = (__int64)v7;
    if ( v7 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v7, 0LL) )
      {
        v8 = RtlStackDbStackAdd(&qword_1801663B0, v5);
        v9 = v8;
        if ( v8 )
        {
          if ( (unsigned int)RtlpHpStackTraceAllocAdd(v12, a2, v8) )
            v9 = 0LL;
          if ( v9 )
            RtlStackDbStackRemove(&qword_1801663B0, v9);
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
