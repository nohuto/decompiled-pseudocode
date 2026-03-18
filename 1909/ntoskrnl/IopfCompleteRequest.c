/*
 * XREFs of IopfCompleteRequest @ 0x140066B60
 * Callers:
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x14029A368 (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x140963134 (IovCompleteRequest.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008A00 (KxWaitForSpinLockAndAcquire.c)
 *     IopDequeueIrpFromThread @ 0x14000A9D0 (IopDequeueIrpFromThread.c)
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     EtwpLevelKeywordEnabled @ 0x140036AB0 (EtwpLevelKeywordEnabled.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BAA0 (KiSetVpThreadSpinLockCount.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140043F70 (IopFreeIrp.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A320 (KiTryUnwaitThread.c)
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     KeInitializeApc @ 0x140082030 (KeInitializeApc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KeAreInterruptsEnabled @ 0x1400A3040 (KeAreInterruptsEnabled.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KeInsertQueueApc @ 0x1400E5200 (KeInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1400E5680 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400E5808 (KiInsertQueueApc.c)
 *     IopDropIrp @ 0x1400FEDA0 (IopDropIrp.c)
 *     IoFreeMdl @ 0x1400FEF60 (IoFreeMdl.c)
 *     IopFreeIrpExtension @ 0x14011A3FC (IopFreeIrpExtension.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140123120 (IopVerifyDeviceObjectOnStack.c)
 *     PoDeviceReleaseIrp @ 0x140175350 (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x140175448 (PoDeviceAcquireIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A75D8 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A76E8 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140330530 (EtwTiLogInsertQueueUserApc.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140963370 (IovFreeIrpPrivate.c)
 */

