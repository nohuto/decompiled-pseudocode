/*
 * XREFs of MiMigratePfn @ 0x1400B3DB0
 * Callers:
 *     MiHandleTransitionFault @ 0x1400B2FD0 (MiHandleTransitionFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiObtainFaultCharges @ 0x140053830 (MiObtainFaultCharges.c)
 *     MiRemoveLockedPageCharge @ 0x1400546B0 (MiRemoveLockedPageCharge.c)
 *     MiAreChargesNeededToLockPage @ 0x140054D10 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140054D80 (MiIsPfnCommitNotCharged.c)
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiInitializeInPageSupport @ 0x14005A840 (MiInitializeInPageSupport.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiSetPfnTbFlushStamp @ 0x140096DC4 (MiSetPfnTbFlushStamp.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiCopyPfnEntryEx @ 0x1400C2B70 (MiCopyPfnEntryEx.c)
 *     MiReturnFreeZeroPage @ 0x1400C49C0 (MiReturnFreeZeroPage.c)
 *     MiChargeForLockedPage @ 0x1400CABD8 (MiChargeForLockedPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiChangePageAttribute @ 0x1400DA6CC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x140119998 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     MiReturnFaultCharges @ 0x140136414 (MiReturnFaultCharges.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall MiMigratePfn(unsigned __int64 *a1, __int64 a2, ULONG_PTR a3, PSLIST_ENTRY *a4)
{
  __int64 v4; // r9
  unsigned int *p_PageColor; // r11
  unsigned __int64 v7; // r12
  unsigned __int64 v9; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbx
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  __int64 v20; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int NodeShiftedColor; // ebx
  int v23; // r8d
  unsigned int v24; // ebx
  unsigned __int64 v25; // rcx
  ULONG_PTR *v26; // r10
  unsigned int v27; // r15d
  unsigned int *v28; // r8
  unsigned int *v29; // r9
  __int64 v30; // rax
  unsigned int v31; // r13d
  __int64 v32; // r8
  ULONG_PTR Page; // rax
  __int64 v34; // r14
  __int64 v35; // rdx
  PSLIST_ENTRY v36; // rax
  PSLIST_ENTRY v37; // rbx
  unsigned int v38; // r15d
  unsigned __int64 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // r9d
  __int64 v44; // rcx
  __int16 v45; // si
  char v46; // al
  unsigned __int64 Address; // rax
  unsigned int v48; // edx
  __int64 v49; // rcx
  _DWORD *v50; // r8
  int v51; // edx
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // r10
  int v56; // [rsp+20h] [rbp-68h] BYREF
  int v57; // [rsp+24h] [rbp-64h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-60h]
  ULONG_PTR *v59; // [rsp+30h] [rbp-58h]
  unsigned __int64 v60; // [rsp+38h] [rbp-50h]
  unsigned int *v61; // [rsp+40h] [rbp-48h]
  __int64 v62; // [rsp+48h] [rbp-40h]
  int v63; // [rsp+90h] [rbp+8h] BYREF
  int v64; // [rsp+98h] [rbp+10h] BYREF
  PSLIST_ENTRY *v65; // [rsp+A8h] [rbp+20h]

  v65 = a4;
  v4 = *(_QWORD *)(a2 + 40);
  p_PageColor = (unsigned int *)a1[7];
  v7 = *a1;
  v9 = a1[2];
  v61 = 0LL;
  v62 = 0LL;
  if ( (v4 & 0x10000000000000LL) != 0
    || byte_14046945E
    && _bittest64((const signed __int64 *)qword_140469D80, (unsigned __int64)((a2 + 0x58000000000LL) / 48) >> 9)
    || (unsigned __int16)KeNumberNodes <= 1u
    || *(_WORD *)(a2 + 32)
    || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
  {
    return a2;
  }
  if ( (v4 & 0x200000000000000LL) != 0 )
  {
    v12 = *(_QWORD *)(a2 + 16);
    if ( (v12 & 0x400) != 0 )
    {
      if ( qword_140465800 && (v12 & 0x10) == 0 )
        v12 &= ~qword_140465800;
      v13 = v12 >> 16;
      v14 = *(_QWORD *)v13;
      if ( v13 != *(_QWORD *)v13 + 128LL
        && (*(_DWORD *)(v14 + 56) & 0x20) != 0
        && (*(_DWORD *)(v14 + 92) & 0x20000) != 0 )
      {
        return a2;
      }
    }
  }
  v15 = 0LL;
  v16 = a1[1] >> 57;
  if ( (_DWORD)v16 )
    goto LABEL_82;
  if ( (v9 & 1) == 0 )
  {
    v17 = 0LL;
    goto LABEL_19;
  }
  v17 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
  v46 = *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v46 == 4 )
  {
    LODWORD(v16) = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v17 + 40) + 588LL)]
                                                   + 192)
                                       + 146LL)
                 + 1;
  }
  else
  {
    if ( v46 != 2 )
      goto LABEL_19;
    LODWORD(v16) = *(_DWORD *)(v17 + 40);
  }
  if ( (_DWORD)v16 )
    goto LABEL_82;
LABEL_19:
  if ( (p_PageColor[46] & 7) != 0 )
    goto LABEL_25;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v20 = *(_QWORD *)&Process[1].IdealNode[14];
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( !v17 && !*(_QWORD *)(v20 + 424) && !*(_QWORD *)(v20 + 432) && *(_BYTE *)(v20 + 352) != 1 )
      goto LABEL_25;
    Address = MiLocateAddress(v7);
    if ( Address )
    {
      v48 = *(_DWORD *)(Address + 48);
      LODWORD(v16) = (v48 >> 12) & 0x3F;
      if ( (_DWORD)v16 )
        goto LABEL_82;
      if ( (v48 & 0x100000) == 0 )
      {
        v49 = **(_QWORD **)(Address + 72);
        if ( v49 )
        {
          LODWORD(v16) = (*(_DWORD *)(v49 + 56) >> 20) & 0x3F;
          if ( (_DWORD)v16 )
            goto LABEL_82;
        }
      }
    }
  }
  if ( v17 && CurrentThread->ApcStateIndex == 1 )
    LODWORD(v16) = Process->IdealNode[CurrentThread->Affinity.Group] + 1;
LABEL_25:
  if ( !(_DWORD)v16 )
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
    goto LABEL_27;
  }
LABEL_82:
  CurrentPrcb = KeGetCurrentPrcb();
  NodeShiftedColor = ((_DWORD)v16 - 1) << byte_14046574D;
LABEL_27:
  HIDWORD(v62) = NodeShiftedColor;
  LODWORD(v62) = (1 << byte_14046574E) - 1;
  if ( !p_PageColor || (p_PageColor[46] & 7) >= 2 )
    p_PageColor = &CurrentPrcb->PageColor;
  v24 = NodeShiftedColor >> byte_14046574D;
  v25 = *(_QWORD *)(a2 + 40);
  v61 = p_PageColor;
  if ( v24 == v25 >> 58 )
    return a2;
  v26 = *(ULONG_PTR **)(qword_140465E88 + 8 * ((v25 >> 40) & 0x3FF));
  v59 = v26;
  v23 = (1 << byte_14046574E) - 1;
  v27 = HIDWORD(v62) | v23 & _InterlockedExchangeAdd((volatile signed __int32 *)p_PageColor, 1u);
  v28 = (unsigned int *)(qword_140465750 + 4LL * v24 * (unsigned __int16)KeNumberNodes);
  v29 = &v28[(unsigned __int16)KeNumberNodes];
  v60 = (unsigned __int64)v29;
  if ( v28 < v29 )
  {
    while ( 1 )
    {
      v30 = *v28;
      if ( (_DWORD)v30 == (unsigned __int8)HIBYTE(*(_QWORD *)(a2 + 40)) >> 2 )
        return a2;
      if ( *(_OWORD *)(v26[2] + 1984 * v30 + 1760) == 0LL && ++v28 < v29 )
        continue;
      break;
    }
  }
  v31 = 0;
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    v31 = 1;
  }
  else if ( (unsigned int)MiIsPfnCommitNotCharged(a2) )
  {
    v31 = 5;
  }
  if ( !(unsigned int)MiObtainFaultCharges(v26, 1u, v31) )
    return a2;
  v32 = 1LL;
  if ( (v9 & 1) != 0 && *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) == 4
    || v7 >= 0xFFFF800000000000uLL && byte_140467140[((v7 >> 39) & 0x1FF) - 256] == 12 )
  {
    v32 = 9LL;
  }
  Page = MiGetPage((__int64)v59, v27, v32);
  BugCheckParameter2 = Page;
  if ( Page == -1LL )
  {
LABEL_94:
    MiReturnFaultCharges(v59, 1LL, v31);
    return a2;
  }
  v34 = 48 * Page - 0x58000000000LL;
  v35 = *(_QWORD *)(v34 + 40) >> 58;
  if ( v24 != (_DWORD)v35 )
  {
    v50 = (_DWORD *)(qword_140465750 + 4LL * v24 * (unsigned __int16)KeNumberNodes);
    if ( (unsigned __int64)v50 < v60 )
    {
      v51 = v35 & 0x3F;
      while ( *v50 != (unsigned __int8)HIBYTE(*(_QWORD *)(a2 + 40)) >> 2 )
      {
        if ( *v50 != v51 && (unsigned __int64)++v50 < v60 )
          continue;
        goto LABEL_41;
      }
      goto LABEL_93;
    }
  }
LABEL_41:
  if ( a3 )
  {
    if ( !LOWORD(stru_140466510.Alignment) || (v36 = RtlpInterlockedPopEntrySList(&stru_140466510), (v37 = v36) == 0LL) )
    {
LABEL_93:
      MiLockNestedPageAtDpcInline(v34);
      MiReturnFreeZeroPage(v34, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_94;
    }
    MiInitializeInPageSupport((ULONG_PTR)v36, 6);
  }
  else
  {
    v37 = 0LL;
  }
  v38 = *(unsigned __int8 *)(a2 + 34) >> 6;
  MiLockNestedPageAtDpcInline(v34);
  if ( *(unsigned __int8 *)(v34 + 34) >> 6 != v38 )
    MiChangePageAttribute(v34, v38, 1LL);
  MiSetPfnTbFlushStamp(v34, 0, 1);
  MiCopyPfnEntryEx(v34, a2);
  *(_WORD *)(v34 + 32) = 1;
  *(_QWORD *)(v34 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  if ( v37 )
  {
    LODWORD(v37[12].Next) |= 0x20u;
    *(_BYTE *)(v34 + 34) |= 0x20u;
    *(_QWORD *)v34 = v37 + 2;
    *((_QWORD *)&v37[15].Next + 1) = v34;
  }
  v39 = *(_QWORD *)(v34 + 8) | 0x8000000000000000uLL;
  if ( MiPteInShadowRange(v39)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v40 & 1) != 0
    && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v53 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v39 >> 3) & 0x1FF));
      v54 = v40 | 0x20;
      if ( (v53 & 0x20) == 0 )
        v54 = v40;
      v40 = v54;
      if ( (v53 & 0x42) != 0 )
        v40 = v54 | 0x42;
    }
  }
  if ( qword_140465800 )
  {
    if ( (v40 & 0x10) != 0 )
      v40 &= ~0x10uLL;
    else
      v40 &= ~qword_140465800;
  }
  v41 = MiSwizzleInvalidPte(v40 ^ (v40 ^ (BugCheckParameter2 << 12)) & 0xFFFFFFFFF000LL);
  if ( v43 )
  {
    if ( (unsigned int)MiPteHasShadow(v42) )
    {
      if ( !HIBYTE(word_1404658EC) && (v41 & 1) != 0 )
        v41 |= v55;
      *(_QWORD *)v39 = v41;
      MiWritePteShadow(v39, v41);
      goto LABEL_55;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v41 & 1) != 0 )
    {
      v41 |= v55;
    }
  }
  *(_QWORD *)v39 = v41;
LABEL_55:
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    MiLockNestedPageAtDpcInline(a3);
    if ( !(unsigned int)MiAreChargesNeededToLockPage(a3) || (unsigned int)MiChargeForLockedPage(v44, 3LL) )
      ++*(_WORD *)(a3 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v63 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v63);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    *(_BYTE *)(a3 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *v65 = v37;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  MiCopyPage(BugCheckParameter2, (a2 + 0x58000000000LL) / 48, 0LL, 2);
  if ( a3 )
  {
    MiLockProtoPoolPage(v39, 0LL);
    v64 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v64);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v56 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v56);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2);
  }
  *(_QWORD *)(a2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  MiInsertPageInFreeOrZeroedList((a2 + 0x58000000000LL) / 48, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v57 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v57);
    while ( *(__int64 *)(v34 + 24) < 0 );
  }
  v45 = *(_WORD *)(v34 + 32);
  *(_BYTE *)(v34 + 34) &= ~0x20u;
  *(_QWORD *)v34 = 0LL;
  MiRemoveLockedPageCharge(v34);
  if ( !v37 )
    return v34;
  LODWORD(v37[12].Next) &= ~0x20u;
  if ( (*(_QWORD *)(v34 + 24) & 0x4000000000000000LL) == 0 )
    return v34;
  if ( v45 == 1 )
  {
    if ( (*(_DWORD *)(v34 + 16) & 0x400LL) == 0 )
      v15 = MiCapturePageFileInfoInline(v34 + 16, 0LL);
    MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 2);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
    MiUnlockProtoPoolPage(a3, 2u);
  if ( v15 )
    MiReleasePageFileInfo((__int64)v59, v15, 1);
  return 0LL;
}
