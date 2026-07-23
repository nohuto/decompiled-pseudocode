/*
 * XREFs of MiReplicatePteChange @ 0x140175014
 * Callers:
 *     MiCreateSystemPageTable @ 0x140026730 (MiCreateSystemPageTable.c)
 *     MiDeleteVaTail @ 0x140075870 (MiDeleteVaTail.c)
 *     MiDeleteSystemPageTable @ 0x14011F0C0 (MiDeleteSystemPageTable.c)
 *     MiZeroAndFlushPtes @ 0x14012344C (MiZeroAndFlushPtes.c)
 *     MiDecommitLargePoolVa @ 0x14015B3E0 (MiDecommitLargePoolVa.c)
 *     MiPfnRangeIsZero @ 0x140184794 (MiPfnRangeIsZero.c)
 *     MiInitializeShadowPageTable @ 0x14072B5E4 (MiInitializeShadowPageTable.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiReplicatePteChangeToProcess @ 0x140175178 (MiReplicatePteChangeToProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReplicatePteChange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rdx
  _KPROCESS *Process; // r15
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 *i; // rbx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  _KPROCESS *v12; // rcx
  int DirectoryTableBase_high; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a1;
  v4 = 3LL;
  do
  {
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  Process = KeGetCurrentThread()->ApcState.Process;
  LeafVa = MiGetLeafVa(a1);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v8 = (__int64 *)(v7 + 16);
  }
  else
  {
    v7 = 0LL;
    v8 = &qword_14043B0A8;
  }
  KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
  for ( i = (__int64 *)*v8; i != v8; i = (__int64 *)*i )
  {
    v12 = (_KPROCESS *)((char *)i + (v7 != 0 ? -832LL : -1552LL));
    DirectoryTableBase_high = HIDWORD(v12[1].DirectoryTableBase);
    if ( (DirectoryTableBase_high & 0x800000) == 0 )
    {
      if ( (DirectoryTableBase_high & 0xC00) != 0 && (DirectoryTableBase_high & 0x80u) == 0 )
      {
        if ( v12 != Process )
          MiReplicatePteChangeToProcess(v12, v3, a2);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)&v12[1].DirectoryTableBase + 1, 0x800000u);
      }
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
