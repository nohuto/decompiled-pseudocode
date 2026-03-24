/*
 * XREFs of KeForceDetachProcess @ 0x140127F74
 * Callers:
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB40C (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1400ECD64 (MiUnlockStealVm.c)
 *     MmQueryCommitReleaseState @ 0x140130954 (MmQueryCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4BD4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4DC4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A4F74 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402A5584 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140569410 (PopHandleNextState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

__int64 __fastcall KeForceDetachProcess(char *a1, char a2)
{
  bool v3; // cf
  char *v4; // rcx
  int v5; // edx
  char v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]

  v3 = a1 != 0LL;
  v4 = &v7;
  v5 = a2 & 1;
  v8 &= -(__int64)v3;
  if ( a1 )
    v4 = a1;
  return KiUnstackDetachProcess((__int64)v4, (unsigned int)(2 * v5 + 1));
}
