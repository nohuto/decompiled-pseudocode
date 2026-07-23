/*
 * XREFs of PsReportProcessMemoryLimitViolation @ 0x14088A8D4
 * Callers:
 *     MiChargeProcessCommitment @ 0x14004D1C0 (MiChargeProcessCommitment.c)
 * Callees:
 *     PspSendJobNotification @ 0x140137EBC (PspSendJobNotification.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1405FF2B4 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x1405FF360 (PspLockJobMemoryLimitsShared.c)
 */

__int64 PsReportProcessMemoryLimitViolation()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  result = Process[1].Affinity.Bitmap[16];
  v3 = *(_QWORD *)(result + 816);
  if ( v3 && (*(_DWORD *)(v3 + 256) & 0x100) != 0 )
  {
    PspLockJobMemoryLimitsShared(*(_QWORD *)(result + 816), (__int64)CurrentThread);
    if ( *(_QWORD *)(v3 + 456) && (*(_DWORD *)(v3 + 876) & 0x200) != 0 && (Process[1].DirectoryTableBase & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0x20u);
      PspSendJobNotification(v3, 9LL, (int)Process[1].Header.WaitListHead.Flink, 1);
    }
    return PspUnlockJobMemoryLimitsShared(v3, (__int64)CurrentThread);
  }
  return result;
}
