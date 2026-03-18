/*
 * XREFs of MiCopyToUserVa @ 0x140020860
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1405EC930 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiLockPageAndSetDirty @ 0x14005D264 (MiLockPageAndSetDirty.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiLocateCloneAddress @ 0x1400DFC38 (MiLocateCloneAddress.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E575C (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1405EC7B0 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140603B80 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(ULONG_PTR BugCheckParameter2, __int64 a2, const void *a3, size_t a4)
{
  unsigned __int16 *v5; // r15
  ULONG_PTR v6; // rsi
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r12
  __int64 v9; // r14
  unsigned __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdx
  int v16; // r9d
  __int64 v17; // rdx
  int v18; // r14d
  _KPROCESS *v19; // r13
  __int64 v21; // rdx
  int v22; // r13d
  __int64 CloneAddress; // rax
  char v24; // r8
  int v25; // [rsp+30h] [rbp-68h]
  __int64 ValidPte; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+48h] [rbp-50h]
  _KPROCESS *Process; // [rsp+50h] [rbp-48h]
  _KPROCESS *v29; // [rsp+58h] [rbp-40h]
  unsigned __int8 v30; // [rsp+A0h] [rbp+8h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v29 = Process;
  v5 = &Process[1].IdealNode[6];
  v6 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = 0;
  v7 = MiLockWorkingSetShared(&Process[1].IdealNode[6]);
LABEL_2:
  v8 = v7;
  v30 = v7;
  while ( 1 )
  {
    v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v6, 0);
    ValidPte = MI_READ_PTE_LOCK_FREE(v6);
    if ( (ValidPte & 1) == 0 )
    {
      MiUnlockPageTableInternal(v5);
      MiUnlockWorkingSetShared(v5, v8);
      v7 = MiLockWorkingSetShared(v5);
      goto LABEL_2;
    }
    v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&ValidPte) >> 12) & 0xFFFFFFFFFLL;
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
          if ( *(_QWORD *)(*(_QWORD *)&v19[1].IdealNode[14] + 360LL) <= *(_QWORD *)(CloneAddress + 96) )
          {
            v27 = 0LL;
          }
          else if ( !v25 )
          {
            MiUnlockPageTableInternal(v5);
            MiUnlockWorkingSetShared(v5, v30);
            v18 = MiChargeFullProcessCommitment(v19, 1LL);
            if ( v18 < 0 )
              goto LABEL_14;
            v25 = 1;
            v7 = MiLockWorkingSetShared(v5);
            goto LABEL_2;
          }
        }
      }
    }
    v22 = MiCopyOnWrite(BugCheckParameter2);
    if ( v22 >= 0 )
    {
      ValidPte = MI_READ_PTE_LOCK_FREE(v6);
      v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&ValidPte) >> 12) & 0xFFFFFFFFFLL;
      v11 = 48 * v10 - 0x58000000000LL;
      if ( v27 )
        v25 = 0;
      break;
    }
    MiUnlockPageTableInternal(v5);
    v8 = v30;
    MiUnlockWorkingSetShared(v5, v30);
    MiCopyOnWriteCheckConditions(v5, (unsigned int)v22);
    MiLockWorkingSetShared(v5);
  }
  v12 = MiReservePtes(&qword_1404669C0, 1LL);
  v13 = (_QWORD *)v12;
  if ( v12 )
  {
    v14 = v12 << 25 >> 16;
    ValidPte = MiMakeValidPte(v12, v10, 2684354564LL);
    if ( !(unsigned int)MiPteInShadowRange(v13, ValidPte, ValidPte, 0LL) )
      goto LABEL_7;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( !HIBYTE(word_140465BEC) && (v24 & 1) != 0 )
LABEL_37:
        v15 |= 0x8000000000000000uLL;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
           && (v24 & 1) != 0 )
    {
      goto LABEL_37;
    }
LABEL_7:
    *v13 = v15;
    if ( v16 )
      MiWritePteShadow(v13, v15);
    goto LABEL_9;
  }
  v14 = MiMapPageInHyperSpaceWorker(v10, 0LL, 0x80000000LL);
LABEL_9:
  memmove((void *)(v14 + (BugCheckParameter2 & 0xFFF)), a3, a4);
  if ( v13 )
  {
    MiReleasePtes(&qword_1404669C0, v13, 1LL);
  }
  else
  {
    LOBYTE(v17) = 17;
    MiUnmapPageInHyperSpaceWorker(v14, v17, 0x80000000LL);
  }
  MiLockPageAndSetDirty(v11, 1LL);
  if ( v9 )
    MiUnlockPageTableInternal(v5);
  MiUnlockWorkingSetShared(v5, v30);
  v18 = 0;
  v19 = Process;
LABEL_14:
  if ( v25 )
    MiReturnFullProcessCommitment(v19, 1LL);
  return (unsigned int)v18;
}
