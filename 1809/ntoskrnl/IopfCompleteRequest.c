/*
 * XREFs of IopfCompleteRequest @ 0x1400C1030
 * Callers:
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x14028563C (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x140924FD4 (IovCompleteRequest.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140019C74 (IopVerifyDeviceObjectOnStack.c)
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     KeInitializeApc @ 0x14008A350 (KeInitializeApc.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14008CF10 (KxWaitForSpinLockAndAcquire.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IopDequeueIrpFromThread @ 0x1400B8E30 (IopDequeueIrpFromThread.c)
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1400B95E0 (IopFreeIrp.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400BC720 (KiSetVpThreadSpinLockCount.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KeAreInterruptsEnabled @ 0x1400CADE4 (KeAreInterruptsEnabled.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiSignalThread @ 0x1400CE880 (KiSignalThread.c)
 *     IopDropIrp @ 0x1400E0A1C (IopDropIrp.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     IopFreeIrpExtension @ 0x1401078D0 (IopFreeIrpExtension.c)
 *     PoDeviceReleaseIrp @ 0x140171DA8 (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x140171EA0 (PoDeviceAcquireIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140291018 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140291128 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 *     EtwTiLogQueueApcThread @ 0x140312A70 (EtwTiLogQueueApcThread.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x1409251EC (IovFreeIrpPrivate.c)
 */

