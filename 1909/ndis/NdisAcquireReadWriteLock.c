/*
 * XREFs of NdisAcquireReadWriteLock @ 0x1C00340F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z @ 0x1C001FC58 (-ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z.c)
 *     ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x1C0034200 (-ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z.c)
 *     ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C0091260 (-ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 *     ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C00914A4 (-ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __stdcall NdisAcquireReadWriteLock(PNDIS_RW_LOCK Lock, BOOLEAN fWrite, PLOCK_STATE LockState)
{
  unsigned int *p_RefCount; // rdx
  unsigned __int16 v6; // ax
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rax

  if ( !fWrite )
  {
    LockState->LockState = 0;
    LockState->OldIrql = KfRaiseIrql(2u);
    if ( ndisMaxNumberOfProcessors > 0x40 )
    {
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        if ( !(unsigned int)ndisAcquireReadLockSharedRefCnt(&Lock->SpinLock) )
        {
          v6 = 2;
          goto LABEL_6;
        }
        goto LABEL_5;
      }
      p_RefCount = (unsigned int *)&Lock->16 + KeGetPcr()->Prcb.Number;
    }
    else
    {
      p_RefCount = &Lock->RefCount[KeGetPcr()->Prcb.Number].RefCount;
    }
    ndisAcquireReadLockPerCpuRefCnt(&Lock->SpinLock, p_RefCount);
LABEL_5:
    v6 = 3;
LABEL_6:
    LockState->LockState = v6;
    return;
  }
  LockState->LockState = 1;
  if ( Lock->Context == KeGetCurrentThread() )
  {
    LockState->LockState = 2;
  }
  else if ( ndisMaxNumberOfProcessors > 0x100 )
  {
    LockState->OldIrql = KfRaiseIrql(2u);
    if ( !(unsigned int)ndisAcquireWriteLockSharedRefCnt(Lock) )
    {
      v6 = 5;
      goto LABEL_6;
    }
    LockState->LockState = 4;
  }
  else
  {
    LockState->OldIrql = KeAcquireSpinLockRaiseToDpc(&Lock->SpinLock);
    LODWORD(v7) = KeGetPcr()->Prcb.Number;
    if ( ndisMaxNumberOfProcessors > 0x40 )
    {
      v8 = 4LL;
      v9 = 4 * v7;
    }
    else
    {
      v8 = 16LL;
      v9 = 16 * v7;
    }
    ndisAcquireWriteLockPerCpuRefCnt(Lock, (unsigned int *)((char *)&Lock->16 + v9), v8);
    LockState->LockState = 4;
    Lock->Context = KeGetCurrentThread();
  }
}
