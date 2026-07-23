/*
 * XREFs of MiPfnShareCountIsZero @ 0x1400382F0
 * Callers:
 *     MiUnlockPageTableCharges @ 0x14001A320 (MiUnlockPageTableCharges.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiDeletePteList @ 0x140035B80 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x140039750 (MiDeleteBatch.c)
 *     MiDeleteValidSystemPage @ 0x14007A850 (MiDeleteValidSystemPage.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiDeleteTransitionPte @ 0x140095370 (MiDeleteTransitionPte.c)
 *     MiWsleFree @ 0x1400B2BB0 (MiWsleFree.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MiReduceShareCount @ 0x1401240AC (MiReduceShareCount.c)
 * Callees:
 *     MiInsertProtectedStandbyPage @ 0x140028F30 (MiInsertProtectedStandbyPage.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsAddressGlobal @ 0x1400B2220 (MiIsAddressGlobal.c)
 *     MiUserPdeOrAbove @ 0x1400F96CC (MiUserPdeOrAbove.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(ULONG_PTR a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  bool v5; // zf
  __int64 v6; // rax
  char v7; // al
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // al
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r15
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  int v19; // r12d
  int v20; // eax
  signed int v21; // r12d
  __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 v25; // rdi
  _QWORD *MmInternal; // rbx
  unsigned __int64 v27; // rdi
  unsigned __int64 UltraMapping; // r11
  unsigned __int64 *v29; // r8
  __int64 v30; // r15
  __int64 v31; // rcx
  unsigned __int64 v32; // r11
  __int64 v33; // rdx
  char v34; // al
  char v35; // al
  char v36; // al
  unsigned __int64 v37; // rax
  struct _KEVENT *v38; // r9
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v50; // [rsp+60h] [rbp+8h] BYREF
  __int64 v51; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  if ( (v2 & 0x200000000000000LL) != 0 )
  {
    v12 = a1 + 16;
    v13 = *(_QWORD *)(a1 + 16);
    v14 = 0xFFFFF6FB7DBED000uLL;
    v15 = 0xFFFFF6FB7DBED7F8uLL;
    if ( a1 + 16 >= 0xFFFFF6FB7DBED000uLL
      && v12 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v39 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 8 * ((v12 >> 3) & 0x1FF));
        v41 = v13 | 0x20;
        if ( (v40 & 0x20) == 0 )
          v41 = *(_QWORD *)(a1 + 16);
        v13 = v41;
        if ( (v40 & 0x42) != 0 )
          v13 = v41 | 0x42;
      }
    }
    v16 = *(_QWORD *)(a1 + 8);
    v17 = v2 & 0xFFFFFFFFFLL;
    v18 = v13 >> 5;
    v19 = 4;
    v20 = *(unsigned __int8 *)(48 * v17 - 0x58000000000LL + 34) >> 6;
    if ( !v20 || v20 == 3 )
    {
      v19 = 12;
    }
    else if ( v20 == 2 )
    {
      v19 = 28;
    }
    v21 = v19 | 0xA0000000;
    v22 = v21 & 0x1F;
    v23 = (v17 << 12) | MmProtectToPteMask[v22] & 0xFFFF000000000E7FuLL | 0x121;
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = (v17 << 12) | MmProtectToPteMask[v22] & 0xFFFF000000000E7FuLL | 0x163;
    if ( v21 >= 0 || (v21 & 5) != 4 )
      v25 = v23;
    MmInternal = CurrentPrcb->MmInternal;
    v27 = ((word_14043B26C & 1 | 0xA000000000000LL) << 8) | v25 & 0xFAFFFFFFFFFFFEFFuLL;
    if ( !MmInternal
      || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL),
          v29 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
          v14 = 0xFFFFF6FB7DBED000uLL,
          MmInternal[1543] = v29,
          v15 = 0xFFFFF6FB7DBED7F8uLL,
          !UltraMapping) )
    {
      UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                   + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
      v29 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    }
    if ( (unsigned __int64)v29 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v29 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(0x7FFFFFFFF8LL, 0xFFFFF68000000000uLL) )
      {
        if ( !HIBYTE(word_14043B26C) && (v27 & 1) != 0 )
          v27 |= 0x8000000000000000uLL;
        *v29 = v27;
        MiWritePteShadow(v29);
        v14 = 0xFFFFF6FB7DBED000uLL;
        v15 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_26:
        v30 = (v16 >> 3) & 0x1FF;
        v31 = *(_QWORD *)(UltraMapping + 8 * v30);
        v32 = UltraMapping + 8 * v30;
        if ( v32 >= v14
          && v32 <= v15
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v31 & 1) != 0
          && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
        {
          v43 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v43 )
          {
            v44 = *(_QWORD *)(v43 + 8 * ((v32 >> 3) & 0x1FF));
            v45 = v31 | 0x20;
            if ( (v44 & 0x20) == 0 )
              v45 = v31;
            v31 = v45;
            if ( (v44 & 0x42) != 0 )
              v31 = v45 | 0x42;
          }
        }
        v50 = v31;
        if ( (unsigned __int64)&v50 >= v14
          && (unsigned __int64)&v50 <= v15
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v31 & 1) != 0
          && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
        {
          v46 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v46 )
          {
            v47 = *(_QWORD *)(v46 + 8 * (((unsigned __int64)&v50 >> 3) & 0x1FF));
            v48 = v31 | 0x20;
            if ( (v47 & 0x20) == 0 )
              v48 = v31;
            v31 = v48;
            if ( (v47 & 0x42) != 0 )
              v31 = v48 | 0x42;
          }
        }
        v33 = v31 & 0xFFFFFFFFF000LL | (32 * (v18 & 0x1F | 0x40));
        if ( qword_14043B180 )
        {
          if ( (qword_14043B180 & v33) != 0 )
            v33 |= 0x10uLL;
          else
            v33 |= qword_14043B180;
        }
        v50 = v33;
        if ( v32 >= v14 && v32 <= v15 )
        {
          if ( (unsigned int)MiPteHasShadow(qword_14043B180, v33) )
          {
            if ( !HIBYTE(word_14043B26C) && (v33 & 1) != 0 )
              v33 |= 0x8000000000000000uLL;
            *(_QWORD *)v32 = v33;
            MiWritePteShadow(v32);
            goto LABEL_34;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v33 & 1) != 0 )
          {
            v33 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v32 = v33;
LABEL_34:
        LOBYTE(v33) = 17;
        MiUnmapPageInHyperSpaceWorker(v32, v33, 0x80000000LL);
        goto LABEL_2;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v27 & 1) != 0 )
      {
        v27 |= 0x8000000000000000uLL;
      }
    }
    *v29 = v27;
    goto LABEL_26;
  }
LABEL_2:
  v5 = (*(_WORD *)(a1 + 32))-- == 1;
  v6 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    if ( (v6 & 0x4000000000000000LL) != 0 )
    {
      v7 = *(_BYTE *)(a1 + 35);
      if ( (v7 & 0x10) != 0 )
        *(_BYTE *)(a1 + 35) = v7 & 0xEF;
      v51 = *(_QWORD *)(a1 + 16);
      if ( (v51 & 0x400) == 0 && ((v51 & 4) != 0 || (v51 & 2) != 0) )
      {
        v37 = MI_READ_PTE_LOCK_FREE(&v51);
        if ( v37 )
          MiReleasePageFileInfo(v38, v37, 0);
      }
      MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48);
      return 4LL;
    }
    v9 = *(_QWORD *)(a1 + 16);
    v10 = -9LL;
    if ( (v9 & 0x400) != 0 )
      v10 = -2049LL;
    *(_QWORD *)(a1 + 16) = v9 & v10;
    v11 = *(_BYTE *)(a1 + 34);
    if ( (v11 & 0x10) != 0
      || (*(_BYTE *)(a1 + 34) = v11 & 0xF8 | 2, a2 <= 1)
      || (v34 = *(_BYTE *)(a1 + 35), (v34 & 8) != 0)
      || (v34 & 7u) >= 5 )
    {
      MiInsertPageInList(a1);
      return 4LL;
    }
    MiInsertProtectedStandbyPage(a2, a1, v2);
    return 4LL;
  }
  else
  {
    v5 = (v6 & 0x4000000000000000LL) == 0;
    v35 = *(_BYTE *)(a1 + 34);
    if ( v5 )
    {
      if ( (v35 & 0x10) != 0 )
        v36 = v35 & 0xF8 | 3;
      else
        v36 = v35 & 0xF8 | 2;
    }
    else
    {
      v36 = v35 | 7;
    }
    *(_BYTE *)(a1 + 34) = v36;
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(a1 + 16) )
      *(_BYTE *)(*(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)) + 659LL) = 1;
    return 3LL;
  }
}
