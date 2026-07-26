/*
 * XREFs of ndisAcquireReadWriteLockX @ 0x1C005D7E0
 * Callers:
 *     NdisDprAcquireReadWriteLock @ 0x1C005CDD0 (NdisDprAcquireReadWriteLock.c)
 * Callees:
 *     ?ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z @ 0x1C00124DC (-ndisAcquireReadLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK@Z.c)
 *     ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x1C00208C0 (-ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z.c)
 *     ?ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C005CAD8 (-ndisAcquireReadLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 *     ?ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z @ 0x1C005CB94 (-ndisAcquireWriteLockSharedRefCnt@@YAHPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __fastcall ndisAcquireReadWriteLockX(struct _NDIS_RW_LOCK *a1, char a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int16 v9; // si
  unsigned int *p_RefCount; // rdx

  if ( !a2 )
  {
    *(_WORD *)a3 = 0;
    v9 = 2;
    if ( !a4 )
      *(_BYTE *)(a3 + 2) = KfRaiseIrql(2u);
    if ( ndisMaxNumberOfProcessors > 0x40 )
    {
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        if ( !(unsigned int)ndisAcquireReadLockSharedRefCnt(a1) )
        {
LABEL_26:
          *(_WORD *)a3 = v9;
          return;
        }
LABEL_25:
        v9 = 3;
        goto LABEL_26;
      }
      p_RefCount = (unsigned int *)&a1->16 + KeGetPcr()->Prcb.Number;
    }
    else
    {
      p_RefCount = &a1->RefCount[KeGetPcr()->Prcb.Number].RefCount;
    }
    ndisAcquireReadLockPerCpuRefCnt(&a1->SpinLock, p_RefCount);
    goto LABEL_25;
  }
  *(_WORD *)a3 = 1;
  if ( a1->Context == KeGetCurrentThread() )
  {
    *(_WORD *)a3 = 2;
    return;
  }
  if ( ndisMaxNumberOfProcessors > 0x100 )
  {
    if ( !a4 )
      *(_BYTE *)(a3 + 2) = KfRaiseIrql(2u);
    if ( !(unsigned int)ndisAcquireWriteLockSharedRefCnt(a1) )
    {
      *(_WORD *)a3 = 5;
      return;
    }
    v9 = 4;
    goto LABEL_26;
  }
  if ( a4 )
    KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
  else
    *(_BYTE *)(a3 + 2) = KeAcquireSpinLockRaiseToDpc(&a1->SpinLock);
  LODWORD(v6) = KeGetPcr()->Prcb.Number;
  if ( ndisMaxNumberOfProcessors > 0x40 )
  {
    v7 = 4LL;
    v8 = 4 * v6;
  }
  else
  {
    v7 = 16LL;
    v8 = 16 * v6;
  }
  ndisAcquireWriteLockPerCpuRefCnt(a1, (unsigned int *)((char *)&a1->16 + v8), v7);
  *(_WORD *)a3 = 4;
  a1->Context = KeGetCurrentThread();
}
