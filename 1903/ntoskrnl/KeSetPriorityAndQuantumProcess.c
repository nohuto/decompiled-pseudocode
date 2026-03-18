/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x1400E40B8
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x1400E4070 (PspSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012B6C (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KeFlushProcessWriteBuffers @ 0x1400B8DE8 (KeFlushProcessWriteBuffers.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400E45FC (KiSetBasePriorityAndClearDecrement.c)
 *     KeSetQuantumProcess @ 0x1400E4758 (KeSetQuantumProcess.c)
 *     KiApplyForegroundBoostThread @ 0x1400E49D0 (KiApplyForegroundBoostThread.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14010D0E0 (KiPriQueueThreadPriorityChanged.c)
 *     KiSetThreadState @ 0x14013AC0C (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     EtwTracePriority @ 0x14032E128 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetPriorityAndQuantumProcess(__int64 a1, __int64 a2, char a3, unsigned int a4, int a5)
{
  __int64 result; // rax
  unsigned int v6; // esi
  int v8; // r14d
  int v9; // r13d
  char v10; // r12
  __int64 CurrentIrql; // rcx
  struct _KPRCB *CurrentPrcb; // r15
  char v13; // si
  _QWORD *v14; // rax
  unsigned int v15; // r12d
  __int64 v16; // rdi
  struct _KPRCB *v17; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v19; // r14d
  int v20; // eax
  char v21; // cl
  int v22; // eax
  __int64 updated; // rcx
  __int64 v24; // rdx
  bool v25; // zf
  int v26; // eax
  unsigned __int8 v27; // r13
  char v28; // si
  char v29; // al
  _BYTE *v30; // rcx
  unsigned __int8 v31; // r14
  __int64 v32; // rdi
  _DWORD *v33; // rcx
  struct _KPRCB *v34; // rsi
  _DWORD *v35; // rcx
  _DWORD *v36; // rcx
  int v37; // eax
  _KTHREAD *NextThread; // rsi
  __int64 v39; // r8
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rdi
  struct _KPRCB *v43; // rsi
  _DWORD *v44; // rcx
  int v45; // eax
  _DWORD *v46; // rcx
  int v47; // eax
  _DWORD *v48; // rcx
  int v49; // eax
  int v50; // ecx
  int v51; // esi
  char v52; // al
  int v53; // r14d
  bool v54; // sf
  __int64 v55; // rcx
  __int64 v56; // rdx
  _BYTE *v57; // rcx
  int v58; // eax
  int v59; // eax
  struct _KPRCB *v60; // rcx
  struct _KPRCB *v61; // rcx
  int v62; // [rsp+30h] [rbp-41h]
  int v63; // [rsp+34h] [rbp-3Dh]
  int v64; // [rsp+38h] [rbp-39h]
  _QWORD *v65; // [rsp+40h] [rbp-31h]
  int v66; // [rsp+48h] [rbp-29h]
  __int64 v67; // [rsp+4Ch] [rbp-25h] BYREF
  int v68; // [rsp+54h] [rbp-1Dh]
  int v69; // [rsp+58h] [rbp-19h] BYREF
  int v70; // [rsp+5Ch] [rbp-15h] BYREF
  int v71; // [rsp+60h] [rbp-11h] BYREF
  _KTHREAD *CurrentThread; // [rsp+68h] [rbp-9h]
  _QWORD *v73; // [rsp+70h] [rbp-1h]
  PEX_SPIN_LOCK SpinLock; // [rsp+78h] [rbp+7h]
  __int64 v75; // [rsp+80h] [rbp+Fh]
  int v76; // [rsp+D0h] [rbp+5Fh] BYREF
  char v77; // [rsp+D8h] [rbp+67h]
  char v78; // [rsp+E0h] [rbp+6Fh]
  unsigned int v79; // [rsp+E8h] [rbp+77h]

  v79 = a4;
  v78 = a3;
  result = (unsigned int)*(char *)(a1 + 448);
  v6 = a2;
  if ( (_DWORD)result == (_DWORD)a2 && (a4 == a5 || (int)a2 >= 16) )
  {
    if ( a3 )
    {
      LOBYTE(a2) = a3;
      KeSetQuantumProcess(a1, a2);
    }
    return v6;
  }
  else if ( (_UNKNOWN *)a1 != &KiInitialProcess )
  {
    v8 = 1;
    if ( (_DWORD)a2 )
      v8 = a2;
    v9 = 0;
    v62 = 0;
    v10 = 0;
    v63 = 0;
    v68 = 0;
    v77 = 0;
    v67 = WORD2(PerfGlobalGroupMask) & 0x2000;
    CurrentIrql = KeGetCurrentIrql();
    v75 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    v13 = v78;
    if ( v78 )
      *(_BYTE *)(a1 + 449) = v78;
    v64 = *(char *)(a1 + 448);
    v66 = v8 - v64;
    *(_BYTE *)(a1 + 448) = v8;
    KeFlushProcessWriteBuffers(1);
    v14 = *(_QWORD **)(a1 + 48);
    v73 = (_QWORD *)(a1 + 48);
    v65 = v14;
    if ( v14 != (_QWORD *)(a1 + 48) )
    {
      if ( v8 < 16 )
      {
        v15 = v79;
        while ( 1 )
        {
          v16 = (__int64)(v14 - 95);
          if ( v13 )
            *(_BYTE *)(v16 + 651) = v13;
          v17 = KeGetCurrentPrcb();
          v70 = 0;
          while ( 1 )
          {
            SchedulerAssist = v17->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( v17->NestingLevel <= 1u )
              {
                v58 = SchedulerAssist[5];
                SchedulerAssist[5] = v58 + 1;
                if ( v58 == -1 )
                  KiRemoveSystemWorkPriorityKick(v17);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 64), 0LL) )
              break;
            v33 = v17->SchedulerAssist;
            if ( v33 )
            {
              if ( v17->NestingLevel <= 1u )
              {
                v59 = v33[5] - 1;
                v33[5] = v59;
                if ( !v59 )
                  KiRemoveSystemWorkPriorityKick(v17);
              }
            }
            do
              KeYieldProcessorEx(&v70);
            while ( *(_QWORD *)(v16 + 64) );
          }
          v19 = *(char *)(v16 + 563);
          if ( v19 <= v64 || v19 < 16 )
            break;
          KiReleaseThreadLockSafe(v16);
LABEL_47:
          v13 = v78;
          v14 = (_QWORD *)*v65;
          v65 = v14;
          if ( v14 == v73 )
            goto LABEL_48;
        }
        v20 = v19 + v66;
        if ( v19 + v66 >= 16 )
        {
          v76 = 15;
        }
        else
        {
          if ( v20 <= 0 )
            v20 = 1;
          v76 = v20;
        }
        v21 = *(_BYTE *)(v16 + 645);
        if ( !v21 )
          goto LABEL_28;
        if ( v64 < 16 )
        {
          KiReleaseThreadLockSafe(v16);
          v28 = 0;
LABEL_46:
          if ( (_DWORD)v67 )
          {
            if ( v77 )
            {
              v77 = 0;
              EtwTracePriority(v16, 1328, v63, v62, 0LL);
            }
            if ( v28 && v19 != v76 )
              EtwTracePriority(v16, 1329, v19, v76, (__int64)&v76);
          }
          goto LABEL_47;
        }
        if ( v21 > 0 )
        {
          v76 = 15;
        }
        else
        {
LABEL_28:
          v22 = v76;
          if ( v21 < 0 )
            v22 = 1;
          v76 = v22;
        }
        if ( (_KTHREAD *)v16 != CurrentThread || CurrentPrcb->NestingLevel )
        {
          updated = *(_QWORD *)(v16 + 72);
        }
        else
        {
          _disable();
          updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, v16, 0LL);
          _enable();
        }
        v24 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v16 + 651);
        if ( (*(_DWORD *)(v16 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v16 + 120), 5u);
        v25 = a5 == 0;
        *(_QWORD *)(v16 + 32) = v24;
        if ( v25 || (v28 = 0, v76 != v19) )
        {
          v26 = KiSetBasePriorityAndClearDecrement(v16, &v76, v15);
          v27 = v26;
          v62 = v26;
          v28 = 1;
        }
        else
        {
          v27 = v62;
        }
        v29 = 0;
        if ( a5 )
          v29 = KiApplyForegroundBoostThread(v16, (char *)&v67 + 4);
        if ( !v28 )
          goto LABEL_45;
        if ( !v29 )
        {
          v63 = *(char *)(v16 + 195);
          if ( KiSetPriorityThread((_BYTE *)v16, (__int64 *)((char *)&v67 + 4), v27) )
          {
            v62 = *(char *)(v16 + 195);
            v77 = 1;
          }
        }
        v30 = *(_BYTE **)(v16 + 232);
        if ( v30 && (*v30 & 0x7F) == 0x15 )
          KiPriQueueThreadPriorityChanged(v30, v16);
        else
LABEL_45:
          KiReleaseThreadLockSafe(v16);
        goto LABEL_46;
      }
      while ( 1 )
      {
        v42 = (__int64)(v14 - 95);
        if ( v13 )
          *(_BYTE *)(v42 + 651) = v13;
        v43 = KeGetCurrentPrcb();
        v69 = 0;
        v44 = v43->SchedulerAssist;
        if ( v44 )
        {
          if ( v43->NestingLevel <= 1u )
          {
            v45 = v44[5];
            v44[5] = v45 + 1;
            if ( v45 == -1 )
LABEL_96:
              KiRemoveSystemWorkPriorityKick(v43);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 64), 0LL) )
        {
          v46 = v43->SchedulerAssist;
          if ( v46 )
          {
            if ( v43->NestingLevel <= 1u )
            {
              v47 = v46[5] - 1;
              v46[5] = v47;
              if ( !v47 )
                KiRemoveSystemWorkPriorityKick(v43);
            }
          }
          do
            KeYieldProcessorEx(&v69);
          while ( *(_QWORD *)(v42 + 64) );
          v48 = v43->SchedulerAssist;
          if ( v48 )
          {
            if ( v43->NestingLevel <= 1u )
            {
              v49 = v48[5];
              v48[5] = v49 + 1;
              if ( v49 == -1 )
                goto LABEL_96;
            }
          }
        }
        v50 = *(char *)(v42 + 563);
        v51 = v50 + v66;
        if ( v50 + v66 >= 16 )
        {
          if ( v51 > 31 )
            v51 = 31;
          v76 = v51;
        }
        else
        {
          v51 = 16;
          v76 = 16;
        }
        v52 = *(_BYTE *)(v42 + 645);
        v53 = v62;
        v54 = v52 < 0;
        if ( !v52 )
          goto LABEL_117;
        if ( v64 < 16 )
          break;
        KiReleaseThreadLockSafe(v42);
LABEL_133:
        if ( (_DWORD)v67 )
        {
          if ( v77 )
          {
            v77 = 0;
            EtwTracePriority(v42, 1328, v63, v53, 0LL);
          }
          if ( v10 )
          {
            v10 = 0;
            if ( v9 != v51 )
              EtwTracePriority(v42, 1329, v9, v51, (__int64)&v76);
          }
        }
        v13 = v78;
        v14 = (_QWORD *)*v65;
        v65 = v14;
        if ( v14 == v73 )
          goto LABEL_48;
      }
      v54 = v52 < 0;
      if ( v52 <= 0 )
      {
LABEL_117:
        if ( v54 )
          v51 = 16;
        v76 = v51;
      }
      else
      {
        v76 = 31;
      }
      v9 = v50;
      if ( (_KTHREAD *)v42 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        v55 = *(_QWORD *)(v42 + 72);
      }
      else
      {
        _disable();
        v55 = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, v42, 0LL);
        _enable();
      }
      v56 = v55 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v42 + 651);
      if ( (*(_DWORD *)(v42 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v42 + 120), 5u);
      *(_QWORD *)(v42 + 32) = v56;
      v62 = KiSetBasePriorityAndClearDecrement(v42, &v76, 0LL);
      v63 = *(char *)(v42 + 195);
      v10 = 1;
      if ( KiSetPriorityThread((_BYTE *)v42, (__int64 *)((char *)&v67 + 4), v62) )
      {
        v62 = *(char *)(v42 + 195);
        v77 = 1;
      }
      v57 = *(_BYTE **)(v42 + 232);
      if ( v57 && (*v57 & 0x7F) == 0x15 )
        KiPriQueueThreadPriorityChanged(v57, v42);
      else
        KiReleaseThreadLockSafe(v42);
      v53 = v62;
      v51 = v76;
      goto LABEL_133;
    }
LABEL_48:
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    KiReadyDeferredReadyList((__int64)CurrentPrcb, (_QWORD **)((char *)&v67 + 4));
    v31 = v75;
    if ( (unsigned __int8)v75 >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
      return (unsigned int)v64;
    }
    v32 = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v34 = KeGetCurrentPrcb();
      v71 = 0;
      while ( 1 )
      {
        v35 = v34->SchedulerAssist;
        if ( v35 )
        {
          if ( v34->NestingLevel <= 1u )
          {
            v37 = v35[5];
            v35[5] = v37 + 1;
            if ( v37 == -1 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v36 = v34->SchedulerAssist;
        if ( v36 )
        {
          if ( v34->NestingLevel <= 1u )
          {
            v41 = v36[5] - 1;
            v36[5] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
        do
          KeYieldProcessorEx(&v71);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v32, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      KiSetThreadState(NextThread, 2LL);
      *(_BYTE *)(v32 + 643) = 32;
      *(_BYTE *)(v32 + 390) = v31;
      KiQueueReadyThread((__int64)CurrentPrcb, v32, v39);
      LOBYTE(v40) = v31;
      if ( !(unsigned __int8)KiSwapContext(v32, NextThread, v40) )
        goto LABEL_51;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
        goto LABEL_87;
    }
    else
    {
      if ( (*(_DWORD *)(v32 + 116) & 0x40) == 0 )
        goto LABEL_51;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
      {
LABEL_87:
        __writecr8(1uLL);
        *(_DWORD *)(v32 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_51:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v61 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v61->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v61);
        }
        __writecr8(v31);
        return (unsigned int)v64;
      }
    }
    if ( KeGetCurrentIrql() >= 2u )
    {
      v60 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v60->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v60);
    }
    goto LABEL_87;
  }
  return result;
}
