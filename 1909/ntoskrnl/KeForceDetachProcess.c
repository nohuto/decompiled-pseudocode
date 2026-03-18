/*
 * XREFs of KeForceDetachProcess @ 0x1400CBE04
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1400C4688 (MiUnlockStealVm.c)
 *     MmQueryCommitReleaseState @ 0x140131454 (MmQueryCommitReleaseState.c)
 *     MiForceDetachProcess @ 0x1402BB068 (MiForceDetachProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBCC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402BBEB4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402BC064 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402BC654 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140598DB0 (PopHandleNextState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall KeForceDetachProcess(_BYTE *a1, char a2)
{
  int v4; // ebx
  _BYTE *v5; // rcx
  _BYTE v7[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v7, 0, sizeof(v7));
  v4 = a2 & 1;
  v5 = v7;
  if ( a1 )
    v5 = a1;
  return KiUnstackDetachProcess(v5, (unsigned int)(2 * v4 + 1));
}
