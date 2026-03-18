/*
 * XREFs of KeForceAttachProcess @ 0x14001674C
 * Callers:
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB3EC (MiTrimSharedPageFromViews.c)
 *     MiLockStealUserVm @ 0x1400EDBF4 (MiLockStealUserVm.c)
 *     MmQueryCommitReleaseState @ 0x140130934 (MmQueryCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4AD4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4CC4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A4E74 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402A5484 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140569410 (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
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
