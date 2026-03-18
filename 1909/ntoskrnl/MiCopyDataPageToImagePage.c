/*
 * XREFs of MiCopyDataPageToImagePage @ 0x14009423C
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiGetSessionIdForVa @ 0x140007144 (MiGetSessionIdForVa.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140026300 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiRemoveLockedPageCharge @ 0x1400546B0 (MiRemoveLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x140093DC0 (MiObtainProtoReference.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400956A8 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiInitializeTransitionPfn @ 0x140096BD8 (MiInitializeTransitionPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiEndingOffset @ 0x1400B89BC (MiEndingOffset.c)
 *     MiStartingOffset @ 0x1400B8AD0 (MiStartingOffset.c)
 *     MiTryLockLeafPage @ 0x1400BC62C (MiTryLockLeafPage.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRelockProtoPoolPage @ 0x1400CF084 (MiRelockProtoPoolPage.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E2E00 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A020 (MiDereferenceControlAreaPfnList.c)
 *     MiDecayPfnFullyInitialized @ 0x1401184D0 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14011CC34 (MiCreateDecayPfn.c)
 *     MiAdvanceFaultList @ 0x140124668 (MiAdvanceFaultList.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140135B68 (MiUnlockNestedProtoPoolPage.c)
 *     MiDiscardTransitionPteEx @ 0x14016817C (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyPage @ 0x1401C8630 (KeCopyPage.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int SessionIdForVa; // eax
  volatile LONG *v16; // r15
  unsigned __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r8
  ULONG_PTR v20; // rdi
  int v22; // r11d
  unsigned __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned int v25; // ecx
  ULONG_PTR *v26; // r15
  __int64 v27; // rcx
  ULONG_PTR v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rax
  ULONG_PTR v31; // rcx
  int v32; // r10d
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR *v34; // rsi
  ULONG_PTR v35; // rdi
  char v36; // r15
  ULONG_PTR *v37; // r13
  __int64 v38; // rdi
  __int64 v39; // rbx
  unsigned __int64 v40; // rsi
  char v41; // al
  __int64 v42; // r15
  unsigned __int64 v43; // rax
  ULONG_PTR v44; // rax
  _QWORD *v45; // rsi
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // r8d
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // r8d
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // r8d
  int v56; // eax
  __int64 DecayPfn; // rdi
  ULONG_PTR v58; // rbx
  unsigned __int8 v59; // si
  unsigned __int8 v60; // dl
  unsigned int v61; // edi
  __int64 v62; // r9
  char v63; // r11
  char v64; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  volatile LONG *SpinLock; // [rsp+28h] [rbp-99h]
  unsigned int v67; // [rsp+30h] [rbp-91h]
  _QWORD *Src; // [rsp+38h] [rbp-89h]
  void *Srca; // [rsp+38h] [rbp-89h]
  ULONG_PTR v70; // [rsp+40h] [rbp-81h] BYREF
  struct _KTHREAD *v71; // [rsp+48h] [rbp-79h]
  unsigned __int64 v72; // [rsp+50h] [rbp-71h]
  int v73; // [rsp+58h] [rbp-69h] BYREF
  ULONG_PTR v74; // [rsp+60h] [rbp-61h] BYREF
  ULONG_PTR BugCheckParameter2[10]; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int64 v76; // [rsp+B8h] [rbp-9h]
  unsigned __int8 v78; // [rsp+120h] [rbp+5Fh] BYREF
  unsigned __int64 v79; // [rsp+128h] [rbp+67h]
  __int64 v80; // [rsp+130h] [rbp+6Fh]

  v80 = a4;
  v79 = a3;
  v8 = a1;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v9 = *a2;
  v10 = *(_QWORD *)(v8 + 224);
  LOBYTE(v11) = 0;
  v74 = 0LL;
  Src = (_QWORD *)v9;
  SessionIdForVa = MiGetSessionIdForVa(v10, v12, v13, v14);
  v16 = (volatile LONG *)(v9 + 72);
  v72 = MiStartingOffset(a2, a3, SessionIdForVa);
  SpinLock = (volatile LONG *)(v9 + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  v17 = *(_QWORD *)(v9 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140464280);
  v18 = **(_QWORD **)(v17 + 40);
  if ( !v18 || !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v18 + 72) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
LABEL_3:
    if ( (v11 & 1) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
    if ( (v11 & 2) == 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v16);
    if ( BugCheckParameter2[5] )
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[5] + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[6] )
      MiUnlockNestedProtoPoolPage();
    v20 = BugCheckParameter2[0];
    if ( BYTE1(BugCheckParameter2[4]) == 1 )
      MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2[0]);
    if ( v20 )
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[1] )
      MiUnlockProtoPoolPage(BugCheckParameter2[1], 2u);
    if ( (v11 & 4) != 0 )
      MiDereferenceControlAreaPfnList(Src, 0LL, v19, 3LL);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464280);
  v19 = 1LL;
  LOBYTE(v11) = 1;
  if ( !*(_QWORD *)(v18 + 32) || (*(_DWORD *)(v18 + 56) & 3) != 0 )
    goto LABEL_3;
  v76 = MiEndingOffset(a2);
  v23 = v72 >> 12;
  v11 = v19 + 8;
  v24 = v18 + 128;
  if ( (unsigned int)(v72 >> 12) != (unsigned int)((v76 - 1) >> 12) )
    v11 = v19;
  while ( 1 )
  {
    v25 = *(_DWORD *)(v24 + 44);
    if ( (unsigned int)v23 < v25 )
      break;
    v24 = *(_QWORD *)(v24 + 16);
    LODWORD(v23) = v23 - v25;
    if ( !v24 )
      goto LABEL_3;
  }
  v26 = BugCheckParameter2;
  v67 = 2;
  while ( 1 )
  {
    if ( *(_DWORD *)(v24 + 104) == v22 )
      goto LABEL_96;
    v27 = *(_QWORD *)(v24 + 8);
    if ( !v27 )
      goto LABEL_96;
    v28 = v27 + 8LL * (unsigned int)v23;
    if ( !v28 )
      goto LABEL_96;
    v29 = (v28 >> 9) & 0x7FFFFFFFF8LL;
    v30 = (v79 >> 9) & 0x7FFFFFFFF8LL;
    v26[2] = v28;
    if ( v29 == v30 || v26 != BugCheckParameter2 && v29 == ((*(v26 - 3) >> 9) & 0x7FFFFFFFF8LL) )
    {
      MiTryLockLeafPage(v28, 0x7FFFFFFFF8LL, v26);
    }
    else
    {
      if ( (int)MiTryLockProtoPoolPageAtDpc(v28, 0x7FFFFFFFF8LL, &v74, v26) < 0 )
        goto LABEL_96;
      v26[1] = v74;
    }
    v31 = *v26;
    if ( !*v26
      || (*(_BYTE *)(v31 + 34) & 0x20) != 0
      || (*(_BYTE *)(v31 + 35) & 0x40) != 0
      || *(_WORD *)(v31 + 32) >= 0x7FFFu )
    {
LABEL_96:
      v16 = SpinLock;
      goto LABEL_3;
    }
    v26[3] = MI_READ_PTE_LOCK_FREE(v28);
    if ( v26 != BugCheckParameter2 || (v72 & 0xFFF) == 0 || v11 >= 8 )
      break;
    v19 = 1LL;
    v26 += 5;
    LODWORD(v23) = v23 + 1;
    v67 = v32 + 1;
    if ( (unsigned int)v23 >= *(_DWORD *)(v24 + 44) )
    {
      v24 = *(_QWORD *)(v24 + 16);
      LODWORD(v23) = v22;
      if ( !v24 )
        goto LABEL_96;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
  ++Src[4];
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  CurrentThread = KeGetCurrentThread();
  v34 = BugCheckParameter2;
  v35 = BugCheckParameter2[0];
  LOBYTE(v11) = v11 & 0xF8 | 6;
  v71 = CurrentThread;
  v70 = BugCheckParameter2[0];
  if ( !BugCheckParameter2[0] )
    goto LABEL_55;
  while ( 1 )
  {
    v36 = 0;
    if ( (v34[3] & 1) == 0 && !*(_WORD *)(v35 + 32) )
    {
      *((_BYTE *)v34 + 32) = (*(_BYTE *)(v35 + 35) & 8) != 0;
      if ( !(unsigned int)MiUnlinkPageFromList(v35) )
      {
        MiDiscardTransitionPteEx(v35, 0LL);
        goto LABEL_96;
      }
      v36 = 1;
      *(_QWORD *)(v35 + 24) &= 0xC000000000000000uLL;
    }
    if ( !(unsigned int)MiAddLockedPageCharge(v35, 0LL) )
    {
      if ( v36 )
        MiPfnReferenceCountIsZero(v35, (__int64)(v35 + 0x58000000000LL) / 48);
      goto LABEL_96;
    }
    *((_BYTE *)v34 + 33) = 1;
    if ( v34 != BugCheckParameter2 )
      break;
    v34 += 5;
    v35 = *v34;
    v70 = v35;
    if ( !v35 )
      goto LABEL_54;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v34[1] )
  {
    MiUnlockNestedProtoPoolPage();
    v34[1] = 0LL;
  }
LABEL_54:
  v35 = BugCheckParameter2[0];
  CurrentThread = v71;
LABEL_55:
  *(_DWORD *)(v8 + 192) |= 0x20u;
  v37 = BugCheckParameter2;
  v70 = v35;
  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( BugCheckParameter2[1] )
    MiUnlockProtoPoolPage(BugCheckParameter2[1], 2u);
  v38 = a5;
  v39 = 48 * a5 - 0x58000000000LL;
  v73 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v73);
      while ( *(__int64 *)(v39 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) );
    CurrentThread = v71;
  }
  v40 = v79;
  MiInitializeTransitionPfn(v38, v79, -1LL);
  v41 = *(_BYTE *)(v39 + 34) & 0xF8 | 2;
  *(_BYTE *)(v39 + 34) = v41;
  *(_WORD *)(v39 + 32) = 1;
  *(_BYTE *)(v39 + 34) = v41 | 0x20;
  *(_QWORD *)v39 = v8 + 32;
  if ( (v80 & 1) != 0 && *(_BYTE *)(v80 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList(v80 & 0xFFFFFFFFFFFFFFFEuLL);
    *(_DWORD *)(v8 + 192) |= 8u;
  }
  *(_BYTE *)(v39 + 35) ^= ((*(_DWORD *)(v8 + 192) >> 9) ^ *(_BYTE *)(v39 + 35)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v8 + 168) = MI_READ_PTE_LOCK_FREE(v40);
  *(_QWORD *)(v8 + 232) = v40;
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v8 + 192) |= 0x80u;
  v42 = a6;
  *(_QWORD *)(v8 + 272) = 0LL;
  *(_QWORD *)(v8 + 304) = 0LL;
  *(_DWORD *)(v8 + 280) = 56;
  *(_QWORD *)(v8 + 312) = 4096LL;
  *(_QWORD *)(v8 + 320) = v38;
  MiObtainProtoReference(v42, 0);
  MiUnlockProtoPoolPage(v42, 2u);
  *(_WORD *)(v8 + 282) |= 0x42u;
  v43 = v72;
  *(_QWORD *)(v8 + 248) = v39;
  *(_QWORD *)(v8 + 208) = Src;
  *(_QWORD *)(v8 + 96) = v43;
  *(_QWORD *)(v8 + 240) = v40;
  *(_QWORD *)(v8 + 200) = 0LL;
  *(_QWORD *)(v8 + 160) = v42;
  v44 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)v67);
  v45 = (_QWORD *)v44;
  if ( v44 )
  {
    v46 = (__int64)(v44 << 25) >> 16;
    Srca = (void *)(v46 + (v72 & 0xFFF) + 4096);
    MiMakeValidPte(v44, v38, -1610612732);
    if ( !MiPteInShadowRange((unsigned __int64)v45) )
      goto LABEL_63;
    if ( (unsigned int)MiPteHasShadow(v48) )
    {
      v49 = 1;
      if ( !HIBYTE(word_1404658EC) )
        goto LABEL_114;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
LABEL_114:
      if ( (v47 & 1) != 0 )
        v47 |= v62;
    }
LABEL_63:
    *v45 = v47;
    if ( v49 )
      MiWritePteShadow(v45, v47);
    MiMakeValidPte(
      (unsigned __int64)(v45 + 1),
      (signed __int64)(BugCheckParameter2[0] + 0x58000000000LL) / 48,
      536870913);
    if ( MiPteInShadowRange((unsigned __int64)(v45 + 1)) )
    {
      if ( (unsigned int)MiPteHasShadow(v51) )
      {
        v52 = 1;
        if ( HIBYTE(word_1404658EC) != v63 )
          goto LABEL_66;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
      {
        goto LABEL_66;
      }
      if ( (v50 & 1) != 0 )
        v50 |= 0x8000000000000000uLL;
    }
LABEL_66:
    v45[1] = v50;
    if ( v52 )
      MiWritePteShadow(v45 + 1, v50);
    if ( BugCheckParameter2[5] )
    {
      MiMakeValidPte(
        (unsigned __int64)(v45 + 2),
        (signed __int64)(BugCheckParameter2[5] + 0x58000000000LL) / 48,
        536870913);
      if ( MiPteInShadowRange((unsigned __int64)(v45 + 2)) )
      {
        if ( (unsigned int)MiPteHasShadow(v54) )
        {
          v55 = 1;
          if ( HIBYTE(word_1404658EC) != v64 )
            goto LABEL_70;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        {
          goto LABEL_70;
        }
        if ( (v53 & 1) != 0 )
          v53 |= 0x8000000000000000uLL;
      }
LABEL_70:
      v45[2] = v53;
      if ( v55 )
        MiWritePteShadow(v45 + 2, v53);
    }
    if ( v72 + 4096 > v76 )
    {
      v61 = ((_WORD)v76 - (_WORD)v72) & 0xFFF;
      memmove((void *)v46, Srca, ((_WORD)v76 - (_WORD)v72) & 0xFFF);
      memset((void *)(v61 + v46), 0, 4096 - v61);
    }
    else
    {
      KeCopyPage(v46, Srca);
    }
    MiReleasePtes((__int64)&qword_1404666C0, (unsigned __int64)v45, v67);
    __incgsdword(0x2E98u);
    v42 = a6;
    v56 = 0;
  }
  else
  {
    v56 = -1073741670;
  }
  *(_DWORD *)(v8 + 80) = v56;
  DecayPfn = 0LL;
  if ( LOBYTE(BugCheckParameter2[4]) || LOBYTE(BugCheckParameter2[9]) )
    DecayPfn = MiCreateDecayPfn(4LL);
  v58 = BugCheckParameter2[0];
  v70 = BugCheckParameter2[0];
  if ( BugCheckParameter2[0] )
  {
    while ( 2 )
    {
      v78 = MiLockPageInline(v58);
      v59 = v78;
      if ( (unsigned int)MiRemoveLockedPageCharge(v58) )
      {
        if ( DecayPfn && *((_BYTE *)v37 + 32) && (*(_QWORD *)(v58 + 24) & 0x4000000000000000LL) == 0 )
        {
          MiInsertAndUnlockStandbyPages(DecayPfn, (__int64 *)&v70, 1u, v59);
          v78 = 17;
          goto LABEL_84;
        }
        MiPfnReferenceCountIsZero(v58, (__int64)(v58 + 0x58000000000LL) / 48);
      }
      if ( v59 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v78 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v78);
      }
LABEL_84:
      if ( v37 != BugCheckParameter2 || (v37 += 5, v58 = *v37, (v70 = v58) == 0) )
      {
        v8 = a1;
        v42 = a6;
        break;
      }
      continue;
    }
  }
  if ( DecayPfn )
    MiDecayPfnFullyInitialized(DecayPfn);
  MiRelockProtoPoolPage(v42, &v78);
  v60 = v78;
  *(_DWORD *)(v8 + 192) &= ~0x20u;
  MiUnlockProtoPoolPage(v42, v60);
  *(_QWORD *)(v8 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(v8 + 32), 0, 0);
  return 1LL;
}
