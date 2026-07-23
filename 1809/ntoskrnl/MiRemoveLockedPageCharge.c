/*
 * XREFs of MiRemoveLockedPageCharge @ 0x1400304A0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiResolveDemandZeroFault @ 0x140046D50 (MiResolveDemandZeroFault.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402B6810 (MiPurgeBadFileOnlyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x1402C3EB0 (MiDeleteDirectMapFixupPfn.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 *     MiSwapHardFaultPage @ 0x1402D014C (MiSwapHardFaultPage.c)
 * Callees:
 *     MiSyncCommitSignals @ 0x14018812C (MiSyncCommitSignals.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageCharge(__int64 a1)
{
  __int16 v1; // ax
  bool v3; // zf
  __int16 v4; // ax
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // r10d
  unsigned int v10; // esi
  unsigned __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rdi
  struct _KPRCB *v14; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v16; // eax
  signed __int64 v18; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 CachedCommit; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  signed __int64 v25; // rtt

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, 0LL);
  v3 = v1 == 1;
  v4 = v1 - 1;
  *(_WORD *)(a1 + 32) = v4;
  if ( !v3 || (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    if ( (v5 & 0x10000000000000LL) == 0 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      v7 = 1LL;
      v8 = v6 & 0x3FFFFFFFFFFFFFFFLL;
      v9 = 0;
      if ( !v4 )
      {
        v10 = 1;
LABEL_8:
        v11 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
        if ( (v11 > 0xFFFFF6BFFFFFFF78uLL || v11 < 0xFFFFF68000000000uLL)
          && (v12 = *(_BYTE *)(a1 + 35), (v12 & 0x20) != 0) )
        {
          *(_BYTE *)(a1 + 35) = v12 & 0xDF;
        }
        else
        {
          if ( (v5 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
            || v11 <= 0xFFFFF6BFFFFFFF78uLL && v11 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(a1 + 35) & 0x20) != 0
            || v10 == 1 && (v6 & 0x4000000000000000LL) != 0 )
          {
            v9 = 1;
          }
          v13 = *(_QWORD *)(qword_14043B808 + 8 * ((v5 >> 40) & 0x3FF));
          if ( v9 == 1 )
          {
            v18 = *(_QWORD *)(v13 + 6464);
            if ( v18 )
            {
              while ( 1 )
              {
                v25 = v18;
                v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 6464), v18 - 1, v18);
                if ( v25 == v18 )
                  break;
                if ( !v18 )
                  goto LABEL_29;
              }
            }
            else
            {
LABEL_29:
              if ( (ULONG_PTR *)v13 == &MiSystemPartition
                && (CurrentPrcb = KeGetCurrentPrcb(),
                    _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
                    CachedCommit = CurrentPrcb->CachedCommit,
                    (unsigned __int64)(CachedCommit + 1) <= 0x100) )
              {
                while ( 1 )
                {
                  v21 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                          CachedCommit + 1,
                          CachedCommit);
                  if ( v21 == CachedCommit )
                    break;
                  CachedCommit = v21;
                  if ( (unsigned __int64)(v21 + 1) > 0x100 )
                    goto LABEL_42;
                }
              }
              else
              {
LABEL_42:
                v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 7656), 0xFFFFFFFFFFFFFFFFuLL);
                v23 = *(_QWORD *)(v13 + 6432);
                if ( v22 >= v23 && v22 - 1 < v23 || (v24 = *(_QWORD *)(v13 + 6424), v22 >= v24) && v22 - 1 < v24 )
                  MiSyncCommitSignals(v13, 0LL);
              }
            }
          }
          if ( (ULONG_PTR *)v13 == &MiSystemPartition )
          {
            v14 = KeGetCurrentPrcb();
            CachedResidentAvailable = (int)v14->CachedResidentAvailable;
            if ( (_DWORD)CachedResidentAvailable != -1 )
            {
              if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
              {
                do
                {
                  v16 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&v14->CachedResidentAvailable,
                          CachedResidentAvailable + 1,
                          CachedResidentAvailable);
                  v3 = (_DWORD)CachedResidentAvailable == v16;
                  LODWORD(CachedResidentAvailable) = v16;
                  if ( v3 )
                    return v10;
                }
                while ( v16 != -1 && (unsigned __int64)(v16 + 1LL) <= 0x100 );
              }
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&v14->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v7 = (int)CachedResidentAvailable - 192 + 1LL;
              }
            }
            _InterlockedExchangeAdd64(&qword_14043F6C0, v7);
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 7360), 1uLL);
          }
        }
        return v10;
      }
      if ( v4 == 1 )
      {
        if ( v8 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
        {
LABEL_7:
          v10 = 0;
          goto LABEL_8;
        }
      }
      else if ( v4 == 2 && v8 && (*(_BYTE *)(a1 + 34) & 8) != 0 )
      {
        goto LABEL_7;
      }
    }
    return 0LL;
  }
  return 1LL;
}
