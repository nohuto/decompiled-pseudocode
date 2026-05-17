/*
 * XREFs of RtlLogStackBackTraceEx @ 0x180061BC0
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1800617A8 (RtlpInitializeHeapSegment.c)
 *     RtlInitializeResource @ 0x180061A10 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180061B00 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpAllocateTags @ 0x1800F2CB0 (RtlpAllocateTags.c)
 *     RtlLogStackBackTrace @ 0x1800FD910 (RtlLogStackBackTrace.c)
 *     RtlDebugAllocateHeap @ 0x1801071A0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x1801076BC (RtlDebugCreateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801081A8 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     RtlStdLogStackTrace @ 0x1800FDBE0 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1800FDC40 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800FE010 (RtlpStdGetRecordedStackTraceIndex.c)
 */

__int64 __fastcall RtlLogStackBackTraceEx(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int RecordedStackTraceIndex; // edi

  v1 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    return 0LL;
  v3 = RtlStdLogStackTrace(RtlpStackTraceDatabase, a1);
  v4 = v3;
  if ( v3 )
  {
    RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v1, v3);
    if ( !RecordedStackTraceIndex )
      RtlStdReleaseStackTrace(v1, v4);
  }
  else
  {
    return 0;
  }
  return RecordedStackTraceIndex;
}
