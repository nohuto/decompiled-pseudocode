/*
 * XREFs of MiReplaceTransitionPage @ 0x14009CF60
 * Callers:
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiTradeTransitionPage @ 0x14009D6C8 (MiTradeTransitionPage.c)
 *     MiFinalizeImageHeaderPage @ 0x14012F5E0 (MiFinalizeImageHeaderPage.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiReplaceNumaStandbyPage @ 0x14009CD18 (MiReplaceNumaStandbyPage.c)
 *     MiUpdateTransitionPteFrame @ 0x14009D504 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14009D550 (MiCopyPfnEntryEx.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiFinalizePageAttribute @ 0x1400A3F48 (MiFinalizePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiDecreaseAvailablePages @ 0x1400DB4B8 (MiDecreaseAvailablePages.c)
 *     MiSetPfnBlink @ 0x1400DB5A0 (MiSetPfnBlink.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1400E2EBC (KeMakeKernelDirectoryTableBase.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011CE00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiIsDecayPfn @ 0x140122744 (MiIsDecayPfn.c)
 *     MiDetermineModifiedPageListHead @ 0x14013AFCC (MiDetermineModifiedPageListHead.c)
 *     MiUnlinkNumaStandbyPage @ 0x140161A84 (MiUnlinkNumaStandbyPage.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x1402DCF54 (MiUpdatePfnOnSlabStandbyList.c)
 */

char __fastcall MiReplaceTransitionPage(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3, __int64 *a4)
{
  ULONG_PTR v6; // r8
  unsigned __int64 v7; // r12
  ULONG_PTR v8; // r15
  unsigned __int8 v9; // cl
  __int64 v10; // r13
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r12
  __int64 v13; // r9
  char v14; // bl
  __int64 v15; // rax
  ULONG_PTR v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // eax
  unsigned int PfnPriority; // eax
  char v21; // di
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // cl
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  unsigned __int64 v30; // r11
  int v31; // r10d
  _QWORD *v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  unsigned __int64 v35; // r11
  __int64 v36; // rax
  unsigned __int64 v37; // r11
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // r8d
  _QWORD *v41; // r11
  char result; // al
  unsigned int v43; // ebx
  __int64 updated; // rax
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  ULONG_PTR v49; // r9
  unsigned __int64 v50; // rdx
  volatile signed __int32 *v51; // r8
  unsigned int v52; // eax
  unsigned __int64 v53; // rcx
  bool v54; // zf
  __int64 KernelDirectoryTableBase; // rax
  __int64 v56; // r11
  signed __int32 v57[8]; // [rsp+0h] [rbp-89h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-69h] BYREF
  ULONG_PTR v59; // [rsp+38h] [rbp-51h]
  _QWORD v60[20]; // [rsp+40h] [rbp-49h] BYREF
  int v61; // [rsp+F0h] [rbp+67h]
  __int64 v62; // [rsp+F8h] [rbp+6Fh]

  v61 = 0xFFFFFF;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  v59 = v6;
  v7 = *(_QWORD *)(BugCheckParameter2 + 40);
  v8 = (__int64)(a2 + 0x58000000000LL) / 48;
  v62 = *(_QWORD *)(qword_140466188 + 8 * ((v7 >> 40) & 0x3FF));
  v9 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
  v10 = *(_QWORD *)(v62 + 8LL * v9 + 4152);
  if ( v9 == 3 && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
  {
    v43 = MiPageToNode(v6);
    memset(v60, 0, 0x30uLL);
    v60[5] = *(_QWORD *)(BugCheckParameter2 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v43 << 58);
    *(_QWORD *)(BugCheckParameter2 + 40) = v60[5];
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 40);
  }
  v11 = v7 >> 58;
  v12 = v7 & 0xFC00000000000000uLL;
  MiLockNestedPageAtDpcInline(a2);
  v14 = 0;
  if ( (unsigned int)MiIsPfnFromSlabAllocation(a2) )
    v14 = 4;
  MiFinalizePageAttribute(a2, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1LL, v13);
  MiCopyPfnEntryEx(a2, BugCheckParameter2);
  memset(&v60[6], 0, 0x30uLL);
  v15 = v12 | *(_QWORD *)(a2 + 40) & 0x3FFFFFFFFFFFFFFLL;
  v16 = v59;
  v60[11] = v15;
  *(_QWORD *)(a2 + 40) = v15;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) == v16 )
    *(_QWORD *)(a2 + 40) ^= (v8 ^ *(_QWORD *)(a2 + 40)) & 0xFFFFFFFFFLL;
  MiCopyPage(v8, v16, a4, 6);
  _InterlockedOr(v57, 0);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v19 = *(_DWORD *)(v10 + 8);
  if ( v19 != 2 )
  {
    LockHandle.LockQueue.Next = 0LL;
    if ( v19 == 3 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
      {
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 32));
        v10 = MiDetermineModifiedPageListHead(a2, v62);
        goto LABEL_12;
      }
      v10 = v62 + 8 * (v11 + 4 * (v11 + 106));
    }
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 32));
LABEL_12:
    v25 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
    v26 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
    *(_QWORD *)a2 = v25 | *(_QWORD *)a2 & 0xFFFFFFF000000000uLL;
    MiSetPfnBlink(a2, v26, v61 != 0xFFFFFF, v23);
    v29 = 0xFFFFFFFFFLL;
    v30 = 0xFFFFFA8000000000uLL;
    if ( v25 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v10 + 24) = v8;
    }
    else
    {
      v28 = 48 * v25 - 0x58000000000LL;
      if ( v61 != 0xFFFFFF && (v14 & 2) != 0 && (unsigned int)MiIsDecayPfn(v25, 0xFFFFFFFFFLL, v27, v28) == 1 )
      {
        *(_QWORD *)(v28 + 40) ^= v29 & (v8 ^ *(_QWORD *)(v28 + 40));
LABEL_17:
        if ( v26 == v29 )
        {
          *(_QWORD *)(v10 + 16) = v8;
        }
        else
        {
          v32 = (_QWORD *)(v30 + 48 * v26);
          if ( v31 != 0xFFFFFF && (v14 & 2) != 0 && (unsigned int)MiIsDecayPfn(v26, v29, v32, v28) == 1 )
          {
            updated = MiUpdateTransitionPteFrame(v32[2], v8);
            *(_QWORD *)(v45 + 16) = updated;
          }
          else
          {
            *v32 ^= v29 & (v8 ^ *v32);
          }
        }
        if ( v31 != 0xFFFFFF )
        {
          if ( (v14 & 4) != 0 || a3 )
          {
            MiUpdatePfnOnSlabStandbyList(a2, 0LL);
            if ( !a3 )
            {
              MiUnlinkNumaStandbyPage(BugCheckParameter2, v46, v47, v48);
              --*(_QWORD *)v10;
              _InterlockedAdd64(
                (volatile signed __int64 *)((-(__int64)((*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0) & 0xFFFFFFFFFFFFFD40uLL)
                                          + v62
                                          + 4992),
                0xFFFFFFFFFFFFFFFFuLL);
              MiDecreaseAvailablePages(v62, 1LL, -1LL);
            }
          }
          else
          {
            MiReplaceNumaStandbyPage(BugCheckParameter2, a2);
          }
        }
        v16 = v59;
        if ( dword_14046620C != 1 )
          goto LABEL_26;
        v49 = v59 & 0x1F;
        LOBYTE(v50) = 1;
        v51 = (volatile signed __int32 *)(qword_140466268 + 4 * (v59 >> 5));
        if ( v49 + 1 > 0x20 )
        {
          if ( (v59 & 0x1F) != 0 )
          {
            _InterlockedOr(v51++, ((1 << (32 - (v59 & 0x1F))) - 1) << v49);
            v50 = 1LL - (32 - (unsigned int)(v16 & 0x1F));
            if ( v50 >= 0x20 )
            {
              v53 = v50 >> 5;
              v50 += -32LL * (v50 >> 5);
              do
              {
                *v51++ = -1;
                --v53;
              }
              while ( v53 );
            }
            if ( !v50 )
              goto LABEL_26;
          }
          v52 = (1 << v50) - 1;
        }
        else
        {
          v52 = 1 << v49;
        }
        _InterlockedOr(v51, v52);
LABEL_26:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        goto LABEL_27;
      }
      MiSetPfnBlink(v28, v8, 0LL, v28);
      v29 = 0xFFFFFFFFFLL;
      v30 = 0xFFFFFA8000000000uLL;
    }
    v31 = v61;
    goto LABEL_17;
  }
  if ( !a3 || *(__int64 *)BugCheckParameter2 >= 0 )
  {
    PfnPriority = MiGetPfnPriority(BugCheckParameter2, v17, 0LL, v18);
    v21 = *(_BYTE *)(BugCheckParameter2 + 35);
    LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)((__int64)LockHandle.LockQueue.Next & v22);
    v61 = PfnPriority;
    v10 = v62 + 8 * (5LL * PfnPriority + 296);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 32);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v10 + 32));
    v24 = v14 | 2;
    if ( (v21 & 8) == 0 )
      v24 = v14;
    v14 = v24;
    goto LABEL_12;
  }
  MiUnlinkPageFromList(BugCheckParameter2);
  v14 |= 8u;
