/*
 * XREFs of KeForceDetachProcess @ 0x14008E81C
 * Callers:
 *     MiUnlockStealVm @ 0x1400A1594 (MiUnlockStealVm.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1401308C4 (MmQueryCommitReleaseState.c)
 *     MiForceDetachProcess @ 0x1402BB308 (MiForceDetachProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402BC154 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402BC304 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402BC8F4 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140598DD0 (PopHandleNextState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
