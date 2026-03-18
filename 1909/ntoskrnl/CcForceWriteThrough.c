/*
 * XREFs of CcForceWriteThrough @ 0x1401370E0
 * Callers:
 *     CcPrepareMdlWrite @ 0x140136D70 (CcPrepareMdlWrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     CcCanIWriteStream @ 0x14007BEA4 (CcCanIWriteStream.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcForceWriteThrough(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  char v4; // di
  KSPIN_LOCK *Partition; // r14
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
    Partition = (KSPIN_LOCK *)CcGetPartition((_QWORD *)a3);
  else
    Partition = (KSPIN_LOCK *)*((_QWORD *)PspSystemPartition + 1);
  if ( (*(_DWORD *)(a1 + 80) & 0x1000000) != 0 && !CcCanIWriteStream(Partition, a1, a2, 0, 0)
    || a4 && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) <= 0 && (*(_DWORD *)(a1 + 80) & 0x8000) == 0 )
  {
    v4 = 1;
    if ( a4 )
    {
      if ( (*(_DWORD *)(a3 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock(Partition + 16, &LockHandle);
        *(_DWORD *)(a3 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(OldIrql);
      }
    }
  }
  return v4;
}
