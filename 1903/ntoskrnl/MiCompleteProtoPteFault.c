/*
 * XREFs of MiCompleteProtoPteFault @ 0x1400D04D0
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiResolveDemandZeroFault @ 0x1400CCE70 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140009A30 (ObpTraceObjectDereferenceIfActive.c)
 *     MiGetPagePrivilege @ 0x140024900 (MiGetPagePrivilege.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     PfSnGetFileInformation @ 0x140094D90 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x14009511C (PfSnTraceGetLogEntry.c)
 *     ExAcquireRundownProtectionEx @ 0x140096AD0 (ExAcquireRundownProtectionEx.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     MiGetSubsectionDriverProtos @ 0x1400A8B4C (MiGetSubsectionDriverProtos.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1400A957C (MiCheckAndUpdateIoAttribution.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x1400CE8B0 (MiAllocateWsle.c)
 *     MiLocateCloneAddress @ 0x1400DFC38 (MiLocateCloneAddress.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     ObReferenceObjectExWithTag @ 0x14010AAE0 (ObReferenceObjectExWithTag.c)
 *     MiLockAndDecrementShareCount @ 0x14010DC9C (MiLockAndDecrementShareCount.c)
 *     MiUserPdeOrAbove @ 0x14011A7F0 (MiUserPdeOrAbove.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 *     MiSystemImageHasPrivateFixups @ 0x14011C30C (MiSystemImageHasPrivateFixups.c)
 *     MiMakeTransitionPteValid @ 0x140120AD0 (MiMakeTransitionPteValid.c)
 *     ObpDeferObjectDeletion @ 0x140128484 (ObpDeferObjectDeletion.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14012A24C (MiEmptyDeferredWorkingSetEntries.c)
 *     PfSnTraceBufferAllocate @ 0x14012E210 (PfSnTraceBufferAllocate.c)
 *     MiGetSharedProtos @ 0x14015C5CC (MiGetSharedProtos.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiIsAddressInDriverView @ 0x1402C7D40 (MiIsAddressInDriverView.c)
 *     MiSetFaultPacketDirectives @ 0x1402D3084 (MiSetFaultPacketDirectives.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCompleteProtoPteFault(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  ULONG_PTR v5; // r9
  int v6; // r14d
  ULONG_PTR v7; // r13
  __int64 v8; // r15
  char v9; // si
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  __int64 v22; // r11
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdi
  __int64 v26; // rdi
  int v27; // ecx
  char v28; // al
  __int64 v29; // rdx
  __int64 v30; // r11
  __int64 v31; // rcx
  char v32; // al
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // r8
  int v37; // eax
  signed __int64 v38; // rbx
  unsigned int v39; // r12d
  __int64 v40; // rdx
  unsigned __int64 v41; // r9
  __int64 v42; // rax
  _BYTE *v43; // r15
  __int64 v44; // rcx
  char v45; // di
  char v46; // dl
  volatile signed __int64 *v48; // r12
  signed __int64 v49; // rdx
  signed __int64 v50; // rax
  signed __int64 v51; // rdi
  unsigned int v52; // edx
  char *v53; // rdi
  unsigned __int64 v54; // rbx
  _KPROCESS *Process; // rcx
  unsigned __int64 v56; // rdx
  unsigned int v57; // r10d
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rbx
  struct _KTHREAD *CurrentThread; // r8
  _KPROCESS *v62; // r9
  bool v63; // zf
  int v64; // eax
  bool v65; // r10
  signed __int64 v66; // rdx
  signed __int64 v67; // rax
  unsigned __int64 v68; // rdi
  unsigned int v69; // edx
  struct _KTHREAD *v70; // rax
  unsigned __int64 v71; // rbx
  BOOL v72; // edx
  __int64 v73; // rcx
  signed __int32 v74; // eax
  char v75; // cc
  signed __int32 v76; // eax
  unsigned __int64 *v77; // r8
  signed __int64 v78; // rax
  signed __int64 v79; // rtt
  _KPROCESS *v80; // rcx
  int v81; // eax
  _KPROCESS *v82; // rcx
  __int64 v83; // rax
  unsigned __int8 v84; // cl
  __int64 v85; // rbx
  unsigned __int16 v86; // ax
  char v87; // dl
  __int16 v88; // ax
  unsigned __int64 v89; // r9
  unsigned __int64 v90; // r10
  __int64 HasPrivateFixups; // rax
  __int64 v92; // rdx
  unsigned int v93; // ecx
  signed __int64 *v94; // roff
  signed __int64 v95; // rax
  signed __int64 v96; // rtt
  _QWORD *v97; // rcx
  unsigned __int64 Address; // rax
  unsigned __int64 v99; // r10
  int v100; // eax
  char v101; // cl
  char v102; // cl
  __int64 v103; // rax
  signed __int64 v104; // rax
  signed __int64 v105; // rtt
  int LogEntry; // eax
  unsigned __int64 *v107; // rcx
  int v108; // eax
  KIRQL v109; // di
  KIRQL v110; // al
  _QWORD *v111; // rdx
  _QWORD *v112; // rcx
  KIRQL v113; // al
  signed __int32 v114; // eax
  signed __int64 BugCheckParameter4; // rax
  KIRQL v116; // al
  struct _KPRCB *v117; // rcx
  __int64 SharedProtos; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int64 v120; // rax
  signed __int64 v121; // rtt
  unsigned __int64 v122; // rax
  unsigned __int8 CurrentIrql; // al
  bool v124; // cf
  struct _KPRCB *v125; // rcx
  unsigned __int8 v126; // al
  struct _KPRCB *v127; // rcx
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v129; // rax
  __int64 v130; // r8
  unsigned __int64 v131; // r8
  __int64 v132; // rax
  __int64 v133; // r8
  unsigned __int64 v134; // r9
  __int64 v135; // rax
  char PagePrivilege; // bl
  int v137; // eax
  unsigned __int64 v138; // rbx
  unsigned __int8 v139; // al
  unsigned __int8 v140; // r12
  unsigned __int8 v141; // r9
  __int64 v142; // rax
  struct _KPRCB *v143; // rcx
  KIRQL v145; // [rsp+40h] [rbp-C0h]
  KIRQL v146; // [rsp+40h] [rbp-C0h]
  char v147; // [rsp+44h] [rbp-BCh]
  bool v148; // [rsp+44h] [rbp-BCh]
  unsigned int v149; // [rsp+44h] [rbp-BCh]
  BOOLEAN v150; // [rsp+48h] [rbp-B8h]
  __int64 BugCheckParameter2; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v152; // [rsp+58h] [rbp-A8h]
  __int64 TransitionPteValid; // [rsp+60h] [rbp-A0h] BYREF
  int v154; // [rsp+68h] [rbp-98h]
  __int64 v155; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD *v156; // [rsp+78h] [rbp-88h]
  unsigned int v157; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v158; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h]
  unsigned __int64 v160; // [rsp+98h] [rbp-68h]
  int v161; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h]
  __int64 v163; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v164; // [rsp+B8h] [rbp-48h]
  _BYTE *v165; // [rsp+C0h] [rbp-40h]
  __int64 v166; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v167; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v168; // [rsp+D8h] [rbp-28h] BYREF
  const signed __int64 *v169; // [rsp+E0h] [rbp-20h]
  __int64 v170; // [rsp+E8h] [rbp-18h]
  __int64 v171; // [rsp+F0h] [rbp-10h]
  __int64 v172; // [rsp+F8h] [rbp-8h]
  __int64 v173; // [rsp+100h] [rbp+0h]
  __int64 v174; // [rsp+108h] [rbp+8h]
  __int64 v176; // [rsp+168h] [rbp+68h] BYREF
  __int64 v177; // [rsp+170h] [rbp+70h]
  int v178; // [rsp+178h] [rbp+78h]

  v178 = a4;
  v177 = a3;
  v176 = a2;
  v5 = *(_QWORD *)a1;
  v6 = 0;
  v7 = *(_QWORD *)a1;
  v8 = a5;
  v9 = 0;
  v166 = *(_QWORD *)(a1 + 56);
  v165 = 0LL;
  v152 = v5;
  v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v176) >> 12) & 0xFFFFFFFFFLL;
  v160 = v13;
  BugCheckParameter2 = 48 * v13 - 0x58000000000LL;
  v14 = *(_QWORD *)(BugCheckParameter2 + 16);
  v170 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL));
  v169 = (const signed __int64 *)(BugCheckParameter2 + 16);
  v171 = v14;
  v158 = v14;
  if ( (v14 & 0x400) == 0 )
  {
    v163 = 0LL;
    v155 = 0LL;
    goto LABEL_6;
  }
  v15 = v14;
  if ( qword_140465B00 && (v14 & 0x10) == 0 )
    v15 = v14 & ~qword_140465B00;
  v163 = v15 >> 16;
  v16 = *(_QWORD *)(v15 >> 16);
  v155 = v16;
  if ( PfSnNumActiveTraces )
  {
    v48 = (volatile signed __int64 *)(v16 + 64);
    _m_prefetchw((const void *)(v16 + 64));
    v49 = *(_QWORD *)(v16 + 64);
    if ( (v49 & 0xF) != 0 )
    {
      do
      {
        v50 = _InterlockedCompareExchange64(v48, v49 - 1, v49);
        if ( v49 == v50 )
          break;
        v49 = v50;
      }
      while ( (v50 & 0xF) != 0 );
    }
    v51 = v49;
    v52 = v49 & 0xF;
    v53 = (char *)(v51 & 0xFFFFFFFFFFFFFFF0uLL);
    Object = v53;
    if ( v52 <= 1 )
    {
      if ( !v52 )
        goto LABEL_190;
      ObReferenceObjectExWithTag((ULONG_PTR)v53);
      _m_prefetchw((const void *)v48);
      v104 = *v48;
      while ( (v104 & 0xF) == 0 )
      {
        if ( v53 != (char *)(v104 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v105 = v104;
        v104 = _InterlockedCompareExchange64(v48, v104 + 15, v104);
        if ( v105 == v104 )
          goto LABEL_185;
      }
      ObpTraceObjectDereferenceIfActive((_DWORD)v53 - 48);
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v53 - 6, 0xFFFFFFFFFFFFFFF1uLL) - 15;
      if ( BugCheckParameter4 <= 0 )
      {
        if ( *((_QWORD *)v53 - 5) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v53 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v53 - 48) >> 8)],
            (ULONG_PTR)v53,
            6uLL,
            *((_QWORD *)v53 - 5));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v53, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v53 - 48);
      }
LABEL_185:
      v11 = v152;
    }
    if ( v53 )
    {
LABEL_55:
      v54 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
      if ( (v11 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(v11) == 1)
        && (Process = KeGetCurrentThread()->ApcState.Process, (v56 = Process[1].ActiveProcessors.Bitmap[1]) != 0)
        && (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
      {
        v57 = *(_DWORD *)(v56 + 8);
      }
      else
      {
        v57 = -1;
      }
      v58 = *(_QWORD *)(v163 + 8);
      if ( (*(_DWORD *)(*(_QWORD *)v163 + 56LL) & 0x20) != 0 )
      {
        if ( v54 < v58 || v54 >= v58 + 8LL * *(unsigned int *)(v163 + 44) )
        {
          if ( (*(_BYTE *)(v163 + 34) & 2) != 0 )
            SharedProtos = MiGetSharedProtos(*(_QWORD *)v163, v57, v163);
          else
            SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)v163);
          v59 = (v54 << 9) - (*(_QWORD *)(SharedProtos + 72) << 9);
        }
        else
        {
          v59 = (v54 << 9) - (v58 << 9);
        }
        v60 = ((unsigned __int64)*(unsigned int *)(v163 + 36) << 9) + (v59 & 0xFFFFFFFFFFFFF000uLL);
      }
      else
      {
        if ( v58 )
          v85 = (__int64)(v54 - v58) >> 3 << 12;
        else
          v85 = 0LL;
        v60 = ((*(unsigned int *)(v163 + 36) | ((unsigned __int64)(*(_WORD *)(v163 + 32) & 0xFFC0) << 26)) << 12) + v85;
      }
      CurrentThread = KeGetCurrentThread();
      v156 = CurrentThread;
      v62 = CurrentThread->ApcState.Process;
      v63 = (*(_DWORD *)(v155 + 56) & 0x20) == 0;
      v64 = *(_DWORD *)(v155 + 56) & 0x20;
      P = v62;
      v154 = v64;
      v65 = !v63;
      v148 = !v63;
      _m_prefetchw(&v62[1].ThreadSeed[2]);
      v66 = *(_QWORD *)&v62[1].ThreadSeed[2];
      if ( (v66 & 0xF) != 0 )
      {
        do
        {
          v67 = _InterlockedCompareExchange64((volatile signed __int64 *)&v62[1].ThreadSeed[2], v66 - 1, v66);
          if ( v66 == v67 )
            break;
          v66 = v67;
        }
        while ( (v67 & 0xF) != 0 );
      }
      v68 = v66 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (v66 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
        goto LABEL_85;
      v69 = v66 & 0xF;
      if ( v69 <= 1 )
      {
        if ( v69 )
        {
          if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v68 + 360), 0xFu) )
          {
            v94 = (signed __int64 *)((char *)P + 1192);
            _m_prefetchw((char *)P + 1192);
            v95 = *v94;
            while ( (v95 & 0xF) == 0 )
            {
              if ( v68 != (v95 & 0xFFFFFFFFFFFFFFF0uLL) )
                break;
              v96 = v95;
              v95 = _InterlockedCompareExchange64((volatile signed __int64 *)P + 149, v95 + 15, v95);
              if ( v96 == v95 )
                goto LABEL_152;
            }
            v172 = 0LL;
            v173 = 0LL;
            v174 = 0LL;
            _m_prefetchw((const void *)(v68 + 360));
            v120 = *(_QWORD *)(v68 + 360);
            if ( (v120 & 1) != 0 )
            {
LABEL_246:
              v122 = v120 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v122, 0xFFFFFFFFFFFFFFF1uLL) == 15
                && !_interlockedbittestandreset((volatile signed __int32 *)(v122 + 32), 0) )
              {
                KeSetEvent((PRKEVENT)(v122 + 8), 0, 0);
              }
            }
            else
            {
              while ( 1 )
              {
                v121 = v120;
                v120 = _InterlockedCompareExchange64((volatile signed __int64 *)(v68 + 360), v120 - 30, v120);
                if ( v121 == v120 )
                  break;
                if ( (v120 & 1) != 0 )
                  goto LABEL_246;
              }
            }
          }
        }
        else
        {
          v150 = 1;
          v145 = KeAcquireSpinLockRaiseToDpc(&qword_140467CD0);
          v68 = *((_QWORD *)P + 149) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v68 )
            v150 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v68 + 360));
          KxReleaseSpinLock(&qword_140467CD0);
          v110 = v145;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v145 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v110 = v145;
          }
          __writecr8(v110);
          if ( !v150 )
            goto LABEL_85;
        }
LABEL_152:
        v65 = v148;
        CurrentThread = v156;
      }
      if ( !v68 )
      {
LABEL_85:
        _m_prefetchw((const void *)v48);
        v78 = *v48;
        if ( ((unsigned __int64)Object ^ *v48) >= 0xF )
        {
LABEL_198:
          ObDereferenceObjectDeferDelete(Object);
        }
        else
        {
          while ( 1 )
          {
            v79 = v78;
            v78 = _InterlockedCompareExchange64(v48, v78 + 1, v78);
            if ( v79 == v78 )
              break;
            if ( ((unsigned __int64)Object ^ v78) >= 0xF )
              goto LABEL_198;
          }
        }
        v13 = v160;
        v12 = 0xFFFFF68000000000uLL;
        goto LABEL_6;
      }
      if ( (((v65 & 2) == 0) & (LOBYTE(CurrentThread[1].Queue) >> 6)) != 0 )
        goto LABEL_84;
      if ( ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
         || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0xE00u) < 0x400)
        && (CurrentThread != KeGetCurrentThread() || !CurrentThread[1].Timer.DueTime.LowPart) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v68 + 336));
        goto LABEL_84;
      }
      v70 = *(struct _KTHREAD **)(v68 + 432);
      if ( v70 && (v70 != CurrentThread || *(_QWORD *)(v68 + 440) != *(_QWORD *)&CurrentThread[1].CurrentRunTime) )
        goto LABEL_84;
      v164 = *((_QWORD *)Object + 3);
      PfSnGetFileInformation(v68, Object);
      if ( (*(_BYTE *)(v68 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(v68 + 352) + 1466LL) == 2 )
        _InterlockedOr16((volatile signed __int16 *)(v68 + 484), 1u);
      if ( v60 >= 0x20000000000LL )
        goto LABEL_84;
      v71 = v60 >> 9;
      v63 = v154 == 0;
      v154 = dword_140503A10;
      v72 = !v63;
      v149 = v72;
      if ( dword_140503A10 != *(_DWORD *)(v68 + 404) )
      {
        LogEntry = PfSnTraceGetLogEntry(v68, 1u, &v167);
        v72 = v149;
        if ( LogEntry >= 0 )
        {
          v107 = v167;
          *v167 = *v167 & 0xFFFFFFFFFFFFFFF8uLL | 2;
          v108 = v154;
          *((_DWORD *)v107 + 2) = v154;
          *(_DWORD *)(v68 + 404) = v108;
          *(_QWORD *)(v68 + 408) = v68 + 416;
        }
      }
      if ( !v72 )
      {
        v97 = *(_QWORD **)(v68 + 408);
        if ( *v97 >> 3 == v71 && v97[1] == v164 )
        {
LABEL_84:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v68 + 360));
          goto LABEL_85;
        }
      }
      if ( _InterlockedIncrement((volatile signed __int32 *)(v68 + 344)) > *(_DWORD *)(v68 + 340) )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v68 + 344), 0xFFFFFFFF);
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v68 + 400), 3, 0) )
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v68 + 368), DelayedWorkQueue);
        goto LABEL_84;
      }
      v73 = *(_QWORD *)(v68 + 96);
      v156 = (struct _KTHREAD *)v73;
      v74 = _InterlockedExchangeAdd((volatile signed __int32 *)(v73 + 16), 1u);
      v75 = (v74 + 1 < 0) ^ __OFADD__(1, v74) | (v74 == -1);
      v76 = v74 + 1;
      if ( v75 )
      {
LABEL_263:
        _InterlockedExchangeAdd((volatile signed __int32 *)(v68 + 344), 0xFFFFFFFF);
        goto LABEL_84;
      }
      while ( 1 )
      {
        if ( v76 <= *(_DWORD *)(v73 + 20) )
        {
          v77 = (unsigned __int64 *)(16LL * v76 + v73 + 8);
          v77[1] = v164;
          *v77 = v149 | (8 * v71);
          _InterlockedIncrement((volatile signed __int32 *)(v68 + 332));
          if ( !v149 )
            *(_QWORD *)(v68 + 408) = v77;
          goto LABEL_84;
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)(v73 + 16), 0xFFFFFFFF);
        P = (PVOID)PfSnTraceBufferAllocate();
        if ( !P )
          goto LABEL_263;
        v146 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v68 + 128));
        if ( *(struct _KTHREAD **)(v68 + 96) != v156 )
        {
          KxReleaseSpinLock((PKSPIN_LOCK)(v68 + 128));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            v124 = CurrentIrql < 2u;
            v116 = v146;
            if ( !v124 && v146 < 2u )
            {
              v125 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v125->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v125);
              goto LABEL_223;
            }
          }
          else
          {
LABEL_223:
            v116 = v146;
          }
          __writecr8(v116);
          ExFreePoolWithTag(P, 0);
          goto LABEL_205;
        }
        v111 = *(_QWORD **)(v68 + 112);
        if ( *v111 != v68 + 104 )
          __fastfail(3u);
        v112 = P;
        *(_QWORD *)P = v68 + 104;
        v112[1] = v111;
        *v111 = v112;
        *(_QWORD *)(v68 + 112) = v112;
        ++*(_DWORD *)(v68 + 120);
        *(_QWORD *)(v68 + 96) = v112;
        KxReleaseSpinLock((PKSPIN_LOCK)(v68 + 128));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        {
          v126 = KeGetCurrentIrql();
          v124 = v126 < 2u;
          v113 = v146;
          if ( v124 || v146 >= 2u )
            goto LABEL_204;
          v127 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v127->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v127);
        }
        v113 = v146;
LABEL_204:
        __writecr8(v113);
LABEL_205:
        v73 = *(_QWORD *)(v68 + 96);
        v156 = (struct _KTHREAD *)v73;
        v114 = _InterlockedExchangeAdd((volatile signed __int32 *)(v73 + 16), 1u);
        v75 = (v114 + 1 < 0) ^ __OFADD__(1, v114) | (v114 == -1);
        v76 = v114 + 1;
        if ( v75 )
          goto LABEL_263;
      }
    }
LABEL_190:
    v109 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v155 + 72));
    Object = (PVOID)ObFastReferenceObjectLocked(v48);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v155 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v109 < 2u )
    {
      v117 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v117->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v117);
    }
    __writecr8(v109);
    v11 = v152;
    goto LABEL_55;
  }
LABEL_6:
  v17 = v12 + ((v10 >> 9) & 0x7FFFFFFFF8LL);
  v18 = *(_QWORD *)v17;
  if ( v17 >= 0xFFFFF6FB7DBED000uLL
    && v17 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v129 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v17 >> 3) & 0x1FF));
      v130 = v18 | 0x20;
      if ( (v129 & 0x20) == 0 )
        v130 = v18;
      v18 = v130;
      if ( (v129 & 0x42) != 0 )
        v18 = v130 | 0x42;
    }
  }
  v168 = v18;
  v19 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v168) >> 12) & 0xFFFFFFFFFLL)
      - 0x58000000000LL;
  v161 = 0;
  v160 = v19;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v161);
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
    v20 = 0xFFFFF6FB7DBED7F8uLL;
    v22 = 511LL;
    v21 = 0xFFFFF68000000000uLL;
  }
  *(_QWORD *)(v19 + 24) ^= ((*(_QWORD *)(v19 + 24) + 1LL) ^ *(_QWORD *)(v19 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v23 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL
    && v10 <= v20
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v23 & 1) != 0
    && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
  {
    v131 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( v131 )
    {
      v132 = *(_QWORD *)(v131 + 8 * (v22 & (v10 >> 3)));
      v133 = v23 | 0x20;
      if ( (v132 & 0x20) == 0 )
        v133 = *(_QWORD *)v10;
      v23 = v133;
      if ( (v132 & 0x42) != 0 )
        v23 = v133 | 0x42;
    }
  }
  if ( (v23 & 0x400) == 0 )
    goto LABEL_14;
  v24 = v23;
  if ( qword_140465B00 && (v23 & 0x10) == 0 )
    v24 = v23 & ~qword_140465B00;
  if ( HIDWORD(v24) == 0xFFFFFFFF )
  {
    v26 = (v23 >> 5) & 0x1F;
  }
  else
  {
LABEL_14:
    v25 = v158;
    if ( (unsigned __int64)&v158 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v158 <= v20
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v158 & 1) != 0
      && ((v158 & 0x20) == 0 || (v158 & 0x42) == 0) )
    {
      v134 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v134 )
      {
        v135 = *(_QWORD *)(v134 + 8 * (v22 & ((unsigned __int64)&v158 >> 3)));
        if ( (v135 & 0x20) != 0 )
          v25 = v158 | 0x20;
        if ( (v135 & 0x42) != 0 )
          v25 |= 0x42uLL;
      }
      else
      {
        v25 = v158;
      }
    }
    v26 = (v25 >> 5) & 0x1F;
    v27 = v23 & 8;
    if ( v27 )
      LODWORD(v26) = 1;
    v28 = 3;
    if ( !v27 )
      v28 = 1;
    v9 = v28;
    if ( v177 && (v26 & 4) == 0 )
      v177 = 0LL;
  }
  if ( (MiFlags & 0x10000) == 0
    || v152 < 0xFFFF800000000000uLL
    || v152 >= v21 && v152 <= 0xFFFFF6FFFFFFFFFFuLL
    || (v26 & 2) == 0 )
  {
    goto LABEL_21;
  }
  if ( (MiFlags & 0x20000) != 0
    || (((*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0) & !_bittest64(v169, 0xAu)) == 0 )
  {
    PagePrivilege = MiGetPagePrivilege(BugCheckParameter2, 0, 0LL);
  }
  else
  {
    PagePrivilege = (unsigned int)MiIsAddressInDriverView(v152) != 0;
  }
  v21 = 0xFFFFF68000000000uLL;
  if ( (PagePrivilege & 1) != 0 )
  {
    v29 = 0LL;
    LODWORD(v26) = 3;
    v177 = 0LL;
    goto LABEL_22;
  }
  if ( (PagePrivilege & 8) == 0 )
  {
    LODWORD(v26) = v26 & 0xFFFFFFFD;
    if ( !(_DWORD)v26 )
      LODWORD(v26) = 1;
LABEL_21:
    v29 = v177;
    goto LABEL_22;
  }
  v29 = 0LL;
  LODWORD(v26) = 1;
  v177 = 0LL;
LABEL_22:
  v30 = BugCheckParameter2;
  v31 = (unsigned int)v26 & 0xFFFFFFE7;
  v32 = *(_BYTE *)(BugCheckParameter2 + 34) >> 6;
  if ( v32 != 1 )
  {
    if ( v32 )
    {
      if ( v32 == 2 )
        v31 = (unsigned int)v31 | 0x18;
    }
    else
    {
      v31 = (unsigned int)v31 | 8;
    }
  }
  v33 = v13 << 12;
  v34 = v33 | MmProtectToPteMask[v31] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v10 >= v21 && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v35 = (__int64)((v10 << 25) - (v21 << 25)) >> 16;
    if ( v10 >= 0xFFFFF6FB40000000uLL && v10 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v34 = v10 == 0xFFFFF6FB7DBEDF68uLL
          ? v33 | MmProtectToPteMask[v31] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
          : v33 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v31] & 0x7FFF000000000E7FLL | 0x21;
      v137 = MiUserPdeOrAbove(v10);
      v30 = BugCheckParameter2;
      v29 = v177;
      v21 = 0xFFFFF68000000000uLL;
      if ( v137 )
        v34 |= 4uLL;
    }
    if ( v10 <= v21 + 0x3FFFFFFF78LL )
      v34 |= 4uLL;
    v36 = 0xFFFF800000000000uLL;
    if ( v35 >= 0xFFFF800000000000uLL )
    {
      if ( (unsigned int)MiGetSystemRegionType(v35) == 1 || v35 >= v90 && v35 <= v89 )
      {
LABEL_32:
        v6 = 0;
        goto LABEL_33;
      }
      if ( v35 > qword_140465EE0 || v35 < qword_1404675B0 )
        v37 = (unsigned __int8)word_140465BEC;
      else
        v37 = HIBYTE(word_140465BEC);
    }
    else
    {
      v37 = HIBYTE(word_140465BEC);
    }
    if ( v37 )
      v34 |= 0x100uLL;
    goto LABEL_32;
  }
  v34 = v33 | MmProtectToPteMask[v31] & 0xFFFF000000000E7FuLL | 0x121;
  v36 = 0xFFFF800000000000uLL;
LABEL_33:
  v38 = v34 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  TransitionPteValid = v38;
  if ( v29 )
  {
    if ( *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
    {
      v82 = KeGetCurrentThread()->ApcState.Process;
      if ( v38 >= 0 && (v82[1].DirectoryTableBase & 0x1000000000LL) != 0
        || (v83 = *(_QWORD *)&v82[2].Spare2[47]) != 0 && *(_QWORD *)(v83 + 24) != v83 + 24 )
      {
        v38 = TransitionPteValid;
        v177 = 0LL;
        goto LABEL_34;
      }
      v38 = TransitionPteValid;
    }
    if ( (v26 & 5) != 5 )
    {
      v84 = *(_BYTE *)(v30 + 34);
      v38 |= 0x42uLL;
      TransitionPteValid = v38;
      if ( (!_bittest64((const signed __int64 *)(v30 + 16), 0xAu) & (unsigned __int8)~(v84 >> 4)) != 0
        && (unsigned int)MiGetPagingFileOffset(v30 + 16) )
      {
        v138 = 0LL;
        v139 = MiLockPageInline(v30);
        v30 = BugCheckParameter2;
        v140 = v139;
        v141 = *(_BYTE *)(BugCheckParameter2 + 34);
        if ( (!_bittest64((const signed __int64 *)(BugCheckParameter2 + 16), 0xAu) & (unsigned __int8)~(v141 >> 4)) != 0 )
        {
          if ( (v141 & 8) == 0 )
          {
            v142 = MiCapturePageFileInfoInline(BugCheckParameter2 + 16, 1LL);
            v30 = BugCheckParameter2;
            v138 = v142;
            v141 = *(_BYTE *)(BugCheckParameter2 + 34);
          }
          *(_BYTE *)(v30 + 34) = v141 | 0x10;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v138 )
        {
          MiReleasePageFileInfo(v170, v138, 1);
          v30 = BugCheckParameter2;
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v140 < 2u )
        {
          v143 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v143->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v143);
          v30 = BugCheckParameter2;
        }
        __writecr8(v140);
        v38 = TransitionPteValid;
      }
      if ( (v171 & 0x400) != 0 && (*(_BYTE *)(v166 + 184) & 7) != 2 )
      {
        MiCheckAndUpdateIoAttribution(v30);
        v30 = BugCheckParameter2;
      }
      v36 = 0xFFFF800000000000uLL;
    }
  }
LABEL_34:
  v39 = 0;
  v157 = 0;
  v147 = 0;
  if ( v178 )
    goto LABEL_41;
  v40 = *(_QWORD *)(v30 + 8);
  if ( v40 >= 0 )
    goto LABEL_41;
  v41 = v152;
  if ( v152 >= v36 )
  {
    if ( v155 && (*(_DWORD *)(v155 + 56) & 0x20) == 0 )
      goto LABEL_41;
    HasPrivateFixups = MiSystemImageHasPrivateFixups(v152, &v155, &v157);
    LODWORD(v92) = v155;
    v93 = v157;
    v30 = BugCheckParameter2;
    goto LABEL_138;
  }
  if ( v163 )
  {
    if ( (*(_DWORD *)(v155 + 56) & 0x20) == 0 )
      goto LABEL_41;
  }
  else
  {
    v80 = KeGetCurrentThread()->ApcState.Process;
    if ( v80[1].Affinity.Bitmap[12] )
    {
      if ( MiLocateCloneAddress(v80, v40 | 0x8000000000000000uLL) )
        goto LABEL_40;
    }
  }
  if ( !*(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 384LL)
    || (Address = MiLocateAddress(v41), (v99 = Address) == 0)
    || (v100 = *(_DWORD *)(Address + 48), (v100 & 0x70) != 0x20)
    || (v100 & 0x100000) != 0
    || (v100 & 0x200000) == 0
    || (v92 = **(_QWORD **)(v99 + 72),
        v93 = (v152 >> 12) + ((__int64)(*(_QWORD *)(v99 + 80) - *(_QWORD *)(v92 + 136)) >> 3) - *(_DWORD *)(v99 + 24),
        !_bittest(*(const signed __int32 **)(v99 + 152), v93)) )
  {
LABEL_40:
    v38 = TransitionPteValid;
    goto LABEL_41;
  }
  HasPrivateFixups = *(_QWORD *)(v99 + 136);
  v38 = TransitionPteValid;
LABEL_138:
  if ( HasPrivateFixups )
  {
    v39 = MiPrivateFixup(a1, v92, v93, v30, HasPrivateFixups);
    MiLockAndDecrementShareCount(BugCheckParameter2, 0LL);
    if ( v39 == 297 || v39 == -1073741670 )
    {
      MiLockAndDecrementShareCount(v160, 0LL);
      if ( v39 == 297 )
        return (unsigned int)-1073740748;
      return v39;
    }
    if ( (v39 & 0x80000000) != 0 )
      return v39;
    TransitionPteValid = MiMakeTransitionPteValid(v10);
    v38 = TransitionPteValid;
    v30 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPteValid) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    BugCheckParameter2 = v30;
    if ( v152 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v30 + 35) & 8) != 0 )
      v147 = 2;
    LODWORD(v26) = 0;
    v9 = -2;
  }
LABEL_41:
  if ( (v9 & 1) == 0 )
    v6 = v26;
  v42 = v8 & 1;
  v43 = (_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v42 && *v43 == 5 )
  {
    v44 = (__int64)v43;
    v165 = v43;
  }
  else
  {
    v44 = 0LL;
  }
  v45 = v147;
  if ( v42 && *v43 == 3 )
    v45 = v147 | 1;
  v46 = *(_BYTE *)(a1 + 69);
  if ( (v46 & 8) != 0 )
  {
    v103 = *(_QWORD *)(a1 + 16);
    if ( (v103 & 1) == 0 || *(_BYTE *)(v103 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
      v38 &= ~0x20uLL;
  }
  if ( (v46 & 5) == 4 )
  {
    v86 = *(_WORD *)(a1 + 66);
    if ( !v86 )
      goto LABEL_118;
    if ( v86 + *(unsigned __int16 *)(a1 + 64) == (((unsigned int)v10 >> 3) & 0x1FF) )
    {
      v87 = v46 & 0x10;
      if ( (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) != 0 )
      {
        if ( !v87 )
          goto LABEL_118;
      }
      else if ( v87 )
      {
LABEL_118:
        v88 = *(_WORD *)(a1 + 66);
        if ( v88 )
        {
          v44 = (__int64)v165;
          *(_WORD *)(a1 + 66) = v88 + 1;
          v45 |= 4u;
        }
        else
        {
          *(_WORD *)(a1 + 66) = 1;
          v101 = *(_BYTE *)(a1 + 69);
          *(_WORD *)(a1 + 64) = ((unsigned int)v10 >> 3) & 0x1FF;
          if ( (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) != 0 )
            v102 = v101 & 0xEF;
          else
            v102 = v101 | 0x10;
          *(_BYTE *)(a1 + 69) = v102;
          v45 |= 4u;
          v44 = (__int64)v165;
        }
        goto LABEL_48;
      }
    }
    MiEmptyDeferredWorkingSetEntries(a1 + 56);
    v30 = BugCheckParameter2;
    goto LABEL_118;
  }
LABEL_48:
  if ( !(unsigned int)MiAllocateWsle(v166, v10, (_QWORD *)v30, v6, v38, v45, v44) )
  {
    MiLockAndDecrementShareCount(BugCheckParameter2, 0LL);
    if ( (v9 & 4) == 0 )
      MiLockAndDecrementShareCount(v160, 0LL);
    return (unsigned int)-1073741801;
  }
  if ( !v177
    || (v38 & 0x800) != 0
    || (v38 & 0x200) == 0
    || KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10] )
  {
    return v39;
  }
  if ( *(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 69) & 1) == 0 )
  {
    if ( *(_WORD *)(a1 + 66) )
      MiEmptyDeferredWorkingSetEntries(a1 + 56);
  }
  v81 = MiCopyOnWrite(v152, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
  v39 = v81;
  if ( v81 >= 0 )
    return v39;
  MiSetFaultPacketDirectives(a1, (unsigned int)v81);
  return 3221226548LL;
}
