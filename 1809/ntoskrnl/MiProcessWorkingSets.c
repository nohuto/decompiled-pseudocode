/*
 * XREFs of MiProcessWorkingSets @ 0x14006CEC0
 * Callers:
 *     MiWorkingSetManager @ 0x1400EF634 (MiWorkingSetManager.c)
 * Callees:
 *     MiLogProcessWorkingSetsStop @ 0x140012974 (MiLogProcessWorkingSetsStop.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D570 (MiTrimOrAgeWorkingSet.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiComputeSystemTrimCriteria @ 0x1400EF058 (MiComputeSystemTrimCriteria.c)
 *     MiReturnWsToExpansionList @ 0x1400F3404 (MiReturnWsToExpansionList.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     MiDrainZeroLookasides @ 0x14011AD10 (MiDrainZeroLookasides.c)
 *     MiComputeAgingPercent @ 0x14011FF18 (MiComputeAgingPercent.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140190F3C (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeRetryOutswapProcess @ 0x14028E834 (KeRetryOutswapProcess.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1402B2CDC (MiCheckSystemTrimEndCriteria.c)
 *     MiOrderTrimList @ 0x1402B3540 (MiOrderTrimList.c)
 */

void __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  bool v2; // zf
  PRKEVENT v4; // rdi
  _QWORD *v5; // r15
  int v6; // esi
  _QWORD *v7; // rbx
  __int64 v8; // r9
  __int64 *v9; // r12
  int v10; // r13d
  __int16 v11; // dx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rdi
  __int64 *v15; // r14
  int v16; // r15d
  __int64 Next; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int8 OldIrql; // si
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  int v24; // edx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 **v28; // rax
  __int64 v29; // rcx
  __int64 **v30; // rax
  __int64 **v31; // rdi
  _QWORD *v32; // rdx
  char v33; // r14
  unsigned int v34; // eax
  int Blink; // esi
  unsigned __int8 v36; // bl
  __int64 v37; // rdx
  ULONG64 v38; // r8
  const struct _TlgProvider_t *v39; // r9
  __int64 v40; // r10
  _QWORD *v41; // rcx
  __int64 *v42; // rax
  __int64 **v43; // rdi
  _QWORD *v44; // rcx
  struct _LIST_ENTRY *v45; // rcx
  _QWORD *v46; // r8
  _QWORD *v47; // rcx
  _QWORD *v48; // rdx
  __int64 v49; // r9
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 **v53; // rax
  unsigned __int8 v54; // si
  struct _KPRCB *v55; // rcx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  int v58; // eax
  struct _KPRCB *v59; // rcx
  int v60; // eax
  int v61; // eax
  struct _KPRCB *v62; // rcx
  const GUID *v63; // [rsp+20h] [rbp-E0h]
  const GUID *v64; // [rsp+28h] [rbp-D8h]
  int v65; // [rsp+40h] [rbp-C0h]
  __int16 v66; // [rsp+40h] [rbp-C0h]
  int v67; // [rsp+40h] [rbp-C0h]
  int v68; // [rsp+40h] [rbp-C0h]
  int v69; // [rsp+40h] [rbp-C0h]
  char v70; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v71; // [rsp+48h] [rbp-B8h]
  __int16 v72; // [rsp+50h] [rbp-B0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v74; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v75; // [rsp+74h] [rbp-8Ch]
  int v76; // [rsp+78h] [rbp-88h]
  unsigned int v77; // [rsp+7Ch] [rbp-84h]
  _QWORD *v78; // [rsp+80h] [rbp-80h]
  PRKEVENT Event; // [rsp+88h] [rbp-78h]
  unsigned int v80; // [rsp+90h] [rbp-70h] BYREF
  int v81; // [rsp+94h] [rbp-6Ch]
  __int64 v82; // [rsp+98h] [rbp-68h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v84; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v85; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  char *v88; // [rsp+E0h] [rbp-20h]
  __int64 v89; // [rsp+E8h] [rbp-18h]
  __int16 *v90; // [rsp+F0h] [rbp-10h]
  __int64 v91; // [rsp+F8h] [rbp-8h]
  unsigned int *v92; // [rsp+100h] [rbp+0h]
  __int64 v93; // [rsp+108h] [rbp+8h]
  __int64 *v94; // [rsp+110h] [rbp+10h]
  __int64 v95; // [rsp+118h] [rbp+18h]
  __int64 *v96; // [rsp+120h] [rbp+20h]
  __int64 v97; // [rsp+128h] [rbp+28h]
  __int64 *v98; // [rsp+130h] [rbp+30h]
  __int64 v99; // [rsp+138h] [rbp+38h]
  __int64 *v100; // [rsp+140h] [rbp+40h]
  __int64 v101; // [rsp+148h] [rbp+48h]
  __int64 *v102; // [rsp+150h] [rbp+50h]
  __int64 v103; // [rsp+158h] [rbp+58h]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v2 = *(_BYTE *)(a1 + 12) == 0;
  v4 = *(PRKEVENT *)(a1 + 7024);
  v5 = (_QWORD *)a1;
  Event = v4;
  v71 = a2;
  v78 = (_QWORD *)a1;
  if ( !v2 )
    MiInitializeWorkingSetManagerParameters();
  MiComputeAgingPercent(v5);
  v75 = MiComputeSystemTrimCriteria(v5, a2);
  v6 = v75;
  if ( hProvider && hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 1uLL) )
  {
    v70 = *(_BYTE *)(a2 + 2);
    v74 = *(_WORD *)(v40 + 2354);
    v82 = *(_QWORD *)(a2 + 80);
    v83 = *(_QWORD *)(a2 + 72);
    v84 = v5[912];
    v85 = v5[960];
    v86 = v5[974];
    v88 = &v70;
    v90 = &v74;
    v92 = &v80;
    v94 = &v82;
    v96 = &v83;
    v98 = &v84;
    v100 = &v85;
    v102 = &v86;
    v80 = v75;
    v89 = v37;
    v91 = 2LL;
    v93 = 4LL;
    v95 = 8LL;
    v97 = 8LL;
    v99 = 8LL;
    v101 = 8LL;
    v103 = 8LL;
    TlgWriteEx(v39, &unk_14036EF22, v38, (ULONG)v39, v63, v64, 0xAu, &pData);
  }
  if ( (v6 & 5) != 0 )
    MiDrainZeroLookasides(v5, 0LL, 0LL, 0LL);
  v76 = 0;
  v77 = 0;
  if ( (v6 & 5) != 0 )
    LOBYTE(v4[2].Header.SignalState) = 1;
  if ( (v6 & 2) != 0 )
    ++HIDWORD(v4[3].Header.WaitListHead.Blink);
  v7 = 0LL;
  if ( (v6 & 0x40) != 0 )
  {
    if ( *(_WORD *)&v4[98].Header.Size > 0xAu )
      *(_WORD *)&v4[98].Header.Size = 10;
    KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
    if ( BYTE2(v4[2].Header.SignalState) == 1 )
    {
      v46 = v5 + 879;
      BYTE2(v4[2].Header.SignalState) = 0;
      v47 = (_QWORD *)v5[879];
      if ( v47 != v5 + 879 )
      {
        do
        {
          v48 = v47;
          v47 = (_QWORD *)*v47;
          if ( (struct _LIST_ENTRY *)v48[9] >= v4[2].Header.WaitListHead.Blink )
          {
            v49 = *v48;
            v50 = (_QWORD *)v48[1];
            if ( *(_QWORD **)(*v48 + 8LL) != v48
              || (_QWORD *)*v50 != v48
              || (*v50 = v49, *(_QWORD *)(v49 + 8) = v50, v51 = *v46, *(_QWORD **)(*v46 + 8LL) != v46) )
            {
LABEL_89:
              __fastfail(3u);
            }
            *v48 = v51;
            v48[1] = v46;
            *(_QWORD *)(v51 + 8) = v48;
            *v46 = v48;
          }
        }
        while ( v47 != v46 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
  }
  v8 = v71;
  v9 = v5 + 879;
  BYTE1(v4[2].Header.SignalState) = 1;
LABEL_16:
  while ( 2 )
  {
    v10 = 0;
    v81 = v6 & 1;
    if ( (v6 & 1) != 0 )
    {
      v52 = MiOrderTrimList(v5, MiTrimPassToAge[*(_BYTE *)v8 & 0x7F]);
      v8 = v71;
      *(_QWORD *)(v71 + 104) = v52;
    }
    v11 = ++LOWORD(v4[98].Header.Lock);
    *(_QWORD *)(v8 + 88) = *(_QWORD *)(v8 + 80) - *(_QWORD *)(v8 + 96);
    v72 = v11;
    while ( 1 )
    {
      v12 = (__int64 *)*v9;
      if ( (__int64 *)*v9 == v9 )
        goto LABEL_49;
      v13 = *v12;
      if ( (__int64 *)v12[1] != v9 || *(__int64 **)(v13 + 8) != v12 )
        goto LABEL_89;
      *v9 = v13;
      v14 = v12 - 3;
      *(_QWORD *)(v13 + 8) = v9;
      v15 = v12;
      *v12 = 0LL;
      if ( *((_WORD *)v12 + 74) == v11 )
      {
        v42 = (__int64 *)*v9;
        v43 = (__int64 **)(v14 + 3);
        if ( *(__int64 **)(*v9 + 8) != v9 )
          goto LABEL_89;
        v2 = v81 == 0;
        v5 = v78;
        *v43 = v42;
        v43[1] = v9;
        v42[1] = (__int64)v43;
        *v9 = (__int64)v43;
        if ( v2 )
          goto LABEL_50;
        v61 = MiCheckSystemTrimEndCriteria(v5, v8, &LockHandle);
        v8 = v71;
        v4 = Event;
        if ( v61 )
          goto LABEL_50;
        goto LABEL_16;
      }
      *((_WORD *)v14 + 86) = v11;
      v16 = v6 & 0x40;
      if ( (v6 & 0x40) != 0 && (struct _LIST_ENTRY *)v14[12] < Event[2].Header.WaitListHead.Blink )
        break;
      if ( (unsigned __int64)v14[17] > 1 || (v14[23] & 7) != 0 )
      {
        v65 = *((_DWORD *)v14 + 46);
        BYTE1(v65) = BYTE1(v65) & 0xF9 | 2;
        *((_WORD *)v14 + 92) = v65;
        if ( *(_BYTE *)(v8 + 2) == 2 )
        {
          v56 = v14[17];
          v57 = v14[14];
          if ( v56 <= v57 || v56 - v57 < 0x40000 )
            goto LABEL_38;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          v8 = v71;
        }
        else
        {
          _m_prefetchw(&LockHandle);
          Next = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_29;
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
            v8 = v71;
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        }
LABEL_29:
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v58 = SchedulerAssist[5] - 1;
            SchedulerAssist[5] = v58;
            if ( !v58 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v8 = v71;
            }
          }
        }
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v59 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v59->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v59);
          v8 = v71;
        }
        __writecr8(OldIrql);
        v6 = v75;
        v10 = MiTrimOrAgeWorkingSet(v14, v8, v75);
        if ( v10 == 1 )
          *(_BYTE *)(v71 + 4) = 2;
        LockHandle.LockQueue.Lock = &qword_14043BF40;
        LockHandle.LockQueue.Next = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        LockHandle.OldIrql = CurrentIrql;
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        if ( v23 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v60 = v23[5];
            v23[5] = v60 + 1;
            if ( v60 == -1 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, &qword_14043BF40);
        }
        else if ( _InterlockedExchange64((volatile __int64 *)&qword_14043BF40, (__int64)&LockHandle) )
        {
          KxWaitForLockOwnerShip(&LockHandle);
        }
LABEL_38:
        if ( !v16 || (v24 = 0, (struct _LIST_ENTRY *)v14[12] < Event[2].Header.WaitListHead.Blink) || v14[13] )
          v24 = 1;
        v25 = *((_DWORD *)v14 + 46);
        LOBYTE(v66) = v25;
        if ( v24 )
        {
          HIBYTE(v66) = BYTE1(v25) & 0xF9;
          *((_WORD *)v14 + 92) = v66;
          v26 = *((unsigned __int16 *)v14 + 87);
          v27 = *(_QWORD *)(qword_14043B808 + 8 * v26) + 7032LL;
          v28 = *(__int64 ***)(*(_QWORD *)(qword_14043B808 + 8 * v26) + 7040LL);
          if ( *v28 != (__int64 *)v27 )
            goto LABEL_89;
          *v15 = v27;
          v15[1] = (__int64)v28;
          *v28 = v15;
          *(_QWORD *)(v27 + 8) = v15;
          v29 = v14[13];
          if ( v29 )
            KeSignalGate(v29, 1LL);
        }
        else
        {
          HIBYTE(v66) = BYTE1(v25) | 6;
          *((_WORD *)v14 + 92) = v66;
          v14[4] = (__int64)v7;
          v7 = v14 + 4;
        }
        v8 = v71;
        if ( v10 == 1 )
          goto LABEL_49;
        v11 = v72;
      }
      else if ( v14[13] )
      {
        v53 = (__int64 **)v9[1];
        if ( *v53 != v9 )
          goto LABEL_89;
        *v15 = (__int64)v9;
        v15[1] = (__int64)v53;
        *v53 = v15;
        v9[1] = (__int64)v15;
      }
      else
      {
        v68 = *((_DWORD *)v14 + 46);
        BYTE1(v68) |= 6u;
        *((_WORD *)v14 + 92) = v68;
        KxReleaseQueuedSpinLock(&LockHandle);
        v54 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v55 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v55->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v55);
        }
        __writecr8(v54);
        KeRetryOutswapProcess(v14 - 160);
        KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
        v69 = *((_DWORD *)v14 + 46);
        BYTE1(v69) &= 0xF9u;
        *((_WORD *)v14 + 92) = v69;
        MiReturnWsToExpansionList(v14, 0LL);
        v11 = v72;
        v8 = v71;
        v6 = v75;
      }
    }
    v30 = (__int64 **)v9[1];
    v31 = (__int64 **)(v14 + 3);
    if ( *v30 != v9 )
      goto LABEL_89;
    *v31 = v9;
    v31[1] = (__int64 *)v30;
    *v30 = (__int64 *)v31;
    v9[1] = (__int64)v31;
