/*
 * XREFs of MiCopyToUserVa @ 0x140084400
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1405F3A10 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageAndSetDirty @ 0x140086018 (MiLockPageAndSetDirty.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405E1510 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1405F3998 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(ULONG_PTR BugCheckParameter2, __int64 a2, const void *a3, size_t a4)
{
  __int64 v5; // r14
  ULONG_PTR v6; // rbx
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r15
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  __int64 v11; // r13
  ULONG_PTR v12; // rax
  _QWORD *v13; // rbx
  unsigned __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r9d
  int v18; // esi
  _KPROCESS *v19; // r13
  __int64 v21; // rdx
  int v22; // r12d
  __int64 CloneAddress; // rax
  char v24; // r8
  int v25; // [rsp+30h] [rbp-68h]
  unsigned __int64 ValidPte; // [rsp+38h] [rbp-60h] BYREF
  __int64 v27; // [rsp+40h] [rbp-58h]
  _KPROCESS *Process; // [rsp+48h] [rbp-50h]
  _KPROCESS *v29; // [rsp+50h] [rbp-48h]
  unsigned __int8 v30; // [rsp+A0h] [rbp+8h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v29 = Process;
  v5 = (__int64)&Process[1].IdealNode[12];
  v6 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = 0;
LABEL_2:
  v7 = MiLockWorkingSetShared(v5);
LABEL_3:
  v8 = v7;
  v30 = v7;
  while ( 1 )
  {
    v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v6, 0);
    ValidPte = MI_READ_PTE_LOCK_FREE(v6);
    if ( (ValidPte & 1) == 0 )
    {
      MiUnlockPageTableInternal(v5, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiUnlockWorkingSetShared(v5, v8);
      goto LABEL_2;
    }
    v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFLL;
    v11 = 48 * v10 - 0x58000000000LL;
    if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) == 0 )
      break;
    v27 = 0LL;
    v21 = *(_QWORD *)(v11 + 8);
    if ( v21 < 0 )
    {
      v19 = Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress(Process, v21 | 0x8000000000000000uLL);
        v27 = CloneAddress;
        if ( CloneAddress )
        {
          if ( *(_QWORD *)(*(_QWORD *)&v19[1].IdealGlobalNode + 312LL) <= *(_QWORD *)(CloneAddress + 96) )
          {
            v27 = 0LL;
          }
          else if ( !v25 )
          {
            MiUnlockPageTableInternal(v5, v9);
            MiUnlockWorkingSetShared(v5, v8);
            v18 = MiChargeFullProcessCommitment(v19, 1LL);
            if ( v18 < 0 )
              goto LABEL_15;
            v25 = 1;
            v7 = MiLockWorkingSetShared(v5);
            goto LABEL_3;
          }
        }
      }
    }
    v22 = MiCopyOnWrite(BugCheckParameter2);
    if ( v22 >= 0 )
    {
      ValidPte = MI_READ_PTE_LOCK_FREE(v6);
      v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFLL;
      v11 = 48 * v10 - 0x58000000000LL;
      if ( v27 )
        v25 = 0;
      break;
    }
    MiUnlockPageTableInternal(v5, v9);
    MiUnlockWorkingSetShared(v5, v8);
    MiCopyOnWriteCheckConditions(v5, (unsigned int)v22);
    MiLockWorkingSetShared(v5);
  }
  v12 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
  v13 = (_QWORD *)v12;
  if ( v12 )
  {
    v14 = (__int64)(v12 << 25) >> 16;
    ValidPte = MiMakeValidPte(v12, v10, -1610612732);
    if ( !MiPteInShadowRange((unsigned __int64)v13) )
      goto LABEL_8;
    if ( (unsigned int)MiPteHasShadow(v16, v15) )
    {
      v17 = 1;
      if ( !HIBYTE(word_14043B26C) && (v24 & 1) != 0 )
LABEL_38:
        v15 |= 0x8000000000000000uLL;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
           && (v24 & 1) != 0 )
    {
      goto LABEL_38;
    }
LABEL_8:
    *v13 = v15;
    if ( v17 )
      MiWritePteShadow(v13);
    goto LABEL_10;
  }
  v14 = MiMapPageInHyperSpaceWorker(v10, 0LL, 0x80000000);
LABEL_10:
  memmove((void *)(v14 + (BugCheckParameter2 & 0xFFF)), a3, a4);
  if ( v13 )
    MiReleasePtes((__int64)&qword_14043C060, (unsigned __int64)v13, 1u);
  else
    MiUnmapPageInHyperSpaceWorker(v14, 0x11u, 0x80000000LL);
  MiLockPageAndSetDirty(v11, 1LL);
  if ( v9 )
    MiUnlockPageTableInternal(v5, v9);
  MiUnlockWorkingSetShared(v5, v30);
  v18 = 0;
  v19 = Process;
LABEL_15:
  if ( v25 )
    MiReturnFullProcessCommitment(v19);
  return (unsigned int)v18;
}
