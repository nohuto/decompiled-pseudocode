/*
 * XREFs of MiRemoveLockedPageCharge @ 0x1400546B0
 * Callers:
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiResolveDemandZeroFault @ 0x1400ACCF0 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1400B1440 (MiResolveProtoPteFault.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC5E4 (MiPurgeBadFileOnlyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x1402DDCC8 (MiDeleteDirectMapFixupPfn.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 *     MiSwapHardFaultPage @ 0x1402EC000 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x140193404 (MiSyncCommitSignals.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageCharge(__int64 a1)
{
  __int16 v1; // ax
  bool v3; // zf
  __int16 v4; // ax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  int v8; // r9d
  unsigned int v9; // edi
  unsigned __int64 v10; // r8
  char v11; // al
  __int64 v12; // rbx
  struct _KPRCB *v13; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v15; // eax
  signed __int64 v17; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 CachedCommit; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  signed __int64 v24; // rtt

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, 0LL);
  v3 = v1 == 1;
  v4 = v1 - 1;
  *(_WORD *)(a1 + 32) = v4;
  if ( v3 && (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) != 0 )
    return 1LL;
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 0x10000000000000LL) == 0 )
  {
    v6 = 1LL;
    v7 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v8 = 0;
    if ( !v4 )
    {
      v9 = 1;
LABEL_8:
      v10 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
      if ( (v10 > 0xFFFFF6BFFFFFFF78uLL || v10 < 0xFFFFF68000000000uLL)
        && (v11 = *(_BYTE *)(a1 + 35), (v11 & 0x20) != 0) )
      {
        *(_BYTE *)(a1 + 35) = v11 & 0xDF;
      }
      else
      {
        if ( (v5 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
          || v10 <= 0xFFFFF6BFFFFFFF78uLL && v10 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a1 + 35) & 0x20) != 0
          || v9 == 1 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
        {
          v8 = 1;
        }
        v12 = *(_QWORD *)(qword_140465E88 + 8 * ((v5 >> 40) & 0x3FF));
        if ( v8 == 1 )
        {
          v17 = *(_QWORD *)(v12 + 7232);
          if ( v17 )
          {
            while ( 1 )
            {
              v24 = v17;
              v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 7232), v17 - 1, v17);
              if ( v24 == v17 )
                break;
              if ( !v17 )
                goto LABEL_25;
            }
          }
          else
          {
LABEL_25:
            if ( (ULONG_PTR *)v12 == &MiSystemPartition
              && (CurrentPrcb = KeGetCurrentPrcb(),
                  _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
                  CachedCommit = CurrentPrcb->CachedCommit,
                  (unsigned __int64)(CachedCommit + 1) <= 0x100) )
            {
              while ( 1 )
              {
                v20 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                        CachedCommit + 1,
                        CachedCommit);
                if ( v20 == CachedCommit )
                  break;
                CachedCommit = v20;
                if ( (unsigned __int64)(v20 + 1) > 0x100 )
                  goto LABEL_46;
              }
            }
            else
            {
LABEL_46:
              v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8424), 0xFFFFFFFFFFFFFFFFuLL);
              v22 = *(_QWORD *)(v12 + 7200);
              if ( v21 >= v22 && v21 - 1 < v22 || (v23 = *(_QWORD *)(v12 + 7192), v21 >= v23) && v21 - 1 < v23 )
                MiSyncCommitSignals(v12, 0LL);
            }
          }
        }
        if ( (ULONG_PTR *)v12 == &MiSystemPartition )
        {
          v13 = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)v13->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
            {
              do
              {
                v15 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v13->CachedResidentAvailable,
                        CachedResidentAvailable + 1,
                        CachedResidentAvailable);
                v3 = (_DWORD)CachedResidentAvailable == v15;
                LODWORD(CachedResidentAvailable) = v15;
                if ( v3 )
                  return v9;
              }
              while ( v15 != -1 && (unsigned __int64)(v15 + 1LL) <= 0x100 );
            }
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&v13->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v6 = (int)CachedResidentAvailable - 192 + 1LL;
            }
          }
          _InterlockedExchangeAdd64(&qword_14046A180, v6);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8128), 1uLL);
        }
      }
      return v9;
    }
    if ( v4 == 1 )
    {
      if ( v7 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
      {
LABEL_7:
        v9 = 0;
        goto LABEL_8;
      }
    }
    else if ( v4 == 2 && v7 && (*(_BYTE *)(a1 + 34) & 8) != 0 )
    {
      goto LABEL_7;
    }
  }
  return 0LL;
}
