/*
 * XREFs of MiReplaceTransitionPage @ 0x1400C2CE8
 * Callers:
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiTradeTransitionPage @ 0x1400C32D4 (MiTradeTransitionPage.c)
 *     MiFinalizeImageHeaderPage @ 0x14012FFD0 (MiFinalizeImageHeaderPage.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14008F0F0 (KeMakeKernelDirectoryTableBase.c)
 *     MiFinalizePageAttribute @ 0x140096D78 (MiFinalizePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400B9B40 (MiIsPfnFromSlabAllocation.c)
 *     MiDecreaseAvailablePages @ 0x1400BB338 (MiDecreaseAvailablePages.c)
 *     MiSetPfnBlink @ 0x1400BB420 (MiSetPfnBlink.c)
 *     MiGetPfnPriority @ 0x1400BBB00 (MiGetPfnPriority.c)
 *     MiReplaceNumaStandbyPage @ 0x1400C2998 (MiReplaceNumaStandbyPage.c)
 *     MiCopyPfnEntryEx @ 0x1400C2B70 (MiCopyPfnEntryEx.c)
 *     MiUpdateTransitionPteFrame @ 0x1400C328C (MiUpdateTransitionPteFrame.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     MiIsDecayPfn @ 0x140123854 (MiIsDecayPfn.c)
 *     MiDetermineModifiedPageListHead @ 0x14013B5EC (MiDetermineModifiedPageListHead.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401614D4 (MiUnlinkNumaStandbyPage.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x1402DCCB4 (MiUpdatePfnOnSlabStandbyList.c)
 */

char __fastcall MiReplaceTransitionPage(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3, __int64 *a4)
{
  ULONG_PTR v6; // r8
  unsigned __int64 v7; // r12
  __int64 v8; // r15
  unsigned __int8 v9; // cl
  __int64 v10; // r13
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r12
  char v13; // bl
  __int64 v14; // rax
  ULONG_PTR v15; // r12
  int v16; // eax
  unsigned int PfnPriority; // eax
  char v18; // di
  __int64 v19; // r8
  char v20; // cl
  __int64 v21; // rdi
  __int64 v22; // r12
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int64 v26; // r11
  int v27; // r10d
  _QWORD *v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r11
  __int64 v31; // rax
  unsigned __int64 v32; // r11
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r8d
  _QWORD *v36; // r11
  char result; // al
  unsigned int v38; // ebx
  __int64 updated; // rax
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  ULONG_PTR v44; // r9
  unsigned __int64 v45; // rdx
  volatile signed __int32 *v46; // r8
  unsigned int v47; // eax
  unsigned __int64 v48; // rcx
  bool v49; // zf
  __int64 KernelDirectoryTableBase; // rax
  __int64 v51; // r11
  signed __int32 v52[8]; // [rsp+0h] [rbp-89h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-69h] BYREF
  ULONG_PTR v54; // [rsp+38h] [rbp-51h]
  _QWORD v55[20]; // [rsp+40h] [rbp-49h] BYREF
  int v56; // [rsp+F0h] [rbp+67h]
  __int64 v57; // [rsp+F8h] [rbp+6Fh]

  v56 = 0xFFFFFF;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  v54 = v6;
  v7 = *(_QWORD *)(BugCheckParameter2 + 40);
  v8 = (__int64)(a2 + 0x58000000000LL) / 48;
  v57 = *(_QWORD *)(qword_140465E88 + 8 * ((v7 >> 40) & 0x3FF));
  v9 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
  v10 = *(_QWORD *)(v57 + 8LL * v9 + 4152);
  if ( v9 == 3 && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
  {
    v38 = MiPageToNode(v6);
    memset(v55, 0, 0x30uLL);
    v55[5] = *(_QWORD *)(BugCheckParameter2 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v38 << 58);
    *(_QWORD *)(BugCheckParameter2 + 40) = v55[5];
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 40);
  }
  v11 = v7 >> 58;
  v12 = v7 & 0xFC00000000000000uLL;
  MiLockNestedPageAtDpcInline(a2);
  v13 = 0;
  if ( MiIsPfnFromSlabAllocation(a2) )
    v13 = 4;
  MiFinalizePageAttribute(a2, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1u);
  MiCopyPfnEntryEx(a2, (__int128 *)BugCheckParameter2);
  memset(&v55[6], 0, 0x30uLL);
  v14 = v12 | *(_QWORD *)(a2 + 40) & 0x3FFFFFFFFFFFFFFLL;
  v15 = v54;
  v55[11] = v14;
  *(_QWORD *)(a2 + 40) = v14;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) == v15 )
    *(_QWORD *)(a2 + 40) ^= (v8 ^ *(_QWORD *)(a2 + 40)) & 0xFFFFFFFFFLL;
  MiCopyPage(v8, v15, a4, 6);
  _InterlockedOr(v52, 0);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v16 = *(_DWORD *)(v10 + 8);
  if ( v16 != 2 )
  {
    LockHandle.LockQueue.Next = 0LL;
    if ( v16 == 3 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
      {
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 32));
        v10 = MiDetermineModifiedPageListHead(a2, v57);
        goto LABEL_12;
      }
      v10 = v57 + 8 * (v11 + 4 * (v11 + 106));
    }
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 32));
LABEL_12:
    v21 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
    v22 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
    *(_QWORD *)a2 = v21 | *(_QWORD *)a2 & 0xFFFFFFF000000000uLL;
    MiSetPfnBlink(a2, v22, v56 != 0xFFFFFF);
    v25 = 0xFFFFFFFFFLL;
    v26 = 0xFFFFFA8000000000uLL;
    if ( v21 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v10 + 24) = v8;
    }
    else
    {
      v24 = 48 * v21 - 0x58000000000LL;
      if ( v56 != 0xFFFFFF && (v13 & 2) != 0 && (unsigned int)MiIsDecayPfn(v21, 0xFFFFFFFFFLL, v23, v24) == 1 )
      {
        *(_QWORD *)(v24 + 40) ^= v25 & (v8 ^ *(_QWORD *)(v24 + 40));
LABEL_17:
        if ( v22 == v25 )
        {
          *(_QWORD *)(v10 + 16) = v8;
        }
        else
        {
          v28 = (_QWORD *)(v26 + 48 * v22);
          if ( v27 != 0xFFFFFF && (v13 & 2) != 0 && (unsigned int)MiIsDecayPfn(v22, v25, v28, v24) == 1 )
          {
            updated = MiUpdateTransitionPteFrame(v28[2], v8);
            *(_QWORD *)(v40 + 16) = updated;
          }
          else
          {
            *v28 ^= v25 & (v8 ^ *v28);
          }
        }
        if ( v27 != 0xFFFFFF )
        {
          if ( (v13 & 4) != 0 || a3 )
          {
            MiUpdatePfnOnSlabStandbyList(a2, 0LL);
            if ( !a3 )
            {
              MiUnlinkNumaStandbyPage(BugCheckParameter2, v41, v42, v43);
              --*(_QWORD *)v10;
              _InterlockedAdd64(
                (volatile signed __int64 *)((-(__int64)((*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0) & 0xFFFFFFFFFFFFFD40uLL)
                                          + v57
                                          + 4992),
                0xFFFFFFFFFFFFFFFFuLL);
              MiDecreaseAvailablePages(v57, 1LL, 0xFFFFFFFFFFFFFFFFuLL, 0);
            }
          }
          else
          {
            MiReplaceNumaStandbyPage(BugCheckParameter2, a2);
          }
        }
        v15 = v54;
        if ( dword_140465F0C != 1 )
          goto LABEL_26;
        v44 = v54 & 0x1F;
        LOBYTE(v45) = 1;
        v46 = (volatile signed __int32 *)(qword_140465F68 + 4 * (v54 >> 5));
        if ( v44 + 1 > 0x20 )
        {
          if ( (v54 & 0x1F) != 0 )
          {
            _InterlockedOr(v46++, ((1 << (32 - (v54 & 0x1F))) - 1) << v44);
            v45 = 1LL - (32 - (unsigned int)(v15 & 0x1F));
            if ( v45 >= 0x20 )
            {
              v48 = v45 >> 5;
              v45 += -32LL * (v45 >> 5);
              do
              {
                *v46++ = -1;
                --v48;
              }
              while ( v48 );
            }
            if ( !v45 )
              goto LABEL_26;
          }
          v47 = (1 << v45) - 1;
        }
        else
        {
          v47 = 1 << v44;
        }
        _InterlockedOr(v46, v47);
LABEL_26:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        goto LABEL_27;
      }
      MiSetPfnBlink(v24, v8, 0);
      v25 = 0xFFFFFFFFFLL;
      v26 = 0xFFFFFA8000000000uLL;
    }
    v27 = v56;
    goto LABEL_17;
  }
  if ( !a3 || *(__int64 *)BugCheckParameter2 >= 0 )
  {
    PfnPriority = MiGetPfnPriority(BugCheckParameter2);
    v18 = *(_BYTE *)(BugCheckParameter2 + 35);
    LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)((__int64)LockHandle.LockQueue.Next & v19);
    v56 = PfnPriority;
    v10 = v57 + 8 * (5LL * PfnPriority + 296);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 32));
    v20 = v13 | 2;
    if ( (v18 & 8) == 0 )
      v20 = v13;
    v13 = v20;
    goto LABEL_12;
  }
  MiUnlinkPageFromList(BugCheckParameter2, 0);
  v13 |= 8u;