void __fastcall IopfCompleteRequest(ULONG_PTR BugCheckParameter1, unsigned __int8 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int8 v4; // si
  char v5; // dl
  ULONG_PTR v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbx
  char v9; // r15
  __int64 v10; // rcx
  int v11; // r14d
  char *v12; // rbx
  __int64 v13; // rax
  char v14; // al
  char v15; // cl
  unsigned __int8 v16; // si
  __int64 v17; // rdi
  volatile signed __int32 *v18; // rdx
  struct _MDL *v19; // rcx
  IRP *v20; // rdi
  struct _MDL *Next; // rbx
  __int64 v22; // r14
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 *v28; // rsi
  _QWORD *v29; // rax
  __int64 *v30; // rdi
  __int64 v31; // rdi
  __int64 i; // rax
  int v33; // eax
  struct _KPRCB *v34; // rcx
  int v35; // eax
  __int128 v36; // xmm0
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v41; // rbx
  __int64 v42; // rdx
  _QWORD *v43; // rax
  _QWORD *v44; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v46; // rsi
  int v47; // ebx
  __int64 v48; // r8
  __int64 v49; // rcx
  struct _KPRCB *v50; // r10
  int v51; // eax
  _QWORD *v52; // r12
  _QWORD *v53; // rdi
  _QWORD *v54; // rax
  __int64 v55; // rbx
  _QWORD *v56; // rcx
  char v57; // al
  bool v58; // zf
  __int64 v59; // rdi
  _QWORD *v60; // r15
  unsigned __int8 v61; // cl
  struct _KPRCB *v62; // r13
  _KTHREAD *CurrentThread; // r14
  unsigned __int8 IsThreadRunning; // al
  int v65; // edx
  __int64 *v66; // rcx
  __int64 v67; // rbx
  char v68; // al
  __int64 v69; // r8
  __int64 v70; // rdi
  _QWORD *v71; // r15
  unsigned __int8 v72; // cl
  struct _KPRCB *v73; // r13
  _KTHREAD *v74; // r14
  unsigned __int8 v75; // al
  int v76; // edx
  __int64 *v77; // rcx
  struct _MDL *v78; // rbx
  unsigned __int64 v79; // rcx
  ULONG_PTR v80; // rdi
  __int64 v81; // rsi
  __int64 *v82; // rax
  _QWORD *v83; // rcx
  __int64 v84; // r14
  unsigned __int8 v85; // dl
  struct _KPRCB *v86; // rcx
  _DWORD *v87; // rdx
  int v88; // eax
  __int64 v89; // rdx
  char v90; // di
  int v91; // r12d
  _QWORD *v92; // rsi
  _QWORD *v93; // rdi
  __int64 v94; // rcx
  struct _KPRCB *v95; // r15
  _KTHREAD *v96; // rbx
  unsigned __int8 v97; // al
  __int64 v98; // r8
  _QWORD *v99; // r12
  _QWORD *v100; // r15
  _QWORD *v101; // rax
  char v102; // di
  struct _KPRCB *v103; // rbx
  __int64 v104; // rsi
  _DWORD *v105; // rcx
  int v106; // eax
  _DWORD *v107; // rcx
  int v108; // eax
  char v109; // al
  int v110; // ecx
  __int64 v111; // rcx
  __int64 v112; // rdi
  struct _KPRCB *v113; // rbx
  __int64 v114; // r8
  _DWORD *v115; // rcx
  int v116; // eax
  _DWORD *v117; // rcx
  int v118; // eax
  __int64 v119; // rdx
  _QWORD *v120; // rcx
  struct _KPRCB *v121; // rcx
  _DWORD *v122; // rdx
  int v123; // eax
  struct _KPRCB *v124; // rcx
  int v125; // eax
  int v126; // edx
  _QWORD *v127; // rcx
  __int64 v128; // rax
  struct _KPRCB *v129; // rcx
  _DWORD *v130; // rdx
  int v131; // eax
  unsigned __int8 v132; // bl
  struct _KPRCB *v133; // rcx
  ULONG_PTR v134; // rdx
  volatile signed __int32 *v135; // rbx
  unsigned __int8 v136; // r14
  struct _KPRCB *v137; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v139; // eax
  __int64 v140; // rdx
  __int64 v141; // r8
  int v142; // eax
  struct _KPRCB *v143; // rcx
  unsigned __int8 v144; // bl
  struct _KPRCB *v145; // rcx
  char v146; // al
  __int64 v147; // r10
  __int64 v148; // rcx
  bool v149; // al
  __int64 v150; // r14
  bool v151; // r12
  __int64 v152; // rdi
  struct _KPRCB *v153; // r15
  _DWORD *v154; // rcx
  int v155; // eax
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // rdx
  __int64 v159; // rax
  __int64 v160; // r8
  char v161; // al
  void (__fastcall __noreturn *v162)(); // rcx
  _QWORD *j; // rax
  _QWORD **v164; // rcx
  _QWORD *v165; // rcx
  __int64 v166; // rax
  _QWORD *v167; // rdx
  _QWORD *v168; // rcx
  __int64 v169; // rdx
  _QWORD *v170; // rcx
  _KTHREAD *v171; // rbx
  __int64 v172; // rdx
  char v173; // bl
  volatile unsigned __int8 State; // al
  _KWAIT_STATUS_REGISTER v175; // al
  int v176; // ecx
  _DISPATCHER_HEADER *volatile Queue; // rcx
  PVOID SystemArgument1; // rdi
  struct _KPRCB *v179; // r14
  _DWORD *v180; // rcx
  int v181; // eax
  __int64 v182; // rdx
  __int64 v183; // r8
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *v186; // rcx
  _DWORD *v187; // rdx
  int v188; // eax
  __int64 NextProcessor; // rcx
  struct _KPRCB *v190; // rax
  _KWAIT_STATUS_REGISTER v191; // cl
  struct _KPRCB *v192; // rcx
  _DWORD *v193; // rdx
  int v194; // eax
  KIRQL v195; // al
  __int64 v196; // rcx
  void *v197; // r10
  KIRQL v198; // si
  __int64 *v199; // rdx
  __int64 **v200; // r8
  signed __int32 v201[6]; // [rsp+8h] [rbp-A9h] BYREF
  __int64 v202; // [rsp+48h] [rbp-69h] BYREF
  struct _KPRCB *v203; // [rsp+50h] [rbp-61h]
  ULONG_PTR v204; // [rsp+58h] [rbp-59h] BYREF
  __int64 v205; // [rsp+60h] [rbp-51h] BYREF
  volatile signed __int64 *v206; // [rsp+68h] [rbp-49h]
  unsigned __int8 v207; // [rsp+70h] [rbp-41h]
  int v208; // [rsp+78h] [rbp-39h] BYREF
  int v209; // [rsp+7Ch] [rbp-35h] BYREF
  int v210; // [rsp+80h] [rbp-31h] BYREF
  int v211; // [rsp+84h] [rbp-2Dh] BYREF
  int v212; // [rsp+88h] [rbp-29h] BYREF
  __int64 v213; // [rsp+90h] [rbp-21h]
  __int64 v214; // [rsp+98h] [rbp-19h] BYREF
  int v215; // [rsp+A0h] [rbp-11h]
  __int64 v216; // [rsp+A8h] [rbp-9h] BYREF
  char v217[8]; // [rsp+B0h] [rbp-1h] BYREF
  char v218[16]; // [rsp+B8h] [rbp+7h] BYREF
  void *retaddr; // [rsp+110h] [rbp+5Fh]
  struct _KPRCB *v221; // [rsp+118h] [rbp+67h]
  int v222; // [rsp+118h] [rbp+67h]
  unsigned __int8 v223; // [rsp+120h] [rbp+6Fh]
  int v224; // [rsp+120h] [rbp+6Fh]
  int v225; // [rsp+128h] [rbp+77h] BYREF
  __int64 v226; // [rsp+130h] [rbp+7Fh]

  v223 = a2;
  v2 = *(unsigned __int8 *)(BugCheckParameter1 + 66);
  v3 = 0LL;
  v4 = a2;
  v202 = 0LL;
  v5 = *(_BYTE *)(BugCheckParameter1 + 67);
  v6 = BugCheckParameter1;
  v7 = 0LL;
  if ( v5 > (char)(v2 + 1) || *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x1247uLL, 0LL, 0LL);
  v8 = *(_QWORD *)(BugCheckParameter1 + 184);
  if ( v5 <= (char)v2 && *(_BYTE *)v8 == 22 )
  {
    v9 = 1;
    PoDeviceReleaseIrp(BugCheckParameter1, *(unsigned __int8 *)(v8 + 1), *(_QWORD *)(v8 + 40));
    v5 = *(_BYTE *)(v6 + 67);
    v3 = 0LL;
    v10 = *(_QWORD *)(v6 + 184);
    v2 = *(unsigned __int8 *)(v6 + 66);
  }
  else
  {
    v9 = 0;
    v10 = *(_QWORD *)(BugCheckParameter1 + 184);
  }
  if ( (*(_BYTE *)(v6 + 211) & 2) != 0 )
    v11 = *(_DWORD *)(v6 + 240);
  else
    v11 = 0;
  *(_BYTE *)(v6 + 67) = v5 + 1;
  LOBYTE(v2) = v2 + 1;
  *(_QWORD *)(v6 + 184) = v10 + 72;
  if ( v5 < (char)v2 )
  {
    v12 = (char *)(v8 + 3);
    while ( 1 )
    {
      *(_BYTE *)(v6 + 65) = *v12 & 1;
      v13 = *(int *)(v6 + 48);
      if ( (int)v13 >= 0 )
        goto LABEL_19;
      if ( (_DWORD)v13 != v11 )
      {
        *v12 |= 2u;
        v11 = v13;
        *(_BYTE *)(v6 + 211) |= 2u;
        *(_QWORD *)(v6 + 240) = v13;
        LODWORD(v13) = *(_DWORD *)(v6 + 48);
      }
      if ( (int)v13 >= 0 )
      {
LABEL_19:
        v14 = *v12;
        v15 = *v12;
        if ( (*v12 & 0x40) != 0 )
          goto LABEL_17;
      }
      else
      {
        v14 = *v12;
        v15 = *v12;
        if ( *v12 < 0 )
          goto LABEL_17;
      }
      if ( *(_BYTE *)(v6 + 68) && (v14 & 0x20) != 0 )
      {
LABEL_17:
        v16 = *(v12 - 2);
        *v12 = v14 & 2;
        *((_WORD *)v12 - 1) = 0;
        *(_QWORD *)(v12 + 5) = 0LL;
        *(_QWORD *)(v12 + 13) = 0LL;
        *(_QWORD *)(v12 + 21) = 0LL;
        *(_QWORD *)(v12 + 45) = 0LL;
        if ( *(_BYTE *)(v6 + 67) == *(_BYTE *)(v6 + 66) + 1 )
          v17 = 0LL;
        else
          v17 = *(_QWORD *)(*(_QWORD *)(v6 + 184) + 40LL);
        if ( v9 )
          PoDeviceAcquireIrp(v6, v16, v17, 0LL);
        if ( (*(unsigned int (__fastcall **)(__int64, ULONG_PTR, _QWORD, __int64))(v12 + 53))(
               v17,
               v6,
               *(_QWORD *)(v12 + 61),
               v3) == -1073741802 )
          return;
        if ( v9 )
          PoDeviceReleaseIrp(v6, v16, v17);
        v3 = 0LL;
        goto LABEL_33;
      }
      if ( *(_BYTE *)(v6 + 65) && *(_BYTE *)(v6 + 67) <= *(_BYTE *)(v6 + 66) )
      {
        *(_BYTE *)(*(_QWORD *)(v6 + 184) + 3LL) |= 1u;
        v15 = *v12;
      }
      *((_WORD *)v12 - 1) = 0;
      *v12 = v15 & 2;
      *(_QWORD *)(v12 + 5) = 0LL;
      *(_QWORD *)(v12 + 13) = 0LL;
      *(_QWORD *)(v12 + 21) = 0LL;
      *(_QWORD *)(v12 + 45) = 0LL;
LABEL_33:
      ++*(_BYTE *)(v6 + 67);
      v12 += 72;
      *(_QWORD *)(v6 + 184) += 72LL;
      if ( *(char *)(v6 + 67) > (char)(*(_BYTE *)(v6 + 66) + 1) )
      {
        v4 = v223;
        break;
      }
    }
  }
  v18 = (volatile signed __int32 *)*(unsigned int *)(v6 + 16);
  if ( ((unsigned __int8)v18 & 8) != 0 )
  {
    v19 = *(struct _MDL **)(v6 + 8);
    v20 = *(IRP **)(v6 + 24);
    if ( v19 )
    {
      do
      {
        Next = v19->Next;
        IoFreeMdl(v19);
        v19 = Next;
      }
      while ( Next );
    }
    IoFreeIrp((PIRP)v6);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v20->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(v20, v4);
    return;
  }
  v22 = 4194817LL;
  if ( *(_DWORD *)(v6 + 48) == 260 )
  {
    v23 = *(_QWORD *)(v6 + 56);
    if ( v23 > 2 )
    {
      if ( v23 - 2684354563u <= 0x16 && _bittest64(&v22, v23 - 2684354563u) )
      {
        v7 = *(_QWORD *)(v6 + 160);
        v202 = v7;
        *(_QWORD *)(v6 + 160) = 0LL;
      }
      else
      {
        *(_DWORD *)(v6 + 48) = -1073741191;
      }
    }
  }
  if ( !v4 )
  {
    v24 = *(_QWORD *)(v6 + 192);
    if ( v24 )
    {
      if ( ((unsigned __int16)v18 & 0x400) == 0 )
      {
        v25 = *(_QWORD *)(v24 + 16);
        if ( (!v25 || (v26 = *(_QWORD *)(v25 + 8)) == 0)
          && ((*(_DWORD *)(v24 + 80) & 0x800) != 0
           || (v27 = *(_QWORD *)(*(_QWORD *)(v24 + 8) + 56LL)) == 0
           || (v26 = *(_QWORD *)(v27 + 8)) == 0) )
        {
          v26 = *(_QWORD *)(v24 + 8);
        }
        v28 = (__int64 *)(v26 + 24);
        if ( *(_QWORD *)(v26 + 24) )
        {
          v29 = *(_QWORD **)(v24 + 208);
          if ( v29 )
          {
            if ( v29 != IopRevocationExtension )
            {
              v30 = (__int64 *)v29[2];
              if ( v30 )
              {
                v31 = *v30;
                if ( v31 )
                {
                  if ( IopVerifyDeviceObjectOnStack(v26, v31, 0) )
                  {
LABEL_64:
                    v33 = *(_DWORD *)(v31 + 72);
                    if ( v33 == 8 || v33 == 20 )
                    {
                      v4 = 1;
                      v223 = 1;
                    }
                    else
                    {
                      v4 = v223;
                    }
                    goto LABEL_68;
                  }
                }
              }
            }
          }
          for ( i = *v28; i; i = *(_QWORD *)(i + 24) )
            v26 = i;
        }
        v31 = v26;
        goto LABEL_64;
      }
    }
  }
LABEL_68:
  v34 = *(struct _KPRCB **)(v6 + 160);
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0);
    *(_QWORD *)(v6 + 160) = 0LL;
  }
  if ( (*(_BYTE *)(v6 + 71) & 0x40) != 0 )
  {
    LOBYTE(v2) = 1;
    IopFreeIrpExtension(v6, 0xFFFFFFFFLL, v2);
  }
  v35 = *(_DWORD *)(v6 + 16);
  if ( (v35 & 0x402) != 0 )
  {
    if ( (v35 & 0x440) == 0 )
    {
      IopDequeueIrpFromThread((_QWORD *)v6, v18, v2);
      KeInitializeApc(
        v6 + 120,
        *(_QWORD *)(v6 + 152),
        *(char *)(v6 + 70),
        (__int64)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(v6 + 120, 0LL, 0LL, v4);
      return;
    }
    v36 = *(_OWORD *)(v6 + 48);
    v38 = 2LL;
    LODWORD(v226) = *(_DWORD *)(v6 + 16) & 0x42;
    v37 = v226;
    *(_OWORD *)*(_QWORD *)(v6 + 72) = v36;
    if ( v37 )
    {
      v39 = *(_QWORD *)(v6 + 152);
      CurrentIrql = 0;
      if ( v39 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v41 = v39 + 1856;
        KxAcquireSpinLock((PKSPIN_LOCK)(v39 + 1856));
      }
      else
      {
        v41 = 1856LL;
      }
      v42 = *(_QWORD *)(v6 + 32);
      v43 = (_QWORD *)(v6 + 32);
      v44 = *(_QWORD **)(v6 + 40);
      if ( *(_QWORD *)(v42 + 8) != v6 + 32 || (_QWORD *)*v44 != v43 )
        __fastfail(3u);
      *v44 = v42;
      *(_QWORD *)(v42 + 8) = v44;
      *(_QWORD *)(v6 + 40) = v6 + 32;
      *v43 = v43;
      if ( v39 )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)v41);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(CurrentIrql);
      }
      v38 = 2LL;
    }
    v46 = *(_QWORD *)(v6 + 80);
    if ( (*(_BYTE *)v46 & 0x7F) != 0 )
    {
      v48 = 0LL;
      v47 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v46 + 4) == 1 )
        goto LABEL_163;
      v47 = 1;
      v48 = 0LL;
    }
    v49 = KeGetCurrentIrql();
    v213 = v49;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v49 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v50 = KeGetCurrentPrcb();
    v225 = 0;
    v203 = v50;
    if ( _interlockedbittestandset((volatile signed __int32 *)v46, 7u) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v225, v38, v48);
        while ( (*(_DWORD *)v46 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v46, 7u) );
      v50 = v203;
    }
    v51 = *(_DWORD *)(v46 + 4);
    *(_DWORD *)(v46 + 4) = 1;
    if ( !v51 )
    {
      v52 = *(_QWORD **)(v46 + 8);
      v53 = (_QWORD *)(v46 + 8);
      if ( !v47 )
      {
        if ( v52 != v53 )
        {
          while ( 1 )
          {
            v54 = (_QWORD *)*v52;
            v55 = (__int64)v52;
            v52 = v54;
            v56 = *(_QWORD **)(v55 + 8);
            if ( v54[1] != v55 || *v56 != v55 )
              __fastfail(3u);
            *v56 = v54;
            v54[1] = v56;
            v57 = *(_BYTE *)(v55 + 16);
            if ( v57 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(v50, v55, *(unsigned __int16 *)(v55 + 18), 0LL) )
              {
                v58 = (*(_DWORD *)(v46 + 4))-- == 1;
                if ( v58 )
                  goto LABEL_162;
              }
            }
            else if ( v57 == 2 )
            {
              *(_BYTE *)(v55 + 17) = 5;
              v59 = *(_QWORD *)(v55 + 24);
              *(_QWORD *)v55 = 0LL;
              v60 = (_QWORD *)(v59 + 8);
              v61 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v61 < 2u )
                _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
              v62 = KeGetCurrentPrcb();
              CurrentThread = v62->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v62->CurrentThread);
                EtwTraceEnqueueWork(CurrentThread, v55, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe(v59);
              if ( (_QWORD *)*v60 == v60
                || *(_DWORD *)(v59 + 40) >= *(_DWORD *)(v59 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v59 && CurrentThread->WaitReason == 15
                || !KiWakeQueueWaiter((__int64)v62, v59, v55) )
              {
                v65 = *(_DWORD *)(v59 + 4);
                *(_DWORD *)(v59 + 4) = v65 + 1;
                v66 = *(__int64 **)(v59 + 32);
                if ( *v66 != v59 + 24 )
                  __fastfail(3u);
                *(_QWORD *)v55 = v59 + 24;
                *(_QWORD *)(v55 + 8) = v66;
                *v66 = v55;
                *(_QWORD *)(v59 + 32) = v55;
                if ( !v65 && (_QWORD *)*v60 != v60 )
                  KiWakeOtherQueueWaiters(v62, v59);
              }
              _InterlockedAnd((volatile signed __int32 *)v59, 0xFFFFFF7F);
              v58 = (*(_DWORD *)(v46 + 4))-- == 1;
              if ( v58 )
                goto LABEL_162;
              v53 = (_QWORD *)(v46 + 8);
            }
            else
            {
              KiTryUnwaitThread(v50, v55, 256LL, 0LL);
            }
            v50 = v203;
            if ( v52 == v53 )
              goto LABEL_162;
          }
        }
        goto LABEL_162;
      }
      for ( ; v52 != v53; v50 = v203 )
      {
        v67 = (__int64)v52;
        v52 = (_QWORD *)*v52;
        v68 = *(_BYTE *)(v67 + 16);
        if ( v68 == 1 )
        {
          v69 = *(unsigned __int16 *)(v67 + 18);
        }
        else
        {
          if ( v68 == 2 )
          {
            *(_BYTE *)(v67 + 17) = 5;
            v70 = *(_QWORD *)(v67 + 24);
            *(_QWORD *)v67 = 0LL;
            v71 = (_QWORD *)(v70 + 8);
            v72 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v72 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v73 = KeGetCurrentPrcb();
            v74 = v73->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v75 = KeIsThreadRunning(v73->CurrentThread);
              EtwTraceEnqueueWork(v74, v67, v75);
            }
            KiAcquireKobjectLockSafe(v70);
            if ( (_QWORD *)*v71 == v71
              || *(_DWORD *)(v70 + 40) >= *(_DWORD *)(v70 + 44)
              || v74->Queue == (_DISPATCHER_HEADER *volatile)v70 && v74->WaitReason == 15
              || !KiWakeQueueWaiter((__int64)v73, v70, v67) )
            {
              v76 = *(_DWORD *)(v70 + 4);
              *(_DWORD *)(v70 + 4) = v76 + 1;
              v77 = *(__int64 **)(v70 + 32);
              if ( *v77 != v70 + 24 )
                __fastfail(3u);
              *(_QWORD *)v67 = v70 + 24;
              *(_QWORD *)(v67 + 8) = v77;
              *v77 = v67;
              *(_QWORD *)(v70 + 32) = v67;
              if ( !v76 && (_QWORD *)*v71 != v71 )
                KiWakeOtherQueueWaiters(v73, v70);
            }
            _InterlockedAnd((volatile signed __int32 *)v70, 0xFFFFFF7F);
            v53 = (_QWORD *)(v46 + 8);
            continue;
          }
          v69 = 256LL;
        }
        KiTryUnwaitThread(v50, v67, v69, 0LL);
      }
      v53[1] = v53;
      *v53 = v53;
    }
