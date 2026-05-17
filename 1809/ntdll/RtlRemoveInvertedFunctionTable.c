/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x180076BDC
 * Callers:
 *     LdrpUnmapModule @ 0x180076B98 (LdrpUnmapModule.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E2034 (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180076C10 (RtlxRemoveInvertedFunctionTable.c)
 */

signed __int64 __fastcall RtlRemoveInvertedFunctionTable(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v5; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpInvertedFunctionTableSRWLock, a2, a3, a4);
  RtlxRemoveInvertedFunctionTable(v5, a1);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