LABEL_27:
  *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  _InterlockedOr(v57, 0);
  *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  MiSetPfnBlink(BugCheckParameter2, 0LL, 1LL, v33);
  v34 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  if ( v34 == v16 )
  {
    v35 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  }
  else
  {
    v14 |= 1u;
    v35 = MiMapPageInHyperSpaceWorker(v34, 0LL, 0x80000000) + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF);
  }
  v36 = MI_READ_PTE_LOCK_FREE(v35);
  MiUpdateTransitionPteFrame(v36, v8);
  if ( MiPteInShadowRange(v37) )
  {
    if ( (unsigned int)MiPteHasShadow(v39) )
    {
      v40 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_30;
      v54 = (v38 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_30;
      v54 = (v38 & 1) == 0;
    }
    if ( !v54 )
      v38 |= 0x8000000000000000uLL;
  }
LABEL_30:
  *v41 = v38;
  if ( v40 )
    MiWritePteShadow(v41, v38);
  if ( (v14 & 1) != 0 )
  {
    LOBYTE(v38) = 17;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v41, v38, 0x80000000LL);
    v41 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) == 0
    && (unsigned int)MiGetSystemRegionType((unsigned __int64)v41) == 5 )
  {
    KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(v8 << 12);
    *(_QWORD *)(v56 - 1048) = KernelDirectoryTableBase;
  }
  if ( (v14 & 8) != 0 )
    MiInsertPageInList(a2, 0x800u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
  *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
  result = *(_BYTE *)(BugCheckParameter2 + 35) & 0xDF;
  *(_BYTE *)(BugCheckParameter2 + 35) = result;
  return result;
}