LABEL_162:
    _InterlockedAnd((volatile signed __int32 *)v46, 0xFFFFFF7F);
    KiExitDispatcher((_DWORD)v203, 0, 1, v223, v213);
    v6 = BugCheckParameter1;
LABEL_163:
    if ( (_DWORD)v226 )
    {
      if ( IopDispatchFreeIrp )
        IovFreeIrpPrivate(v6);
      else
        IopFreeIrp(v6, v38, v2);
    }
    return;
  }
  v78 = *(struct _MDL **)(v6 + 8);
  if ( v78 )
  {
    do
    {
      MmUnlockPages(v78);
      v78 = v78->Next;
    }
    while ( v78 );
    v35 = *(_DWORD *)(v6 + 16);
  }
  if ( (v35 & 0x2000) != 0 )
  {
    ObfDereferenceObject(*(PVOID *)(v6 + 152));
    v35 = *(_DWORD *)(v6 + 16);
  }
  if ( (v35 & 0x800) != 0 && !*(_BYTE *)(v6 + 65) )
  {
    if ( *(_DWORD *)(v6 + 48) == 260 )
    {
      v79 = *(_QWORD *)(v6 + 56) - 2684354563LL;
      if ( v79 <= 0x16 )
      {
        if ( _bittest64(&v22, v79) )
          *(_QWORD *)(v6 + 160) = v7;
      }
    }
    return;
  }
  v80 = *(_QWORD *)(v6 + 192);
  v81 = *(_QWORD *)(v6 + 152);
  v204 = v80;
  if ( (v35 & 0x2000) == 0
    || (v214 = 0LL, !*(_BYTE *)(v6 + 65))
    && ((v34 = (struct _KPRCB *)*(unsigned int *)(v6 + 48), (*(_DWORD *)(v6 + 48) & 0xC0000000) == 0xC0000000)
     || (*(_DWORD *)(v80 + 80) & 0x2000000) != 0 && (int)v34 >= 0) )
  {
    if ( v81 )
    {
      v135 = (volatile signed __int32 *)(v81 + 1856);
      v136 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v136 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v81 + 1856);
      }
      else
      {
        v137 = KeGetCurrentPrcb();
        SchedulerAssist = v137->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v137->NestingLevel <= 1u )
          {
            v139 = SchedulerAssist[5];
            SchedulerAssist[5] = v139 + 1;
            if ( v139 == -1 )
              KiRemoveSystemWorkPriorityKick(v137);
          }
        }
        if ( _interlockedbittestandset64(v135, 0LL) )
        {
          KiSetVpThreadSpinLockCount((__int64)v137, 0);
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v81 + 1856), v140, v141);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v81 + 1856, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v135, 0LL);
      v34 = KeGetCurrentPrcb();
      v18 = (volatile signed __int32 *)v34->SchedulerAssist;
      if ( v18 )
      {
        if ( v34->NestingLevel <= 1u )
        {
          v142 = *((_DWORD *)v18 + 5) - 1;
          *((_DWORD *)v18 + 5) = v142;
          if ( !v142 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v136 < 2u )
      {
        v143 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v143->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v143);
      }
      __writecr8(v136);
      v7 = v202;
      v80 = v204;
    }
    if ( *(_BYTE *)(v6 + 68) )
    {
      v195 = KeAcquireQueuedSpinLock(0xBuLL);
      v196 = IopDeadIrps;
      v197 = *(void **)(v6 + 152);
      v198 = v195;
      if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
      {
LABEL_462:
        if ( v197 )
        {
          KeInitializeApc(
            v6 + 120,
            (__int64)v197,
            *(char *)(v6 + 70),
            (__int64)IopCompleteRequest,
            (__int64)IopAbortRequest,
            0LL,
            0,
            0LL);
          KeInsertQueueApc(v6 + 120, v80, v7, v223);
          KeReleaseQueuedSpinLock(0xBuLL, v198);
          return;
        }
      }
      else
      {
        while ( 1 )
        {
          v199 = *(__int64 **)v196;
          if ( v196 - 32 == v6 )
            break;
          v196 = *(_QWORD *)v196;
          if ( v199 == &IopDeadIrps )
            goto LABEL_462;
        }
        v200 = *(__int64 ***)(v196 + 8);
        if ( v199[1] != v196 || *v200 != (__int64 *)v196 )
          goto LABEL_468;
        *v200 = v199;
        v199[1] = (__int64)v200;
        *(_QWORD *)(v196 + 8) = v196;
        *(_QWORD *)v196 = v196;
        ObfDereferenceObject(v197);
      }
      KeReleaseQueuedSpinLock(0xBuLL, v198);
      v134 = v80;
      goto LABEL_302;
    }
    if ( (struct _KTHREAD *)v81 == KeGetCurrentThread()
      && !KeGetCurrentThread()->SpecialApcDisable
      && (unsigned __int8)KeAreInterruptsEnabled(v34, v18)
      && !KeGetCurrentIrql()
      && KeGetCurrentThread()->ApcStateIndex != 1 )
    {
      v216 = 1LL;
      v144 = KeGetCurrentIrql();
      __writecr8(1uLL);
      IopCompleteRequest(v6 + 120, (__int64)v218, &v216, &v204, &v202);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v144 < 2u )
      {
        v145 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v145->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v145);
      }
      __writecr8(v144);
      return;
    }
    v146 = *(_BYTE *)(v6 + 70);
    *(_BYTE *)(v6 + 120) = 18;
    *(_BYTE *)(v6 + 122) = 88;
    if ( v146 == 2 )
      v146 = *(_BYTE *)(v81 + 586);
    *(_BYTE *)(v6 + 200) = v146;
    v147 = 0LL;
    *(_QWORD *)(v6 + 128) = v81;
    *(_QWORD *)(v6 + 152) = IopCompleteRequest;
    *(_QWORD *)(v6 + 160) = IopAbortRequest;
    *(_QWORD *)(v6 + 168) = 0LL;
    *(_WORD *)(v6 + 201) = 0;
    *(_QWORD *)(v6 + 176) = 0LL;
    v149 = 0;
    if ( EtwThreatIntProvRegHandle )
    {
      if ( (v148 = *(_QWORD *)(EtwThreatIntProvRegHandle + 32), *(_DWORD *)(v148 + 96))
        && (*(_DWORD *)(v148 + 112) & 0x3000LL) != 0
        && (*(_QWORD *)(v148 + 120) & 0x3000LL) == *(_QWORD *)(v148 + 120)
        || *(_BYTE *)(EtwThreatIntProvRegHandle + 101)
        && EtwpLevelKeywordEnabled(*(_QWORD *)(EtwThreatIntProvRegHandle + 40) + 96LL, 0, 12288LL) )
      {
        v149 = 1;
      }
    }
    v222 = v147;
    v150 = v147;
    v213 = v147;
    v151 = v149 && *(_BYTE *)(v6 + 201) != (_BYTE)v147;
    if ( v151 )
    {
      ObfReferenceObjectWithTag((PVOID)v81, 0x5149654Bu);
      LODWORD(v147) = 0;
    }
    v152 = KeGetCurrentIrql();
    v226 = v152;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v152 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v153 = KeGetCurrentPrcb();
    v211 = v147;
    v154 = v153->SchedulerAssist;
    if ( v154 )
    {
      if ( v153->NestingLevel <= 1u )
      {
        v155 = v154[5];
        v154[5] = v155 + 1;
        if ( v155 == -1 )
          KiRemoveSystemWorkPriorityKick(v153);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v81 + 64), 0LL) )
    {
      KiSetVpThreadSpinLockCount((__int64)v153, 0);
      do
        KeYieldProcessorEx(&v211, v156, v157);
      while ( *(_QWORD *)(v81 + 64) );
      KiSetVpThreadSpinLockCount((__int64)v153, 1);
    }
    if ( (*(_DWORD *)(v81 + 116) & 0x4000) == 0 || *(_BYTE *)(v6 + 202) != (_BYTE)v150 )
    {
      v173 = 0;
      goto LABEL_451;
    }
    v158 = *(_QWORD *)(v6 + 128);
    *(_QWORD *)(v6 + 184) = v204;
    *(_QWORD *)(v6 + 192) = v202;
    *(_BYTE *)(v6 + 202) = 1;
    if ( *(_BYTE *)(v6 + 200) != (_BYTE)v150 || *(_BYTE *)(v158 + 586) == (_BYTE)v150 )
    {
      *(_BYTE *)(v6 + 200) = *(_BYTE *)(v158 + 586);
      v159 = 152LL;
    }
    else
    {
      v159 = 600LL;
    }
    v160 = v159 + v158;
    v161 = *(_BYTE *)(v6 + 201);
    if ( *(_QWORD *)(v6 + 168) == v150 )
    {
      v168 = (_QWORD *)(v160 + 16LL * v161);
      for ( j = (_QWORD *)v168[1]; j != v168; j = (_QWORD *)j[1] )
      {
        if ( j[4] == v150 )
          break;
      }
      goto LABEL_390;
    }
    if ( v161 )
    {
      v162 = *(void (__fastcall __noreturn **)())(v6 + 152);
      if ( v162 == KiSchedulerApcTerminate )
      {
        *(_BYTE *)(v158 + 194) |= 2u;
        j = (_QWORD *)(v160 + 16LL * v161);
LABEL_390:
        v169 = *j;
        v170 = (_QWORD *)(v6 + 136);
        if ( *(_QWORD **)(*j + 8LL) != j )
          goto LABEL_468;
        *v170 = v169;
        *(_QWORD *)(v6 + 144) = j;
        *(_QWORD *)(v169 + 8) = v170;
        *j = v170;
LABEL_392:
        v171 = *(_KTHREAD **)(v6 + 128);
        v172 = *(unsigned __int8 *)(v6 + 201);
        if ( *(char *)(v6 + 200) == v171->ApcStateIndex )
        {
          if ( v171 == v153->CurrentThread )
          {
            if ( !(_BYTE)v172
              && (!v171->WaitBlock[3].SpareLong || !*(_QWORD *)(v6 + 168) && !HIWORD(v171->WaitBlock[3].SpareLong)) )
            {
              v171->ApcState.KernelApcPending = 1;
              if ( (_BYTE)v152 )
                KiRequestSoftwareInterrupt(v153, 1);
              else
                v171->MiscFlags |= 0x40u;
              v173 = 1;
              goto LABEL_451;
            }
            goto LABEL_449;
          }
          if ( (_BYTE)v172 )
          {
            if ( v171->WaitBlockFill6[68] == 5 && v171->WaitMode == 1 )
            {
              v191.Flags = (unsigned __int8)v171->WaitRegister;
              if ( (unsigned __int8)((v191.Flags & 7) - 3) > 1u
                && ((v171->MiscFlags & 0x10) != 0 || (v171->ApcState.UserApcPendingAll & 2) != 0) )
              {
                v171->WaitRegister.Flags = v191.Flags | 0x40;
                if ( (unsigned __int8)KiSignalThread(v153, v171, 192LL, 0LL) )
                  v171->ApcState.UserApcPendingAll |= 2u;
              }
            }
          }
          else
          {
            v171->ApcState.KernelApcPending = 1;
            _InterlockedOr(v201, v150);
            State = v171->State;
            if ( State == 2 )
            {
              NextProcessor = v171->NextProcessor;
              LOBYTE(v172) = 1;
              LODWORD(NextProcessor) = NextProcessor & 0x7FFFFFFF;
              if ( KeGetPcr()->Prcb.Number == (_DWORD)NextProcessor )
              {
                KiRequestSoftwareInterrupt(0LL, 1);
              }
              else
              {
                v190 = KeGetCurrentPrcb();
                ++v190->SynchCounters.IpiSendSoftwareInterruptCount;
                HalSendSoftwareInterrupt(NextProcessor, v172);
              }
              v173 = 1;
              goto LABEL_451;
            }
            if ( State == 5
              && v171->WaitIrql == (_BYTE)v150
              && v171->SpecialApcDisable == (_WORD)v150
              && (*(_QWORD *)(v6 + 168) == v150
               || v171->KernelApcDisable == (_WORD)v150 && v171->ApcState.InProgressFlags == (_BYTE)v150) )
            {
              v175.Flags = (unsigned __int8)v171->WaitRegister;
              v176 = v175.Flags & 7;
              if ( v176 == 1 || v176 == 4 )
              {
                Queue = v171->Queue;
                if ( Queue )
                {
                  if ( (Queue->Type & 0x7F) == 0x15 )
                  {
                    v171->QueuePriority = (unsigned __int8)v171->QueuePriority;
                    _InterlockedIncrement((volatile signed __int32 *)&Queue[22].WaitListHead + (unsigned int)v171->QueuePriority);
                  }
                  else
                  {
                    _InterlockedIncrement((volatile signed __int32 *)&Queue[1].WaitListHead.Blink);
                  }
                }
                SystemArgument1 = v171->SchedulerApc.SystemArgument1;
                if ( SystemArgument1 )
                {
                  v179 = KeGetCurrentPrcb();
                  v212 = 0;
                  v180 = v179->SchedulerAssist;
                  if ( v180 )
                  {
                    if ( v179->NestingLevel <= 1u )
                    {
                      v181 = v180[5];
                      v180[5] = v181 + 1;
                      if ( v181 == -1 )
                        KiRemoveSystemWorkPriorityKick(v179);
                    }
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)SystemArgument1 + 5700, 0LL) )
                  {
                    KiSetVpThreadSpinLockCount((__int64)v179, 0);
                    do
                      KeYieldProcessorEx(&v212, v182, v183);
                    while ( *((_QWORD *)SystemArgument1 + 2850) );
                    KiSetVpThreadSpinLockCount((__int64)v179, 1);
                  }
                  if ( v171->SchedulerApc.SystemArgument1 )
                  {
                    Flink = v171->WaitListEntry.Flink;
                    Blink = v171->WaitListEntry.Blink;
                    if ( ($D3E18D4F2DB6377F7BB4F3904B49E763 *)Flink->Blink != &v171->216
                      || ($D3E18D4F2DB6377F7BB4F3904B49E763 *)Blink->Flink != &v171->216 )
                    {
                      goto LABEL_468;
                    }
                    Blink->Flink = Flink;
                    Flink->Blink = Blink;
                    v171->SchedulerApc.SystemArgument1 = 0LL;
                  }
                  _InterlockedAnd64((volatile signed __int64 *)SystemArgument1 + 2850, 0LL);
                  v186 = KeGetCurrentPrcb();
                  v187 = v186->SchedulerAssist;
                  if ( v187 )
                  {
                    if ( v186->NestingLevel <= 1u )
                    {
                      v188 = v187[5] - 1;
                      v187[5] = v188;
                      if ( !v188 )
                        KiRemoveSystemWorkPriorityKick(v186);
                    }
                  }
                  LODWORD(v150) = v222;
                }
                if ( v171->WaitBlockFill6[68] == 1 )
                  v171->MiscFlags |= 2u;
                KiSetThreadState(v171, 7LL);
                LOBYTE(v152) = v226;
                v171->WaitListEntry.Flink = (struct _LIST_ENTRY *)v153->DeferredReadyListHead.Next;
                v153->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)&v171->216;
                v171->WaitStatus = 256LL;
                v175.Flags = (unsigned __int8)v171->WaitRegister;
              }
              v171->WaitRegister.Flags = v175.Flags | 0x20;
              v173 = 1;
LABEL_451:
              *(_QWORD *)(v81 + 64) = 0LL;
              v192 = KeGetCurrentPrcb();
              v193 = v192->SchedulerAssist;
              if ( v193 )
              {
                if ( v192->NestingLevel <= 1u )
                {
                  v194 = v193[5] - 1;
                  v193[5] = v194;
                  if ( !v194 )
                    KiRemoveSystemWorkPriorityKick(v192);
                }
              }
              KiExitDispatcher((_DWORD)v153, 0, 1, v223, v152);
              if ( v151 )
              {
                if ( v173 )
                  EtwTiLogQueueApcThread(
                    (unsigned __int8)KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10],
                    v81,
                    v213,
                    v150,
                    v204,
                    v202);
                ObfDereferenceObjectWithTag((PVOID)v81, 0x5149654Bu);
              }
              return;
            }
          }
        }
