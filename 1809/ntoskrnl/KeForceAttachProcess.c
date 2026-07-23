/*
 * XREFs of KeForceAttachProcess @ 0x14001674C
 * Callers:
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiLockStealUserVm @ 0x1400EDC94 (MiLockStealUserVm.c)
 *     MmQueryCommitReleaseState @ 0x140130A24 (MmQueryCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4DC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4FB4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A5164 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402A5774 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x14056A410 (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall KeForceAttachProcess(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // cl

  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    ApcStateIndex = CurrentThread->ApcStateIndex;
    if ( ApcStateIndex )
      KeBugCheckEx(5u, BugCheckParameter1, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  }
  return KiStackAttachProcess(BugCheckParameter1);
}
