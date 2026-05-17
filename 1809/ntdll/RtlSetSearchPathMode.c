/*
 * XREFs of RtlSetSearchPathMode @ 0x1800027B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpInvalidatePathCache @ 0x1800836A0 (RtlpInvalidatePathCache.c)
 */

__int64 __fastcall RtlSetSearchPathMode(int a1)
{
  int v2; // ebx
  __int64 v3; // rdi

  if ( (a1 & 0xFFFE7FFE) != 0 )
    return 3221225485LL;
  if ( (a1 & 1) != 0 )
  {
    if ( (a1 & 0x10000) == 0 )
      goto LABEL_4;
    return 3221225485LL;
  }
  if ( (a1 & 0x18000) != 0x10000 )
    return 3221225485LL;
LABEL_4:
  RtlAcquireSRWLockExclusive(&unk_180166300);
  if ( (RtlpSearchPathMode & 0x8000) == 0 || (a1 & 0x8000) != 0 )
  {
    RtlpSearchPathMode = a1;
    v2 = 0;
  }
  else
  {
    v2 = -1073741790;
  }
  RtlReleaseSRWLockExclusive(&unk_180166300);
  if ( v2 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v3 = RtlpInvalidatePathCache(&RtlpSearchPath);
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
  }
  return (unsigned int)v2;
}
