/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x1400D6A04
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x1400D7A5C (PspSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1DBC (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400D796C (KiSetBasePriorityAndClearDecrement.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7EEC (KiApplyForegroundBoostThread.c)
 *     KeSetQuantumProcess @ 0x1400D8144 (KeSetQuantumProcess.c)
 *     KeFlushProcessWriteBuffers @ 0x1400ED078 (KeFlushProcessWriteBuffers.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1401123A0 (KiPriQueueThreadPriorityChanged.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     EtwTracePriority @ 0x140310478 (EtwTracePriority.c)
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
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  unsigned int v18; // r12d
  __int64 v19; // rbx
  struct _KPRCB *v20; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v22; // r14d
  int v23; // eax
  char v24; // cl
  int v25; // eax
  __int64 updated; // rcx
  __int64 v27; // rdx
  bool v28; // zf
  int v29; // eax
  char v30; // r13
  char v31; // si
  char v32; // al
  _BYTE *v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // r9
  unsigned __int8 v36; // r14
  __int64 v37; // rsi
  _DWORD *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  struct _KPRCB *v41; // rbx
  _DWORD *v42; // rcx
  _DWORD *v43; // rcx
  int v44; // eax
  _KTHREAD *NextThread; // rbx
  __int64 v46; // r8
  __int64 v47; // r8
  int v48; // eax
  __int64 v49; // rbx
  struct _KPRCB *v50; // rsi
  _DWORD *v51; // rcx
  int v52; // eax
  _DWORD *v53; // rcx
  int v54; // eax
  _DWORD *v55; // rcx
  int v56; // eax
  int v57; // ecx
  int v58; // esi
  char v59; // al
  int v60; // r14d
  bool v61; // sf
  __int64 v62; // rcx
  __int64 v63; // rdx
  _BYTE *v64; // rcx
  int v65; // eax
  int v66; // eax
  struct _KPRCB *v67; // rcx
  struct _KPRCB *v68; // rcx
  struct _KPRCB *v69; // rcx
  int v70; // [rsp+30h] [rbp-41h]
  int v71; // [rsp+34h] [rbp-3Dh]
  int v72; // [rsp+38h] [rbp-39h]
  _QWORD *v73; // [rsp+40h] [rbp-31h]
  int v74; // [rsp+48h] [rbp-29h]
  __int64 v75; // [rsp+4Ch] [rbp-25h] BYREF
  int v76; // [rsp+54h] [rbp-1Dh]
  int v77; // [rsp+58h] [rbp-19h] BYREF
  int v78; // [rsp+5Ch] [rbp-15h] BYREF
  int v79; // [rsp+60h] [rbp-11h] BYREF
  _KTHREAD *CurrentThread; // [rsp+68h] [rbp-9h]
  _QWORD *v81; // [rsp+70h] [rbp-1h]
  PEX_SPIN_LOCK SpinLock; // [rsp+78h] [rbp+7h]
  __int64 v83; // [rsp+80h] [rbp+Fh]
  int v84; // [rsp+D0h] [rbp+5Fh] BYREF
  char v85; // [rsp+D8h] [rbp+67h]
  char v86; // [rsp+E0h] [rbp+6Fh]
  unsigned int v87; // [rsp+E8h] [rbp+77h]

  v87 = a4;
  v86 = a3;
  result = (unsigned int)*(char *)(a1 + 444);
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
  if ( (_UNKNOWN *)a1 == &KiInitialProcess )
    return result;
  v8 = 1;
  if ( (_DWORD)a2 )
    v8 = a2;
  v9 = 0;
  v70 = 0;
  v10 = 0;
  v71 = 0;
  v76 = 0;
  v85 = 0;
  v75 = WORD2(PerfGlobalGroupMask) & 0x2000;
  CurrentIrql = KeGetCurrentIrql();
  v83 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v13 = v86;
  if ( v86 )
    *(_BYTE *)(a1 + 445) = v86;
  v72 = *(char *)(a1 + 444);
  v74 = v8 - v72;
  *(_BYTE *)(a1 + 444) = v8;
  KeFlushProcessWriteBuffers(1LL);
  v15 = (_QWORD *)(a1 + 48);
  v16 = 16LL;
  v17 = *(_QWORD **)(a1 + 48);
  v73 = v17;
  v81 = (_QWORD *)(a1 + 48);
  if ( v8 < 16 )
  {
    if ( v17 != v15 )
    {
      v18 = v87;
      while ( 1 )
      {
        v19 = (__int64)(v17 - 95);
        if ( v13 )
          *(_BYTE *)(v19 + 651) = v13;
        v20 = KeGetCurrentPrcb();
        v78 = 0;
        while ( 1 )
        {
          SchedulerAssist = v20->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v65 = SchedulerAssist[5];
              SchedulerAssist[5] = v65 + 1;
              if ( v65 == -1 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v19 + 64), 0LL) )
            break;
          v38 = v20->SchedulerAssist;
          if ( v38 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v66 = v38[5] - 1;
              v38[5] = v66;
              if ( !v66 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
          do
            KeYieldProcessorEx(&v78, v14, v16);
          while ( *(_QWORD *)(v19 + 64) );
        }
        v22 = *(char *)(v19 + 563);
        if ( v22 <= v72 || v22 < 16 )
          break;
        KiReleaseThreadLockSafe(v19);
LABEL_47:
        v13 = v86;
        v17 = (_QWORD *)*v73;
        v73 = v17;
        if ( v17 == v81 )
          goto LABEL_48;
      }
      v23 = v22 + v74;
      if ( v22 + v74 >= 16 )
      {
        v84 = 15;
      }
      else
      {
        if ( v23 <= 0 )
          v23 = 1;
        v84 = v23;
      }
      v24 = *(_BYTE *)(v19 + 645);
      if ( !v24 )
        goto LABEL_28;
      if ( v72 < 16 )
      {
        KiReleaseThreadLockSafe(v19);
        v31 = 0;
LABEL_46:
        if ( (_DWORD)v75 )
        {
          if ( v85 )
          {
            v85 = 0;
            EtwTracePriority(v19, 1328, v71, v70, 0LL);
          }
          if ( v31 && v22 != v84 )
            EtwTracePriority(v19, 1329, v22, v84, (__int64)&v84);
        }
        goto LABEL_47;
      }
      if ( v24 > 0 )
      {
        v84 = 15;
      }
      else
      {
LABEL_28:
        v25 = v84;
        if ( v24 < 0 )
          v25 = 1;
        v84 = v25;
      }
      if ( (_KTHREAD *)v19 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        updated = *(_QWORD *)(v19 + 72);
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, v19, 0LL);
        _enable();
      }
      v27 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v19 + 651);
      if ( (*(_DWORD *)(v19 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v19 + 120), 5u);
      v28 = a5 == 0;
      *(_QWORD *)(v19 + 32) = v27;
      if ( v28 || (v31 = 0, v84 != v22) )
      {
        v29 = KiSetBasePriorityAndClearDecrement(v19, &v84, v18);
        v30 = v29;
        v70 = v29;
        v31 = 1;
      }
      else
      {
        v30 = v70;
      }
      v32 = 0;
      if ( a5 )
        v32 = KiApplyForegroundBoostThread(v19, (char *)&v75 + 4);
      if ( !v31 )
        goto LABEL_45;
      if ( !v32 )
      {
        v71 = *(char *)(v19 + 195);
        if ( KiSetPriorityThread(v19, (__int64)&v75 + 4, v30) )
        {
          v70 = *(char *)(v19 + 195);
          v85 = 1;
        }
      }
      v33 = *(_BYTE **)(v19 + 232);
      if ( v33 && (*v33 & 0x7F) == 0x15 )
        KiPriQueueThreadPriorityChanged(v33, v19);
      else
LABEL_45:
        KiReleaseThreadLockSafe(v19);
      goto LABEL_46;
    }
    goto LABEL_48;
  }
  if ( v17 != v15 )
  {
    while ( 1 )
    {
      v49 = (__int64)(v17 - 95);
      if ( v13 )
        *(_BYTE *)(v49 + 651) = v13;
      v50 = KeGetCurrentPrcb();
      v77 = 0;
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        v14 = 1LL;
        if ( v50->NestingLevel <= 1u )
        {
          v52 = v51[5];
          v51[5] = v52 + 1;
          if ( v52 == -1 )
LABEL_93:
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v49 + 64), 0LL) )
      {
        v53 = v50->SchedulerAssist;
        if ( v53 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v54 = v53[5] - 1;
            v53[5] = v54;
            if ( !v54 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        do
          KeYieldProcessorEx(&v77, v14, v16);
        while ( *(_QWORD *)(v49 + 64) );
        v55 = v50->SchedulerAssist;
        if ( v55 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v56 = v55[5];
            v55[5] = v56 + 1;
            if ( v56 == -1 )
              goto LABEL_93;
          }
        }
      }
      v57 = *(char *)(v49 + 563);
      v58 = v57 + v74;
      if ( v57 + v74 >= 16 )
      {
        if ( v58 > 31 )
          v58 = 31;
        v84 = v58;
      }
      else
      {
        v58 = 16;
        v84 = 16;
      }
      v59 = *(_BYTE *)(v49 + 645);
      v60 = v70;
      v61 = v59 < 0;
      if ( !v59 )
        goto LABEL_114;
      if ( v72 < 16 )
        break;
      KiReleaseThreadLockSafe(v49);
LABEL_130:
      if ( (_DWORD)v75 )
      {
        if ( v85 )
        {
          v85 = 0;
          EtwTracePriority(v49, 1328, v71, v60, 0LL);
        }
        if ( v10 )
        {
          v10 = 0;
          if ( v9 != v58 )
            EtwTracePriority(v49, 1329, v9, v58, (__int64)&v84);
        }
      }
      v13 = v86;
      v17 = (_QWORD *)*v73;
      v73 = v17;
      if ( v17 == v81 )
        goto LABEL_48;
    }
    v61 = v59 < 0;
    if ( v59 <= 0 )
    {
LABEL_114:
      if ( v61 )
        v58 = 16;
      v84 = v58;
    }
    else
    {
      v84 = 31;
    }
    v9 = v57;
    if ( (_KTHREAD *)v49 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      v62 = *(_QWORD *)(v49 + 72);
    }
    else
    {
      _disable();
      v62 = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, v49, 0LL);
      _enable();
    }
    v63 = v62 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v49 + 651);
    if ( (*(_DWORD *)(v49 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v49 + 120), 5u);
    *(_QWORD *)(v49 + 32) = v63;
    v70 = KiSetBasePriorityAndClearDecrement(v49, &v84, 0LL);
    v71 = *(char *)(v49 + 195);
    v10 = 1;
    if ( KiSetPriorityThread(v49, (__int64)&v75 + 4, v70) )
    {
      v70 = *(char *)(v49 + 195);
      v85 = 1;
    }
    v64 = *(_BYTE **)(v49 + 232);
    if ( v64 && (*v64 & 0x7F) == 0x15 )
      KiPriQueueThreadPriorityChanged(v64, v49);
    else
      KiReleaseThreadLockSafe(v49);
    v60 = v70;
    v58 = v84;
    goto LABEL_130;
  }
LABEL_48:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  KiReadyDeferredReadyList((__int64)CurrentPrcb, (_QWORD **)((char *)&v75 + 4), v34, v35);
  v36 = v83;
  if ( (unsigned __int8)v83 >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  else
  {
    v37 = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v41 = KeGetCurrentPrcb();
      v79 = 0;
      while ( 1 )
      {
        v42 = v41->SchedulerAssist;
        if ( v42 )
        {
          if ( v41->NestingLevel <= 1u )
          {
            v44 = v42[5];
            v42[5] = v44 + 1;
            if ( v44 == -1 )
              KiRemoveSystemWorkPriorityKick(v41);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v43 = v41->SchedulerAssist;
        if ( v43 )
        {
          if ( v41->NestingLevel <= 1u )
          {
            v48 = v43[5] - 1;
            v43[5] = v48;
            if ( !v48 )
              KiRemoveSystemWorkPriorityKick(v41);
          }
        }
        do
          KeYieldProcessorEx(&v79, v39, v40);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v37, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
      *(_BYTE *)(v37 + 643) = 32;
      *(_BYTE *)(v37 + 390) = v36;
      KiQueueReadyThread(CurrentPrcb, v37, v46);
      LOBYTE(v47) = v36;
      if ( (unsigned __int8)KiSwapContext(v37, NextThread, v47) )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v67 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v67->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v67);
        }
        __writecr8(1uLL);
        *(_DWORD *)(v37 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
    }
    else if ( (*(_DWORD *)(v37 + 116) & 0x40) != 0 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v68 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v68->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v68);
      }
      __writecr8(1uLL);
      *(_DWORD *)(v37 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v69 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v69->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v69);
    }
    __writecr8(v36);
  }
  return (unsigned int)v72;
}
