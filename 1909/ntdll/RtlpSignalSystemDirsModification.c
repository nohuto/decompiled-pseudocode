/*
 * XREFs of RtlpSignalSystemDirsModification @ 0x1800DE328
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x180081390 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpInvalidatePathCache @ 0x18007F6E0 (RtlpInvalidatePathCache.c)
 */

signed __int64 RtlpSignalSystemDirsModification()
{
  __int64 v0; // rsi
  __int64 v1; // rdi
  __int64 v2; // rbx
  signed __int64 result; // rax

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v0 = RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v1 = RtlpInvalidatePathCache((__int64 *)&RtlpExeSearchPath);
  v2 = RtlpInvalidatePathCache(&RtlpSearchPath);
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v0 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v0);
  if ( v1 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( v2 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  return result;
}
