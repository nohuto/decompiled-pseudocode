/*
 * XREFs of ?ndisReleaseReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@PEAU_LOCK_STATE@@E@Z @ 0x1C00915FC
 * Callers:
 *     NdisDprReleaseReadWriteLock @ 0x1C0091790 (NdisDprReleaseReadWriteLock.c)
 * Callees:
 *     ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x1C0091558 (-ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __fastcall ndisReleaseReadWriteLockX(struct _NDIS_RW_LOCK *a1, struct _LOCK_STATE *a2, char a3)
{
  __int64 v3; // rax
  _NDIS_RW_LOCK_REFCOUNT *v6; // rax
  KIRQL OldIrql; // cl

  switch ( a2->LockState )
  {
    case 3u:
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        ndisReleaseReadLockSharedRefCnt(&a1->SpinLock);
      }
      else
      {
        LODWORD(v3) = KeGetPcr()->Prcb.Number;
        if ( ndisMaxNumberOfProcessors > 0x40 )
          v6 = (_NDIS_RW_LOCK_REFCOUNT *)((char *)a1->RefCount + 4 * v3);
        else
          v6 = &a1->RefCount[v3];
        --v6->RefCount;
      }
      a2->LockState = 255;
      if ( !a3 )
      {
        OldIrql = a2->OldIrql;
        if ( OldIrql < 2u )
          KeLowerIrql(OldIrql);
      }
      break;
    case 4u:
      a2->LockState = 255;
      a1->Context = 0LL;
      if ( a3 )
        KeReleaseSpinLockFromDpcLevel(&a1->SpinLock);
      else
        KeReleaseSpinLock(&a1->SpinLock, a2->OldIrql);
      break;
    case 5u:
      a1->Context = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&a1->16);
      a2->LockState = 255;
      break;
  }
}