LABEL_49:
    v5 = v78;
LABEL_50:
    if ( (v6 & 0x40) != 0 )
    {
      while ( 1 )
      {
        v32 = v7;
        if ( !v7 )
          break;
        v41 = v7 - 4;
        v7 = (_QWORD *)*v7;
        v67 = *((_DWORD *)v32 + 38);
        BYTE1(v67) &= 0xF9u;
        *((_WORD *)v32 + 76) = v67;
        MiReturnWsToExpansionList(v41, 1LL);
      }
      v8 = v71;
    }
    v4 = Event;
    v33 = v6 | v76;
    v76 |= v6;
    if ( v10 != 1 )
    {
      v34 = v6 & 0xFFFFFF3C | v77;
      Blink = (int)Event[1].Header.WaitListHead.Blink;
      v77 = v34;
      if ( v34 == Blink )
      {
        BYTE1(Event[2].Header.SignalState) = 0;
        if ( (v33 & 5) != 0 )
          LOBYTE(v4[2].Header.SignalState) = 0;
        if ( Blink )
        {
          LODWORD(v4[1].Header.WaitListHead.Blink) = 0;
          KeSetEvent(v4, 0, 0);
        }
        if ( (v33 & 0x83) != 0 )
        {
          v44 = (_QWORD *)v71;
          *(_QWORD *)&v4[101].Header.Lock = *(_QWORD *)(v71 + 8);
          v4[101].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v44[2];
          v4[101].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v44[3];
          *(_QWORD *)&v4[102].Header.Lock = v44[4];
          v4[102].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v44[5];
          v4[102].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v44[6];
          *(_QWORD *)&v4[103].Header.Lock = v44[7];
          v45 = (struct _LIST_ENTRY *)v44[8];
          v4[103].Header.WaitListHead.Flink = v45;
          v4[100].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)v45 + *(_QWORD *)&v4[103].Header.Lock);
        }
        KxReleaseQueuedSpinLock(&LockHandle);
        v36 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          goto LABEL_129;
        goto LABEL_62;
      }
      v6 = v34 ^ Blink;
      v75 = v6;
      if ( (v6 & 5) != 0 )
        LOBYTE(Event[2].Header.SignalState) = 1;
      *(_BYTE *)(v8 + 2) = 7;
      continue;
    }
    break;
  }
  BYTE1(Event[2].Header.SignalState) = 0;
  if ( (v33 & 5) != 0 )
    LOBYTE(v4[2].Header.SignalState) = 0;
  KxReleaseQueuedSpinLock(&LockHandle);
  v36 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
LABEL_129:
    v62 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v62->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v62);
  }
LABEL_62:
  __writecr8(v36);
  MiLogProcessWorkingSetsStop();
}
