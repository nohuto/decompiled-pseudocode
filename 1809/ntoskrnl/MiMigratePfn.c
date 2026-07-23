/*
 * XREFs of MiMigratePfn @ 0x14003C640
 * Callers:
 *     MiHandleTransitionFault @ 0x14003B680 (MiHandleTransitionFault.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140022F3C (MiChargePartitionResidentAvailable.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiInitializeInPageSupport @ 0x14002C6B0 (MiInitializeInPageSupport.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiChargeForLockedPage @ 0x14002DE70 (MiChargeForLockedPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1400304A0 (MiRemoveLockedPageCharge.c)
 *     MiAreChargesNeededToLockPage @ 0x140030D40 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140030DB0 (MiIsPfnCommitNotCharged.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiReturnFreeZeroPage @ 0x14008228C (MiReturnFreeZeroPage.c)
 *     MiWriteValidPteVolatile @ 0x140085F90 (MiWriteValidPteVolatile.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiCopyPfnEntryEx @ 0x14010E080 (MiCopyPfnEntryEx.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     MiReturnFaultCharges @ 0x140134924 (MiReturnFaultCharges.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall MiMigratePfn(ULONG_PTR *a1, __int64 a2, ULONG_PTR a3, PSLIST_ENTRY *a4)
{
  ULONG_PTR v4; // r12
  __int64 v6; // r8
  ULONG_PTR v7; // r11
  unsigned int *p_PageColor; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  ULONG_PTR v14; // r10
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r11
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int16 NodeShiftedColor; // r10
  unsigned __int16 v19; // dx
  int v20; // r13d
  unsigned __int64 v21; // rcx
  struct _KEVENT *v22; // r11
  _WORD *v23; // r8
  _WORD *v24; // r14
  unsigned int v25; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r14
  __int64 v28; // rcx
  __int64 Address; // rax
  unsigned int v30; // edx
  __int64 v31; // rcx
  unsigned int v32; // esi
  int v33; // edi
  struct _KPRCB *v34; // r8
  signed __int32 CachedResidentAvailable; // edx
  bool v36; // zf
  signed __int32 v37; // eax
  __int64 v38; // r8
  ULONG_PTR Page; // rax
  __int64 v41; // rsi
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r13
  _WORD *v45; // rdx
  PSLIST_ENTRY v46; // rax
  PSLIST_ENTRY v47; // r12
  unsigned int v48; // edi
  __int64 v49; // rdx
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // r10
  __int64 v52; // r8
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  ULONG_PTR v57; // rdx
  __int64 v58; // r11
  __int64 v59; // rcx
  unsigned __int64 *v60; // r12
  unsigned __int64 v61; // r10
  __int64 v62; // r11
  unsigned __int64 v63; // rdx
  __int64 v64; // r9
  unsigned __int64 v65; // r14
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // rdi
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // r8
  __int64 v72; // rax
  __int64 v73; // rcx
  _BYTE *v74; // r14
  char i; // al
  char v76; // al
  ULONG_PTR v77; // rcx
  __int16 v78; // di
  unsigned __int64 v79; // [rsp+20h] [rbp-50h] BYREF
  struct _KEVENT *v80; // [rsp+28h] [rbp-48h]
  ULONG_PTR v81; // [rsp+30h] [rbp-40h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-38h]
  int v83; // [rsp+40h] [rbp-30h] BYREF
  int v84; // [rsp+44h] [rbp-2Ch] BYREF
  int v85; // [rsp+48h] [rbp-28h] BYREF
  int v86; // [rsp+4Ch] [rbp-24h] BYREF
  int v87; // [rsp+50h] [rbp-20h] BYREF
  int v88; // [rsp+54h] [rbp-1Ch] BYREF
  int v89; // [rsp+58h] [rbp-18h] BYREF
  int v90; // [rsp+5Ch] [rbp-14h] BYREF
  ULONG_PTR v91; // [rsp+60h] [rbp-10h]
  __int64 v92; // [rsp+B8h] [rbp+48h]
  PSLIST_ENTRY v93; // [rsp+B8h] [rbp+48h]

  v92 = a2;
  v4 = *a1;
  v6 = *(_QWORD *)(a2 + 40);
  v7 = a1[2];
  p_PageColor = (unsigned int *)a1[7];
  BugCheckParameter2 = *a1;
  v91 = v7;
  if ( (v6 & 0x10000000000000LL) != 0 )
    return v92;
  if ( byte_14043EC9E )
  {
    v10 = (__int64)((unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    if ( _bittest64((const signed __int64 *)qword_14043F2D8, ((v10 >> 63) + v10) >> 9) )
      return v92;
    a2 = v92;
  }
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || *(_WORD *)(a2 + 32)
    || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
  {
    return v92;
  }
  if ( (v6 & 0x200000000000000LL) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    if ( (v11 & 0x400) != 0 )
    {
      if ( qword_14043B180 && (v11 & 0x10) == 0 )
        v11 &= ~qword_14043B180;
      v12 = v11 >> 16;
      v13 = *(_QWORD *)v12;
      if ( v12 != *(_QWORD *)v12 + 128LL
        && (*(_DWORD *)(v13 + 56) & 0x20) != 0
        && (*(_DWORD *)(v13 + 92) & 0x200000) != 0 )
      {
        return v92;
      }
    }
  }
  v14 = a1[1] >> 57;
  v15 = 0LL;
  if ( (_DWORD)v14 )
    goto LABEL_23;
  if ( (v7 & 1) != 0 )
  {
    v16 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v16 == 4 )
    {
      LODWORD(v14) = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v16 + 40) + 588LL)]
                                                     + 192)
                                         + 146LL);
    }
    else
    {
      if ( *(_BYTE *)v16 != 2 )
        goto LABEL_36;
      LODWORD(v14) = *(_DWORD *)(v16 + 40);
    }
    if ( (_DWORD)v14 )
    {
LABEL_23:
      CurrentPrcb = KeGetCurrentPrcb();
      NodeShiftedColor = ((_WORD)v14 - 1) << byte_14043B109;
      goto LABEL_24;
    }
  }
  else
  {
    v16 = 0LL;
  }
LABEL_36:
  if ( (p_PageColor[46] & 7) != 0 )
    goto LABEL_51;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v28 = *(_QWORD *)&Process[1].IdealGlobalNode;
  if ( v4 < 0xFFFFF68000000000uLL || v4 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( !v16 && !*(_QWORD *)(v28 + 376) && !*(_QWORD *)(v28 + 384) && *(_BYTE *)(v28 + 304) != 1 )
      goto LABEL_51;
    Address = MiLocateAddress(v4);
    if ( Address )
    {
      v30 = *(_DWORD *)(Address + 48);
      LODWORD(v14) = (v30 >> 8) & 0x3F;
      if ( (_DWORD)v14 )
        goto LABEL_23;
      if ( (v30 & 0x4000) == 0 )
      {
        v31 = **(_QWORD **)(Address + 72);
        if ( v31 )
        {
          LODWORD(v14) = (*(_DWORD *)(v31 + 56) >> 20) & 0x3F;
          if ( (_DWORD)v14 )
            goto LABEL_23;
        }
      }
    }
  }
  if ( v16 && CurrentThread->ApcStateIndex == 1 )
    LODWORD(v14) = Process->IdealNode[CurrentThread->Affinity.Group] + 1;
LABEL_51:
  if ( (_DWORD)v14 )
    goto LABEL_23;
  CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
  NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
LABEL_24:
  if ( !p_PageColor || (p_PageColor[46] & 7) >= 2 )
    p_PageColor = &CurrentPrcb->PageColor;
  v20 = NodeShiftedColor >> byte_14043B109;
  v21 = *(_QWORD *)(v92 + 40);
  if ( v20 == v21 >> 58 )
    return v92;
  v22 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((v21 >> 40) & 0x3FF));
  v80 = v22;
  v19 = (1 << byte_14043B10A) - 1;
  LODWORD(v81) = NodeShiftedColor | v19 & _InterlockedExchangeAdd((volatile signed __int32 *)p_PageColor, 1u);
  v23 = (char *)qword_14043B110 + 2 * v20 * (unsigned int)(unsigned __int16)KeNumberNodes;
  v24 = &v23[(unsigned __int16)KeNumberNodes];
  if ( v23 < v24 )
  {
    while ( *v23 != ((*(_QWORD *)(v92 + 40) >> 58) & 0x3F) )
    {
      if ( *(_OWORD *)&v22->Header.WaitListHead.Blink[124 * (unsigned __int16)*v23 + 110] == 0LL && ++v23 < v24 )
        continue;
      goto LABEL_32;
    }
    return v92;
  }
LABEL_32:
  if ( (*(_QWORD *)(v92 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(v92 + 16) & 0x400LL) != 0 )
  {
    v25 = 1;
  }
  else
  {
    v25 = 0;
    if ( (unsigned int)MiIsPfnCommitNotCharged(v92) )
      v25 = 5;
  }
  v32 = 1;
  v33 = 1;
  if ( v22 == (struct _KEVENT *)&MiSystemPartition )
  {
    v34 = KeGetCurrentPrcb();
    CachedResidentAvailable = v34->CachedResidentAvailable;
    if ( CachedResidentAvailable )
    {
      do
      {
        if ( CachedResidentAvailable == -1 )
          break;
        v37 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&v34->CachedResidentAvailable,
                CachedResidentAvailable - 1,
                CachedResidentAvailable);
        v36 = CachedResidentAvailable == v37;
        CachedResidentAvailable = v37;
        if ( v36 )
          goto LABEL_62;
      }
      while ( v37 );
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v22, 1uLL, 1LL) )
    return v92;
  v22 = v80;
LABEL_62:
  if ( (v25 & 1) != 0 )
  {
    do
    {
      if ( (unsigned int)MiChargeCommit(v22, v32, 1LL) == 1 )
        break;
      v32 >>= 1;
      v22 = v80;
    }
    while ( v32 );
    if ( v32 != 1 )
      MiReturnFaultCharges(v80, 1 - v32, 0LL);
    v33 = v32;
  }
  if ( !v33 )
    return v92;
  v38 = 1LL;
  if ( (v91 & 1) != 0 && *(_BYTE *)(v91 & 0xFFFFFFFFFFFFFFFEuLL) == 4
    || BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_14043CA10[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 12 )
  {
    v38 = 9LL;
  }
  Page = MiGetPage(v80, (unsigned int)v81, v38);
  v81 = Page;
  if ( Page == -1LL )
  {
    MiReturnFaultCharges(v80, 1LL, v25);
    return v92;
  }
  v41 = 48 * Page - 0x58000000000LL;
  v42 = *(_QWORD *)(v41 + 40) >> 58;
  if ( v20 == (_DWORD)v42 )
  {
    v44 = v92;
  }
  else
  {
    v43 = v20 * (unsigned int)(unsigned __int16)KeNumberNodes;
    v44 = v92;
    v45 = (char *)qword_14043B110 + 2 * v43;
    if ( v45 < v24 )
    {
      while ( *v45 != ((*(_QWORD *)(v92 + 40) >> 58) & 0x3F) )
      {
        if ( *v45 != (v42 & 0x3F) && ++v45 < v24 )
          continue;
        goto LABEL_84;
      }
      goto LABEL_88;
    }
  }
LABEL_84:
  if ( a3 )
  {
    if ( !LOWORD(stru_14043BE50.Alignment) || (v46 = RtlpInterlockedPopEntrySList(&stru_14043BE50), (v93 = v46) == 0LL) )
    {
LABEL_88:
      MiLockNestedPageAtDpcInline(v41);
      MiReturnFreeZeroPage(v41, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiReturnFaultCharges(v80, 1LL, v25);
      return v44;
    }
    v47 = v46;
    MiInitializeInPageSupport((ULONG_PTR)v46, 6);
  }
  else
  {
    v47 = 0LL;
    v93 = 0LL;
  }
  v48 = *(unsigned __int8 *)(v44 + 34) >> 6;
  v83 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v83);
    while ( *(__int64 *)(v41 + 24) < 0 );
  }
  if ( *(unsigned __int8 *)(v41 + 34) >> 6 != v48 )
    MiChangePageAttribute(v41, v48, 1LL);
  *(_QWORD *)(v41 + 24) &= 0xF0FFFFFFFFFFFFFFuLL;
  MiCopyPfnEntryEx(v41, v44);
  *(_WORD *)(v41 + 32) = 1;
  *(_QWORD *)(v41 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(v44 + 34) = *(_BYTE *)(v44 + 34) & 0xF8 | 5;
  if ( v47 )
  {
    LODWORD(v47[12].Next) |= 0x20u;
    *(_BYTE *)(v41 + 34) |= 0x20u;
    *(_QWORD *)v41 = v47 + 2;
    *((_QWORD *)&v47[15].Next + 1) = v41;
  }
  v50 = *(_QWORD *)(v41 + 8) | 0x8000000000000000uLL;
  v51 = 0xFFFFF6FB7DBED000uLL;
  v52 = *(_QWORD *)v50;
  v53 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v50 >= 0xFFFFF6FB7DBED000uLL
    && v50 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(0xC000000000000000uLL, v49)
    && (v52 & 1) != 0
    && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
  {
    v54 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v54 )
    {
      v55 = *(_QWORD *)(v54 + 8 * ((v50 >> 3) & 0x1FF));
      v56 = v52 | 0x20;
      if ( (v55 & 0x20) == 0 )
        v56 = v52;
      v52 = v56;
      if ( (v55 & 0x42) != 0 )
        v52 = v56 | 0x42;
    }
  }
  if ( qword_14043B180 )
  {
    if ( (v52 & 0x10) != 0 )
      v52 &= ~0x10uLL;
    else
      v52 &= ~qword_14043B180;
  }
  v57 = v52 ^ (v52 ^ (v81 << 12)) & 0xFFFFFFFFF000LL;
  if ( qword_14043B180 )
  {
    if ( (v57 & qword_14043B180) != 0 )
      v57 |= 0x10uLL;
    else
      v57 |= qword_14043B180;
  }
  if ( v50 >= v51 && v50 <= v53 )
  {
    if ( (unsigned int)MiPteHasShadow(qword_14043B180, v57) )
    {
      if ( !HIBYTE(word_14043B26C) && (v57 & 1) != 0 )
        v57 |= v58;
      *(_QWORD *)v50 = v57;
      MiWritePteShadow(v50);
      goto LABEL_127;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v57 & 1) != 0 )
    {
      v57 |= v58;
    }
  }
  *(_QWORD *)v50 = v57;
LABEL_127:
  _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    v84 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v84);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(a3) || (unsigned int)MiChargeForLockedPage(v59, 3) )
      ++*(_WORD *)(a3 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v85 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v85);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    *(_BYTE *)(a3 + 34) &= ~0x20u;
    if ( (unsigned int)MiRemoveLockedPageCharge(a3) )
      MiPfnReferenceCountIsZero(a3, (__int64)(a3 + 0x58000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a4 = v47;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  BugCheckParameter2 = (v44 + 0x58000000000LL) / 48;
  MiCopyPage(v81, BugCheckParameter2, 0LL, 2LL);
  if ( a3 )
  {
    v60 = (unsigned __int64 *)(((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v61 = 0xFFFFFA8000000028uLL;
    v62 = 0x20000000000000LL;
    v63 = *v60;
    v79 = *v60;
    v64 = v79 & 1;
    while ( v64 && (v63 & 0x200) == 0 )
    {
      v65 = v63;
      if ( (unsigned __int64)&v79 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v79 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(&v79, v63)
        && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
      {
        v66 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v66 )
        {
          v67 = *(_QWORD *)(v66 + 8 * (((unsigned __int64)&v79 >> 3) & 0x1FF));
          if ( (v67 & 0x20) != 0 )
            v65 |= 0x20uLL;
          v63 = v79;
          if ( (v67 & 0x42) != 0 )
            v65 |= 0x42uLL;
        }
        else
        {
          v63 = v79;
          v65 = v79;
        }
      }
      v68 = (v65 >> 12) & 0xFFFFFFFFFLL;
      if ( (v62 & *(_QWORD *)(v61 + 48 * v68)) != 0 )
      {
        v69 = 48 * v68 - 0x58000000000LL;
        v86 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v69 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v86);
          while ( *(__int64 *)(v69 + 24) < 0 );
        }
        v70 = *v60;
        v79 = v70;
        if ( (v70 & 1) != 0 && (v70 & 0x200) == 0 )
        {
          if ( (unsigned __int64)&v79 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v79 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(&v79, v70)
            && ((v70 & 0x20) == 0 || (v70 & 0x42) == 0) )
          {
            v71 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v71 )
            {
              v72 = *(_QWORD *)(v71 + 8 * (((unsigned __int64)&v79 >> 3) & 0x1FF));
              if ( (v72 & 0x20) != 0 )
                v70 |= 0x20uLL;
              if ( (v72 & 0x42) != 0 )
                v70 |= 0x42uLL;
            }
            else
            {
              v70 = v79;
            }
          }
          if ( v68 == ((v70 >> 12) & 0xFFFFFFFFFLL) )
          {
            if ( !(unsigned int)MiAreChargesNeededToLockPage(v69) || (unsigned int)MiChargeForLockedPage(v73, 1) )
              ++*(_WORD *)(v69 + 32);
            v74 = (_BYTE *)(*(_QWORD *)(v69 + 8) | 0x8000000000000000uLL);
            for ( i = *(_BYTE *)(v69 + 34); (i & 0x20) != 0; i = *(_BYTE *)(v69 + 34) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v76 = *(_BYTE *)(v69 + 34);
              v87 = 0;
              if ( (v76 & 0x20) != 0 )
              {
                do
                  KeYieldProcessorEx(&v87);
                while ( (*(_BYTE *)(v69 + 34) & 0x20) != 0 );
              }
              MiLockPageInline(v69);
            }
            *(_BYTE *)(v69 + 34) = i | 0x20;
            if ( (*(_QWORD *)(v69 + 24) & 0x4000000000000000LL) == 0 && (*v74 & 0x20) == 0 )
              MiWriteValidPteVolatile(v74, 1LL);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        break;
      }
    }
    v88 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v88);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    if ( (unsigned int)MiRemoveLockedPageCharge(a3) )
      MiPfnReferenceCountIsZero(a3, (__int64)(a3 + 0x58000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v89 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v89);
      while ( *(__int64 *)(v44 + 24) < 0 );
    }
    v47 = v93;
  }
  else
  {
    MiLockPageInline(v44);
  }
  v77 = BugCheckParameter2;
  *(_QWORD *)(v44 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  MiInsertPageInFreeOrZeroedList(v77, 2);
  _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v90 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v90);
    while ( *(__int64 *)(v41 + 24) < 0 );
  }
  v78 = *(_WORD *)(v41 + 32);
  *(_BYTE *)(v41 + 34) &= ~0x20u;
  *(_QWORD *)v41 = 0LL;
  MiRemoveLockedPageCharge(v41);
  if ( !v47 )
    return v41;
  LODWORD(v47[12].Next) &= ~0x20u;
  if ( (*(_QWORD *)(v41 + 24) & 0x4000000000000000LL) == 0 )
    return v41;
  if ( v78 == 1 )
  {
    if ( (*(_DWORD *)(v41 + 16) & 0x400LL) == 0 )
      v15 = MiCapturePageFileInfoInline(v41 + 16, 0LL);
    MiInsertPageInFreeOrZeroedList(v81, 2);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
    MiUnlockProtoPoolPage(a3, 2u);
  if ( v15 )
    MiReleasePageFileInfo(v80, v15, 1);
  return 0LL;
}
