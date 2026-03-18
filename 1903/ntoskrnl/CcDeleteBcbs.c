/*
 * XREFs of CcDeleteBcbs @ 0x14016A228
 * Callers:
 *     CcSetFileSizesEx @ 0x14007D170 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x14007F890 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     CcDeallocateBcb @ 0x1400793C8 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14007A234 (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 *     CcAdjustVacbLevelLockCount @ 0x14007AFE4 (CcAdjustVacbLevelLockCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall CcDeleteBcbs(__int64 a1)
{
  _QWORD *v2; // r14
  __int64 Partition; // r15
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rbp
  struct _KEVENT *v9; // rcx
  unsigned __int8 OldIrql; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (_QWORD *)(a1 + 16);
  Partition = CcGetPartition((_QWORD *)a1);
  v4 = (_QWORD *)*v2;
  while ( v4 != v2 )
  {
    v5 = v4 - 2;
    v6 = v4;
    v4 = (_QWORD *)*v4;
    if ( *(_WORD *)v5 == 765 )
    {
      if ( *((_DWORD *)v5 + 16) )
        KeBugCheckEx(0x34u, 0xCE1uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v7 = (_QWORD *)v6[1];
      if ( (_QWORD *)v4[1] != v6 || (_QWORD *)*v7 != v6 )
        __fastfail(3u);
      *v7 = v4;
      v4[1] = v7;
      if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
        CcAdjustVacbLevelLockCount(a1, v5[1], -1);
      if ( v5[23] )
      {
        v8 = *(_QWORD *)(v5[7] + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v5[7] + 16LL)) )
        {
          v9 = *(struct _KEVENT **)(v8 + 184);
          if ( v9 )
            KeSetEvent(v9, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v8 + 544));
        }
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
      if ( *((_BYTE *)v5 + 2) )
        CcDeductDirtyPages(a1, *((_DWORD *)v5 + 1) >> 12);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
      CcDeallocateBcb((char *)v5);
    }
  }
}
