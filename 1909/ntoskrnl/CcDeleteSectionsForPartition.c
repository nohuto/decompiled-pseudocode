/*
 * XREFs of CcDeleteSectionsForPartition @ 0x14027EB34
 * Callers:
 *     CcExitPartition @ 0x14027EDAC (CcExitPartition.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDeleteSharedCacheMap @ 0x14007FC90 (CcDeleteSharedCacheMap.c)
 *     CcScheduleLazyWriteScan @ 0x14012013C (CcScheduleLazyWriteScan.c)
 *     MmGetControlAreaPartition @ 0x140124950 (MmGetControlAreaPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall CcDeleteSectionsForPartition(_QWORD **a1, __int64 a2)
{
  _QWORD *i; // rcx
  _QWORD *v5; // rbx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  int v8; // eax
  unsigned __int8 v9; // bl
  struct _KPRCB *v10; // rcx
  unsigned __int8 v11; // bl
  struct _KPRCB *v12; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v15[5]; // [rsp+48h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v15, 0, 0x20uLL);
LABEL_2:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &LockHandle);
  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v5 = i - 17;
    if ( (i[2] & 0x800) == 0 )
    {
      if ( MmGetControlAreaPartition(*(_QWORD *)((v5[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28)) != *(_QWORD *)(a2 + 8) )
        KeBugCheckEx(0x34u, 0x2CBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( (_QWORD *)v5[28] != v5 + 28 )
        goto LABEL_8;
      v8 = *((_DWORD *)v5 + 38);
      if ( (v8 & 0x8000) != 0 )
      {
        *((_DWORD *)v5 + 38) = v8 & 0xFFFF7FFF;
LABEL_8:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(OldIrql);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        goto LABEL_2;
      }
      if ( (v8 & 0x20) != 0 || *((_DWORD *)v5 + 1) || *((_DWORD *)v5 + 28) )
      {
        *((_DWORD *)v5 + 38) = v8 | 0x10000;
        LOWORD(v15[1]) = 0;
        HIDWORD(v15[1]) = 0;
        v15[3] = &v15[2];
        v15[2] = &v15[2];
        BYTE2(v15[1]) = 6;
        v15[0] = v5[34];
        v5[34] = (char *)v15 + 1;
        CcScheduleLazyWriteScan(a2, 1, 1);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v9 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v10 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v10);
        }
        __writecr8(v9);
        KeWaitForSingleObject(&v15[1], Executive, 0, 0, 0LL);
      }
      else
      {
        CcDeleteSharedCacheMap((char *)v5, 0LL, &LockHandle, 0, 0LL);
      }
      goto LABEL_2;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v11 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v12);
  }
  result = v11;
  __writecr8(v11);
  return result;
}