LABEL_449:
        v173 = 1;
        goto LABEL_451;
      }
      if ( (char *)v162 == (char *)KeSpecialUserApcKernelRoutine )
      {
        v164 = (_QWORD **)(v160 + 16LL * v161);
        for ( j = *v164; j != v164; j = (_QWORD *)*j )
          ;
        *(_BYTE *)(v158 + 194) |= 1u;
        goto LABEL_390;
      }
    }
    v165 = (_QWORD *)(v6 + 136);
    v166 = v160 + 16LL * v161;
    v167 = *(_QWORD **)(v166 + 8);
    if ( *v167 != v166 )
      goto LABEL_468;
    *v165 = v166;
    *(_QWORD *)(v6 + 144) = v167;
    *v167 = v165;
    *(_QWORD *)(v166 + 8) = v165;
    goto LABEL_392;
  }
  v82 = *(__int64 **)(v80 + 176);
  v83 = (_QWORD *)(v6 + 120);
  if ( !v82 )
  {
    IopCompleteRequest((__int64)v83, (__int64)v217, &v214, (ULONG_PTR *)(v6 + 192), &v214);
    return;
  }
  v84 = *v82;
  *v83 = v82[1];
  *(_DWORD *)(v6 + 184) = 0;
  v205 = 0LL;
  v206 = (volatile signed __int64 *)(v84 + 64);
  v85 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v85 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v207 = v85;
  v86 = KeGetCurrentPrcb();
  v87 = v86->SchedulerAssist;
  if ( v87 )
  {
    if ( v86->NestingLevel <= 1u )
    {
      v88 = v87[5];
      v87[5] = v88 + 1;
      if ( v88 == -1 )
        KiRemoveSystemWorkPriorityKick(v86);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v205, v84 + 64);
  }
  else
  {
    v89 = _InterlockedExchange64((volatile __int64 *)(v84 + 64), (__int64)&v205);
    if ( v89 )
      KxWaitForLockOwnerShip((__int64)&v205, (_QWORD *)v89, v2);
  }
  *(_DWORD *)(v6 + 16) |= 0x10000u;
  if ( *(_BYTE *)(v84 + 72) )
  {
    v90 = 1;
    goto LABEL_285;
  }
  v91 = (char)v223;
  v92 = (_QWORD *)(v6 + 168);
  v224 = (char)v223;
  v93 = (_QWORD *)(v84 + 8);
  v94 = KeGetCurrentIrql();
  v226 = v94;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v94 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v95 = KeGetCurrentPrcb();
  v221 = v95;
  v96 = v95->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    v97 = KeIsThreadRunning(v95->CurrentThread);
    EtwTraceEnqueueWork(v96, v6 + 168, v97);
  }
  if ( (_BYTE)v224 )
  {
    v98 = 0LL;
    if ( (*(_BYTE *)(v84 + 1) & 2) != 0 )
      v91 = 0;
    v224 = v91;
  }
  else
  {
    v98 = 0LL;
  }
  v208 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)v84, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v208, v89, v98);
      while ( (*(_DWORD *)v84 & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset((volatile signed __int32 *)v84, 7u) );
    v98 = 0LL;
  }
  v215 = *(_DWORD *)(v84 + 4);
  if ( (_QWORD *)*v93 != v93
    && *(_DWORD *)(v84 + 40) < *(_DWORD *)(v84 + 44)
    && (v96->Queue != (_DISPATCHER_HEADER *volatile)v84 || v96->WaitReason != 15) )
  {
    v99 = (_QWORD *)*v93;
    while ( 1 )
    {
      v100 = v99;
      v99 = (_QWORD *)*v99;
      if ( *((_BYTE *)v100 + 16) != 3 )
      {
LABEL_278:
        v95 = v221;
        v92 = (_QWORD *)(v6 + 168);
        break;
      }
      v101 = (_QWORD *)v100[1];
      if ( (_QWORD *)v99[1] != v100 || (_QWORD *)*v101 != v100 )
        goto LABEL_468;
      *v101 = v99;
      v102 = 0;
      v99[1] = v101;
      v103 = KeGetCurrentPrcb();
      v104 = v100[3];
      v209 = 0;
      while ( 1 )
      {
        v105 = v103->SchedulerAssist;
        if ( v105 )
        {
          if ( v103->NestingLevel <= 1u )
          {
            v106 = v105[5];
            v105[5] = v106 + 1;
            if ( v106 == -1 )
              KiRemoveSystemWorkPriorityKick(v103);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v104 + 64), 0LL) )
          break;
        v107 = v103->SchedulerAssist;
        if ( v107 )
        {
          if ( v103->NestingLevel <= 1u )
          {
            v108 = v107[5] - 1;
            v107[5] = v108;
            if ( !v108 )
              KiRemoveSystemWorkPriorityKick(v103);
          }
        }
        do
          KeYieldProcessorEx(&v209, v89, v98);
        while ( *(_QWORD *)(v104 + 64) );
      }
      if ( *(_BYTE *)(v104 + 388) == 5 )
      {
        v109 = *(_BYTE *)(v104 + 112);
        v102 = 0;
        v110 = v109 & 7;
        if ( v110 == 1 || v110 == 4 )
        {
          v111 = *(_QWORD *)(v104 + 232);
          if ( v111 )
          {
            if ( (*(_BYTE *)v111 & 0x7F) == 0x15 )
            {
              *(_DWORD *)(v104 + 540) = (unsigned __int8)*(_DWORD *)(v104 + 540);
              _InterlockedIncrement((volatile signed __int32 *)(v111 + 4LL * *(unsigned int *)(v104 + 540) + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v111 + 40));
            }
          }
          v112 = *(_QWORD *)(v104 + 712);
          if ( v112 )
          {
            v113 = KeGetCurrentPrcb();
            v114 = 0LL;
            v210 = 0;
            while ( 1 )
            {
              v115 = v113->SchedulerAssist;
              if ( v115 )
              {
                if ( v113->NestingLevel <= 1u )
                {
                  v116 = v115[5];
                  v115[5] = v116 + 1;
                  if ( v116 == -1 )
                    KiRemoveSystemWorkPriorityKick(v113);
                }
              }
              if ( !_interlockedbittestandset64((volatile signed __int32 *)(v112 + 22800), 0LL) )
                break;
              v117 = v113->SchedulerAssist;
              if ( v117 )
              {
                if ( v113->NestingLevel <= 1u )
                {
                  v118 = v117[5] - 1;
                  v117[5] = v118;
                  if ( !v118 )
                    KiRemoveSystemWorkPriorityKick(v113);
                }
              }
              do
                KeYieldProcessorEx(&v210, v89, v114);
              while ( *(_QWORD *)(v112 + 22800) );
            }
            if ( *(_QWORD *)(v104 + 712) )
            {
              v119 = *(_QWORD *)(v104 + 216);
              v120 = *(_QWORD **)(v104 + 224);
              if ( *(_QWORD *)(v119 + 8) != v104 + 216 || *v120 != v104 + 216 )
                goto LABEL_468;
              *v120 = v119;
              *(_QWORD *)(v119 + 8) = v120;
              *(_QWORD *)(v104 + 712) = 0LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v112 + 22800), 0LL);
            v121 = KeGetCurrentPrcb();
            v122 = v121->SchedulerAssist;
            if ( v122 )
            {
              if ( v121->NestingLevel <= 1u )
              {
                v123 = v122[5] - 1;
                v122[5] = v123;
                if ( !v123 )
                  KiRemoveSystemWorkPriorityKick(v121);
              }
            }
          }
          if ( *(_BYTE *)(v104 + 388) == 1 )
            *(_DWORD *)(v104 + 116) |= 2u;
          KiSetThreadState(v104, 7LL);
          *(_QWORD *)(v104 + 216) = v221->DeferredReadyListHead.Next;
          v221->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v104 + 216);
          *(_QWORD *)(v104 + 200) = v6 + 168;
          goto LABEL_271;
        }
        if ( (*(_BYTE *)(v104 + 112) & 7) == 0 )
        {
          *(_BYTE *)(v104 + 112) = v109 & 0xF8 | 2;
          *(_QWORD *)(v104 + 200) = v6 + 168;
          *((_BYTE *)v100 + 17) = 0;
LABEL_271:
          v102 = 1;
          goto LABEL_272;
        }
        if ( v110 == 5 )
        {
          *(_BYTE *)(v104 + 112) = v109 & 0xF8 | 6;
        }
        else if ( v110 == 3 )
        {
          *((_BYTE *)v100 + 17) = 2;
        }
      }