void __fastcall IopfCompleteRequest(ULONG_PTR BugCheckParameter1, unsigned __int8 a2)
{
  char v3; // cl
  unsigned __int8 v4; // r14
  __int64 v5; // r13
  char v6; // dl
  __int64 v7; // rdi
  char v8; // r15
  __int64 v9; // r8
  int v10; // r12d
  char *v11; // rdi
  __int64 v12; // rax
  char v13; // al
  char v14; // cl
  unsigned __int8 v15; // r14
  __int64 v16; // rsi
  int v17; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // r14
  int v25; // eax
  struct _KPRCB *v26; // rcx
  int v27; // edi
  struct _MDL *v28; // rsi
  ULONG_PTR v29; // r14
  __int64 v30; // rsi
  volatile signed __int32 *v31; // rdi
  unsigned __int8 v32; // r15
  struct _KPRCB *v33; // r14
  _DWORD *SchedulerAssist; // rdx
  char v35; // al
  ULONG_PTR v36; // rdi
  __int64 (__fastcall *v37)(int, int, int, int, __int64); // r9
  int v38; // r10d
  char v39; // dl
  __int64 v40; // rcx
  char v41; // al
  bool v42; // r8
  bool v43; // r9
  struct _KTHREAD *v44; // rcx
  __int64 v45; // rbx
  _KPROCESS *v46; // rax
  bool v47; // al
  char v48; // r13
  unsigned __int8 v49; // r14
  struct _KPRCB *v50; // rsi
  char v51; // di
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  unsigned __int64 v54; // rcx
  int v55; // edi
  __int64 v56; // rsi
  int v57; // ecx
  __int64 v58; // r9
  int v59; // eax
  _QWORD *v60; // r13
  _QWORD *v61; // r15
  _QWORD *v62; // rax
  __int64 i; // rax
  unsigned __int8 v64; // di
  __int64 *v65; // rax
  _QWORD *v66; // rcx
  __int64 v67; // rdi
  unsigned __int8 v68; // dl
  struct _KPRCB *v69; // rcx
  _DWORD *v70; // rdx
  _QWORD *v71; // rdx
  int v72; // r13d
  _QWORD *v73; // r14
  __int64 v74; // rcx
  struct _KPRCB *v75; // rsi
  _QWORD *v76; // r12
  char v77; // si
  __int64 v78; // rax
  struct _KPRCB *v79; // rcx
  _DWORD *v80; // rdx
  unsigned __int8 v81; // di
  ULONG_PTR v82; // rdx
  int v83; // edx
  _QWORD *v84; // rcx
  __int64 *v85; // r14
  __int64 v86; // rsi
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v88; // rax
  unsigned __int64 *v89; // rcx
  _QWORD *v90; // rdx
  char v91; // al
  __int64 v92; // r8
  struct _MDL *v93; // rcx
  IRP *v94; // rsi
  struct _MDL *Next; // rdi
  __int64 v96; // rdx
  KIRQL v97; // al
  __int64 v98; // rcx
  KIRQL v99; // si
  void *v100; // r10
  unsigned __int64 v101; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v103; // rax
  _QWORD *v104; // rdx
  _QWORD *v105; // rcx
  char v106; // al
  bool v107; // zf
  unsigned __int8 v108; // cl
  _KTHREAD *CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v111; // rdx
  __int64 v112; // r9
  _QWORD *v113; // r9
  __int64 v114; // rcx
  char v115; // al
  int v116; // r10d
  _QWORD *v117; // r8
  _QWORD *v118; // rax
  unsigned __int8 v119; // cl
  _KTHREAD *v120; // r9
  unsigned __int8 v121; // al
  __int64 v122; // rdx
  __int64 v123; // r9
  struct _KPRCB *v124; // r9
  __int64 v125; // rcx
  char v126; // al
  int v127; // r10d
  _QWORD *v128; // r8
  _QWORD *v129; // rax
  int v130; // eax
  unsigned __int8 v131; // al
  __int64 v132; // r9
  int v133; // eax
  struct _KPRCB *v134; // rcx
  int v135; // eax
  int v136; // eax
  struct _KPRCB *v137; // rcx
  struct _KPRCB *v138; // rcx
  int v139; // eax
  __int64 *v140; // rdx
  __int64 **v141; // rax
  __int64 v142; // [rsp+48h] [rbp-69h]
  struct _KPRCB *v143; // [rsp+48h] [rbp-69h]
  __int64 v144; // [rsp+50h] [rbp-61h]
  struct _KPRCB *v145; // [rsp+50h] [rbp-61h]
  __int64 v146; // [rsp+58h] [rbp-59h] BYREF
  _QWORD *v147; // [rsp+60h] [rbp-51h]
  struct _KPRCB *v148; // [rsp+68h] [rbp-49h]
  __int64 v149; // [rsp+70h] [rbp-41h] BYREF
  volatile signed __int64 *v150; // [rsp+78h] [rbp-39h]
  __int64 v151; // [rsp+80h] [rbp-31h]
  ULONG_PTR v152; // [rsp+88h] [rbp-29h] BYREF
  _KTHREAD *v153; // [rsp+90h] [rbp-21h]
  __int64 v154; // [rsp+98h] [rbp-19h]
  __int64 v155; // [rsp+A0h] [rbp-11h] BYREF
  int v156; // [rsp+A8h] [rbp-9h]
  __int64 v157; // [rsp+B0h] [rbp-1h] BYREF
  char v158[8]; // [rsp+B8h] [rbp+7h] BYREF
  char v159[8]; // [rsp+C0h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+110h] [rbp+5Fh]
  char v161; // [rsp+118h] [rbp+67h]
  int v162; // [rsp+118h] [rbp+67h]
  _KTHREAD *v163; // [rsp+118h] [rbp+67h]
  __int64 v164; // [rsp+118h] [rbp+67h]
  __int64 v165; // [rsp+118h] [rbp+67h]
  unsigned __int8 v166; // [rsp+120h] [rbp+6Fh]
  int v167; // [rsp+128h] [rbp+77h] BYREF
  int v168; // [rsp+130h] [rbp+7Fh] BYREF

  v166 = a2;
  v3 = *(_BYTE *)(BugCheckParameter1 + 66);
  v4 = a2;
  v5 = 0LL;
  v146 = 0LL;
  v6 = *(_BYTE *)(BugCheckParameter1 + 67);
  if ( v6 > (char)(v3 + 1) || *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x1232uLL, 0LL, 0LL);
  v7 = *(_QWORD *)(BugCheckParameter1 + 184);
  if ( v6 <= v3 && *(_BYTE *)v7 == 22 )
  {
    v8 = 1;
    PoDeviceReleaseIrp(BugCheckParameter1, *(unsigned __int8 *)(v7 + 1), *(_QWORD *)(v7 + 40));
    v6 = *(_BYTE *)(BugCheckParameter1 + 67);
    v9 = *(_QWORD *)(BugCheckParameter1 + 184);
    v3 = *(_BYTE *)(BugCheckParameter1 + 66);
  }
  else
  {
    v8 = 0;
    v9 = *(_QWORD *)(BugCheckParameter1 + 184);
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 211) & 2) != 0 )
    v10 = *(_DWORD *)(BugCheckParameter1 + 240);
  else
    v10 = 0;
  *(_BYTE *)(BugCheckParameter1 + 67) = v6 + 1;
  *(_QWORD *)(BugCheckParameter1 + 184) = v9 + 72;
  if ( v6 < (char)(v3 + 1) )
  {
    v11 = (char *)(v7 + 3);
    while ( 1 )
    {
      *(_BYTE *)(BugCheckParameter1 + 65) = *v11 & 1;
      v12 = *(int *)(BugCheckParameter1 + 48);
      if ( (int)v12 >= 0 )
        goto LABEL_11;
      if ( (_DWORD)v12 != v10 )
      {
        *v11 |= 2u;
        v10 = v12;
        *(_BYTE *)(BugCheckParameter1 + 211) |= 2u;
        *(_QWORD *)(BugCheckParameter1 + 240) = v12;
        LODWORD(v12) = *(_DWORD *)(BugCheckParameter1 + 48);
      }
      if ( (int)v12 >= 0 )
      {
LABEL_11:
        v13 = *v11;
        v14 = *v11;
        if ( (*v11 & 0x40) != 0 )
          goto LABEL_12;
      }
      else
      {
        v13 = *v11;
        v14 = *v11;
        if ( *v11 < 0 )
          goto LABEL_12;
      }
      if ( *(_BYTE *)(BugCheckParameter1 + 68) && (v13 & 0x20) != 0 )
      {
LABEL_12:
        v15 = *(v11 - 2);
        *v11 = v13 & 2;
        *((_WORD *)v11 - 1) = 0;
        *(_QWORD *)(v11 + 5) = 0LL;
        *(_QWORD *)(v11 + 13) = 0LL;
        *(_QWORD *)(v11 + 21) = 0LL;
        *(_QWORD *)(v11 + 45) = 0LL;
        if ( *(_BYTE *)(BugCheckParameter1 + 67) == *(_BYTE *)(BugCheckParameter1 + 66) + 1 )
          v16 = 0LL;
        else
          v16 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 184) + 40LL);
        if ( v8 )
          PoDeviceAcquireIrp(BugCheckParameter1, v15, v16);
        if ( (*(unsigned int (__fastcall **)(__int64, ULONG_PTR, _QWORD))(v11 + 53))(
               v16,
               BugCheckParameter1,
               *(_QWORD *)(v11 + 61)) == -1073741802 )
          return;
        if ( v8 )
          PoDeviceReleaseIrp(BugCheckParameter1, v15, v16);
        goto LABEL_29;
      }
      if ( *(_BYTE *)(BugCheckParameter1 + 65)
        && *(_BYTE *)(BugCheckParameter1 + 67) <= *(_BYTE *)(BugCheckParameter1 + 66) )
      {
        *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 184) + 3LL) |= 1u;
        v14 = *v11;
      }
      *((_WORD *)v11 - 1) = 0;
      *v11 = v14 & 2;
      *(_QWORD *)(v11 + 5) = 0LL;
      *(_QWORD *)(v11 + 13) = 0LL;
      *(_QWORD *)(v11 + 21) = 0LL;
      *(_QWORD *)(v11 + 45) = 0LL;
