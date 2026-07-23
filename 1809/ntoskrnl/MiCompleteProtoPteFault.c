/*
 * XREFs of MiCompleteProtoPteFault @ 0x14004A4B0
 * Callers:
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140046D50 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x14001B7BC (MiGetSubsectionDriverProtos.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14001E38C (ObpTraceObjectDereferenceIfActive.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiMakeTransitionPteValid @ 0x14002CF4C (MiMakeTransitionPteValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     PfSnGetFileInformation @ 0x1400D4E20 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x1400D5240 (PfSnTraceGetLogEntry.c)
 *     ExAcquireRundownProtectionEx @ 0x1400D7940 (ExAcquireRundownProtectionEx.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1400DF174 (MiCheckAndUpdateIoAttribution.c)
 *     PfSnTraceBufferAllocate @ 0x1400E2358 (PfSnTraceBufferAllocate.c)
 *     MiUserPdeOrAbove @ 0x1400F96CC (MiUserPdeOrAbove.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     ObReferenceObjectExWithTag @ 0x140111F40 (ObReferenceObjectExWithTag.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiSystemImageHasPrivateFixups @ 0x140119C68 (MiSystemImageHasPrivateFixups.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     ObpDeferObjectDeletion @ 0x140125EA0 (ObpDeferObjectDeletion.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140128CC8 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiGetSharedProtos @ 0x140177274 (MiGetSharedProtos.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiSetFaultPacketDirectives @ 0x1402BC930 (MiSetFaultPacketDirectives.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCompleteProtoPteFault(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v5; // r8
  __int64 v6; // r12
  unsigned __int64 v7; // r14
  unsigned int v8; // r13d
  unsigned __int64 v9; // r15
  char v10; // si
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  ULONG_PTR v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rdi
  int v25; // ecx
  __int64 v26; // rdx
  char v27; // al
  unsigned __int64 v28; // r9
  __int64 v29; // rcx
  char v30; // al
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r15
  int v33; // eax
  signed __int64 v34; // rbx
  __int64 v35; // r15
  __int64 v36; // rdx
  ULONG_PTR v37; // r11
  unsigned __int64 v38; // r8
  char v39; // r15
  __int64 v40; // rax
  _BYTE *v41; // r12
  __int64 v42; // rdi
  unsigned __int8 v43; // r12
  _QWORD *v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  volatile signed __int64 *v48; // rdi
  signed __int64 v49; // rdx
  signed __int64 v50; // rax
  signed __int64 v51; // rbx
  unsigned int v52; // edx
  char *v53; // rbx
  unsigned __int64 v54; // rbx
  _KPROCESS *Process; // rcx
  unsigned __int64 v56; // rdx
  unsigned int v57; // r10d
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rbx
  struct _KTHREAD *CurrentThread; // r9
  _KPROCESS *v62; // r8
  bool v63; // zf
  int v64; // eax
  bool v65; // r10
  signed __int64 v66; // rdx
  signed __int64 v67; // rax
  unsigned __int64 v68; // rdi
  unsigned int v69; // edx
  struct _KTHREAD *v70; // rax
  unsigned __int64 v71; // rbx
  BOOL v72; // r8d
  __int64 v73; // rcx
  signed __int32 v74; // eax
  char v75; // cc
  signed __int32 v76; // eax
  unsigned __int64 *v77; // rdx
  volatile signed __int64 *v78; // r8
  signed __int64 *v79; // roff
  signed __int64 v80; // rax
  signed __int64 v81; // rtt
  _KPROCESS *v82; // rcx
  _KPROCESS *v83; // rdx
  int v84; // eax
  _KPROCESS *v85; // rcx
  __int64 v86; // rax
  unsigned __int8 v87; // cl
  __int64 v88; // rdx
  unsigned __int16 v89; // ax
  __int16 v90; // ax
  unsigned __int64 v91; // r11
  __int64 v92; // rbx
  __int64 HasPrivateFixups; // rax
  __int64 v94; // rdx
  unsigned int v95; // ecx
  signed __int64 *v96; // roff
  signed __int64 v97; // rax
  signed __int64 v98; // rtt
  _QWORD *v99; // rcx
  __int64 Address; // rax
  unsigned __int64 v101; // r11
  __int64 v102; // r10
  int v103; // eax
  char v104; // cl
  char v105; // cl
  unsigned __int64 v106; // rax
  signed __int64 v107; // rax
  signed __int64 v108; // rtt
  int LogEntry; // eax
  unsigned __int64 *v110; // rcx
  int v111; // eax
  KIRQL v112; // al
  _QWORD *v113; // rcx
  _QWORD *v114; // rdx
  KIRQL v115; // al
  signed __int32 v116; // eax
  KIRQL v117; // al
  char *v118; // rbx
  signed __int64 BugCheckParameter4; // rax
  unsigned __int64 v120; // r8
  __int64 v121; // rax
  struct _KPRCB *v122; // rcx
  __int64 SharedProtos; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int64 v125; // rax
  signed __int64 v126; // rtt
  unsigned __int64 v127; // rax
  unsigned __int8 CurrentIrql; // al
  bool v129; // cf
  struct _KPRCB *v130; // rcx
  unsigned __int8 v131; // al
  struct _KPRCB *v132; // rcx
  unsigned __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rdx
  unsigned __int64 v136; // rdx
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rax
  unsigned __int64 v140; // r9
  __int64 v141; // rax
  char PagePrivilege; // al
  int v143; // eax
  unsigned __int64 v144; // rbx
  unsigned __int8 v145; // al
  unsigned __int8 v146; // r15
  __int64 v147; // rax
  struct _KPRCB *v148; // rcx
  KIRQL v150; // [rsp+40h] [rbp-A1h]
  KIRQL v151; // [rsp+40h] [rbp-A1h]
  KIRQL v152; // [rsp+40h] [rbp-A1h]
  char v153; // [rsp+44h] [rbp-9Dh]
  bool v154; // [rsp+44h] [rbp-9Dh]
  unsigned int v155; // [rsp+44h] [rbp-9Dh]
  BOOLEAN v156; // [rsp+48h] [rbp-99h]
  __int64 v157; // [rsp+50h] [rbp-91h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-89h]
  __int64 TransitionPteValid; // [rsp+60h] [rbp-81h] BYREF
  int v160; // [rsp+68h] [rbp-79h]
  PVOID Object; // [rsp+70h] [rbp-71h]
  __int64 v162; // [rsp+78h] [rbp-69h] BYREF
  struct _KTHREAD *v163; // [rsp+80h] [rbp-61h]
  unsigned int v164; // [rsp+88h] [rbp-59h] BYREF
  unsigned __int64 v165; // [rsp+90h] [rbp-51h] BYREF
  PVOID P; // [rsp+98h] [rbp-49h]
  __int64 v167; // [rsp+A0h] [rbp-41h]
  _QWORD *v168; // [rsp+A8h] [rbp-39h]
  int v169; // [rsp+B0h] [rbp-31h] BYREF
  unsigned __int64 v170; // [rsp+B8h] [rbp-29h] BYREF
  __int64 v171; // [rsp+C0h] [rbp-21h]
  __int64 v172; // [rsp+C8h] [rbp-19h]
  unsigned __int64 *v173; // [rsp+D0h] [rbp-11h] BYREF
  volatile signed __int64 *v174; // [rsp+D8h] [rbp-9h]
  struct _KEVENT *v175; // [rsp+E0h] [rbp-1h]
  __int64 v176; // [rsp+E8h] [rbp+7h]
  unsigned __int64 v178; // [rsp+148h] [rbp+67h] BYREF
  __int64 v179; // [rsp+150h] [rbp+6Fh]
  int v180; // [rsp+158h] [rbp+77h]

  v180 = a4;
  v179 = a3;
  v178 = a2;
  v5 = *a1;
  v6 = a5;
  v7 = *a1;
  v168 = a1 + 7;
  v8 = 0;
  v9 = a2;
  v172 = a1[7];
  v10 = 0;
  BugCheckParameter2 = v5;
  v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned __int64)&v178 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v178 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (a2 & 1) != 0
    && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
  {
    v120 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v120 )
    {
      v121 = *(_QWORD *)(v120 + 8 * (((unsigned __int64)&v178 >> 3) & 0x1FF));
      if ( (v121 & 0x20) != 0 )
        v9 = a2 | 0x20;
      if ( (v121 & 0x42) != 0 )
        v9 |= 0x42uLL;
    }
    else
    {
      v9 = v178;
    }
    v5 = BugCheckParameter2;
  }
  v12 = (v9 >> 12) & 0xFFFFFFFFFLL;
  v13 = 48 * v12 - 0x58000000000LL;
  v157 = v13;
  v14 = *(_QWORD *)(v13 + 16);
  v175 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v13 + 40) >> 40) & 0x3FFLL));
  v176 = v14;
  v165 = v14;
  if ( (v14 & 0x400) == 0 )
  {
    v171 = 0LL;
    v162 = 0LL;
    goto LABEL_7;
  }
  v15 = v14;
  if ( qword_14043B180 && (v14 & 0x10) == 0 )
    v15 = v14 & ~qword_14043B180;
  v171 = v15 >> 16;
  v16 = *(_QWORD *)(v15 >> 16);
  v162 = v16;
  if ( PfSnNumActiveTraces )
  {
    v48 = (volatile signed __int64 *)(v16 + 64);
    v174 = (volatile signed __int64 *)(v16 + 64);
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
        goto LABEL_194;
      ObReferenceObjectExWithTag((ULONG_PTR)v53);
      _m_prefetchw((const void *)v48);
      v107 = *v48;
      while ( (v107 & 0xF) == 0 )
      {
        if ( v53 != (char *)(v107 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v108 = v107;
        v107 = _InterlockedCompareExchange64(v48, v107 + 15, v107);
        if ( v108 == v107 )
          goto LABEL_189;
      }
      v118 = v53 - 48;
      ObpTraceObjectDereferenceIfActive((int)v118);
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v118, 0xFFFFFFFFFFFFFFF1uLL) - 15;
      if ( BugCheckParameter4 <= 0 )
      {
        if ( *((_QWORD *)v118 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v118[24] ^ (unsigned __int64)BYTE1(v118)],
            (ULONG_PTR)Object,
            6uLL,
            *((_QWORD *)v118 + 1));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v118);
      }
      v53 = (char *)Object;
LABEL_189:
      v5 = BugCheckParameter2;
    }
    if ( v53 )
    {
LABEL_64:
      v54 = *(_QWORD *)(v157 + 8) | 0x8000000000000000uLL;
      if ( (v5 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(v5) == 1)
        && (Process = KeGetCurrentThread()->ApcState.Process, (v56 = Process[1].ActiveProcessors.Bitmap[2]) != 0)
        && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
      {
        v57 = *(_DWORD *)(v56 + 8);
      }
      else
      {
        v57 = -1;
      }
      v58 = *(_QWORD *)(v171 + 8);
      if ( (*(_DWORD *)(*(_QWORD *)v171 + 56LL) & 0x20) != 0 )
      {
        if ( v54 < v58 || v54 >= v58 + 8LL * *(unsigned int *)(v171 + 44) )
        {
          if ( (*(_BYTE *)(v171 + 34) & 2) != 0 )
            SharedProtos = MiGetSharedProtos(*(_QWORD *)v171, v57, v171);
          else
            SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)v171);
          v59 = (v54 << 9) - (*(_QWORD *)(SharedProtos + 72) << 9);
        }
        else
        {
          v59 = (v54 << 9) - (v58 << 9);
        }
        v60 = ((unsigned __int64)*(unsigned int *)(v171 + 36) << 9) + (v59 & 0xFFFFFFFFFFFFF000uLL);
      }
      else
      {
        if ( v58 )
          v92 = (__int64)(v54 - v58) >> 3 << 12;
        else
          v92 = 0LL;
        v60 = ((*(unsigned int *)(v171 + 36) | ((unsigned __int64)(*(_WORD *)(v171 + 32) & 0xFFC0) << 26)) << 12) + v92;
      }
      CurrentThread = KeGetCurrentThread();
      v163 = CurrentThread;
      v62 = CurrentThread->ApcState.Process;
      v63 = (*(_DWORD *)(v162 + 56) & 0x20) == 0;
      v64 = *(_DWORD *)(v162 + 56) & 0x20;
      P = v62;
      v160 = v64;
      v65 = !v63;
      v154 = !v63;
      _m_prefetchw(&v62[1].ThreadSeed[4]);
      v66 = *(_QWORD *)&v62[1].ThreadSeed[4];
      if ( (v66 & 0xF) != 0 )
      {
        do
        {
          v67 = _InterlockedCompareExchange64((volatile signed __int64 *)&v62[1].ThreadSeed[4], v66 - 1, v66);
          if ( v66 == v67 )
            break;
          v66 = v67;
        }
        while ( (v67 & 0xF) != 0 );
      }
      v68 = v66 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (v66 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
        goto LABEL_94;
      v69 = v66 & 0xF;
      if ( v69 <= 1 )
      {
        if ( v69 )
        {
          if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v68 + 360), 0xFu) )
          {
            v96 = (signed __int64 *)((char *)P + 1192);
            _m_prefetchw((char *)P + 1192);
            v97 = *v96;
            while ( (v97 & 0xF) == 0 )
            {
              if ( v68 != (v97 & 0xFFFFFFFFFFFFFFF0uLL) )
                break;
              v98 = v97;
              v97 = _InterlockedCompareExchange64((volatile signed __int64 *)P + 149, v97 + 15, v97);
              if ( v98 == v97 )
                goto LABEL_159;
            }
            _m_prefetchw((const void *)(v68 + 360));
            v125 = *(_QWORD *)(v68 + 360);
            if ( (v125 & 1) != 0 )
            {
LABEL_262:
              v127 = v125 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v127, 0xFFFFFFFFFFFFFFF1uLL) == 15
                && !_interlockedbittestandreset((volatile signed __int32 *)(v127 + 32), 0) )
              {
                KeSetEvent((PRKEVENT)(v127 + 8), 0, 0);
              }
            }
            else
            {
              while ( 1 )
              {
                v126 = v125;
                v125 = _InterlockedCompareExchange64((volatile signed __int64 *)(v68 + 360), v125 - 30, v125);
                if ( v126 == v125 )
                  break;
                if ( (v125 & 1) != 0 )
                  goto LABEL_262;
              }
            }
          }
        }
        else
        {
          v156 = 1;
          v151 = KeAcquireSpinLockRaiseToDpc(&qword_14043D2D0);
          v68 = *((_QWORD *)P + 149) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v68 )
            v156 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v68 + 360));
          KxReleaseSpinLock(&qword_14043D2D0);
          v112 = v151;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v151 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v112 = v151;
          }
          __writecr8(v112);
          if ( !v156 )
            goto LABEL_94;
        }
LABEL_159:
        v65 = v154;
        CurrentThread = v163;
      }
      if ( !v68 )
      {
LABEL_94:
        v78 = v174;
        v79 = (signed __int64 *)v174;
        _m_prefetchw((const void *)v174);
        v80 = *v79;
        if ( ((unsigned __int64)Object ^ *v79) >= 0xF )
        {
LABEL_204:
          ObDereferenceObjectDeferDelete(Object);
        }
        else
        {
          while ( 1 )
          {
            v81 = v80;
            v80 = _InterlockedCompareExchange64(v78, v80 + 1, v80);
            if ( v81 == v80 )
              break;
            if ( ((unsigned __int64)Object ^ v80) >= 0xF )
              goto LABEL_204;
          }
        }
        v13 = v157;
        goto LABEL_7;
      }
      if ( (((v65 & 2) == 0) & (LOBYTE(CurrentThread[1].Queue) >> 6)) != 0 )
        goto LABEL_93;
      if ( ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
         || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0xE00u) < 0x400)
        && (CurrentThread != KeGetCurrentThread() || !CurrentThread[1].Timer.DueTime.LowPart) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v68 + 336));
        goto LABEL_93;
      }
      v70 = *(struct _KTHREAD **)(v68 + 432);
      if ( v70 && (v70 != CurrentThread || *(_QWORD *)(v68 + 440) != *(_QWORD *)&CurrentThread[1].CurrentRunTime) )
        goto LABEL_93;
      v167 = *((_QWORD *)Object + 3);
      PfSnGetFileInformation(v68, Object);
      if ( (*(_BYTE *)(v68 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(v68 + 352) + 1466LL) == 2 )
        _InterlockedOr16((volatile signed __int16 *)(v68 + 484), 1u);
      if ( v60 >= 0x20000000000LL )
        goto LABEL_93;
      v71 = v60 >> 9;
      v63 = v160 == 0;
      v160 = dword_1404D8610;
      v72 = !v63;
      v155 = v72;
      if ( dword_1404D8610 != *(_DWORD *)(v68 + 404) )
      {
        LogEntry = PfSnTraceGetLogEntry(v68, 1LL, &v173);
        v72 = v155;
        if ( LogEntry >= 0 )
        {
          v110 = v173;
          *v173 = *v173 & 0xFFFFFFFFFFFFFFF8uLL | 2;
          v111 = v160;
          *((_DWORD *)v110 + 2) = v160;
          *(_DWORD *)(v68 + 404) = v111;
          *(_QWORD *)(v68 + 408) = v68 + 416;
        }
      }
      if ( !v72 )
      {
        v99 = *(_QWORD **)(v68 + 408);
        if ( *v99 >> 3 == v71 && v99[1] == v167 )
        {
LABEL_93:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v68 + 360));
          goto LABEL_94;
        }
      }
      if ( _InterlockedIncrement((volatile signed __int32 *)(v68 + 344)) > *(_DWORD *)(v68 + 340) )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v68 + 344), 0xFFFFFFFF);
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v68 + 400), 3, 0) )
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v68 + 368), DelayedWorkQueue);
        goto LABEL_93;
      }
      v73 = *(_QWORD *)(v68 + 96);
      v163 = (struct _KTHREAD *)v73;
      v74 = _InterlockedExchangeAdd((volatile signed __int32 *)(v73 + 16), 1u);
      v75 = (v74 + 1 < 0) ^ __OFADD__(1, v74) | (v74 == -1);
      v76 = v74 + 1;
      if ( v75 )
      {
LABEL_279:
        _InterlockedExchangeAdd((volatile signed __int32 *)(v68 + 344), 0xFFFFFFFF);
        goto LABEL_93;
      }
      while ( 1 )
      {
        if ( v76 <= *(_DWORD *)(v73 + 20) )
        {
          v77 = (unsigned __int64 *)(16LL * v76 + v73 + 8);
          v77[1] = v167;
          *v77 = v155 | (8 * v71);
          _InterlockedIncrement((volatile signed __int32 *)(v68 + 332));
          if ( !v155 )
            *(_QWORD *)(v68 + 408) = v77;
          goto LABEL_93;
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)(v73 + 16), 0xFFFFFFFF);
        P = (PVOID)PfSnTraceBufferAllocate();
        if ( !P )
          goto LABEL_279;
        v152 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v68 + 128));
        if ( *(struct _KTHREAD **)(v68 + 96) != v163 )
        {
          KxReleaseSpinLock((PKSPIN_LOCK)(v68 + 128));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            v129 = CurrentIrql < 2u;
            v117 = v152;
            if ( !v129 && v152 < 2u )
            {
              v130 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v130->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v130);
              goto LABEL_221;
            }
          }
          else
          {
LABEL_221:
            v117 = v152;
          }
          __writecr8(v117);
          ExFreePoolWithTag(P, 0);
          goto LABEL_211;
        }
        v113 = *(_QWORD **)(v68 + 112);
        if ( *v113 != v68 + 104 )
          __fastfail(3u);
        v114 = P;
        *((_QWORD *)P + 1) = v113;
        *v114 = v68 + 104;
        *v113 = v114;
        *(_QWORD *)(v68 + 112) = v114;
        ++*(_DWORD *)(v68 + 120);
        *(_QWORD *)(v68 + 96) = v114;
        KxReleaseSpinLock((PKSPIN_LOCK)(v68 + 128));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        {
          v131 = KeGetCurrentIrql();
          v129 = v131 < 2u;
          v115 = v152;
          if ( v129 || v152 >= 2u )
            goto LABEL_210;
          v132 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v132->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v132);
        }
        v115 = v152;
LABEL_210:
        __writecr8(v115);
LABEL_211:
        v73 = *(_QWORD *)(v68 + 96);
        v163 = (struct _KTHREAD *)v73;
        v116 = _InterlockedExchangeAdd((volatile signed __int32 *)(v73 + 16), 1u);
        v75 = (v116 + 1 < 0) ^ __OFADD__(1, v116) | (v116 == -1);
        v76 = v116 + 1;
        if ( v75 )
          goto LABEL_279;
      }
    }
LABEL_194:
    v150 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v162 + 72));
    Object = (PVOID)ObFastReferenceObjectLocked(v48);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v162 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v150 < 2u )
    {
      v122 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v122->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v122);
    }
    __writecr8(v150);
    v5 = BugCheckParameter2;
    goto LABEL_64;
  }
LABEL_7:
  v17 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = *(_QWORD *)v17;
  if ( v17 >= 0xFFFFF6FB7DBED000uLL
    && v17 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    v133 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v133 )
    {
      v134 = *(_QWORD *)(v133 + 8 * ((v17 >> 3) & 0x1FF));
      v135 = v18 | 0x20;
      if ( (v134 & 0x20) == 0 )
        v135 = v18;
      v18 = v135;
      if ( (v134 & 0x42) != 0 )
        v18 = v135 | 0x42;
    }
  }
  v170 = v18;
  if ( (unsigned __int64)&v170 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v170 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    v136 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v136 )
    {
      v137 = *(_QWORD *)(v136 + 8 * (((unsigned __int64)&v170 >> 3) & 0x1FF));
      v138 = v18 | 0x20;
      if ( (v137 & 0x20) == 0 )
        v138 = v18;
      v18 = v138;
      if ( (v137 & 0x42) != 0 )
        v18 = v138 | 0x42;
    }
  }
  v19 = (v18 >> 12) & 0xFFFFFFFFFLL;
  v20 = 48 * v19 - 0x58000000000LL;
  v169 = 0;
  v167 = v20;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v169);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  *(_QWORD *)(v20 + 24) ^= ((*(_QWORD *)(v20 + 24) + 1LL) ^ *(_QWORD *)(v20 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v21 = *(_QWORD *)v11;
  if ( v11 >= 0xFFFFF6FB7DBED000uLL
    && v11 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v21 & 1) != 0
    && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v19 )
    {
      v139 = *(_QWORD *)(v19 + 8 * ((v11 >> 3) & 0x1FF));
      v19 = v21 | 0x20;
      if ( (v139 & 0x20) == 0 )
        v19 = *(_QWORD *)v11;
      v21 = v19;
      if ( (v139 & 0x42) != 0 )
        v21 = v19 | 0x42;
    }
  }
  if ( (v21 & 0x400) == 0 )
    goto LABEL_16;
  v22 = v21;
  if ( qword_14043B180 && (v21 & 0x10) == 0 )
    v22 = v21 & ~qword_14043B180;
  if ( HIDWORD(v22) == 0xFFFFFFFF )
  {
    v26 = v179;
    v24 = (v21 >> 5) & 0x1F;
  }
  else
  {
LABEL_16:
    v23 = v165;
    if ( (unsigned __int64)&v165 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v165 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v165 & 1) != 0
      && ((v165 & 0x20) == 0 || (v165 & 0x42) == 0) )
    {
      v140 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v140 )
      {
        v141 = *(_QWORD *)(v140 + 8 * (((unsigned __int64)&v165 >> 3) & 0x1FF));
        if ( (v141 & 0x20) != 0 )
          v23 = v165 | 0x20;
        if ( (v141 & 0x42) != 0 )
          v23 |= 0x42uLL;
      }
      else
      {
        v23 = v165;
      }
    }
    v24 = (v23 >> 5) & 0x1F;
    v25 = v21 & 8;
    if ( v25 )
      LODWORD(v24) = 1;
    v26 = v179;
    v27 = 3;
    if ( !v25 )
      v27 = 1;
    v10 = v27;
    if ( v179 && (v24 & 4) == 0 )
    {
      v26 = 0LL;
      v179 = 0LL;
    }
  }
  v28 = 0xFFFF800000000000uLL;
  if ( (MiFlags & 0x10000) != 0 && BugCheckParameter2 >= 0xFFFF800000000000uLL && (v24 & 2) != 0 )
  {
    PagePrivilege = MiGetPagePrivilege(v13);
    v28 = 0xFFFF800000000000uLL;
    if ( (PagePrivilege & 1) != 0 )
    {
      v26 = 0LL;
      LODWORD(v24) = 3;
      v179 = 0LL;
    }
    else if ( (PagePrivilege & 8) != 0 )
    {
      v26 = 0LL;
      LODWORD(v24) = 1;
      v179 = 0LL;
    }
    else
    {
      v26 = v179;
      LODWORD(v24) = v24 & 0xFFFFFFFD;
      if ( !(_DWORD)v24 )
        LODWORD(v24) = 1;
    }
  }
  v29 = (unsigned int)v24 & 0xFFFFFFE7;
  v30 = *(_BYTE *)(v13 + 34) >> 6;
  if ( v30 != 1 )
  {
    if ( v30 )
    {
      if ( v30 == 2 )
        v29 = (unsigned int)v29 | 0x18;
    }
    else
    {
      v29 = (unsigned int)v29 | 8;
    }
  }
  v31 = (v12 << 12) | MmProtectToPteMask[v29] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v11 < 0xFFFFF68000000000uLL || (v19 = 0xFFFFF6FFFFFFFFFFuLL, v11 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
LABEL_336:
    v31 |= 0x100uLL;
    goto LABEL_32;
  }
  v32 = (__int64)(v11 << 25) >> 16;
  if ( v11 >= 0xFFFFF6FB40000000uLL && v11 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v11 == 0xFFFFF6FB7DBEDF68uLL )
      v31 |= 0x8000000000000000uLL;
    else
      v31 &= ~0x8000000000000000uLL;
    v143 = MiUserPdeOrAbove(v11);
    v26 = v179;
    v28 = 0xFFFF800000000000uLL;
    v19 = 0xFFFFF6FFFFFFFFFFuLL;
    if ( v143 )
      v31 |= 4uLL;
  }
  if ( v11 <= 0xFFFFF6BFFFFFFF78uLL )
    v31 |= 4uLL;
  if ( v32 < 0xFFFF800000000000uLL )
  {
    v33 = HIBYTE(word_14043B26C);
    goto LABEL_31;
  }
  if ( (unsigned int)MiGetSystemRegionType(v32) != 1 && (v32 < v91 || v32 > v19) )
  {
    if ( v32 > qword_14043B5F0 || v32 < qword_14043CB80 )
      v33 = (unsigned __int8)word_14043B26C;
    else
      v33 = HIBYTE(word_14043B26C);
LABEL_31:
    if ( !v33 )
      goto LABEL_32;
    goto LABEL_336;
  }
LABEL_32:
  v34 = v31 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  TransitionPteValid = v34;
  if ( !v26 )
  {
LABEL_33:
    v35 = v157;
    goto LABEL_34;
  }
  if ( *a1 <= 0x7FFFFFFEFFFFLL )
  {
    v85 = KeGetCurrentThread()->ApcState.Process;
    if ( v34 >= 0 && (v85[1].DirectoryTableBase & 0x1000000000LL) != 0
      || (v86 = *(_QWORD *)&v85[2].Spare2[23]) != 0 && *(_QWORD *)(v86 + 24) != v86 + 24 )
    {
      v34 = TransitionPteValid;
      v179 = 0LL;
      goto LABEL_33;
    }
    v34 = TransitionPteValid;
  }
  v35 = v157;
  if ( (v24 & 5) != 5 )
  {
    v87 = *(_BYTE *)(v157 + 34);
    v88 = v157 + 16;
    v34 |= 0x42uLL;
    TransitionPteValid = v34;
    if ( (!_bittest64((const signed __int64 *)(v157 + 16), 0xAu) & (unsigned __int8)~(v87 >> 4)) != 0
      && (unsigned int)MiGetPagingFileOffset(v157 + 16) )
    {
      v144 = 0LL;
      v145 = MiLockPageInline(v157);
      v146 = v145;
      v147 = v157;
      v88 = *(unsigned __int8 *)(v157 + 34);
      v28 = (unsigned __int8)v88;
      LOBYTE(v19) = !_bittest64((const signed __int64 *)(v157 + 16), 0xAu);
      LOBYTE(v28) = v19 & ~((unsigned __int8)v88 >> 4);
      if ( (v28 & 1) != 0 )
      {
        if ( (v88 & 8) == 0 )
        {
          v144 = MiCapturePageFileInfoInline(v157 + 16, 1LL);
          v147 = v157;
          v88 = *(unsigned __int8 *)(v157 + 34);
        }
        LOBYTE(v88) = v88 | 0x10;
        *(_BYTE *)(v147 + 34) = v88;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v147 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v144 )
        MiReleasePageFileInfo(v175, v144, 1);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v146 < 2u )
      {
        v148 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v148->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v148);
      }
      __writecr8(v146);
      v34 = TransitionPteValid;
      v35 = v157;
    }
    if ( (v176 & 0x400) != 0 && (*(_BYTE *)(v172 + 184) & 7) != 2 )
      MiCheckAndUpdateIoAttribution(v35, v88, v19, v28);
  }
LABEL_34:
  v164 = 0;
  v153 = 0;
  if ( v180 )
    goto LABEL_41;
  v36 = *(_QWORD *)(v35 + 8);
  if ( v36 >= 0 )
    goto LABEL_41;
  v37 = BugCheckParameter2;
  if ( BugCheckParameter2 < 0xFFFF800000000000uLL )
  {
    if ( v171 )
    {
      if ( (*(_DWORD *)(v162 + 56) & 0x20) == 0 )
      {
LABEL_41:
        v38 = v157;
        goto LABEL_42;
      }
    }
    else
    {
      v82 = KeGetCurrentThread()->ApcState.Process;
      if ( v82[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress(v82, v36 | 0x8000000000000000uLL) )
        {
LABEL_40:
          v34 = TransitionPteValid;
          goto LABEL_41;
        }
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 336LL) )
    {
      Address = MiLocateAddress(v37);
      v102 = Address;
      if ( Address )
      {
        v103 = *(_DWORD *)(Address + 48);
        if ( (v103 & 7) == 2 && (v103 & 0x8000) != 0 )
        {
          v94 = **(_QWORD **)(v102 + 72);
          v95 = (v101 >> 12)
              + ((__int64)(*(_QWORD *)(v102 + 80) - *(_QWORD *)(v94 + 136)) >> 3)
              - *(_DWORD *)(v102 + 24);
          if ( _bittest(*(const signed __int32 **)(v102 + 152), v95) )
          {
            HasPrivateFixups = *(_QWORD *)(v102 + 136);
            v34 = TransitionPteValid;
            goto LABEL_148;
          }
        }
      }
    }
    goto LABEL_40;
  }
  if ( v162 && (*(_DWORD *)(v162 + 56) & 0x20) == 0 )
    goto LABEL_41;
  HasPrivateFixups = MiSystemImageHasPrivateFixups(BugCheckParameter2, &v162, &v164, v28);
  LODWORD(v94) = v162;
  v95 = v164;
LABEL_148:
  if ( !HasPrivateFixups )
    goto LABEL_41;
  v8 = MiPrivateFixup((_DWORD)a1, v94, v95, v35, HasPrivateFixups);
  MiLockAndDecrementShareCount(v35, 0LL);
  if ( v8 == 297 || v8 == -1073741670 )
  {
    MiLockAndDecrementShareCount(v167, 0LL);
    if ( v8 == 297 )
      return (unsigned int)-1073740748;
    return v8;
  }
  if ( (v8 & 0x80000000) != 0 )
    return v8;
  TransitionPteValid = MiMakeTransitionPteValid(v11);
  v34 = TransitionPteValid;
  v38 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPteValid) >> 12) & 0xFFFFFFFFFLL)
      - 0x58000000000LL;
  v157 = v38;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v38 + 35) & 8) != 0 )
    v153 = 2;
  LOBYTE(v24) = 0;
  v10 = -2;
LABEL_42:
  v39 = 0;
  if ( (v10 & 1) == 0 )
    v39 = v24;
  v40 = v6 & 1;
  v41 = (_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v40 && *v41 == 5 )
    v42 = (__int64)v41;
  else
    v42 = 0LL;
  if ( v40 )
  {
    v63 = *v41 == 3;
    v43 = v153;
    if ( v63 )
      v43 = v153 | 1;
  }
  else
  {
    v43 = v153;
  }
  v44 = v168;
  v45 = *((unsigned __int8 *)v168 + 13);
  if ( (v45 & 8) != 0 )
  {
    v106 = a1[2];
    if ( (v106 & 1) == 0 || *(_BYTE *)(v106 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
      v34 &= ~0x20uLL;
  }
  if ( (v45 & 5) == 4 )
  {
    v89 = *((_WORD *)v168 + 5);
    if ( !v89 )
      goto LABEL_122;
    if ( v89 + *((unsigned __int16 *)v168 + 4) == (((unsigned int)v11 >> 3) & 0x1FF) )
    {
      LOBYTE(v45) = v45 & 0x10;
      if ( (*(_QWORD *)(v38 + 40) & 0x200000000000000LL) != 0 )
      {
        if ( !(_BYTE)v45 )
          goto LABEL_122;
      }
      else if ( (_BYTE)v45 )
      {
LABEL_122:
        v90 = *((_WORD *)v44 + 5);
        v38 = v157;
        if ( v90 )
        {
          *((_WORD *)v44 + 5) = v90 + 1;
          v43 |= 4u;
        }
        else
        {
          v104 = *((_BYTE *)v44 + 13);
          *((_WORD *)v44 + 5) = 1;
          *((_WORD *)v44 + 4) = ((unsigned int)v11 >> 3) & 0x1FF;
          if ( (*(_QWORD *)(v157 + 40) & 0x200000000000000LL) != 0 )
            v105 = v104 & 0xEF;
          else
            v105 = v104 | 0x10;
          *((_BYTE *)v44 + 13) = v105;
          v43 |= 4u;
        }
        goto LABEL_50;
      }
    }
    MiEmptyDeferredWorkingSetEntries(v168, v45, v38);
    v44 = v168;
    goto LABEL_122;
  }
LABEL_50:
  if ( !(unsigned int)MiAllocateWsle(v172, v11, (_QWORD *)v38, v39, v34, v43, v42) )
  {
    MiLockAndDecrementShareCount(v157, 0LL);
    if ( (v10 & 4) == 0 )
      MiLockAndDecrementShareCount(v167, 0LL);
    return (unsigned int)-1073741801;
  }
  if ( !v179 )
    return v8;
  if ( (v34 & 0x800) != 0 )
    return v8;
  if ( (v34 & 0x200) == 0 )
    return v8;
  v83 = KeGetCurrentThread()->ApcState.Process;
  if ( v83[1].Affinity.Bitmap[10] )
    return v8;
  if ( v168[2] && (*((_BYTE *)v168 + 13) & 1) == 0 )
  {
    if ( *((_WORD *)v168 + 5) )
      MiEmptyDeferredWorkingSetEntries(v168, v83, v46);
  }
  v84 = MiCopyOnWrite(BugCheckParameter2);
  v8 = v84;
  if ( v84 >= 0 )
    return v8;
  MiSetFaultPacketDirectives(a1, (unsigned int)v84);
  return 3221226548LL;
}
