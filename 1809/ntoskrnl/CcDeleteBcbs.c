/*
 * XREFs of CcDeleteBcbs @ 0x14016059C
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14007C260 (CcDeleteSharedCacheMap.c)
 *     CcSetFileSizesEx @ 0x14007CFB0 (CcSetFileSizesEx.c)
 * Callees:
 *     CcDeallocateBcb @ 0x140020F14 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14002124C (CcDeductDirtyPages.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400223FC (CcAdjustVacbLevelLockCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall CcDeleteBcbs(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r14
  __int64 Partition; // r15
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  struct _KEVENT *v11; // rcx
  unsigned __int8 OldIrql; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v4 = (_QWORD *)(a1 + 16);
  Partition = CcGetPartition((_QWORD *)a1, a2, a3);
  v6 = (_QWORD *)*v4;
  while ( v6 != v4 )
  {
    v7 = v6 - 2;
    v8 = v6;
    v6 = (_QWORD *)*v6;
    if ( *(_WORD *)v7 == 765 )
    {
      if ( *((_DWORD *)v7 + 16) )
        KeBugCheckEx(0x34u, 0xCE4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v9 = (_QWORD *)v8[1];
      if ( (_QWORD *)v6[1] != v8 || (_QWORD *)*v9 != v8 )
        __fastfail(3u);
      *v9 = v6;
      v6[1] = v9;
      if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
        CcAdjustVacbLevelLockCount(a1, v7[1], -1);
      if ( v7[23] )
      {
        v10 = *(_QWORD *)(v7[7] + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v7[7] + 16LL)) )
        {
          v11 = *(struct _KEVENT **)(v10 + 184);
          if ( v11 )
            KeSetEvent(v11, 0, 0);
        }
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
      if ( *((_BYTE *)v7 + 2) )
        CcDeductDirtyPages(a1, *((_DWORD *)v7 + 1) >> 12);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
      CcDeallocateBcb((char *)v7);
    }
  }
}