LABEL_272:
      v98 = 0LL;
      *(_QWORD *)(v104 + 64) = 0LL;
      v124 = KeGetCurrentPrcb();
      v89 = (__int64)v124->SchedulerAssist;
      if ( v89 )
      {
        if ( v124->NestingLevel <= 1u )
        {
          v125 = *(_DWORD *)(v89 + 20) - 1;
          *(_DWORD *)(v89 + 20) = v125;
          if ( !v125 )
          {
            KiRemoveSystemWorkPriorityKick(v124);
            v98 = 0LL;
          }
        }
      }
      ++*((_BYTE *)v100 + 17);
      if ( v102 )
      {
        LODWORD(v95) = (_DWORD)v221;
        goto LABEL_284;
      }
      v93 = (_QWORD *)(v84 + 8);
      if ( v99 == (_QWORD *)(v84 + 8) )
        goto LABEL_278;
    }
  }
  v126 = *(_DWORD *)(v84 + 4);
  *(_DWORD *)(v84 + 4) = v126 + 1;
  v127 = *(_QWORD **)(v84 + 32);
  if ( *v127 != v84 + 24 )
LABEL_468:
    __fastfail(3u);
  *v92 = v84 + 24;
  v92[1] = v127;
  *v127 = v92;
  *(_QWORD *)(v84 + 32) = v92;
  if ( !v126 && (_QWORD *)*v93 != v93 )
    KiWakeOtherQueueWaiters(v95, v84);
LABEL_284:
  _InterlockedAnd((volatile signed __int32 *)v84, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)v95, 0, 1, v224, v226);
  v90 = 0;
LABEL_285:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v205);
    v128 = v205;
    if ( !v205 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v206, 0LL, (signed __int64)&v205) == &v205 )
        goto LABEL_291;
      v128 = KxWaitForLockChainValid(&v205);
    }
    v205 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v128 + 8), 1uLL);
    goto LABEL_291;
  }
  KiReleaseQueuedSpinLockInstrumented(&v205, retaddr);
LABEL_291:
  v129 = KeGetCurrentPrcb();
  v130 = v129->SchedulerAssist;
  if ( v130 )
  {
    if ( v129->NestingLevel <= 1u )
    {
      v131 = v130[5] - 1;
      v130[5] = v131;
      if ( !v131 )
        KiRemoveSystemWorkPriorityKick(v129);
    }
  }
  v132 = v207;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v207 < 2u )
  {
    v133 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v133->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v133);
  }
  __writecr8(v132);
  if ( v90 )
  {
    v134 = *(_QWORD *)(v6 + 192);
LABEL_302:
    IopDropIrp((PIRP)v6, v134);
  }
}
