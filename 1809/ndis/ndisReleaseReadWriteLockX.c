/*
 * XREFs of ndisReleaseReadWriteLockX @ 0x1C005DB20
 * Callers:
 *     NdisDprReleaseReadWriteLock @ 0x1C005CE10 (NdisDprReleaseReadWriteLock.c)
 * Callees:
 *     ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x1C005CC48 (-ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __fastcall ndisReleaseReadWriteLockX(KSPIN_LOCK *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  KSPIN_LOCK *v6; // rax
  KIRQL v7; // cl

  switch ( *(_WORD *)a2 )
  {
    case 3:
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        ndisReleaseReadLockSharedRefCnt(a1);
      }
      else
      {
        LODWORD(v3) = KeGetPcr()->Prcb.Number;
        if ( ndisMaxNumberOfProcessors > 0x40 )
          v6 = (KSPIN_LOCK *)((char *)a1 + 4 * v3 + 16);
        else
          v6 = &a1[2 * v3 + 2];
        --*(_DWORD *)v6;
      }
      *(_WORD *)a2 = 255;
      if ( !a3 )
      {
        v7 = *(_BYTE *)(a2 + 2);
        if ( v7 < 2u )
          KeLowerIrql(v7);
      }
      break;
    case 4:
      *(_WORD *)a2 = 255;
      a1[1] = 0LL;
      if ( a3 )
        KeReleaseSpinLockFromDpcLevel(a1);
      else
        KeReleaseSpinLock(a1, *(_BYTE *)(a2 + 2));
      break;
    case 5:
      a1[1] = 0LL;
      KeReleaseSpinLockFromDpcLevel(a1 + 2);
      *(_WORD *)a2 = 255;
      break;
  }
}
