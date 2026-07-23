/*
 * XREFs of MiCopyOnWrite @ 0x1400B4520
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x140083B60 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     MiWalkVaRange @ 0x140093BD0 (MiWalkVaRange.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiLockPagedAddress @ 0x140140A10 (MiLockPagedAddress.c)
 *     MiFaultInPagedPool @ 0x1402A5B5C (MiFaultInPagedPool.c)
 *     MiSplitReducedCommitClonePage @ 0x1402A8680 (MiSplitReducedCommitClonePage.c)
 *     MmReplaceImportEntry @ 0x1402AB3BC (MmReplaceImportEntry.c)
 *     MiLockHotPatchPageRange @ 0x1402B98A4 (MiLockHotPatchPageRange.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9B84 (MiPrepareImagePagesForHotPatch.c)
 *     MiValidVirtualizationFault @ 0x1402BC950 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x14001A320 (MiUnlockPageTableCharges.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiLogPageAccess @ 0x14006BDA0 (MiLogPageAccess.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiIdentifyPfn @ 0x1400A7E20 (MiIdentifyPfn.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 *     MiGetWsleProtection @ 0x1400B5B60 (MiGetWsleProtection.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400BC5E0 (ExpAcquireSpinLockExclusive.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     MiDecrementCombinedPte @ 0x14011FA64 (MiDecrementCombinedPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140121FC0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiBadShareCount @ 0x1401B5A1C (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiDecrementCloneBlockReference @ 0x1402C9820 (MiDecrementCloneBlockReference.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCopyOnWrite(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, ULONG_PTR Page, int a4)
{
  ULONG_PTR v5; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  ULONG_PTR v14; // r14
  __int64 v15; // r8
  _KPROCESS *Process; // rdi
  int v17; // eax
  char *SessionVm; // rax
  char v19; // dl
  int v20; // r11d
  char v21; // di
  int v22; // r15d
  __int64 v23; // r8
  char v24; // dl
  __int64 v25; // r8
  ULONG_PTR v26; // r9
  ULONG_PTR BugCheckParameter4; // r10
  char v28; // dl
  __int64 v29; // r8
  unsigned __int64 v31; // r11
  char v32; // al
  int v33; // r10d
  __int64 v34; // rcx
  unsigned __int64 Address; // rax
  unsigned int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rcx
  ULONG_PTR v39; // r8
  unsigned int v40; // esi
  int v41; // eax
  ULONG_PTR v42; // r12
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // r8
  unsigned __int8 v47; // cl
  char v48; // r15
  unsigned int WsleProtection; // eax
  __int64 v50; // r9
  int v51; // r10d
  unsigned int v52; // r11d
  signed __int64 v53; // rcx
  int v54; // r13d
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int16 NodeShiftedColor; // r10
  unsigned int *p_PageColor; // rax
  volatile signed __int32 *v58; // rdx
  unsigned __int64 v59; // rax
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rax
  LONG *v64; // r15
  LONG *v65; // rcx
  struct _KPRCB *v66; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v68; // eax
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // r11
  unsigned __int64 v71; // r9
  unsigned __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // r8
  signed __int64 v75; // rax
  __int64 v76; // rdx
  signed __int64 v77; // rtt
  unsigned __int64 v78; // r12
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rax
  __int64 v82; // r8
  unsigned int v83; // r10d
  unsigned __int64 v84; // rdx
  unsigned __int64 v85; // r8
  unsigned __int64 v86; // r9
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // r8
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int PagePriorityThread; // r15d
  unsigned __int8 v93; // cl
  char v94; // dl
  unsigned int v95; // r9d
  __int64 v96; // rax
  char v97; // si
  ULONG_PTR v98; // rax
  bool v99; // cf
  __int64 v100; // r15
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rbx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  _KPROCESS *v113; // rsi
  char v114; // al
  __int64 v115; // rdx
  int v116; // eax
  _QWORD *v117; // rcx
  int v118; // [rsp+30h] [rbp-D0h]
  __int64 v119; // [rsp+38h] [rbp-C8h]
  __int64 v121; // [rsp+48h] [rbp-B8h] BYREF
  int v122; // [rsp+50h] [rbp-B0h]
  int v123; // [rsp+54h] [rbp-ACh]
  int v124; // [rsp+58h] [rbp-A8h] BYREF
  int v125; // [rsp+5Ch] [rbp-A4h]
  int v126; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v127; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v128; // [rsp+70h] [rbp-90h]
  __int64 *v129; // [rsp+78h] [rbp-88h]
  _KPROCESS *v130; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-78h]
  ULONG_PTR v132; // [rsp+90h] [rbp-70h]
  __int64 v133; // [rsp+98h] [rbp-68h]
  unsigned __int64 v134[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v135; // [rsp+B8h] [rbp-48h]
  _QWORD v136[17]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v137[2]; // [rsp+150h] [rbp+50h] BYREF
  int v138; // [rsp+160h] [rbp+60h] BYREF
  __int16 v139; // [rsp+164h] [rbp+64h]
  __int64 v140; // [rsp+168h] [rbp+68h]
  __int64 v141; // [rsp+170h] [rbp+70h]
  __int64 v142; // [rsp+178h] [rbp+78h]
  void *retaddr; // [rsp+268h] [rbp+168h]

  v122 = a4;
  v5 = *(_QWORD *)a2;
  v129 = (__int64 *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    v8 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 8 * ((a2 >> 3) & 0x1FF));
      v10 = v5 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = v5;
      v5 = v10;
      if ( (v9 & 0x42) != 0 )
        v5 = v10 | 0x42;
    }
  }
  v121 = v5;
  v11 = v5;
  if ( (unsigned __int64)&v121 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v121 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    v12 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 8 * (((unsigned __int64)&v121 >> 3) & 0x1FF));
      v11 = v5 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v11 = v5;
      if ( (v13 & 0x42) != 0 )
        v11 |= 0x42uLL;
    }
    else
    {
      v11 = v5;
    }
  }
  v132 = (v11 >> 12) & 0xFFFFFFFFFLL;
  v14 = 48 * v132 - 0x58000000000LL;
  v128 = 0LL;
  v15 = *(_QWORD *)(v14 + 8);
  BugCheckParameter3 = v15 | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v130 = Process;
  if ( BugCheckParameter2 < 0xFFFF800000000000uLL )
  {
LABEL_41:
    if ( Process[1].Affinity.Bitmap[10] )
      return 3221226548LL;
    v118 = 1;
    v119 = (__int64)&Process[1].IdealNode[12];
    v21 = ((v5 & 0x200) == 0) | 2;
    v22 = 1;
    if ( v15 < 0 )
      v21 = (v5 & 0x200) == 0;
    memset(v136, 0, sizeof(v136));
    v136[7] = v119;
    v136[0] = BugCheckParameter2;
    if ( v136[1] >> 57 )
    {
      SessionVm = (char *)v119;
      v20 = 1;
      goto LABEL_72;
    }
    if ( (v136[2] & 1) != 0 )
    {
      v31 = v136[2] & 0xFFFFFFFFFFFFFFFEuLL;
      v32 = *(_BYTE *)(v136[2] & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v32 == 4 )
      {
        v33 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v31 + 40) + 588LL)] + 192)
                                  + 146LL);
      }
      else
      {
        if ( v32 != 2 )
          goto LABEL_55;
        v33 = *(_DWORD *)(v31 + 40);
      }
      if ( v33 )
      {
        SessionVm = (char *)v119;
        v20 = 1;
        goto LABEL_72;
      }
    }
    else
    {
      v31 = 0LL;
    }
LABEL_55:
    if ( (*(_BYTE *)(v119 + 184) & 7) == 0 )
    {
      v34 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
      if ( (BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL)
        && (v31 || *(_QWORD *)(v34 + 376) || *(_QWORD *)(v34 + 384) || *(_BYTE *)(v34 + 304) == 1) )
      {
        Address = MiLocateAddress(BugCheckParameter2);
        v128 = Address;
        if ( Address )
        {
          v36 = *(_DWORD *)(Address + 48);
          if ( ((v36 >> 8) & 0x3F) != 0 )
          {
            v20 = 1;
            v22 = 1;
LABEL_71:
            SessionVm = (char *)v119;
            goto LABEL_72;
          }
          if ( (v36 & 0x4000) == 0 )
          {
            v37 = **(_QWORD **)(Address + 72);
            if ( v37 )
            {
              if ( ((*(_DWORD *)(v37 + 56) >> 20) & 0x3F) != 0 )
              {
                v20 = 1;
                v22 = 1;
                goto LABEL_71;
              }
            }
          }
        }
      }
      v22 = 1;
    }
    v20 = 1;
    goto LABEL_71;
  }
  v17 = (unsigned __int8)byte_14043CA10[((BugCheckParameter2 >> 39) & 0x1FF) - 256];
  switch ( v17 )
  {
    case 1:
      SessionVm = (char *)MiGetSessionVm(0xFFFF800000000000uLL);
      v119 = (__int64)SessionVm;
      v21 = v19 | 2;
      v118 = 2;
      v22 = 2;
      if ( v23 < 0 )
        v21 = v19;
      goto LABEL_72;
    case 12:
      v22 = 0;
      v118 = 0;
      SessionVm = MiGetAnyMultiplexedVm(1);
      v119 = (__int64)SessionVm;
      v21 = v24 | 2;
      if ( v25 < 0 )
        v21 = v24;
      goto LABEL_72;
    case 9:
    case 15:
      KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v5, 2uLL);
  }
  if ( v17 != 6 )
  {
    if ( (_BYTE)v17 == 5 )
      KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v5, 1uLL);
    goto LABEL_41;
  }
  v22 = 0;
  v118 = 0;
  SessionVm = MiGetAnyMultiplexedVm(2);
  v119 = (__int64)SessionVm;
  v21 = v28 | 2;
  if ( v29 < 0 )
    KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v26, BugCheckParameter4);
LABEL_72:
  v38 = *((unsigned __int16 *)SessionVm + 87);
  v39 = BugCheckParameter2;
  v40 = 0;
  v41 = *(_DWORD *)v14 & 1;
  v133 = *(_QWORD *)(qword_14043B808 + 8 * v38);
  v125 = v41;
  v42 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = *(_QWORD *)v42;
  if ( v42 >= 0xFFFFF6FB7DBED000uLL && v42 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(v38, v43) && (v43 & 1) != 0 && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
    {
      v44 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v44 )
      {
        v45 = *(_QWORD *)(v44 + 8 * ((v42 >> 3) & 0x1FF));
        v46 = v43 | 0x20;
        if ( (v45 & 0x20) == 0 )
          v46 = v43;
        v43 = v46;
        if ( (v45 & 0x42) != 0 )
          v43 = v46 | 0x42;
      }
    }
    v39 = BugCheckParameter2;
  }
  v47 = HIBYTE(v43) & 0xF | (16 * ((v43 >> 60) & 7));
  v123 = v122 & 1;
  if ( (v122 & 1) == 0
    && (HIBYTE(v43) & 0xF) != 0xA
    && ((HIBYTE(v43) & 0xF) == 9 || v22 != 1 && (*(_BYTE *)(v14 + 35) & 8) != 0) )
  {
    v47 = (16 * ((v43 >> 60) & 7)) | 0xA;
  }
  v48 = v47 & 0xF;
  if ( (v47 & 0xF) == 0xA )
    goto LABEL_96;
  if ( v48 == 8 && v118 != 2 )
  {
    v40 = v20;
    if ( (*(_DWORD *)(v14 + 16) & 0x400LL) != 0 )
      v40 = 2;
  }
  WsleProtection = MiGetWsleProtection(v39, v47);
  if ( !WsleProtection )
LABEL_96:
    WsleProtection = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v14 + 16) >> 5) & 0x1F;
  v53 = WsleProtection;
  v54 = MmMakeProtectNotWriteCopy[WsleProtection];
  if ( Page == -1LL )
  {
    if ( v51 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      NodeShiftedColor = ((_WORD)v51 - 1) << byte_14043B109;
    }
    else
    {
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
      NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
    }
    p_PageColor = &CurrentPrcb->PageColor;
    v58 = (volatile signed __int32 *)v119;
    if ( (*(_BYTE *)(v119 + 184) & 7u) >= 2 )
      v58 = (volatile signed __int32 *)p_PageColor;
    Page = MiGetPage(
             v50,
             (unsigned __int16)(((_WORD)v52 << byte_14043B10A) - 1) & _InterlockedExchangeAdd(v58, v52) | (unsigned int)NodeShiftedColor,
             0);
    if ( Page == -1LL )
      return 3221225495LL;
  }
  if ( v40 )
  {
    if ( v40 >= 2 )
      MiReturnCommit(*(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL)), 1uLL);
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v14 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
  }
  if ( v54 == 24 )
  {
    v59 = v128;
    LOBYTE(v54) = 1;
    if ( v128 || (v59 = MiLocateAddress(BugCheckParameter2)) != 0 )
    {
      v60 = (*(_DWORD *)(v59 + 48) >> 3) & 0x1F;
      v53 = v60 >> 3;
      if ( (_DWORD)v53 == 3 && (v60 & 7) != 0 )
      {
        LOBYTE(v54) = 25;
      }
      else if ( (_DWORD)v53 == 1 )
      {
        LOBYTE(v54) = 9;
      }
    }
  }
  v61 = qword_14043B180;
  v62 = 48 * Page - 0x58000000000LL;
  v63 = 32LL * (v54 & 0x1F);
  if ( qword_14043B180 )
  {
    v53 = qword_14043B180 & v63;
    if ( (qword_14043B180 & v63) != 0 )
      v63 |= 0x10uLL;
    else
      v63 |= qword_14043B180;
  }
  *(_QWORD *)(v62 + 16) = v63;
  if ( v48 == 10 )
  {
    v78 = (unsigned __int64)v129;
    v70 = 0xFFFFF6FB7DBED000uLL;
  }
  else
  {
    v64 = &dword_14043C7E8;
    if ( (*(_BYTE *)(v119 + 184) & 7) == 2 )
      v65 = &dword_14043C7E8;
    else
      v65 = (LONG *)(v119 + 232);
    LOBYTE(v61) = -1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v65, v61);
    else
      ExpAcquireSpinLockExclusive(v65, v61);
    ++*(_QWORD *)(v119 + 144);
    if ( BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*(_QWORD *)(v119 + 128);
    if ( (*(_BYTE *)(v119 + 184) & 7) != 2 )
      v64 = (LONG *)(v119 + 232);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v64, retaddr);
    else
      *v64 = 0;
    v66 = KeGetCurrentPrcb();
    SchedulerAssist = v66->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v66->NestingLevel <= 1u )
      {
        v68 = SchedulerAssist[5] - 1;
        SchedulerAssist[5] = v68;
        if ( !v68 )
          KiRemoveSystemWorkPriorityKick(v66);
      }
    }
    v69 = *(_QWORD *)v42;
    v70 = 0xFFFFF6FB7DBED000uLL;
    v71 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v42 >= 0xFFFFF6FB7DBED000uLL
      && v42 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v66, v69)
      && (v69 & 1) != 0
      && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0) )
    {
      v72 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v72 )
      {
        v73 = *(_QWORD *)(v72 + 8 * ((v42 >> 3) & 0x1FF));
        v74 = v69 | 0x20;
        if ( (v73 & 0x20) == 0 )
          v74 = v69;
        v69 = v74;
        if ( (v73 & 0x42) != 0 )
          v69 = v74 | 0x42;
      }
    }
    v75 = *(_QWORD *)v42;
    v76 = (HIBYTE(v69) & 0xF) << 56;
    do
    {
      v53 = v76 | v75 & 0x80FFFFFFFFFFFFFFuLL;
      v77 = v75;
      v75 = _InterlockedCompareExchange64((volatile signed __int64 *)v42, v53, v75);
    }
    while ( v77 != v75 );
    v78 = (unsigned __int64)v129;
    v79 = *v129;
    if ( (unsigned __int64)v129 >= v70
      && (unsigned __int64)v129 <= v71
      && (unsigned int)MiPteHasShadow(v53, v79)
      && (v79 & 1) != 0
      && ((v79 & 0x20) == 0 || (v79 & 0x42) == 0) )
    {
      v53 = (signed __int64)KeGetCurrentThread()->ApcState.Process;
      v80 = *(_QWORD *)(v53 + 1544);
      if ( v80 )
      {
        v81 = *(_QWORD *)(v80 + 8 * ((v78 >> 3) & 0x1FF));
        v82 = v79 | 0x20;
        v53 = (unsigned __int8)v81;
        LOBYTE(v53) = v81 & 0x20;
        if ( (v81 & 0x20) == 0 )
          v82 = v79;
        v79 = v82;
        if ( (v81 & 0x42) != 0 )
          v79 = v82 | 0x42;
      }
    }
    v121 = v79;
  }
  v83 = 1;
  *(_WORD *)(v62 + 32) = 1;
  v84 = ((v78 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v85 = *(_QWORD *)v84;
  v86 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v84 >= v70
    && v84 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v53, v84)
    && ((unsigned __int8)v85 & (unsigned __int8)v83) != 0
    && ((v85 & 0x20) == 0 || (v85 & 0x42) == 0) )
  {
    v87 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v87 )
    {
      v88 = *(_QWORD *)(v87 + 8 * ((v84 >> 3) & 0x1FF));
      v84 = v85 | 0x20;
      if ( (v88 & 0x20) == 0 )
        v84 = v85;
      v85 = v84;
      if ( (v88 & 0x42) != 0 )
        v85 = v84 | 0x42;
    }
  }
  v127 = v85;
  if ( (unsigned __int64)&v127 >= v70
    && (unsigned __int64)&v127 <= v86
    && (unsigned int)MiPteHasShadow(&v127, v84)
    && ((unsigned __int8)v85 & (unsigned __int8)v83) != 0
    && ((v85 & 0x20) == 0 || (v85 & 0x42) == 0) )
  {
    v84 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v84 )
    {
      v89 = *(_QWORD *)(v84 + 8 * (((unsigned __int64)&v127 >> 3) & 0x1FF));
      v84 = v85 | 0x20;
      if ( (v89 & 0x20) == 0 )
        v84 = v85;
      v85 = v84;
      if ( (v89 & 0x42) != 0 )
        v85 = v84 | 0x42;
    }
  }
  v90 = (*(_QWORD *)(v62 + 40) ^ (v85 >> 12)) & 0xFFFFFFFFFLL;
  *(_QWORD *)(v62 + 40) ^= v90;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
    PagePriorityThread = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  else
    PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v21 |= 4u;
  v124 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v124, v84, v90);
      while ( *(__int64 *)(v62 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 24), 0x3FuLL) );
    v83 = 1;
  }
  if ( v125 )
    *(_QWORD *)v62 |= 1uLL;
  *(_BYTE *)(v62 + 34) |= 0x10u;
  if ( v118 || (*(_BYTE *)(v14 + 35) & 8) == 0 || v123 )
    *(_BYTE *)(v62 + 35) &= ~8u;
  else
    *(_BYTE *)(v62 + 35) |= 8u;
  v93 = *(_BYTE *)(v62 + 34);
  v94 = *(_BYTE *)(v62 + 35);
  v95 = *(unsigned __int8 *)(v14 + 34) >> 6;
  if ( v93 >> 6 != v95 )
  {
    MiChangePageAttribute(48 * Page - 0x58000000000LL, v95, v83);
    v94 = *(_BYTE *)(v62 + 35);
    v93 = *(_BYTE *)(v62 + 34);
  }
  v96 = *(_QWORD *)(v62 + 24);
  *(_QWORD *)(v62 + 8) = v78;
  *(_QWORD *)(v62 + 24) = v96 & 0xC000000000000000uLL | 1;
  *(_BYTE *)(v62 + 35) = v94 ^ (PagePriorityThread ^ v94) & 7;
  *(_BYTE *)(v62 + 34) = v93 & 0xF8 | 6;
  if ( (v21 & 4) != 0 )
  {
    memset(v134, 0, sizeof(v134));
    v135 = 0LL;
    MiIdentifyPfn((__int128 *)(48 * Page - 0x58000000000LL), v134);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v21 & 4) != 0 )
  {
    v135 |= 8uLL;
    v137[0] = v134;
    v137[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v137, 1, 671088641, 642, 289413890);
  }
  __incgsdword(0x2E94u);
  v97 = 1;
  if ( (v54 & 2) == 0 )
  {
    v97 = 9;
LABEL_212:
    v98 = BugCheckParameter2;
    goto LABEL_213;
  }
  if ( (MiFlags & 0x40000) != 0 )
    goto LABEL_212;
  v98 = BugCheckParameter2;
  if ( (MiFlags & 0x10000) == 0 )
  {
LABEL_213:
    if ( v98 >= 0xFFFF800000000000uLL )
      goto LABEL_216;
    goto LABEL_214;
  }
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
  {
    v97 = 17;
    if ( (v122 & 2) != 0 )
      v97 = 49;
    goto LABEL_213;
  }
LABEL_214:
  if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    v97 |= 0x10u;
LABEL_216:
  MiCopyPage(Page, v132, 0LL, v97);
  if ( dword_14043B9A8 )
  {
    v99 = PagePriorityThread < dword_14043B9AC;
    v100 = v119;
    if ( !v99 )
      MiLogPageAccess(v119, v78);
  }
  else
  {
    v100 = v119;
  }
  v101 = v121;
  if ( (v21 & 1) == 0 )
  {
    if ( v121 < 0 || v118 != 1 )
      v101 = v121 | 0x42;
    v101 = v101 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
  }
  v140 = 20LL;
  v102 = v101 ^ (v101 ^ (Page << 12)) & 0xFFFFFFFFF000LL;
  v138 = v118;
  v139 = 0;
  v141 = 0LL;
  v142 = 0LL;
  v121 = v102;
  MiInsertTbFlushEntry((__int64)&v138, BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
  if ( (v97 & 0x20) != 0 || (v102 & 0x42) == 0 )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(v78, v102);
    MiFlushTbList(&v138, v110, v111, v112);
  }
  else
  {
    v106 = v102 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( v78 >= 0xFFFFF6FB7DBED000uLL && v78 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow(v103, v106) )
    {
      *(_QWORD *)v78 = v106;
      MiWritePteShadow(v78);
    }
    else
    {
      *(_QWORD *)v78 = v106;
    }
    MiFlushTbList(&v138, v106, v104, v105);
    if ( v78 >= 0xFFFFF6FB7DBED000uLL && v78 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v108, v107) )
      {
        if ( !HIBYTE(word_14043B26C) && (v102 & 1) != 0 )
          v102 |= 0x8000000000000000uLL;
        *(_QWORD *)v78 = v102;
        MiWritePteShadow(v78);
        goto LABEL_250;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v121 & 1) != 0 )
      {
        v102 = v121 | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v78 = v102;
  }
LABEL_250:
  v113 = v130;
  if ( v118 == 1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v130[1].Affinity.Bitmap[13], 1uLL);
  v126 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v126, v107, v109);
    while ( *(__int64 *)(v14 + 24) < 0 );
  }
  if ( !v118 && !v123 )
  {
    v114 = *(_BYTE *)(v14 + 35);
    if ( (v114 & 8) != 0 )
      *(_BYTE *)(v14 + 35) = v114 & 0xF7;
  }
  if ( (*(_BYTE *)(v14 + 34) & 7) != 6 )
    MiBadShareCount(v14);
  v115 = (*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ v115) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v115 )
    MiPfnShareCountIsZero(v14, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v21 & 2) != 0 )
  {
    v116 = MiDecrementCombinedPte(v100, BugCheckParameter3);
LABEL_273:
    if ( v116 == 3 )
      MiChargeCommit(v133, 1uLL, 4u);
  }
  else if ( (*(_BYTE *)(v100 + 184) & 7) == 0 )
  {
    v117 = (_QWORD *)v113[1].Affinity.Bitmap[12];
    while ( v117 )
    {
      if ( BugCheckParameter3 > v117[4] )
      {
        v117 = (_QWORD *)v117[1];
      }
      else
      {
        if ( BugCheckParameter3 >= v117[3] )
        {
          v116 = MiDecrementCloneBlockReference((ULONG_PTR)v117, BugCheckParameter3);
          goto LABEL_273;
        }
        v117 = (_QWORD *)*v117;
      }
    }
  }
  return 0LL;
}
