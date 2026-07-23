/*
 * XREFs of MiCopyDataPageToImagePage @ 0x14002D340
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiGetSessionIdForVa @ 0x14001BC8C (MiGetSessionIdForVa.c)
 *     MiInitializeTransitionPfn @ 0x140028D84 (MiInitializeTransitionPfn.c)
 *     MiCreateDecayPfn @ 0x1400294F4 (MiCreateDecayPfn.c)
 *     MiAdvanceFaultList @ 0x14002B6E0 (MiAdvanceFaultList.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiObtainProtoReference @ 0x14002DD34 (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14002DDDC (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1400304A0 (MiRemoveLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiEndingOffset @ 0x140031090 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140036060 (MiInsertAndUnlockStandbyPages.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiTryLockLeafPage @ 0x1400829FC (MiTryLockLeafPage.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E9C (MiDereferenceControlAreaPfnList.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14011B894 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MiDecayPfnFullyInitialized @ 0x14011BDE0 (MiDecayPfnFullyInitialized.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14013498C (MiUnlockNestedProtoPoolPage.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyPage @ 0x1401C0B30 (KeCopyPage.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r14
  unsigned int v10; // ebx
  unsigned int SessionIdForVa; // eax
  volatile LONG *v12; // r15
  unsigned __int64 v13; // rdi
  __int64 v14; // rdi
  ULONG_PTR v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned int i; // ecx
  ULONG_PTR *v20; // r14
  __int64 v21; // rcx
  ULONG_PTR v22; // r15
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  int v26; // r10d
  __int16 v27; // r11
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR *v29; // rsi
  ULONG_PTR v30; // rdi
  char v31; // r14
  __int64 v32; // r9
  ULONG_PTR *v33; // rsi
  __int64 v34; // r14
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  _QWORD *v42; // rdi
  __int64 v43; // r15
  __int64 ValidPte; // rax
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rdi
  PSLIST_ENTRY DecayPfn; // r15
  __int64 v59; // rbx
  unsigned __int8 v60; // di
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  ULONG_PTR v66; // rdi
  size_t v67; // rbx
  _QWORD *v68; // rcx
  __int64 v69; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  volatile LONG *Src; // [rsp+20h] [rbp-89h]
  void *Srca; // [rsp+20h] [rbp-89h]
  __int64 v73; // [rsp+28h] [rbp-81h]
  __int64 v74; // [rsp+30h] [rbp-79h]
  unsigned int v75; // [rsp+38h] [rbp-71h]
  unsigned __int64 v76; // [rsp+40h] [rbp-69h]
  ULONG_PTR v77; // [rsp+48h] [rbp-61h] BYREF
  int v78; // [rsp+50h] [rbp-59h] BYREF
  size_t v79; // [rsp+58h] [rbp-51h]
  ULONG_PTR BugCheckParameter2[18]; // [rsp+60h] [rbp-49h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+108h] [rbp+5Fh] BYREF
  unsigned __int64 v83; // [rsp+110h] [rbp+67h]
  __int64 v84; // [rsp+118h] [rbp+6Fh]

  v84 = a4;
  v83 = (unsigned __int64)a3;
  memset(BugCheckParameter2, 0, 0x50uLL);
  v9 = *a2;
  LOBYTE(v10) = 0;
  v73 = *a2;
  SessionIdForVa = MiGetSessionIdForVa(*(_QWORD *)(a1 + 224));
  v12 = (volatile LONG *)(v9 + 72);
  v76 = MiStartingOffset(a2, a3, SessionIdForVa);
  Src = (volatile LONG *)(v9 + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  v13 = *(_QWORD *)(v9 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140439C80);
  v14 = **(_QWORD **)(v13 + 40);
  v74 = v14;
  if ( !v14 || (SpinLock = (PEX_SPIN_LOCK)(v14 + 72), !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v14 + 72)) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
    goto LABEL_77;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
  v16 = 1LL;
  LOBYTE(v10) = 1;
  if ( !*(_QWORD *)(v14 + 32) || (*(_DWORD *)(v14 + 56) & 3) != 0 )
    goto LABEL_77;
  v10 = 9;
  v79 = MiEndingOffset(a2);
  v17 = v76 >> 12;
  if ( (unsigned int)(v76 >> 12) != (unsigned int)((v79 - 1) >> 12) )
    v10 = v16;
  v18 = v14 + 128;
  for ( i = *(_DWORD *)(v18 + 44); (unsigned int)v17 >= i; i = *(_DWORD *)(v18 + 44) )
  {
    v18 = *(_QWORD *)(v18 + 16);
    LODWORD(v17) = v17 - i;
    if ( !v18 )
      goto LABEL_28;
  }
  v20 = BugCheckParameter2;
  v15 = 0LL;
  v75 = 2;
  if ( !*(_DWORD *)(v18 + 104) )
  {
LABEL_27:
    v9 = v73;
LABEL_28:
    v14 = v74;
LABEL_77:
    if ( (v10 & 1) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
    if ( (v10 & 2) == 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v12);
    if ( BugCheckParameter2[5] )
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[5] + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[6] )
      MiUnlockNestedProtoPoolPage();
    v66 = BugCheckParameter2[0];
    if ( BYTE1(BugCheckParameter2[4]) == 1 )
      MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2[0]);
    if ( v66 )
      _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[1] )
    {
      LOBYTE(v15) = 2;
      MiUnlockProtoPoolPage(BugCheckParameter2[1], v15);
    }
    if ( (v10 & 4) != 0 )
      MiDereferenceControlAreaPfnList(v9, 0LL, v16, 3LL);
    return 0LL;
  }
  while ( 1 )
  {
    v21 = *(_QWORD *)(v18 + 8);
    v16 = 0x7FFFFFFFF8LL;
    if ( !v21 )
      goto LABEL_26;
    v22 = v21 + 8LL * (unsigned int)v17;
    if ( !v22 )
      goto LABEL_26;
    v23 = (v22 >> 9) & 0x7FFFFFFFF8LL;
    v24 = (v83 >> 9) & 0x7FFFFFFFF8LL;
    v20[2] = v22;
    if ( v23 == v24 || v20 != BugCheckParameter2 && v23 == ((*(v20 - 3) >> 9) & 0x7FFFFFFFF8LL) )
    {
      *v20 = MiTryLockLeafPage(v22, v15);
    }
    else
    {
      v25 = MiTryLockLeafAndContainingPagesAtDpc(v22, v20, (unsigned int)v15);
      if ( !v25 )
        goto LABEL_26;
      v20[1] = v25;
    }
    v15 = *v20;
    if ( !*v20
      || (*(_BYTE *)(v15 + 34) & 0x20) != 0
      || (*(_BYTE *)(v15 + 35) & 0x40) != 0
      || *(_WORD *)(v15 + 32) >= 0x7FFFu )
    {
LABEL_26:
      v12 = Src;
      goto LABEL_27;
    }
    v20[3] = MI_READ_PTE_LOCK_FREE(v22);
    if ( v20 != BugCheckParameter2 || (v27 & 0xFFF) == 0 || v10 >= 8 )
      break;
    v20 += 5;
    LODWORD(v17) = v17 + 1;
    v75 = v26 + 1;
    v15 = 1LL;
    if ( (unsigned int)v17 >= *(_DWORD *)(v18 + 44) )
    {
      v18 = *(_QWORD *)(v18 + 16);
      LODWORD(v17) = 0;
      if ( !v18 )
        goto LABEL_26;
    }
    if ( !*(_DWORD *)(v18 + 104) )
      goto LABEL_26;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  ++*(_QWORD *)(v73 + 32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v73 + 72));
  CurrentThread = KeGetCurrentThread();
  v29 = BugCheckParameter2;
  v30 = BugCheckParameter2[0];
  LOBYTE(v10) = v10 & 0xF8 | 6;
  v77 = BugCheckParameter2[0];
  if ( !BugCheckParameter2[0] )
    goto LABEL_41;
  while ( 1 )
  {
    v31 = 0;
    if ( (v29[3] & 1) == 0 && !*(_WORD *)(v30 + 32) )
    {
      *((_BYTE *)v29 + 32) = (*(_BYTE *)(v30 + 35) & 8) != 0;
      if ( !(unsigned int)MiUnlinkPageFromList(v30) )
      {
        MiDiscardTransitionPte(v30);
        goto LABEL_26;
      }
      v31 = 1;
      *(_QWORD *)(v30 + 24) &= 0xC000000000000000uLL;
    }
    if ( !(unsigned int)MiAddLockedPageCharge(v30, 0LL) )
    {
      if ( v31 )
        MiPfnReferenceCountIsZero(v30, (__int64)(v30 + 0x58000000000LL) / 48, v16, v32);
      goto LABEL_26;
    }
    *((_BYTE *)v29 + 33) = 1;
    if ( v29 != BugCheckParameter2 )
      break;
    v30 = v29[5];
    v29 += 5;
    v77 = v30;
    if ( !v30 )
      goto LABEL_40;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v29[1] )
  {
    MiUnlockNestedProtoPoolPage();
    v29[1] = 0LL;
  }
LABEL_40:
  v30 = BugCheckParameter2[0];
LABEL_41:
  *(_DWORD *)(a1 + 192) |= 0x20u;
  v33 = BugCheckParameter2;
  v77 = v30;
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( BugCheckParameter2[1] )
  {
    LOBYTE(v15) = 2;
    MiUnlockProtoPoolPage(BugCheckParameter2[1], v15);
  }
  v34 = a5;
  v35 = 48 * a5 - 0x58000000000LL;
  v78 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v78);
    while ( *(__int64 *)(v35 + 24) < 0 );
  }
  MiInitializeTransitionPfn(v34, (_QWORD *)v83);
  v36 = v84;
  *(_BYTE *)(v35 + 34) = *(_BYTE *)(v35 + 34) & 0xF8 | 2;
  *(_WORD *)(v35 + 32) = 1;
  *(_BYTE *)(v35 + 34) |= 0x20u;
  *(_QWORD *)v35 = a1 + 32;
  if ( (v36 & 1) != 0 )
  {
    v68 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)v68 == 1 )
    {
      MiAdvanceFaultList(v68);
      *(_DWORD *)(a1 + 192) |= 8u;
    }
  }
  *(_BYTE *)(v35 + 35) ^= ((*(_DWORD *)(a1 + 192) >> 9) ^ *(_BYTE *)(v35 + 35)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE(v83);
  *(_QWORD *)(a1 + 232) = v37;
  if ( (int)PsGetIoPriorityThread(CurrentThread) < 2 )
    *(_DWORD *)(a1 + 192) |= 0x80u;
  v38 = a6;
  v39 = a6;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 56;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 4096LL;
  *(_QWORD *)(a1 + 320) = v34;
  MiObtainProtoReference(v39, 0LL);
  LOBYTE(v40) = 2;
  MiUnlockProtoPoolPage(v38, v40);
  *(_WORD *)(a1 + 282) |= 0x42u;
  *(_QWORD *)(a1 + 96) = v76;
  *(_QWORD *)(a1 + 240) = v83;
  *(_QWORD *)(a1 + 208) = v73;
  *(_QWORD *)(a1 + 248) = v35;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 160) = v38;
  v41 = MiReservePtes(&qword_14043C060, v75);
  v42 = (_QWORD *)v41;
  if ( v41 )
  {
    v43 = v41 << 25 >> 16;
    Srca = (void *)(v43 + (v76 & 0xFFF) + 4096);
    ValidPte = MiMakeValidPte(v41, v34, 2684354564LL);
    if ( !(unsigned int)MiPteInShadowRange(v42, ValidPte, v45) )
      goto LABEL_49;
    if ( (unsigned int)MiPteHasShadow(v47, v46) )
    {
      if ( !HIBYTE(word_14043B26C) && (v46 & 1) != 0 )
        v46 |= v69;
      *v42 = v46;
      MiWritePteShadow(v42);
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v46 & 1) != 0 )
      {
        v46 |= v69;
      }
LABEL_49:
      *v42 = v46;
    }
    v48 = MiMakeValidPte(v42 + 1, (signed __int64)(BugCheckParameter2[0] + 0x58000000000LL) / 48, 536870913LL);
    if ( (unsigned int)MiPteInShadowRange(v42 + 1, v48, v49) )
    {
      if ( !(unsigned int)MiPteHasShadow(v51, v50) )
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v50 & 1) != 0 )
        {
          v50 |= 0x8000000000000000uLL;
        }
        goto LABEL_51;
      }
      if ( !HIBYTE(word_14043B26C) && (v50 & 1) != 0 )
        v50 |= 0x8000000000000000uLL;
      v42[1] = v50;
      MiWritePteShadow(v42 + 1);
    }
    else
    {
LABEL_51:
      v42[1] = v50;
    }
    if ( BugCheckParameter2[5] )
    {
      v52 = MiMakeValidPte(v42 + 2, (signed __int64)(BugCheckParameter2[5] + 0x58000000000LL) / 48, 536870913LL);
      if ( !(unsigned int)MiPteInShadowRange(v42 + 2, v52, v53) )
        goto LABEL_54;
      if ( (unsigned int)MiPteHasShadow(v55, v54) )
      {
        if ( !HIBYTE(word_14043B26C) && (v54 & 1) != 0 )
          v54 |= 0x8000000000000000uLL;
        v42[2] = v54;
        MiWritePteShadow(v42 + 2);
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v54 & 1) != 0 )
        {
          v54 |= 0x8000000000000000uLL;
        }
LABEL_54:
        v42[2] = v54;
      }
    }
    if ( v76 + 4096 > v79 )
    {
      v79 = ((_WORD)v79 - (_WORD)v76) & 0xFFF;
      v67 = v79;
      memmove((void *)v43, Srca, v79);
      memset((void *)(v67 + v43), 0, (unsigned int)(4096 - v79));
    }
    else
    {
      KeCopyPage(v43, Srca);
    }
    MiReleasePtes(&qword_14043C060, v42, v75);
    __incgsdword(0x2E98u);
    v56 = 0;
  }
  else
  {
    v56 = -1073741670;
  }
  v57 = a1;
  *(_DWORD *)(a1 + 80) = v56;
  if ( LOBYTE(BugCheckParameter2[4]) || LOBYTE(BugCheckParameter2[9]) )
    DecayPfn = MiCreateDecayPfn(4u);
  else
    DecayPfn = 0LL;
  v59 = BugCheckParameter2[0];
  v77 = BugCheckParameter2[0];
  if ( BugCheckParameter2[0] )
  {
    while ( 2 )
    {
      LOBYTE(SpinLock) = MiLockPageInline(v59);
      v60 = (unsigned __int8)SpinLock;
      if ( (unsigned int)MiRemoveLockedPageCharge(v59) )
      {
        if ( DecayPfn && *((_BYTE *)v33 + 32) && (*(_QWORD *)(v59 + 24) & 0x4000000000000000LL) == 0 )
        {
          MiInsertAndUnlockStandbyPages(DecayPfn, &v77, 1LL, v60);
          LOBYTE(SpinLock) = 17;
          goto LABEL_68;
        }
        MiPfnReferenceCountIsZero(v59, (v59 + 0x58000000000LL) / 48, v61, v62);
      }
      if ( v60 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)SpinLock < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8((unsigned __int8)SpinLock);
      }
LABEL_68:
      if ( v33 != BugCheckParameter2 || (v59 = v33[5], v33 += 5, (v77 = v59) == 0) )
      {
        v57 = a1;
        break;
      }
      continue;
    }
  }
  if ( DecayPfn )
    MiDecayPfnFullyInitialized((ULONG_PTR)DecayPfn);
  MiRelockProtoPoolPage(a6, &SpinLock);
  v63 = (unsigned __int8)SpinLock;
  v64 = a6;
  *(_DWORD *)(v57 + 192) &= ~0x20u;
  MiUnlockProtoPoolPage(v64, v63);
  *(_QWORD *)(v57 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(v57 + 32), 0, 0);
  return 1LL;
}