LABEL_27:
  *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  _InterlockedOr(v52, 0);
  *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  MiSetPfnBlink(BugCheckParameter2, 0LL, 1);
  v29 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  if ( v29 == v15 )
  {
    v30 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  }
  else
  {
    v13 |= 1u;
    v30 = MiMapPageInHyperSpaceWorker(v29, 0LL, 0x80000000) + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF);
  }
  v31 = MI_READ_PTE_LOCK_FREE(v30);
  MiUpdateTransitionPteFrame(v31, v8);
  if ( MiPteInShadowRange(v32) )
  {
    if ( (unsigned int)MiPteHasShadow(v34) )
    {
      v35 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_30;
      v49 = (v33 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_30;
      v49 = (v33 & 1) == 0;
    }
    if ( !v49 )
      v33 |= 0x8000000000000000uLL;
  }
LABEL_30:
  *v36 = v33;
  if ( v35 )
    MiWritePteShadow(v36, v33);
  if ( (v13 & 1) != 0 )
  {
    LOBYTE(v33) = 17;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v36, v33, 0x80000000LL);
    v36 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) == 0
    && (unsigned int)MiGetSystemRegionType((unsigned __int64)v36) == 5 )
  {
    KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(v8 << 12);
    *(_QWORD *)(v51 - 1048) = KernelDirectoryTableBase;
  }
  if ( (v13 & 8) != 0 )
    MiInsertPageInList(a2, 0x800u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
  *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
  result = *(_BYTE *)(BugCheckParameter2 + 35) & 0xDF;
  *(_BYTE *)(BugCheckParameter2 + 35) = result;
  return result;
}
