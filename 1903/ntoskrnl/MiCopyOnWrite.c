/*
 * XREFs of MiCopyOnWrite @ 0x140059090
 * Callers:
 *     MiSplitPrivatePage @ 0x140020160 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140020860 (MiCopyToUserVa.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     MiProbeLeafPteAccess @ 0x14008F7B0 (MiProbeLeafPteAccess.c)
 *     MiValidFault @ 0x1400C7190 (MiValidFault.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiWalkVaRange @ 0x1400DE274 (MiWalkVaRange.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MiLockPagedAddress @ 0x140142C78 (MiLockPagedAddress.c)
 *     MiFaultInPagedPool @ 0x1402BCD00 (MiFaultInPagedPool.c)
 *     MiLockDriverPageRange @ 0x1402BD4B4 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFD20 (MiSplitReducedCommitClonePage.c)
 *     MmReplaceImportEntry @ 0x1402C3DDC (MmReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CFB90 (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x1402D1AF4 (MiMakeProtoPrivate.c)
 *     MiValidVirtualizationFault @ 0x1402D30A4 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiIdentifyPfn @ 0x1400054D0 (MiIdentifyPfn.c)
 *     MiUnlockPageTableCharges @ 0x140020B28 (MiUnlockPageTableCharges.c)
 *     MiPfnShareCountIsZero @ 0x140026B30 (MiPfnShareCountIsZero.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     MiLogPageAccess @ 0x14004DA40 (MiLogPageAccess.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     PsGetPagePriorityThread @ 0x14005A4E0 (PsGetPagePriorityThread.c)
 *     MiGetWsleProtection @ 0x14005A5D0 (MiGetWsleProtection.c)
 *     MiComputeFaultNode @ 0x14005A620 (MiComputeFaultNode.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiChangePageAttribute @ 0x1400F218C (MiChangePageAttribute.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401290E4 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiDecrementCombinedPte @ 0x140140850 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiDecrementCloneBlockReference @ 0x1402E3984 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiCopyOnWrite(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, ULONG_PTR Page, char a4)
{
  __int64 v7; // r9
  ULONG_PTR v8; // r9
  __int64 v9; // r15
  ULONG_PTR v10; // r14
  bool v11; // si
  _KPROCESS *Process; // rdx
  __int64 AnyMultiplexedVm; // r13
  int v14; // r11d
  char v15; // di
  int v16; // r8d
  int v17; // ecx
  bool v18; // zf
  unsigned int v19; // esi
  ULONG_PTR v20; // r8
  ULONG_PTR v21; // r9
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  char v24; // r15
  int WsleProtection; // eax
  int v26; // r10d
  int v27; // eax
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int8 v29; // al
  int v30; // edx
  volatile signed __int32 *p_PageColor; // rcx
  signed __int32 v32; // eax
  __int16 v33; // r10
  __int64 v34; // rsi
  __int64 v35; // rax
  char v36; // al
  volatile signed __int64 *v37; // r15
  struct _KPRCB *v38; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v40; // rdx
  __int64 v41; // rax
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  volatile signed __int64 *v44; // r9
  __int64 v45; // rdx
  signed __int64 v46; // rax
  __int64 v47; // rdx
  signed __int64 v48; // rtt
  __int64 v49; // rcx
  unsigned __int64 v50; // r8
  __int64 v51; // rcx
  unsigned int v52; // r10d
  int v53; // r11d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int PagePriorityThread; // r15d
  unsigned __int8 v56; // cl
  char v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rax
  char v60; // si
  ULONG_PTR v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  BOOL v66; // esi
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  _KPROCESS *v70; // rbx
  __int64 v71; // r8
  __int64 v72; // rcx
  _QWORD *v73; // rcx
  __int64 v75; // rsi
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  int v80; // eax
  ULONG_PTR v81; // r9
  char v82; // al
  __int64 SessionVm; // rax
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v85; // rax
  __int64 v86; // rdx
  unsigned __int64 v87; // r8
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 Address; // rax
  char v91; // si
  unsigned int v92; // ecx
  int v93; // eax
  int v94; // eax
  unsigned __int64 v95; // r8
  __int64 v96; // rax
  __int64 v97; // r8
  unsigned __int64 v98; // r8
  __int64 v99; // rax
  __int64 v100; // r8
  unsigned __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // r8
  int v104; // [rsp+30h] [rbp-D0h]
  int v105; // [rsp+34h] [rbp-CCh]
  __int64 v108; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v109; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int64 *v110; // [rsp+58h] [rbp-A8h]
  __int64 v111; // [rsp+60h] [rbp-A0h]
  int v112; // [rsp+68h] [rbp-98h] BYREF
  int v113; // [rsp+6Ch] [rbp-94h]
  int v114; // [rsp+70h] [rbp-90h] BYREF
  int v115; // [rsp+74h] [rbp-8Ch]
  __int64 v116; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v117; // [rsp+80h] [rbp-80h]
  __int64 v118; // [rsp+88h] [rbp-78h]
  _KPROCESS *v119; // [rsp+90h] [rbp-70h]
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp-68h]
  __int64 v121; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v122; // [rsp+A8h] [rbp-58h]
  __int64 v123; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR v124; // [rsp+B8h] [rbp-48h]
  signed __int64 v125; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v126[5]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v127[18]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v128[2]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v129[24]; // [rsp+190h] [rbp+90h] BYREF
  void *retaddr; // [rsp+298h] [rbp+198h]

  v117 = 0LL;
  v118 = 0LL;
  memset(v129, 0, 0xB8uLL);
  memset(v126, 0, 0x20uLL);
  v7 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v85 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a2 >> 3) & 0x1FF));
      v86 = v7 | 0x20;
      if ( (v85 & 0x20) == 0 )
        v86 = *(_QWORD *)a2;
      v7 = v86;
      if ( (v85 & 0x42) != 0 )
        v7 = v86 | 0x42;
    }
  }
  v108 = v7;
  v124 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v108) >> 12) & 0xFFFFFFFFFLL;
  v125 = 48 * v124;
  v9 = *(_QWORD *)(48 * v124 - 0x58000000000LL + 8);
  v10 = 48 * v124 - 0x58000000000LL;
  v116 = 0LL;
  BugCheckParameter3 = v9 | 0x8000000000000000uLL;
  v11 = (v8 & 0x200) == 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v119 = Process;
  if ( BugCheckParameter2 < 0xFFFF800000000000uLL )
    goto LABEL_3;
  v80 = byte_140467440[((BugCheckParameter2 >> 39) & 0x1FF) - 256];
  switch ( v80 )
  {
    case 1:
      SessionVm = MiGetSessionVm(0x8000000000000000uLL, Process, 1LL);
      v14 = 2;
      v104 = 2;
      v15 = v11 | 2;
      AnyMultiplexedVm = SessionVm;
LABEL_5:
      if ( v9 < 0 )
        v15 = v11;
      break;
    case 12:
      v104 = 0;
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
      v15 = v11;
      if ( v9 >= 0 )
        v15 = v11 | 2;
      break;
    case 9:
    case 14:
      KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v8, 2uLL);
    case 6:
      v104 = 0;
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
      v15 = v11 | 2;
      if ( v9 < 0 )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v81, 0LL);
      break;
    default:
      if ( (_BYTE)v80 == 5 )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v8, 1uLL);
LABEL_3:
      if ( Process[1].Affinity.Bitmap[10] )
        return 3221226548LL;
      v104 = 1;
      AnyMultiplexedVm = (__int64)&Process[1].IdealNode[6];
      memset(v127, 0, 0x88uLL);
      v127[7] = AnyMultiplexedVm;
      v127[0] = BugCheckParameter2;
      MiComputeFaultNode(v127, 0LL, &v116);
      v14 = 1;
      v15 = v11 | 2;
      v16 = 1;
      goto LABEL_5;
  }
  v17 = 0;
  v18 = (*(_BYTE *)v10 & 1) == 0;
  v19 = 0;
  v121 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  if ( !v18 )
    v17 = v16;
  v20 = BugCheckParameter2;
  v113 = v17;
  v21 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v122 = v21;
  v22 = *(_QWORD *)v21;
  if ( v21 >= 0xFFFFF6FB7DBED000uLL
    && v21 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v22 & 1) != 0
    && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
  {
    v87 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( v87 )
    {
      v88 = *(_QWORD *)(v87 + 8 * ((v21 >> 3) & 0x1FF));
      v89 = v22 | 0x20;
      if ( (v88 & 0x20) == 0 )
        v89 = *(_QWORD *)v21;
      v22 = v89;
      if ( (v88 & 0x42) != 0 )
        v22 = v89 | 0x42;
    }
    v20 = BugCheckParameter2;
  }
  v23 = v22 >> 60;
  LOBYTE(v23) = HIBYTE(v22) & 0xF | (16 * ((v22 >> 60) & 7));
  v115 = a4 & 1;
  if ( (a4 & 1) == 0
    && ((HIBYTE(v22) & 0xF) == 9 || v14 != 1 && (HIBYTE(v22) & 0xF) != 0xA && (*(_BYTE *)(v10 + 35) & 8) != 0) )
  {
    LOBYTE(v23) = (16 * ((v22 >> 60) & 7)) | 0xA;
  }
  v24 = v23 & 0xF;
  if ( (v23 & 0xF) == 0xA )
    goto LABEL_16;
  if ( v24 == 8 && v14 != 2 )
  {
    v19 = 1;
    if ( (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
      v19 = 2;
  }
  WsleProtection = MiGetWsleProtection(v20, v23);
  if ( !WsleProtection )
LABEL_16:
    WsleProtection = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10 + 16) >> 5) & 0x1F;
  v27 = MmMakeProtectNotWriteCopy[WsleProtection];
  v105 = v27;
  if ( Page == -1LL )
  {
    if ( v26 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      HIDWORD(v118) = (v26 - 1) << byte_140465A4D;
    }
    else
    {
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
      HIDWORD(v118) = CurrentPrcb->NodeShiftedColor;
    }
    v29 = *(_BYTE *)(AnyMultiplexedVm + 184) & 7;
    v30 = (1 << byte_140465A4E) - 1;
    LODWORD(v118) = v30;
    if ( v29 >= 2u )
      p_PageColor = (volatile signed __int32 *)&CurrentPrcb->PageColor;
    else
      p_PageColor = (volatile signed __int32 *)AnyMultiplexedVm;
    v117 = p_PageColor;
    v32 = _InterlockedExchangeAdd(p_PageColor, 1u);
    Page = MiGetPage(v121, v30 & (unsigned int)v32 | HIDWORD(v118), 0LL);
    if ( Page == -1LL )
      return 3221225495LL;
    v27 = v105;
  }
  if ( v19 )
  {
    if ( v19 >= 2 )
    {
      v75 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL));
      MiReturnCommit(v75, 1uLL);
      if ( v104 == 1 )
        _InterlockedDecrement64((volatile signed __int64 *)(v75 + 8576));
    }
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
    v27 = v105;
  }
  v33 = 1;
  if ( v27 == 24 )
  {
    Address = v116;
    v91 = 1;
    LOBYTE(v105) = 1;
    if ( v116 || (Address = MiLocateAddress(BugCheckParameter2), (v116 = Address) != 0) )
    {
      v92 = (*(_DWORD *)(Address + 48) >> 7) & 0x1F;
      if ( v92 >> 3 == 3 && (v92 & 7) != 0 )
      {
        LOBYTE(v105) = 25;
      }
      else
      {
        if ( v92 >> 3 == 1 )
          v91 = 9;
        LOBYTE(v105) = v91;
      }
    }
  }
  v34 = 48 * Page - 0x58000000000LL;
  v35 = 32LL * (v105 & 0x1F);
  if ( qword_140465B00 )
  {
    if ( (v35 & qword_140465B00) != 0 )
      v35 |= 0x10uLL;
    else
      v35 |= qword_140465B00;
  }
  *(_QWORD *)(v34 + 16) = v35;
  if ( v24 != 10 )
  {
    v36 = *(_BYTE *)(AnyMultiplexedVm + 184) & 7;
    v111 = 0LL;
    if ( v36 == 2 )
      v37 = (volatile signed __int64 *)&unk_140467240;
    else
      v37 = (volatile signed __int64 *)(AnyMultiplexedVm + 256);
    v110 = v37;
    v109 = 0LL;
    v38 = KeGetCurrentPrcb();
    SchedulerAssist = v38->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v38->NestingLevel <= 1u )
      {
        v93 = SchedulerAssist[5];
        SchedulerAssist[5] = v93 + 1;
        if ( v93 == -1 )
          KiRemoveSystemWorkPriorityKick(v38);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v109, v37);
    }
    else
    {
      v40 = (_QWORD *)_InterlockedExchange64(v37, (__int64)&v109);
      if ( v40 )
        KxWaitForLockOwnerShip((__int64)&v109, v40);
    }
    ++*(_QWORD *)(AnyMultiplexedVm + 144);
    if ( BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*(_QWORD *)(AnyMultiplexedVm + 128);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v109, retaddr);
    }
    else
    {
      _m_prefetchw(&v109);
      v41 = v109;
      if ( !v109 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v110, 0LL, (signed __int64)&v109) == &v109 )
          goto LABEL_41;
        v41 = KxWaitForLockChainValid(&v109);
      }
      v109 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v41 + 8), 1uLL);
    }
LABEL_41:
    v42 = KeGetCurrentPrcb();
    v43 = v42->SchedulerAssist;
    if ( v43 )
    {
      if ( v42->NestingLevel <= 1u )
      {
        v94 = v43[5] - 1;
        v43[5] = v94;
        if ( !v94 )
          KiRemoveSystemWorkPriorityKick(v42);
      }
    }
    v44 = (volatile signed __int64 *)v122;
    v45 = *(_QWORD *)v122;
    if ( v122 >= 0xFFFFF6FB7DBED000uLL
      && v122 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v45 & 1) != 0
      && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
    {
      v95 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v95 )
      {
        v96 = *(_QWORD *)(v95 + 8 * ((v122 >> 3) & 0x1FF));
        v97 = v45 | 0x20;
        if ( (v96 & 0x20) == 0 )
          v97 = *(_QWORD *)v122;
        v45 = v97;
        if ( (v96 & 0x42) != 0 )
          v45 = v97 | 0x42;
      }
    }
    v46 = *(_QWORD *)v122;
    v47 = v45 & 0xF00000000000000LL;
    do
    {
      v48 = v46;
      v46 = _InterlockedCompareExchange64(v44, v47 | v46 & 0x80FFFFFFFFFFFFFFuLL, v46);
    }
    while ( v48 != v46 );
    v49 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v49 & 1) != 0
      && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
    {
      v98 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v98 )
      {
        v99 = *(_QWORD *)(v98 + 8 * ((a2 >> 3) & 0x1FF));
        v100 = v49 | 0x20;
        if ( (v99 & 0x20) == 0 )
          v100 = *(_QWORD *)a2;
        v49 = v100;
        if ( (v99 & 0x42) != 0 )
          v49 = v100 | 0x42;
      }
    }
    v108 = v49;
    v33 = 1;
  }
  *(_WORD *)(v34 + 32) = v33;
  v50 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v51 = *(_QWORD *)v50;
  if ( v50 >= 0xFFFFF6FB7DBED000uLL
    && v50 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v51 & 1) != 0
    && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
  {
    v101 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( v101 )
    {
      v102 = *(_QWORD *)(v101 + 8 * ((v50 >> 3) & 0x1FF));
      v103 = v51 | 0x20;
      if ( (v102 & 0x20) == 0 )
        v103 = v51;
      v51 = v103;
      if ( (v102 & 0x42) != 0 )
        v51 = v103 | 0x42;
    }
  }
  v123 = v51;
  *(_QWORD *)(v34 + 40) ^= (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v123) >> 12) ^ *(_QWORD *)(v34 + 40)) & 0xFFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
    PagePriorityThread = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  else
    PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v15 |= 4u;
  v112 = v53;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v112);
      while ( *(__int64 *)(v34 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) );
    v52 = 1;
  }
  if ( v113 )
    *(_QWORD *)v34 |= 1uLL;
  *(_BYTE *)(v34 + 34) |= 0x10u;
  if ( v104 || (((a4 & 1) == 0) & (*(_BYTE *)(v10 + 35) >> 3)) == 0 )
    *(_BYTE *)(v34 + 35) &= ~8u;
  else
    *(_BYTE *)(v34 + 35) |= 8u;
  v56 = *(_BYTE *)(v34 + 34);
  v57 = *(_BYTE *)(v34 + 35);
  v58 = *(unsigned __int8 *)(v10 + 34) >> 6;
  if ( v56 >> 6 != (_DWORD)v58 )
  {
    MiChangePageAttribute(48 * Page - 0x58000000000LL, v58, v52);
    v57 = *(_BYTE *)(v34 + 35);
    v52 = 1;
    v56 = *(_BYTE *)(v34 + 34);
  }
  v59 = *(_QWORD *)(v34 + 24);
  *(_QWORD *)(v34 + 8) = a2;
  *(_QWORD *)(v34 + 24) = v59 & 0xC000000000000000uLL | 1;
  *(_BYTE *)(v34 + 35) = v57 ^ (v57 ^ PagePriorityThread) & 7;
  *(_BYTE *)(v34 + 34) = v56 & 0xF8 | 6;
  if ( (v15 & 4) != 0 )
  {
    MiIdentifyPfn(48 * Page - 0x58000000000LL, v126);
    v52 = 1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v15 & 4) != 0 )
  {
    v126[3] |= 8uLL;
    v128[0] = v126;
    v128[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v128, v52, 671088641, 642, 289413890);
    LOBYTE(v52) = 1;
  }
  __incgsdword(0x2E94u);
  v60 = v52;
  if ( (v105 & 2) == 0 )
  {
    v60 = 9;
LABEL_65:
    v61 = BugCheckParameter2;
    goto LABEL_66;
  }
  if ( (MiFlags & 0x40000) != 0 )
    goto LABEL_65;
  v61 = BugCheckParameter2;
  if ( (MiFlags & 0x10000) == 0 )
  {
LABEL_66:
    if ( v61 >= 0xFFFF800000000000uLL )
      goto LABEL_69;
    goto LABEL_67;
  }
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
  {
    v60 = 17;
    if ( (a4 & 2) != 0 )
      v60 = 49;
    goto LABEL_66;
  }
LABEL_67:
  if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    v60 |= 0x10u;
LABEL_69:
  MiCopyPage(Page, v124, 0LL, v60);
  if ( dword_140466368 && PagePriorityThread >= dword_14046636C )
    MiLogPageAccess(AnyMultiplexedVm, a2);
  v62 = v108;
  if ( (v15 & 1) == 0 )
  {
    if ( v108 < 0 || v104 != 1 )
      v62 = v108 | 0x42;
    v62 = v62 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
  }
  LODWORD(v129[0]) = v104;
  WORD2(v129[0]) = 0;
  v63 = v62 ^ (v62 ^ (Page << 12)) & 0xFFFFFFFFF000LL;
  LODWORD(v129[1]) = 20;
  v108 = v63;
  v129[2] = 0LL;
  v129[3] = 0LL;
  MiInsertTbFlushEntry((__int64)v129, BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
  if ( (v60 & 0x20) != 0 || (v63 & 0x42) == 0 )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(a2, v63);
    MiFlushTbList((int *)v129, v77, v78, v79);
  }
  else
  {
    v66 = MiPteInShadowRange(a2);
    if ( v66 && (unsigned int)MiPteHasShadow(v65) )
    {
      *(_QWORD *)a2 = v64;
      MiWritePteShadow(a2, v64);
    }
    else
    {
      *(_QWORD *)a2 = v64;
    }
    MiFlushTbList((int *)v129, v64, v67, v68);
    if ( v66 )
    {
      if ( (unsigned int)MiPteHasShadow(v69) )
      {
        if ( !HIBYTE(word_140465BEC) && (v63 & 1) != 0 )
          v63 |= 0x8000000000000000uLL;
        *(_QWORD *)a2 = v63;
        MiWritePteShadow(a2, v63);
        goto LABEL_82;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v63 & 1) != 0 )
      {
        v63 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v63;
  }
LABEL_82:
  v70 = v119;
  if ( v104 == 1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v119[1].Affinity.Bitmap[13], 1uLL);
  v114 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v114);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  if ( !v104 && !v115 )
  {
    v82 = *(_BYTE *)(v10 + 35);
    if ( (v82 & 8) != 0 )
      *(_BYTE *)(v10 + 35) = v82 & 0xF7;
  }
  v71 = *(unsigned __int8 *)(v10 + 34);
  if ( (v71 & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, v125 / 48, v71 & 7, *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v72 = (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v10 + 24) ^= (*(_QWORD *)(v10 + 24) ^ v72) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v72 )
    MiPfnShareCountIsZero(v10, 0LL, v71, 0x3FFFFFFFFFFFFFFFLL);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v15 & 2) != 0 )
  {
    v76 = MiDecrementCombinedPte(AnyMultiplexedVm, BugCheckParameter3);
LABEL_101:
    if ( v76 == 3 )
      MiChargeCommit(v121, 1uLL, 4u);
  }
  else if ( (*(_BYTE *)(AnyMultiplexedVm + 184) & 7) == 0 )
  {
    v73 = (_QWORD *)v70[1].Affinity.Bitmap[12];
    while ( v73 )
    {
      if ( BugCheckParameter3 > v73[4] )
      {
        v73 = (_QWORD *)v73[1];
      }
      else
      {
        if ( BugCheckParameter3 >= v73[3] )
        {
          v76 = MiDecrementCloneBlockReference((ULONG_PTR)v73, BugCheckParameter3);
          goto LABEL_101;
        }
        v73 = (_QWORD *)*v73;
      }
    }
  }
  return 0LL;
}
