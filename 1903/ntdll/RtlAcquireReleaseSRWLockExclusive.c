/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x18007D130
 * Callers:
 *     sub_180050520 @ 0x180050520 (sub_180050520.c)
 *     RtlCompleteProcessCloning @ 0x18009B8E0 (RtlCompleteProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

void __cdecl RtlAcquireReleaseSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v2, 0);
  if ( ((__int64)SRWLock->Ptr & 1) != 0 )
  {
    RtlAcquireSRWLockExclusive(SRWLock);
    RtlReleaseSRWLockExclusive(SRWLock);
  }
}
