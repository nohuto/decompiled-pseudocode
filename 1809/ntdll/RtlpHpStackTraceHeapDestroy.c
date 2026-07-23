/*
 * XREFs of RtlpHpStackTraceHeapDestroy @ 0x180061D5C
 * Callers:
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x180104070 (RtlpHpPerHeapStackTraceCleanup.c)
 */

void __fastcall RtlpHpStackTraceHeapDestroy(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_180166388 & 1) != 0 && (dword_180166388 & 2) != 0 )
  {
    v2 = 104LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v2 = 368LL;
    RtlpHpPerHeapStackTraceCleanup(a1 + v2, 0LL, 0LL);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
