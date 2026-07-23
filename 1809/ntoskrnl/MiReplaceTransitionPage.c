/*
 * XREFs of MiReplaceTransitionPage @ 0x1401184DC
 * Callers:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiTradeTransitionPage @ 0x14011819C (MiTradeTransitionPage.c)
 *     MiFinalizeImageHeaderPage @ 0x14012DE80 (MiFinalizeImageHeaderPage.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiDecreaseAvailablePages @ 0x1400EE8CC (MiDecreaseAvailablePages.c)
 *     MiCopyPfnEntryEx @ 0x14010E080 (MiCopyPfnEntryEx.c)
 *     MiUpdateTransitionPteFrame @ 0x140118A14 (MiUpdateTransitionPteFrame.c)
 *     MiReplaceNumaStandbyPage @ 0x140118A5C (MiReplaceNumaStandbyPage.c)
 *     MiIsDecayPfn @ 0x140118C7C (MiIsDecayPfn.c)
 *     MiDetermineModifiedPageListHead @ 0x140118CA4 (MiDetermineModifiedPageListHead.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14013CDBC (KeMakeKernelDirectoryTableBase.c)
 *     MiUnlinkNumaStandbyPage @ 0x140152380 (MiUnlinkNumaStandbyPage.c)
 */

char __fastcall MiReplaceTransitionPage(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // r14
  unsigned __int8 v8; // cl
  __int64 v9; // r15
  __int64 v10; // r8
  int v11; // r13d
  int v12; // eax
  unsigned int PfnPriority; // eax
  unsigned int v14; // r13d
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // r11
  int v22; // r10d
  _QWORD *v23; // r8
  unsigned __int64 v24; // rbx
  __int64 v25; // rcx
  int v26; // ebx
  unsigned __int64 v27; // r11
  __int64 v28; // rax
  unsigned __int64 v29; // r11
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // r8d
  _QWORD *v33; // r11
  char result; // al
  __int64 updated; // rax
  __int64 v36; // r8
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // rdx
  volatile signed __int32 *v39; // r8
  unsigned int v40; // eax
  unsigned __int64 v41; // rcx
  __int64 KernelDirectoryTableBase; // rax
  __int64 v43; // r11
  signed __int32 v44[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v45; // [rsp+20h] [rbp-28h]
  volatile signed __int64 *v46; // [rsp+28h] [rbp-20h] BYREF
  __int64 v47; // [rsp+30h] [rbp-18h]
  int v48; // [rsp+90h] [rbp+48h]
  BOOL IsPfnFromSlabAllocation; // [rsp+98h] [rbp+50h]
  __int64 v51; // [rsp+A8h] [rbp+60h]

  v48 = 0xFFFFFF;
  v5 = (a1 + 0x58000000000LL) / 48;
  v45 = v5;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = (a2 + 0x58000000000LL) / 48;
  v51 = *(_QWORD *)(qword_14043B808 + 8 * ((v6 >> 40) & 0x3FF));
  v8 = *(_BYTE *)(a1 + 34) & 7;
  v9 = *(_QWORD *)(v51 + 8LL * v8 + 4152);
  if ( v8 == 3 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode(v5, 1) << 58);
  else
    v6 = *(_QWORD *)(a2 + 40);
  MiLockNestedPageAtDpcInline(a2);
  IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(a2);
  MiFinalizePageAttribute(a2, *(unsigned __int8 *)(a1 + 34) >> 6, 1u);
  MiCopyPfnEntryEx(a2, a1);
  *(_QWORD *)(a2 + 40) = v6 ^ (*(_QWORD *)(a2 + 40) ^ v6) & 0x3FFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == v5 )
    *(_QWORD *)(a2 + 40) ^= (*(_QWORD *)(a2 + 40) ^ v7) & 0xFFFFFFFFFLL;
  MiCopyPage(v7, v5, a3, 6);
  _InterlockedOr(v44, 0);
  v11 = 0;
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v12 = *(_DWORD *)(v9 + 8);
  if ( v12 == 2 )
  {
    PfnPriority = MiGetPfnPriority(a1);
    v14 = *(unsigned __int8 *)(a1 + 35);
    v48 = PfnPriority;
    v46 = 0LL;
    v9 = v51 + 8 * (5LL * PfnPriority + 296);
    v47 = v9 + 32;
    KxAcquireQueuedSpinLock((__int64)&v46, (volatile __int64 *)(v9 + 32), v15);
    v11 = (v14 >> 3) & 1;
    goto LABEL_7;
  }
  v46 = 0LL;
  if ( v12 == 3 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
    {
      v47 = v9 + 32;
      KxAcquireQueuedSpinLock((__int64)&v46, (volatile __int64 *)(v9 + 32), v10);
      v9 = MiDetermineModifiedPageListHead(a2, v51);
      goto LABEL_7;
    }
    v9 = v51 + 8 * ((v6 >> 58) + 4 * ((v6 >> 58) + 106));
  }
  v47 = v9 + 32;
  KxAcquireQueuedSpinLock((__int64)&v46, (volatile __int64 *)(v9 + 32), v10);
LABEL_7:
  v16 = *(_QWORD *)a1 & 0xFFFFFFFFFLL;
  v17 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 = v16 | *(_QWORD *)a2 & 0xFFFFFFF000000000uLL;
  MiSetPfnBlink(a2, v17, v48 != 0xFFFFFF);
  v20 = 0xFFFFFFFFFLL;
  v21 = 0xFFFFFA8000000000uLL;
  if ( v16 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v9 + 24) = v7;
    goto LABEL_10;
  }
  v19 = 48 * v16 - 0x58000000000LL;
  if ( v11 != 1 || v48 == 0xFFFFFF || (unsigned int)MiIsDecayPfn(v16, 0xFFFFFFFFFLL, v18, v19) != 1 )
  {
    MiSetPfnBlink(v19, v7, 0);
    v20 = 0xFFFFFFFFFLL;
    v21 = 0xFFFFFA8000000000uLL;
LABEL_10:
    v22 = v48;
    goto LABEL_11;
  }
  *(_QWORD *)(v19 + 40) ^= v20 & (*(_QWORD *)(v19 + 40) ^ v7);
