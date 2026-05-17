/*
 * XREFs of RtlpHpStackTraceHeapDestroy @ 0x180061D5C
 * Callers:
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x180104070 (RtlpHpPerHeapStackTraceCleanup.c)
 */

signed __int64 __fastcall RtlpHpStackTraceHeapDestroy(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v6; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_180166388 & 1) != 0 && (dword_180166388 & 2) != 0 )
  {
    v6 = 104LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v6 = 368LL;
    RtlpHpPerHeapStackTraceCleanup(a1 + v6, 0LL, 0LL);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
