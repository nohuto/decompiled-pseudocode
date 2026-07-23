/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x1800704AC
 * Callers:
 *     LdrpUnmapModule @ 0x180070468 (LdrpUnmapModule.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800DFC84 (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x1800704E0 (RtlxRemoveInvertedFunctionTable.c)
 */

void __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  RtlxRemoveInvertedFunctionTable(v2, a1);
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