LABEL_11:
  if ( v17 == v20 )
  {
    *(_QWORD *)(v9 + 16) = v7;
  }
  else
  {
    v23 = (_QWORD *)(v21 + 48 * v17);
    if ( v11 == 1 && v22 != 0xFFFFFF && (unsigned int)MiIsDecayPfn(v17, v20, v23, v19) == 1 )
    {
      updated = MiUpdateTransitionPteFrame(v23[2], v7);
      *(_QWORD *)(v36 + 16) = updated;
    }
    else
    {
      *v23 ^= v20 & (v7 ^ *v23);
    }
  }
  if ( v22 != 0xFFFFFF )
  {
    if ( IsPfnFromSlabAllocation )
    {
      MiUnlinkNumaStandbyPage(a1);
      --*(_QWORD *)v9;
      _InterlockedAdd64(
        (volatile signed __int64 *)((-(__int64)((*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0) & 0xFFFFFFFFFFFFFD40uLL)
                                  + v51
                                  + 4992),
        0xFFFFFFFFFFFFFFFFuLL);
      MiDecreaseAvailablePages(v51, 1LL, 0xFFFFFFFFFFFFFFFFuLL, 0);
    }
    else
    {
      MiReplaceNumaStandbyPage(a1, a2);
    }
  }
  v24 = v45;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  if ( dword_14043B82C == 1 )
  {
    v37 = v24 & 0x1F;
    LOBYTE(v38) = 1;
    v39 = (volatile signed __int32 *)(qword_14043B888 + 4 * (v24 >> 5));
    if ( v37 + 1 > 0x20 )
    {
      if ( (v24 & 0x1F) != 0 )
      {
        _InterlockedOr(v39++, ((1 << (32 - (v24 & 0x1F))) - 1) << v37);
        v38 = 1LL - (32 - (unsigned int)(v24 & 0x1F));
        if ( v38 >= 0x20 )
        {
          v41 = v38 >> 5;
          v38 += -32LL * (v38 >> 5);
          do
          {
            *v39++ = -1;
            --v41;
          }
          while ( v41 );
        }
        if ( !v38 )
          goto LABEL_18;
      }
      v40 = (1 << v38) - 1;
    }
    else
    {
      v40 = 1 << v37;
    }
    _InterlockedOr(v39, v40);
  }
LABEL_18:
  KxReleaseQueuedSpinLock(&v46);
  _InterlockedOr(v44, 0);
  *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  MiSetPfnBlink(a1, 0LL, 1);
  v25 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  if ( v25 == v24 )
  {
    v26 = 0;
    v27 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  }
  else
  {
    v26 = 1;
    v27 = MiMapPageInHyperSpaceWorker(v25, 0LL, 0x80000000) + 8LL * ((*(_DWORD *)(a1 + 8) >> 3) & 0x1FF);
  }
  v28 = MI_READ_PTE_LOCK_FREE(v27);
  MiUpdateTransitionPteFrame(v28, v7);
  if ( MiPteInShadowRange(v29) )
  {
    if ( (unsigned int)MiPteHasShadow(v31, v30) )
    {
      v32 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_21;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_21;
    }
    if ( (v30 & 1) != 0 )
      v30 |= 0x8000000000000000uLL;
  }
LABEL_21:
  *v33 = v30;
  if ( v32 )
    MiWritePteShadow(v33);
  if ( v26 == 1 )
  {
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v33, 0x11u, 0x80000000LL);
    v33 = (_QWORD *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  }
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
    && (((unsigned int)MiGetSystemRegionType((unsigned __int64)v33) - 5) & 0xFFFFFFF7) == 0 )
  {
    KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(v7 << 12);
    *(_QWORD *)(v43 - 1048) = KernelDirectoryTableBase;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v11 == 1 )
    *(_BYTE *)(a1 + 35) &= ~8u;
  *(_QWORD *)(a1 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  result = *(_BYTE *)(a1 + 35) & 0xDF;
  *(_BYTE *)(a1 + 35) = result;
  return result;
}
