/*
 * XREFs of MiPfnShareCountIsZero @ 0x140026B30
 * Callers:
 *     MiUnlockPageTableCharges @ 0x140020B28 (MiUnlockPageTableCharges.c)
 *     MiDeleteValidSystemPage @ 0x140024550 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x140025750 (MiWsleFree.c)
 *     MiDeletePteList @ 0x140026F90 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x140028CD0 (MiDeleteBatch.c)
 *     MiDeleteTransitionPte @ 0x14002EB00 (MiDeleteTransitionPte.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiReduceShareCount @ 0x140130C4C (MiReduceShareCount.c)
 * Callees:
 *     MiInsertProtectedStandbyPage @ 0x140024110 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002A890 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsAddressGlobal @ 0x14006D7F0 (MiIsAddressGlobal.c)
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiUserPdeOrAbove @ 0x14011A7F0 (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned __int64 v5; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  int v13; // r14d
  int v14; // eax
  signed int v15; // r14d
  unsigned __int64 v16; // rbx
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v18; // rdi
  _QWORD *MmInternal; // rbx
  unsigned __int64 UltraMapping; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned __int64 *v23; // r8
  unsigned __int64 v24; // r9
  __int64 v25; // r11
  __int64 v26; // r15
  __int64 v27; // rcx
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r11
  __int64 v33; // r10
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r9
  _QWORD *v38; // r11
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  char v43; // al
  unsigned int v44; // edx
  char v46; // al
  char v47; // al
  char v48; // al
  __int64 v49; // rax
  __int64 v50; // r9
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // [rsp+60h] [rbp+8h] BYREF
  __int64 v58; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0xFFFFFA8000000000uLL;
  if ( (v4 & 0x200000000000000LL) != 0 )
  {
    v8 = a1 + 16;
    v9 = *(_QWORD *)(a1 + 16);
    if ( a1 + 16 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v52 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v8 >> 3) & 0x1FF));
        v53 = v9 | 0x20;
        if ( (v52 & 0x20) == 0 )
          v53 = *(_QWORD *)(a1 + 16);
        v9 = v53;
        if ( (v52 & 0x42) != 0 )
          v9 = v53 | 0x42;
      }
    }
    v10 = *(_QWORD *)(a1 + 8);
    v11 = v4 & 0xFFFFFFFFFLL;
    v12 = v9 >> 5;
    v13 = 4;
    v14 = *(unsigned __int8 *)(48 * v11 - 0x58000000000LL + 34) >> 6;
    if ( !v14 || v14 == 3 )
    {
      v13 = 12;
    }
    else if ( v14 == 2 )
    {
      v13 = 28;
    }
    v15 = v13 | 0xA0000000;
    v16 = (v11 << 12) | MmProtectToPteMask[v15 & 0x1F] & 0xFFFF000000000E7FuLL | 0x121;
    if ( (v15 & 5) == 4 && v15 < 0 )
      v16 = (v11 << 12) | MmProtectToPteMask[v15 & 0x1F] & 0xFFFF000000000E7FuLL | 0x163;
    CurrentPrcb = KeGetCurrentPrcb();
    v18 = v16 & 0xFAFFFFFFFFFFFEFFuLL | ((word_140465BEC & 1 | 0xA000000000000LL) << 8);
    MmInternal = CurrentPrcb->MmInternal;
    if ( !MmInternal
      || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL),
          v21 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          MmInternal[1543] = v21,
          !UltraMapping) )
    {
      v21 = (((((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
             + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12)) >> 9) & 0x7FFFFFFFF8LL)
          - 0x98000000000LL;
    }
    if ( (unsigned int)MiPteInShadowRange(v21, 0xFFFFF68000000000uLL, v21, 0xFFFFF6FB7DBED7F8uLL) )
    {
      if ( (unsigned int)MiPteHasShadow(v22) )
      {
        if ( !HIBYTE(word_140465BEC) )
          v18 |= 0x8000000000000000uLL;
        *v23 = v18;
        MiWritePteShadow(v23, v18);
        v24 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_14:
        v26 = (v10 >> 3) & 0x1FF;
        v27 = *(_QWORD *)(v25 + 8 * v26);
        v28 = v25 + 8 * v26;
        if ( v28 >= 0xFFFFF6FB7DBED000uLL
          && v28 <= v24
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v27 & 1) != 0
          && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          v54 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v54 )
          {
            v55 = *(_QWORD *)(v54 + 8 * ((v28 >> 3) & 0x1FF));
            v56 = v27 | 0x20;
            if ( (v55 & 0x20) == 0 )
              v56 = v27;
            v27 = v56;
            if ( (v55 & 0x42) != 0 )
              v27 = v56 | 0x42;
          }
        }
        v57 = v27;
        v29 = MI_READ_PTE_LOCK_FREE(&v57);
        v34 = 32 * (v12 & 0x1F | ((v33 & (v29 >> 12)) << 7) | 0x40);
        if ( qword_140465B00 )
        {
          if ( (qword_140465B00 & v34) != 0 )
            v34 |= 0x10uLL;
          else
            v34 |= qword_140465B00;
        }
        v57 = v34;
        if ( (unsigned int)MiPteInShadowRange(v32, v30, v31, v34) )
        {
          if ( (unsigned int)MiPteHasShadow(v36) )
          {
            if ( !HIBYTE(word_140465BEC) && (v37 & 1) != 0 )
              v37 |= 0x8000000000000000uLL;
            *v38 = v37;
            MiWritePteShadow(v38, v37);
            goto LABEL_20;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v37 & 1) != 0 )
          {
            v37 |= 0x8000000000000000uLL;
          }
        }
        *v38 = v37;
LABEL_20:
        LOBYTE(v35) = 17;
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v38, v35, 0x80000000LL);
        v5 = 0xFFFFFA8000000000uLL;
        goto LABEL_21;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        v18 |= 0x8000000000000000uLL;
    }
    *v23 = v18;
    goto LABEL_14;
  }
LABEL_21:
  v39 = *(_QWORD *)(a1 + 24);
  --*(_WORD *)(a1 + 32);
  v40 = (v39 >> 62) & 1;
  if ( *(_WORD *)(a1 + 32) )
  {
    v47 = *(_BYTE *)(a1 + 34);
    if ( (_DWORD)v40 )
    {
      v48 = v47 | 7;
    }
    else if ( (v47 & 0x10) != 0 )
    {
      v48 = v47 & 0xF8 | 3;
    }
    else
    {
      v48 = v47 & 0xF8 | 2;
    }
    *(_BYTE *)(a1 + 34) = v48;
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(a1 + 16) )
      *(_BYTE *)(*(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)) + 667LL) = 1;
    return 3LL;
  }
  else
  {
    if ( !(_DWORD)v40 )
    {
      v41 = *(_QWORD *)(a1 + 16);
      v42 = -9LL;
      if ( (v41 & 0x400) != 0 )
        v42 = -2049LL;
      *(_QWORD *)(a1 + 16) = v41 & v42;
      v43 = *(_BYTE *)(a1 + 34);
      if ( (v43 & 0x10) != 0 )
      {
        v44 = 136;
        if ( a2 != 1 )
          v44 = 8;
      }
      else
      {
        *(_BYTE *)(a1 + 34) = v43 & 0xF8 | 2;
        if ( a2 > 1 && (unsigned int)MiGetPfnPriority(a1, -2049LL, v4, a4) < 5 )
        {
          MiInsertProtectedStandbyPage(a2, a1);
          return 4LL;
        }
        v44 = 4;
      }
      MiInsertPageInList(a1, v44);
      return 4LL;
    }
    v46 = *(_BYTE *)(a1 + 35);
    if ( (v46 & 0x10) != 0 )
      *(_BYTE *)(a1 + 35) = v46 & 0xEF;
    v58 = *(_QWORD *)(a1 + 16);
    if ( (v58 & 0x400) == 0 && ((v58 & 4) != 0 || (v58 & 2) != 0) )
    {
      v49 = MI_READ_PTE_LOCK_FREE(&v58);
      if ( v49 )
      {
        MiReleasePageFileInfo(v50, v49, 0LL);
        v5 = 0xFFFFFA8000000000uLL;
      }
    }
    MiInsertPageInFreeOrZeroedList((__int64)(a1 - v5) / 48);
    return 4LL;
  }
}
