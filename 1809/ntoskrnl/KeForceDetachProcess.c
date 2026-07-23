/*
 * XREFs of KeForceDetachProcess @ 0x140128044
 * Callers:
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1400ECDE4 (MiUnlockStealVm.c)
 *     MmQueryCommitReleaseState @ 0x140130A24 (MmQueryCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4DC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4FB4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A5164 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402A5774 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x14056A410 (PopHandleNextState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