LABEL_29:
      ++*(_BYTE *)(BugCheckParameter1 + 67);
      v11 += 72;
      *(_QWORD *)(BugCheckParameter1 + 184) += 72LL;
      if ( *(char *)(BugCheckParameter1 + 67) > (char)(*(_BYTE *)(BugCheckParameter1 + 66) + 1) )
      {
        v4 = v166;
        break;
      }
    }
  }
  v17 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v17 & 8) != 0 )
  {
    v93 = *(struct _MDL **)(BugCheckParameter1 + 8);
    v94 = *(IRP **)(BugCheckParameter1 + 24);
    if ( v93 )
    {
      do
      {
        Next = v93->Next;
        IoFreeMdl(v93);
        v93 = Next;
      }
      while ( Next );
    }
    IoFreeIrp((PIRP)BugCheckParameter1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v94->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(v94, v4);
    return;
  }
  v18 = -2684354563LL;
  v19 = 4194817LL;
  if ( *(_DWORD *)(BugCheckParameter1 + 48) == 260 )
  {
    v101 = *(_QWORD *)(BugCheckParameter1 + 56);
    if ( v101 > 2 )
    {
      v18 = v101 - 2684354563u;
      if ( v101 - 2684354563u <= 0x16 && _bittest64(&v19, v18) )
      {
        v5 = *(_QWORD *)(BugCheckParameter1 + 160);
        v146 = v5;
        *(_QWORD *)(BugCheckParameter1 + 160) = 0LL;
      }
      else
      {
        *(_DWORD *)(BugCheckParameter1 + 48) = -1073741191;
      }
    }
  }
  if ( !v4 )
  {
    v20 = *(_QWORD *)(BugCheckParameter1 + 192);
    if ( v20 )
    {
      if ( (v17 & 0x400) == 0 )
      {
        v21 = *(_QWORD *)(v20 + 16);
        if ( (!v21 || (v23 = *(_QWORD *)(v21 + 8)) == 0)
          && ((*(_DWORD *)(v20 + 80) & 0x800) != 0
           || (v22 = *(_QWORD *)(*(_QWORD *)(v20 + 8) + 56LL)) == 0
           || (v23 = *(_QWORD *)(v22 + 8)) == 0) )
        {
          v23 = *(_QWORD *)(v20 + 8);
        }
        if ( *(_QWORD *)(v23 + 24) )
        {
          v62 = *(_QWORD **)(v20 + 208);
          if ( v62 )
          {
            if ( v62 != IopRevocationExtension )
            {
              v85 = (__int64 *)v62[2];
              if ( v85 )
              {
                v24 = *v85;
                if ( v24 )
                {
                  if ( (unsigned __int8)IopVerifyDeviceObjectOnStack(v23, v24, 0LL) )
                  {
LABEL_42:
                    v25 = *(_DWORD *)(v24 + 72);
                    if ( v25 == 8 || v25 == 20 )
                    {
                      v4 = 1;
                      v166 = 1;
                    }
                    else
                    {
                      v4 = v166;
                    }
                    goto LABEL_45;
                  }
                }
              }
            }
          }
          for ( i = *(_QWORD *)(v23 + 24); i; i = *(_QWORD *)(i + 24) )
            v23 = i;
        }
        v24 = v23;
        goto LABEL_42;
      }
    }
  }
LABEL_45:
  v26 = *(struct _KPRCB **)(BugCheckParameter1 + 160);
  if ( v26 )
  {
    ExFreePoolWithTag(v26, 0);
    *(_QWORD *)(BugCheckParameter1 + 160) = 0LL;
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) != 0 )
  {
    LOBYTE(v9) = 1;
    IopFreeIrpExtension(BugCheckParameter1, 0xFFFFFFFFLL, v9);
  }
  v27 = *(_DWORD *)(BugCheckParameter1 + 16);
  if ( (v27 & 0x402) != 0 )
  {
    if ( (v27 & 0x440) == 0 )
    {
      IopDequeueIrpFromThread((_QWORD *)BugCheckParameter1, (volatile signed __int32 *)v18);
      KeInitializeApc(
        BugCheckParameter1 + 120,
        *(_QWORD *)(BugCheckParameter1 + 152),
        *(char *)(BugCheckParameter1 + 70),
        (unsigned int)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(BugCheckParameter1 + 120, 0LL, 0LL, v4);
      return;
    }
    *(_OWORD *)*(_QWORD *)(BugCheckParameter1 + 72) = *(_OWORD *)(BugCheckParameter1 + 48);
    v55 = v27 & 0x42;
    if ( v55 )
    {
      v86 = *(_QWORD *)(BugCheckParameter1 + 152);
      CurrentIrql = 0;
      if ( v86 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        KxAcquireSpinLock((PKSPIN_LOCK)(v86 + 1872));
      }
      v18 = *(_QWORD *)(BugCheckParameter1 + 32);
      v88 = (_QWORD *)(BugCheckParameter1 + 32);
      v89 = *(unsigned __int64 **)(BugCheckParameter1 + 40);
      if ( *(_QWORD *)(v18 + 8) != BugCheckParameter1 + 32 || (_QWORD *)*v89 != v88 )
        goto LABEL_179;
      *v89 = v18;
      *(_QWORD *)(v18 + 8) = v89;
      *(_QWORD *)(BugCheckParameter1 + 40) = BugCheckParameter1 + 32;
      *v88 = v88;
      if ( v86 )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)(v86 + 1872));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(CurrentIrql);
      }
    }
    v56 = *(_QWORD *)(BugCheckParameter1 + 80);
    if ( (*(_BYTE *)v56 & 0x7F) != 0 )
    {
      v57 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v56 + 4) == 1 )
      {
LABEL_109:
        if ( v55 )
        {
          if ( IopDispatchFreeIrp )
            IovFreeIrpPrivate(BugCheckParameter1);
          else
            IopFreeIrp(BugCheckParameter1, v18, v9);
        }
        return;
      }
      v57 = 1;
    }
    v162 = v57;
    v58 = KeGetCurrentIrql();
    v154 = v58;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v58 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v167 = 0;
    v143 = KeGetCurrentPrcb();
    if ( _interlockedbittestandset((volatile signed __int32 *)v56, 7u) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v167);
        while ( (*(_DWORD *)v56 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v56, 7u) );
      v57 = v162;
    }
    v59 = *(_DWORD *)(v56 + 4);
    *(_DWORD *)(v56 + 4) = 1;
    if ( v59 )
    {
LABEL_108:
      _InterlockedAnd((volatile signed __int32 *)v56, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v143, 0, 1, v166, v154);
      goto LABEL_109;
    }
    v60 = *(_QWORD **)(v56 + 8);
    v61 = (_QWORD *)(v56 + 8);
    if ( !v57 )
    {
      if ( v60 == v61 )
        goto LABEL_108;
      while ( 1 )
      {
        v103 = *v60;
        v104 = v60;
        v147 = v60;
        v60 = (_QWORD *)v103;
        v105 = (_QWORD *)v147[1];
        if ( *(_QWORD **)(v103 + 8) != v147 || (_QWORD *)*v105 != v104 )
          goto LABEL_179;
        *v105 = v103;
        *(_QWORD *)(v103 + 8) = v105;
        v106 = *((_BYTE *)v104 + 16);
        if ( v106 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(v143, v104, *((unsigned __int16 *)v104 + 9), 0LL) )
          {
            v107 = (*(_DWORD *)(v56 + 4))-- == 1;
            if ( v107 )
              goto LABEL_108;
          }
        }
        else
        {
          if ( v106 == 2 )
          {
            *((_BYTE *)v104 + 17) = 5;
            v164 = v104[3];
            *v104 = 0LL;
            v108 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v108 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v148 = KeGetCurrentPrcb();
            CurrentThread = v148->CurrentThread;
            v153 = CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(CurrentThread);
              EtwTraceEnqueueWork(v112, v111, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v164);
            v113 = (_QWORD *)(v164 + 8);
            v114 = v164;
            if ( (_QWORD *)*v113 == v113
              || *(_DWORD *)(v164 + 40) >= *(_DWORD *)(v164 + 44)
              || v153->Queue == (_DISPATCHER_HEADER *volatile)v164 && v153->WaitReason == 15 )
            {
LABEL_245:
              v116 = *(_DWORD *)(v114 + 4);
              *(_DWORD *)(v114 + 4) = v116 + 1;
              v117 = *(_QWORD **)(v114 + 32);
              if ( *v117 != v114 + 24 )
                goto LABEL_179;
              v118 = v147;
              *v147 = v114 + 24;
              v118[1] = v117;
              *v117 = v118;
              *(_QWORD *)(v114 + 32) = v118;
              if ( !v116 && (_QWORD *)*v113 != v113 )
              {
                KiWakeOtherQueueWaiters((__int64)v148, v114);
                v114 = v164;
              }
            }
            else
            {
              v115 = KiWakeQueueWaiter((__int64)v148, (_QWORD *)v164, (__int64)v147);
              v114 = v164;
              if ( !v115 )
              {
                v113 = (_QWORD *)(v164 + 8);
                goto LABEL_245;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v114, 0xFFFFFF7F);
            v107 = (*(_DWORD *)(v56 + 4))-- == 1;
            if ( v107 )
              goto LABEL_108;
            goto LABEL_252;
          }
          KiTryUnwaitThread(v143, v104, 256LL, 0LL);
        }
LABEL_252:
        if ( v60 == v61 )
          goto LABEL_108;
      }
    }
    if ( v60 == v61 )
    {
LABEL_178:
      *(_QWORD *)(v56 + 16) = v56 + 8;
      *v61 = v61;
      goto LABEL_108;
    }
    while ( 1 )
    {
      v90 = v60;
      v60 = (_QWORD *)*v60;
      v147 = v90;
      v91 = *((_BYTE *)v90 + 16);
      if ( v91 == 1 )
      {
        v92 = *((unsigned __int16 *)v90 + 9);
      }
      else
      {
        if ( v91 == 2 )
        {
          *((_BYTE *)v90 + 17) = 5;
          v165 = v90[3];
          v148 = (struct _KPRCB *)(v165 + 8);
          *v90 = 0LL;
          v119 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v119 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v145 = KeGetCurrentPrcb();
          v120 = v145->CurrentThread;
          v153 = v120;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v121 = KeIsThreadRunning(v120);
            EtwTraceEnqueueWork(v123, v122, v121);
          }
          KiAcquireKobjectLockSafe(v165);
          v124 = v148;
          v125 = v165;
          if ( *(struct _KPRCB **)&v124->MxCsr == v124
            || *(_DWORD *)(v165 + 40) >= *(_DWORD *)(v165 + 44)
            || v153->Queue == (_DISPATCHER_HEADER *volatile)v165 && v153->WaitReason == 15 )
          {
LABEL_267:
            v127 = *(_DWORD *)(v125 + 4);
            *(_DWORD *)(v125 + 4) = v127 + 1;
            v128 = *(_QWORD **)(v125 + 32);
            if ( *v128 != v125 + 24 )
              goto LABEL_179;
            v129 = v147;
            *v147 = v125 + 24;
            v129[1] = v128;
            *v128 = v129;
            *(_QWORD *)(v125 + 32) = v129;
            if ( !v127 && *(struct _KPRCB **)&v124->MxCsr != v124 )
            {
              KiWakeOtherQueueWaiters((__int64)v145, v125);
              v125 = v165;
            }
          }
          else
          {
            v126 = KiWakeQueueWaiter((__int64)v145, (_QWORD *)v165, (__int64)v147);
            v125 = v165;
            if ( !v126 )
            {
              v124 = v148;
              goto LABEL_267;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v125, 0xFFFFFF7F);
          goto LABEL_185;
        }
        v92 = 256LL;
      }
      KiTryUnwaitThread(v143, v90, v92, 0LL);
LABEL_185:
      if ( v60 == v61 )
        goto LABEL_178;
    }
  }
  v28 = *(struct _MDL **)(BugCheckParameter1 + 8);
  if ( v28 )
  {
    do
    {
      MmUnlockPages(v28);
      v28 = v28->Next;
    }
    while ( v28 );
    v27 = *(_DWORD *)(BugCheckParameter1 + 16);
  }
  if ( (v27 & 0x2000) != 0 )
  {
    ObfDereferenceObject(*(PVOID *)(BugCheckParameter1 + 152));
    v27 = *(_DWORD *)(BugCheckParameter1 + 16);
  }
  if ( (v27 & 0x800) != 0 && !*(_BYTE *)(BugCheckParameter1 + 65) )
  {
    if ( *(_DWORD *)(BugCheckParameter1 + 48) == 260 )
    {
      v54 = *(_QWORD *)(BugCheckParameter1 + 56) - 2684354563LL;
      if ( v54 <= 0x16 )
      {
        if ( _bittest64(&v19, v54) )
          *(_QWORD *)(BugCheckParameter1 + 160) = v5;
      }
    }
    return;
  }
  v29 = *(_QWORD *)(BugCheckParameter1 + 192);
  v30 = *(_QWORD *)(BugCheckParameter1 + 152);
  v152 = v29;
  if ( (v27 & 0x2000) == 0
    || (v155 = 0LL, !*(_BYTE *)(BugCheckParameter1 + 65))
    && ((v26 = (struct _KPRCB *)*(unsigned int *)(BugCheckParameter1 + 48),
         (*(_DWORD *)(BugCheckParameter1 + 48) & 0xC0000000) == 0xC0000000)
     || (*(_DWORD *)(v29 + 80) & 0x2000000) != 0 && (int)v26 >= 0) )
  {
    if ( v30 )
    {
      v31 = (volatile signed __int32 *)(v30 + 1872);
      v32 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v30 + 1872);
      }
      else
      {
        v33 = KeGetCurrentPrcb();
        SchedulerAssist = v33->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v135 = SchedulerAssist[5];
            SchedulerAssist[5] = v135 + 1;
            if ( v135 == -1 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        if ( _interlockedbittestandset64(v31, 0LL) )
        {
          KiSetVpThreadSpinLockCount((__int64)v33, 0);
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v30 + 1872), v96);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v30 + 1872, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v31, 0LL);
      v26 = KeGetCurrentPrcb();
      v18 = (unsigned __int64)v26->SchedulerAssist;
      if ( v18 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v136 = *(_DWORD *)(v18 + 20) - 1;
          *(_DWORD *)(v18 + 20) = v136;
          if ( !v136 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
      {
        v137 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v137->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v137);
      }
      __writecr8(v32);
      v5 = v146;
      v29 = v152;
    }
    if ( !*(_BYTE *)(BugCheckParameter1 + 68) )
    {
      if ( (struct _KTHREAD *)v30 != KeGetCurrentThread()
        || KeGetCurrentThread()->SpecialApcDisable
        || !(unsigned __int8)KeAreInterruptsEnabled(v26, v18)
        || KeGetCurrentIrql()
        || KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        v35 = *(_BYTE *)(BugCheckParameter1 + 70);
        v36 = BugCheckParameter1 + 120;
        *(_BYTE *)(BugCheckParameter1 + 120) = 18;
        *(_BYTE *)(BugCheckParameter1 + 122) = 88;
        if ( v35 == 2 )
          v35 = *(_BYTE *)(v30 + 586);
        *(_BYTE *)(BugCheckParameter1 + 200) = v35;
        v37 = (__int64 (__fastcall *)(int, int, int, int, __int64))IopCompleteRequest;
        v38 = 0;
        *(_QWORD *)(BugCheckParameter1 + 128) = v30;
        *(_QWORD *)(BugCheckParameter1 + 152) = IopCompleteRequest;
        *(_QWORD *)(BugCheckParameter1 + 160) = IopAbortRequest;
        *(_QWORD *)(BugCheckParameter1 + 168) = 0LL;
        *(_WORD *)(BugCheckParameter1 + 201) = 0;
        *(_QWORD *)(BugCheckParameter1 + 176) = 0LL;
        v39 = EtwThreatIntProvRegHandle;
        if ( EtwThreatIntProvRegHandle )
        {
          v40 = *(_QWORD *)(EtwThreatIntProvRegHandle + 32);
          v39 = *(_DWORD *)(v40 + 96)
             && (*(_DWORD *)(v40 + 112) & 0x3000LL) != 0
             && (*(_QWORD *)(v40 + 120) & 0x3000LL) == *(_QWORD *)(v40 + 120)
             || *(_BYTE *)(EtwThreatIntProvRegHandle + 101)
             && EtwpLevelKeywordEnabled(*(_QWORD *)(EtwThreatIntProvRegHandle + 40) + 96LL, 0, 12288LL);
          v41 = 0;
          LODWORD(v144) = v38;
          LODWORD(v142) = v38;
        }
        else
        {
          v41 = *(_BYTE *)(BugCheckParameter1 + 201);
          v142 = *(_QWORD *)(BugCheckParameter1 + 176);
          v144 = *(_QWORD *)(BugCheckParameter1 + 168);
        }
        v42 = v41 != 0;
        v161 = v41 != 0;
        v43 = v37 == KeSpecialUserApcKernelRoutine && !v41;
        v44 = KeGetCurrentThread();
        v45 = v30;
        v46 = *(_KPROCESS **)(v30 + 544);
        if ( v42 )
          v47 = v44->Process != v46;
        else
          v47 = v44->ApcState.Process != v46;
        if ( v39 && v47 && (v42 || v43) )
        {
          v48 = 1;
          ObfReferenceObjectWithTag((PVOID)v30, 0x5149654Bu);
          v38 = 0;
        }
        else
        {
          v48 = 0;
        }
        v49 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v50 = KeGetCurrentPrcb();
        v168 = v38;
        while ( 1 )
        {
          KiSetVpThreadSpinLockCount((__int64)v50, 1);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v45 + 64), 0LL) )
            break;
          KiSetVpThreadSpinLockCount((__int64)v50, 0);
          do
            KeYieldProcessorEx(&v168);
          while ( *(_QWORD *)(v45 + 64) );
        }
        if ( (*(_DWORD *)(v45 + 116) & 0x4000) == 0 || *(_BYTE *)(v36 + 82) )
        {
          v51 = 0;
        }
        else
        {
          *(_QWORD *)(v36 + 64) = v152;
          *(_QWORD *)(v36 + 72) = v146;
          *(_BYTE *)(v36 + 82) = 1;
          KiInsertQueueApc(v36);
          KiSignalThreadForApc(v50, v36, v49);
          v51 = 1;
        }
        *(_QWORD *)(v45 + 64) = 0LL;
        v52 = KeGetCurrentPrcb();
        v53 = v52->SchedulerAssist;
        if ( v53 )
        {
          if ( v52->NestingLevel <= 1u )
          {
            v139 = v53[5] - 1;
            v53[5] = v139;
            if ( !v139 )
              KiRemoveSystemWorkPriorityKick(v52);
          }
        }
        KiExitDispatcher((_DWORD)v50, 0, 1, v166, v49);
        if ( v48 )
        {
          if ( v51 )
            EtwTiLogInsertQueueUserApc(
              (unsigned __int8)KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10],
              v45,
              v144,
              v142,
              v152,
              v146,
              v161);
          ObfDereferenceObjectWithTag((PVOID)v45, 0x5149654Bu);
        }
      }
      else
      {
        v157 = 1LL;
        v64 = KeGetCurrentIrql();
        __writecr8(1uLL);
        IopCompleteRequest(BugCheckParameter1 + 120, (__int64)v159, &v157, &v152, &v146);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v64 < 2u )
        {
          v138 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v138->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v138);
        }
        __writecr8(v64);
      }
      return;
    }
    v97 = KeAcquireQueuedSpinLock(0xBuLL);
    v98 = IopDeadIrps;
    v99 = v97;
    v100 = *(void **)(BugCheckParameter1 + 152);
    if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
    {
LABEL_199:
      if ( v100 )
      {
        KeInitializeApc(
          BugCheckParameter1 + 120,
          (_DWORD)v100,
          *(char *)(BugCheckParameter1 + 70),
          (unsigned int)IopCompleteRequest,
          (__int64)IopAbortRequest,
          0LL,
          0,
          0LL);
        KeInsertQueueApc(BugCheckParameter1 + 120, v29, v5, v166);
        KeReleaseQueuedSpinLock(0xBuLL, v99);
        return;
      }
    }
    else
    {
      while ( 1 )
      {
        v140 = *(__int64 **)v98;
        if ( v98 - 32 == BugCheckParameter1 )
          break;
        v98 = *(_QWORD *)v98;
        if ( v140 == &IopDeadIrps )
          goto LABEL_199;
      }
      v141 = *(__int64 ***)(v98 + 8);
      if ( v140[1] != v98 || *v141 != (__int64 *)v98 )
        goto LABEL_179;
      *v141 = v140;
      v140[1] = (__int64)v141;
      *(_QWORD *)(v98 - 32 + 40) = v98;
      *(_QWORD *)v98 = v98;
      ObfDereferenceObject(v100);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v99);
    v82 = v29;
    goto LABEL_151;
  }
  v65 = *(__int64 **)(v29 + 176);
  v66 = (_QWORD *)(BugCheckParameter1 + 120);
  if ( !v65 )
  {
    IopCompleteRequest((__int64)v66, (__int64)v158, &v155, (ULONG_PTR *)(BugCheckParameter1 + 192), &v155);
    return;
  }
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  v67 = *v65;
  *v66 = v65[1];
  *(_DWORD *)(BugCheckParameter1 + 184) = 0;
  v149 = 0LL;
  v150 = (volatile signed __int64 *)(v67 + 64);
  v68 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v68 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LOBYTE(v151) = v68;
  v69 = KeGetCurrentPrcb();
  v70 = v69->SchedulerAssist;
  if ( v70 )
  {
    if ( v69->NestingLevel <= 1u )
    {
      v130 = v70[5];
      v70[5] = v130 + 1;
      if ( v130 == -1 )
        KiRemoveSystemWorkPriorityKick(v69);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v149, v67 + 64);
  }
  else
  {
    v71 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v67 + 64), (__int64)&v149);
    if ( v71 )
      KxWaitForLockOwnerShip((__int64)&v149, v71);
  }
  *(_DWORD *)(BugCheckParameter1 + 16) |= 0x10000u;
  if ( !*(_BYTE *)(v67 + 72) )
  {
    v72 = (char)v166;
    v73 = (_QWORD *)(v67 + 8);
    v74 = KeGetCurrentIrql();
    v154 = v74;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v74 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v75 = KeGetCurrentPrcb();
    v163 = v75->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v131 = KeIsThreadRunning(v75->CurrentThread);
      v76 = (_QWORD *)(BugCheckParameter1 + 168);
      EtwTraceEnqueueWork(v132, BugCheckParameter1 + 168, v131);
    }
    else
    {
      v76 = (_QWORD *)(BugCheckParameter1 + 168);
    }
    if ( v166 && (*(_BYTE *)(v67 + 1) & 2) != 0 )
      v72 = 0;
    KiAcquireKobjectLockSafe(v67);
    v156 = *(_DWORD *)(v67 + 4);
    if ( (_QWORD *)*v73 != v73
      && *(_DWORD *)(v67 + 40) < *(_DWORD *)(v67 + 44)
      && (v163->Queue != (_DISPATCHER_HEADER *volatile)v67 || v163->WaitReason != 15)
      && KiWakeQueueWaiter((__int64)v75, (_QWORD *)v67, (__int64)v76) )
    {
      goto LABEL_143;
    }
    v83 = *(_DWORD *)(v67 + 4);
    *(_DWORD *)(v67 + 4) = v83 + 1;
    v84 = *(_QWORD **)(v67 + 32);
    if ( *v84 == v67 + 24 )
    {
      *v76 = v67 + 24;
      v76[1] = v84;
      *v84 = v76;
      *(_QWORD *)(v67 + 32) = v76;
      if ( !v83 && (_QWORD *)*v73 != v73 )
        KiWakeOtherQueueWaiters((__int64)v75, v67);
LABEL_143:
      _InterlockedAnd((volatile signed __int32 *)v67, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v75, 0, 1, v72, v154);
      v77 = 0;
      goto LABEL_144;
    }
LABEL_179:
    __fastfail(3u);
  }
  v77 = 1;
LABEL_144:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v149, retaddr);
    goto LABEL_147;
  }
  _m_prefetchw(&v149);
  v78 = v149;
  if ( v149 )
    goto LABEL_188;
  if ( (__int64 *)_InterlockedCompareExchange64(v150, 0LL, (signed __int64)&v149) != &v149 )
  {
    v78 = KxWaitForLockChainValid(&v149);
LABEL_188:
    v149 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v78 + 8), 1uLL);
  }
LABEL_147:
  v79 = KeGetCurrentPrcb();
  v80 = v79->SchedulerAssist;
  if ( v80 )
  {
    if ( v79->NestingLevel <= 1u )
    {
      v133 = v80[5] - 1;
      v80[5] = v133;
      if ( !v133 )
        KiRemoveSystemWorkPriorityKick(v79);
    }
  }
  v81 = v151;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v151 < 2u )
  {
    v134 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v134->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v134);
  }
  __writecr8(v81);
  if ( v77 )
  {
    v82 = *(_QWORD *)(BugCheckParameter1 + 192);
LABEL_151:
    IopDropIrp((PIRP)BugCheckParameter1, v82);
  }
}
