/*
 * XREFs of MiLinkPoolCommitChain @ 0x140022DC0
 * Callers:
 *     MiCommitPoolMemory @ 0x140022A30 (MiCommitPoolMemory.c)
 * Callees:
 *     MiFlushTbAsNeeded @ 0x140021F90 (MiFlushTbAsNeeded.c)
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiLockAndIncrementShareCount @ 0x1400A39AC (MiLockAndIncrementShareCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateLargePageBitMap @ 0x1400DD42C (MiUpdateLargePageBitMap.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1400FB520 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiIsPoolPteInUse @ 0x14012308C (MiIsPoolPteInUse.c)
 *     MiWriteTopLevelPxe @ 0x14017A110 (MiWriteTopLevelPxe.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

char __fastcall MiLinkPoolCommitChain(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  _KPROCESS *Process; // r8
  __int64 DeepFreezeStartTime; // r9
  unsigned __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r9
  ULONG_PTR v20; // r9
  __int64 v21; // r10
  _QWORD *v22; // rcx
  __int64 v23; // rsi
  __int64 ValidPte; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 ContainingPageTable; // rax
  __int64 v29; // rax

  v2 = a2;
  v3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v3 > *(_QWORD *)(a1 + 56) )
    v3 = *(_QWORD *)(a1 + 56);
  if ( (*(_DWORD *)(a1 + 72) & 0x20000000) != 0 )
  {
    v14 = (_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v15 = MI_READ_PTE_LOCK_FREE(v14);
    v18 = MiSwizzleInvalidPte(768LL, v16, v17, v15);
    if ( v19 != v18 && (unsigned int)MiIsPoolPteInUse(v19) )
      KeBugCheckEx(0x1Au, 0x5304uLL, (__int64)((v2 << 25) - (v21 << 25)) >> 16, v20, 0LL);
    v22 = *(_QWORD **)(a1 + 24);
    *(_QWORD *)(a1 + 88) += 512LL;
    *(_QWORD *)(a1 + 24) = *v22;
    v23 = (__int64)(v22 + 0xB000000000LL) / 48;
    MiUpdateLargePageBitMap((unsigned int)&MiSystemPartition, (int)v22 / 48, 512, 1, 1);
    ValidPte = MiMakeValidPte(0LL, v23, *(_DWORD *)(a1 + 20) | 0xA4000000);
    if ( (unsigned __int64)v14 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v14 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      if ( (unsigned int)MiPteInShadowRange(v14, ValidPte, v25, v26) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140465BEC) && (v27 & 1) != 0 )
            v27 |= 0x8000000000000000uLL;
          *v14 = v27;
          MiWritePteShadow(v14, v27);
          goto LABEL_26;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v27 & 1) != 0 )
        {
          v27 |= 0x8000000000000000uLL;
        }
      }
      *v14 = v27;
    }
    else
    {
      MiWriteTopLevelPxe(v14, ValidPte);
    }
LABEL_26:
    ContainingPageTable = MiGetContainingPageTable(v14);
    MiLockAndIncrementShareCount(ContainingPageTable);
    LOBYTE(CurrentThread) = MiInitializeLargeNonPagedPoolLeafFrames(v2, v23);
    return (char)CurrentThread;
  }
  MiFlushTbAsNeeded(a2, ((__int64)(v3 - a2) >> 3) + 1, *(_DWORD *)(a1 + 48), 1);
  v7 = *(_QWORD *)(a1 + 64);
  LOBYTE(CurrentThread) = 0;
  if ( v2 <= v3 )
  {
    v9 = 0xFFFFF6FB7DBED000uLL;
    do
    {
      v10 = *(_QWORD *)v2;
      if ( v2 >= v9 && v2 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 && (v10 & 1) != 0 && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          DeepFreezeStartTime = Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v29 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v2 >> 3) & 0x1FF));
            DeepFreezeStartTime = v10 | 0x20;
            Process = (_KPROCESS *)(unsigned __int8)v29;
            if ( (v29 & 0x20) == 0 )
              DeepFreezeStartTime = *(_QWORD *)v2;
            LOWORD(v10) = DeepFreezeStartTime;
            if ( (v29 & 0x42) != 0 )
              LOWORD(v10) = DeepFreezeStartTime | 0x42;
          }
        }
      }
      LOBYTE(Process) = (v10 & 0xC01) == 0;
      LOBYTE(CurrentThread) = (v10 & 0x3E0) == 0;
      if ( ((unsigned __int8)Process & (unsigned __int8)CurrentThread) == 0 )
        goto LABEL_9;
      if ( v7 )
        v11 = (__int64)(v7 + 0x94000000000LL) >> 3;
      else
        v11 = 0xFFFFFFFFFLL;
      v12 = v11 << 28;
      if ( qword_140465B00 )
      {
        if ( (qword_140465B00 & v12) != 0 )
          v12 |= 0x10uLL;
        else
          v12 |= qword_140465B00;
      }
      LODWORD(CurrentThread) = MiPteInShadowRange(v2, v12 & 0xFFFFFFFFFFFFFC1FuLL | 0x300, Process, DeepFreezeStartTime);
      if ( (_DWORD)CurrentThread )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140465BEC) && (v13 & 1) != 0 )
            v13 |= 0x8000000000000000uLL;
          *(_QWORD *)v2 = v13;
          LOBYTE(CurrentThread) = MiWritePteShadow(v2, v13);
          goto LABEL_18;
        }
        CurrentThread = KeGetCurrentThread();
        if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 && (v13 & 1) != 0 )
          v13 |= 0x8000000000000000uLL;
      }
      *(_QWORD *)v2 = v13;
LABEL_18:
      v7 = v2;
LABEL_9:
      v2 += 8LL;
    }
    while ( v2 <= v3 );
  }
  *(_QWORD *)(a1 + 64) = v7;
  return (char)CurrentThread;
}
