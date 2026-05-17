/*
 * XREFs of RtlpCallInterceptRoutine @ 0x1800EFE14
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpFreeHeap @ 0x180040830 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpReAllocateHeap @ 0x180044EDC (RtlpHpReAllocateHeap.c)
 *     RtlDestroyHeap @ 0x18004AA00 (RtlDestroyHeap.c)
 *     RtlpHpAllocateHeap @ 0x18004EADC (RtlpHpAllocateHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800F1160 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpHeapTrkInterceptor @ 0x1800F8170 (RtlpHeapTrkInterceptor.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x180104300 (RtlpStackTraceDatabaseLogPrefix.c)
 */

__int64 __fastcall RtlpCallInterceptRoutine(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int16 v5; // cx

  if ( a1 && (v5 = a1 - 1, v5 < 2u) )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))RtlpInterceptorRoutines[v5])(a2, a3, a4, a5);
  else
    return 3221225473LL;
}
