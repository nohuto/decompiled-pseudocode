/*
 * XREFs of KeForceAttachProcess @ 0x1400CBE6C
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiLockStealUserVm @ 0x1400C2478 (MiLockStealUserVm.c)
 *     MmQueryCommitReleaseState @ 0x140131454 (MmQueryCommitReleaseState.c)
 *     MiForceAttachProcess @ 0x1402BB050 (MiForceAttachProcess.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBCC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402BBEB4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402BC064 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402BC654 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140598DB0 (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall KeForceAttachProcess(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  _BYTE v7[48]; // [rsp+30h] [rbp-48h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    ApcStateIndex = CurrentThread->ApcStateIndex;
    if ( ApcStateIndex )
      KeBugCheckEx(5u, BugCheckParameter1, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  }
  return KiStackAttachProcess(BugCheckParameter1);
}
