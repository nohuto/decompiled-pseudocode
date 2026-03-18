/*
 * XREFs of MiCopyDataPageToImagePage @ 0x1400A6A0C
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiGetSessionIdForVa @ 0x1400070B4 (MiGetSessionIdForVa.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140025F10 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiRemoveLockedPageCharge @ 0x140054610 (MiRemoveLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     PsGetIoPriorityThread @ 0x14005A520 (PsGetIoPriorityThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRelockProtoPoolPage @ 0x140091D24 (MiRelockProtoPoolPage.c)
 *     MiInitializeTransitionPfn @ 0x1400A3DA8 (MiInitializeTransitionPfn.c)
 *     MiObtainProtoReference @ 0x1400A6590 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1400A7374 (MiAddLockedPageCharge.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1400A8124 (MiTryLockProtoPoolPageAtDpc.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400B2D10 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiEndingOffset @ 0x1400D8B3C (MiEndingOffset.c)
 *     MiStartingOffset @ 0x1400D8C50 (MiStartingOffset.c)
 *     MiTryLockLeafPage @ 0x1400DC7AC (MiTryLockLeafPage.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiAdvanceFaultList @ 0x1400F57E0 (MiAdvanceFaultList.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A450 (MiDereferenceControlAreaPfnList.c)
 *     MiDecayPfnFullyInitialized @ 0x14011A440 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14011C714 (MiCreateDecayPfn.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140135268 (MiUnlockNestedProtoPoolPage.c)
 *     MiDiscardTransitionPteEx @ 0x14016872C (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyPage @ 0x1401C7AB0 (KeCopyPage.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  ULONG_PTR v22; // rdi
  int v24; // r11d
  unsigned __int64 v25; // rsi
  __int64 v26; // rdi
  unsigned int v27; // ecx
  ULONG_PTR *v28; // r15
  __int64 v29; // rcx
  ULONG_PTR v30; // r12
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  ULONG_PTR v33; // rcx
  int v34; // r10d
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR *v36; // rsi
  ULONG_PTR v37; // rdi
  char v38; // r15
  ULONG_PTR *v39; // r13
  __int64 v40; // rdi
  __int64 v41; // rbx
  unsigned __int64 v42; // rsi
  char v43; // al
  __int64 v44; // r15
  unsigned __int64 v45; // rax
  ULONG_PTR v46; // rax
  _QWORD *v47; // rsi
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // r8d
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // r8d
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // r8d
  int v58; // eax
  __int64 DecayPfn; // rdi
  ULONG_PTR v60; // rbx
  unsigned __int8 v61; // si
  unsigned __int8 v62; // dl
  unsigned int v63; // edi
  __int64 v64; // r9
  char v65; // r11
  char v66; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  volatile LONG *SpinLock; // [rsp+28h] [rbp-99h]
  unsigned int v69; // [rsp+30h] [rbp-91h]
  _QWORD *Src; // [rsp+38h] [rbp-89h]
  void *Srca; // [rsp+38h] [rbp-89h]
  ULONG_PTR v72; // [rsp+40h] [rbp-81h] BYREF
  struct _KTHREAD *v73; // [rsp+48h] [rbp-79h]
  unsigned __int64 v74; // [rsp+50h] [rbp-71h]
  int v75; // [rsp+58h] [rbp-69h] BYREF
  ULONG_PTR v76; // [rsp+60h] [rbp-61h] BYREF
  ULONG_PTR BugCheckParameter2[10]; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int64 v78; // [rsp+B8h] [rbp-9h]
  unsigned __int8 v80; // [rsp+120h] [rbp+5Fh] BYREF
  unsigned __int64 v81; // [rsp+128h] [rbp+67h]
  __int64 v82; // [rsp+130h] [rbp+6Fh]

  v82 = a4;
  v81 = (unsigned __int64)a3;
  v8 = a1;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v9 = *a2;
  v10 = *(_QWORD *)(v8 + 224);
  LOBYTE(v11) = 0;
  v76 = 0LL;
  Src = (_QWORD *)v9;
  SessionIdForVa = MiGetSessionIdForVa(v10, v12, v13, v14);
  v16 = (volatile LONG *)(v9 + 72);
  v74 = MiStartingOffset(a2, a3, SessionIdForVa);
  SpinLock = (volatile LONG *)(v9 + 72);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  v17 = *(_QWORD *)(v9 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140464580);
  v18 = **(_QWORD **)(v17 + 40);
  if ( !v18 || !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v18 + 72) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464580);
LABEL_3:
    if ( (v11 & 1) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
    if ( (v11 & 2) == 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v16);
    if ( BugCheckParameter2[5] )
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[5] + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[6] )
      MiUnlockNestedProtoPoolPage();
    v22 = BugCheckParameter2[0];
    if ( BYTE1(BugCheckParameter2[4]) == 1 )
      MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2[0], v19, v20, v21);
    if ( v22 )
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[1] )
      MiUnlockProtoPoolPage(BugCheckParameter2[1], 2u);
    if ( (v11 & 4) != 0 )
      MiDereferenceControlAreaPfnList(Src, 0LL, v20, 3LL);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140464580);
  v20 = 1LL;
  LOBYTE(v11) = 1;
  if ( !*(_QWORD *)(v18 + 32) || (*(_DWORD *)(v18 + 56) & 3) != 0 )
    goto LABEL_3;
  v78 = MiEndingOffset(a2);
  v25 = v74 >> 12;
  v11 = v20 + 8;
  v26 = v18 + 128;
  if ( (unsigned int)(v74 >> 12) != (unsigned int)((v78 - 1) >> 12) )
    v11 = v20;
  while ( 1 )
  {
    v27 = *(_DWORD *)(v26 + 44);
    if ( (unsigned int)v25 < v27 )
      break;
    v26 = *(_QWORD *)(v26 + 16);
    LODWORD(v25) = v25 - v27;
    if ( !v26 )
      goto LABEL_3;
  }
  v28 = BugCheckParameter2;
  v69 = 2;
  while ( 1 )
  {
    if ( *(_DWORD *)(v26 + 104) == v24 )
      goto LABEL_96;
    v29 = *(_QWORD *)(v26 + 8);
    v19 = 0x7FFFFFFFF8LL;
    if ( !v29 )
      goto LABEL_96;
    v30 = v29 + 8LL * (unsigned int)v25;
    if ( !v30 )
      goto LABEL_96;
    v31 = (v30 >> 9) & 0x7FFFFFFFF8LL;
    v32 = (v81 >> 9) & 0x7FFFFFFFF8LL;
    v28[2] = v30;
    if ( v31 == v32 || v28 != BugCheckParameter2 && v31 == ((*(v28 - 3) >> 9) & 0x7FFFFFFFF8LL) )
    {
      MiTryLockLeafPage(v30, 0x7FFFFFFFF8LL, v28);
    }
    else
    {
      if ( (int)MiTryLockProtoPoolPageAtDpc(v30, 0x7FFFFFFFF8LL, &v76, v28) < 0 )
        goto LABEL_96;
      v28[1] = v76;
    }
    v33 = *v28;
    if ( !*v28
      || (*(_BYTE *)(v33 + 34) & 0x20) != 0
      || (*(_BYTE *)(v33 + 35) & 0x40) != 0
      || *(_WORD *)(v33 + 32) >= 0x7FFFu )
    {
LABEL_96:
      v16 = SpinLock;
      goto LABEL_3;
    }
    v28[3] = MI_READ_PTE_LOCK_FREE(v30);
    if ( v28 != BugCheckParameter2 || (v74 & 0xFFF) == 0 || v11 >= 8 )
      break;
    v20 = 1LL;
    v28 += 5;
    LODWORD(v25) = v25 + 1;
    v69 = v34 + 1;
    if ( (unsigned int)v25 >= *(_DWORD *)(v26 + 44) )
    {
      v26 = *(_QWORD *)(v26 + 16);
      LODWORD(v25) = v24;
      if ( !v26 )
        goto LABEL_96;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
  ++Src[4];
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  CurrentThread = KeGetCurrentThread();
  v36 = BugCheckParameter2;
  v37 = BugCheckParameter2[0];
  LOBYTE(v11) = v11 & 0xF8 | 6;
  v73 = CurrentThread;
  v72 = BugCheckParameter2[0];
  if ( !BugCheckParameter2[0] )
    goto LABEL_55;
  while ( 1 )
  {
    v38 = 0;
    if ( (v36[3] & 1) == 0 && !*(_WORD *)(v37 + 32) )
    {
      *((_BYTE *)v36 + 32) = (*(_BYTE *)(v37 + 35) & 8) != 0;
      if ( !(unsigned int)MiUnlinkPageFromList(v37) )
      {
        MiDiscardTransitionPteEx(v37, 0LL);
        goto LABEL_96;
      }
      v38 = 1;
      *(_QWORD *)(v37 + 24) &= 0xC000000000000000uLL;
    }
    if ( !(unsigned int)MiAddLockedPageCharge(v37, 0LL) )
    {
      if ( v38 )
        MiPfnReferenceCountIsZero(v37, (__int64)(v37 + 0x58000000000LL) / 48);
      goto LABEL_96;
    }
    *((_BYTE *)v36 + 33) = 1;
    if ( v36 != BugCheckParameter2 )
      break;
    v36 += 5;
    v37 = *v36;
    v72 = v37;
    if ( !v37 )
      goto LABEL_54;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v36[1] )
  {
    MiUnlockNestedProtoPoolPage();
    v36[1] = 0LL;
  }
LABEL_54:
  v37 = BugCheckParameter2[0];
  CurrentThread = v73;
LABEL_55:
  *(_DWORD *)(v8 + 192) |= 0x20u;
  v39 = BugCheckParameter2;
  v72 = v37;
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( BugCheckParameter2[1] )
    MiUnlockProtoPoolPage(BugCheckParameter2[1], 2u);
  v40 = a5;
  v41 = 48 * a5 - 0x58000000000LL;
  v75 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v75);
      while ( *(__int64 *)(v41 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) );
    CurrentThread = v73;
  }
  v42 = v81;
  MiInitializeTransitionPfn(v40, (_QWORD *)v81, -1LL);
  v43 = *(_BYTE *)(v41 + 34) & 0xF8 | 2;
  *(_BYTE *)(v41 + 34) = v43;
  *(_WORD *)(v41 + 32) = 1;
  *(_BYTE *)(v41 + 34) = v43 | 0x20;
  *(_QWORD *)v41 = v8 + 32;
  if ( (v82 & 1) != 0 && *(_BYTE *)(v82 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList(v82 & 0xFFFFFFFFFFFFFFFEuLL);
    *(_DWORD *)(v8 + 192) |= 8u;
  }
  *(_BYTE *)(v41 + 35) ^= ((*(_DWORD *)(v8 + 192) >> 9) ^ *(_BYTE *)(v41 + 35)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v8 + 168) = MI_READ_PTE_LOCK_FREE(v42);
  *(_QWORD *)(v8 + 232) = v42;
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v8 + 192) |= 0x80u;
  v44 = a6;
  *(_QWORD *)(v8 + 272) = 0LL;
  *(_QWORD *)(v8 + 304) = 0LL;
  *(_DWORD *)(v8 + 280) = 56;
  *(_QWORD *)(v8 + 312) = 4096LL;
  *(_QWORD *)(v8 + 320) = v40;
  MiObtainProtoReference(v44, 0);
  MiUnlockProtoPoolPage(v44, 2u);
  *(_WORD *)(v8 + 282) |= 0x42u;
  v45 = v74;
  *(_QWORD *)(v8 + 248) = v41;
  *(_QWORD *)(v8 + 208) = Src;
  *(_QWORD *)(v8 + 96) = v45;
  *(_QWORD *)(v8 + 240) = v42;
  *(_QWORD *)(v8 + 200) = 0LL;
  *(_QWORD *)(v8 + 160) = v44;
  v46 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)v69);
  v47 = (_QWORD *)v46;
  if ( v46 )
  {
    v48 = (__int64)(v46 << 25) >> 16;
    Srca = (void *)(v48 + (v74 & 0xFFF) + 4096);
    MiMakeValidPte(v46, v40, -1610612732);
    if ( !MiPteInShadowRange((unsigned __int64)v47) )
      goto LABEL_63;
    if ( (unsigned int)MiPteHasShadow(v50) )
    {
      v51 = 1;
      if ( !HIBYTE(word_140465BEC) )
        goto LABEL_114;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
LABEL_114:
      if ( (v49 & 1) != 0 )
        v49 |= v64;
    }
LABEL_63:
    *v47 = v49;
    if ( v51 )
      MiWritePteShadow(v47, v49);
    MiMakeValidPte(
      (unsigned __int64)(v47 + 1),
      (signed __int64)(BugCheckParameter2[0] + 0x58000000000LL) / 48,
      536870913);
    if ( MiPteInShadowRange((unsigned __int64)(v47 + 1)) )
    {
      if ( (unsigned int)MiPteHasShadow(v53) )
      {
        v54 = 1;
        if ( HIBYTE(word_140465BEC) != v65 )
          goto LABEL_66;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
      {
        goto LABEL_66;
      }
      if ( (v52 & 1) != 0 )
        v52 |= 0x8000000000000000uLL;
    }
LABEL_66:
    v47[1] = v52;
    if ( v54 )
      MiWritePteShadow(v47 + 1, v52);
    if ( BugCheckParameter2[5] )
    {
      MiMakeValidPte(
        (unsigned __int64)(v47 + 2),
        (signed __int64)(BugCheckParameter2[5] + 0x58000000000LL) / 48,
        536870913);
      if ( MiPteInShadowRange((unsigned __int64)(v47 + 2)) )
      {
        if ( (unsigned int)MiPteHasShadow(v56) )
        {
          v57 = 1;
          if ( HIBYTE(word_140465BEC) != v66 )
            goto LABEL_70;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        {
          goto LABEL_70;
        }
        if ( (v55 & 1) != 0 )
          v55 |= 0x8000000000000000uLL;
      }
LABEL_70:
      v47[2] = v55;
      if ( v57 )
        MiWritePteShadow(v47 + 2, v55);
    }
    if ( v74 + 4096 > v78 )
    {
      v63 = ((_WORD)v78 - (_WORD)v74) & 0xFFF;
      memmove((void *)v48, Srca, ((_WORD)v78 - (_WORD)v74) & 0xFFF);
      memset((void *)(v63 + v48), 0, 4096 - v63);
    }
    else
    {
      KeCopyPage(v48, Srca);
    }
    MiReleasePtes((__int64)&qword_1404669C0, (unsigned __int64)v47, v69);
    __incgsdword(0x2E98u);
    v44 = a6;
    v58 = 0;
  }
  else
  {
    v58 = -1073741670;
  }
  *(_DWORD *)(v8 + 80) = v58;
  DecayPfn = 0LL;
  if ( LOBYTE(BugCheckParameter2[4]) || LOBYTE(BugCheckParameter2[9]) )
    DecayPfn = MiCreateDecayPfn(4LL);
  v60 = BugCheckParameter2[0];
  v72 = BugCheckParameter2[0];
  if ( BugCheckParameter2[0] )
  {
    while ( 2 )
    {
      v80 = MiLockPageInline(v60);
      v61 = v80;
      if ( (unsigned int)MiRemoveLockedPageCharge(v60) )
      {
        if ( DecayPfn && *((_BYTE *)v39 + 32) && (*(_QWORD *)(v60 + 24) & 0x4000000000000000LL) == 0 )
        {
          MiInsertAndUnlockStandbyPages(DecayPfn, (__int64 *)&v72, 1u, v61);
          v80 = 17;
          goto LABEL_84;
        }
        MiPfnReferenceCountIsZero(v60, (__int64)(v60 + 0x58000000000LL) / 48);
      }
      if ( v61 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v80 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v80);
      }
LABEL_84:
      if ( v39 != BugCheckParameter2 || (v39 += 5, v60 = *v39, (v72 = v60) == 0) )
      {
        v8 = a1;
        v44 = a6;
        break;
      }
      continue;
    }
  }
  if ( DecayPfn )
    MiDecayPfnFullyInitialized(DecayPfn);
  MiRelockProtoPoolPage(v44, (char *)&v80);
  v62 = v80;
  *(_DWORD *)(v8 + 192) &= ~0x20u;
  MiUnlockProtoPoolPage(v44, v62);
  *(_QWORD *)(v8 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(v8 + 32), 0, 0);
  return 1LL;
}
