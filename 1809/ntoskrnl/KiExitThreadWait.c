/*
 * XREFs of KiExitThreadWait @ 0x1400F9F10
 * Callers:
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x1400F9E2C (KiFastExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x14029AE58 (KiSatisfyThreadWait.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiSelectNextThread @ 0x1400D71E8 (KiSelectNextThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 */

char __fastcall KiExitThreadWait(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int8 v4; // r12
  __int64 v5; // rbp
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // r13
  bool v9; // zf
  __int64 v10; // r13
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KPRCB *v14; // rbx
  _DWORD *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r8
  struct _KPRCB *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KPRCB *v22; // rbx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r8
  int v28; // eax
  int v29; // eax
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r8
  struct _KPRCB *v36; // rbx
  int v37; // eax
  _DWORD *v38; // rcx
  int v39; // eax
  int v40; // eax
  _DWORD *v41; // rcx
  int v42; // eax
  _DWORD *v43; // rcx
  int v44; // eax
  struct _KPRCB *v45; // rcx
  struct _KPRCB *v46; // rcx
  struct _KPRCB *v47; // rcx
  int v48; // eax
  _DWORD *v49; // rcx
  int v50; // eax
  struct _KPRCB *v51; // rcx
  int v53; // [rsp+20h] [rbp-38h] BYREF
  int v54; // [rsp+24h] [rbp-34h] BYREF
  _QWORD *v55[6]; // [rsp+28h] [rbp-30h] BYREF
  int v56; // [rsp+68h] [rbp+10h] BYREF
  int v57; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_BYTE *)(a2 + 390);
  v5 = a1;
  v6 = *(_BYTE *)(a2 + 112);
  if ( (v6 & 0x38) != 0 )
  {
    if ( (v6 & 0x18) != 0 )
    {
      if ( (v6 & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      CurrentPrcb = KeGetCurrentPrcb();
      v55[0] = 0LL;
      v56 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v37 = SchedulerAssist[5];
            SchedulerAssist[5] = v37 + 1;
            if ( v37 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
          break;
        v38 = CurrentPrcb->SchedulerAssist;
        if ( v38 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v39 = v38[5] - 1;
            v38[5] = v39;
            if ( !v39 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v56, a2, a3);
        while ( *(_QWORD *)(v5 + 48) );
      }
      if ( !*(_QWORD *)(v5 + 16) )
        KiSelectNextThread(v5, (__int64)v55, a3);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      if ( v33 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v40 = v33[5] - 1;
          v33[5] = v40;
          if ( !v40 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      KiReadyDeferredReadyList(v5, v55, a3, a4);
      v7 = *(_QWORD *)(v5 + 16);
      if ( v4 < 2u )
      {
        v8 = *(_QWORD *)(v5 + 8);
        if ( !v7 )
          goto LABEL_5;
        KiAbProcessContextSwitch(*(_QWORD *)(v5 + 8), 0);
        v36 = KeGetCurrentPrcb();
        v57 = 0;
        while ( 1 )
        {
          v41 = v36->SchedulerAssist;
          if ( v41 )
          {
            if ( v36->NestingLevel <= 1u )
            {
              v42 = v41[5];
              v41[5] = v42 + 1;
              if ( v42 == -1 )
                KiRemoveSystemWorkPriorityKick(v36);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
            break;
          v43 = v36->SchedulerAssist;
          if ( v43 )
          {
            if ( v36->NestingLevel <= 1u )
            {
              v44 = v43[5] - 1;
              v43[5] = v44;
              if ( !v44 )
                KiRemoveSystemWorkPriorityKick(v36);
            }
          }
          do
            KeYieldProcessorEx(&v57, v34, v35);
          while ( *(_QWORD *)(v5 + 48) );
        }
        goto LABEL_25;
      }
      if ( v7 )
      {
        LOBYTE(v7) = *(_BYTE *)(v5 + 11882);
        if ( !(_BYTE)v7 )
        {
          a1 = v5;
LABEL_26:
          LOBYTE(v7) = KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
        }
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) )
      {
        KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
        v22 = KeGetCurrentPrcb();
        v53 = 0;
        while ( 1 )
        {
          v23 = v22->SchedulerAssist;
          if ( v23 )
          {
            if ( v22->NestingLevel <= 1u )
            {
              v28 = v23[5];
              v23[5] = v28 + 1;
              if ( v28 == -1 )
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
            break;
          v24 = v22->SchedulerAssist;
          if ( v24 )
          {
            if ( v22->NestingLevel <= 1u )
            {
              v29 = v24[5] - 1;
              v24[5] = v29;
              if ( !v29 )
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
          do
            KeYieldProcessorEx(&v53, v20, v21);
          while ( *(_QWORD *)(v5 + 48) );
        }
        v25 = *(_QWORD *)(v5 + 16);
        *(_QWORD *)(v5 + 16) = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v5, v10, 0LL);
        _enable();
        KiUpdatePriorityMatrixThreadState(v5, v25, 0LL, 2LL);
        *(_BYTE *)(v10 + 643) = 32;
        *(_BYTE *)(v10 + 390) = 1;
        KiQueueReadyThread((struct _KPRCB *)v5, v10, v26);
        LOBYTE(v27) = 1;
        v11 = (unsigned __int8)KiSwapContext(v10, v25, v27) == 0;
      }
      else
      {
        v11 = (*(_DWORD *)(v10 + 116) & 0x40) == 0;
      }
      if ( !v11 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v45);
        }
        __writecr8(1uLL);
        *(_DWORD *)(v10 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v46);
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      LOBYTE(v7) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v7) = KeGetCurrentIrql();
          if ( (unsigned __int8)v7 >= 2u )
          {
            v47 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
            LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v47);
          }
        }
      }
      __writecr8(0LL);
    }
  }
  else
  {
    if ( !(_BYTE)a3 )
    {
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v4 >= 2u )
        goto LABEL_8;
      goto LABEL_109;
    }
    v7 = *(_QWORD *)(a1 + 16);
    if ( v4 < 2u )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( !v7 )
      {
LABEL_5:
        v9 = (*(_DWORD *)(v8 + 116) & 0x40) == 0;
        goto LABEL_6;
      }
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
      v14 = KeGetCurrentPrcb();
      v54 = 0;
      while ( 1 )
      {
        v15 = v14->SchedulerAssist;
        if ( v15 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v48 = v15[5];
            v15[5] = v48 + 1;
            if ( v48 == -1 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
          break;
        v49 = v14->SchedulerAssist;
        if ( v49 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v50 = v49[5] - 1;
            v49[5] = v50;
            if ( !v50 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        do
          KeYieldProcessorEx(&v54, v12, v13);
        while ( *(_QWORD *)(v5 + 48) );
      }
LABEL_25:
      v16 = *(_QWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(v5, v8, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(v5, v16, 0LL, 2LL);
      *(_BYTE *)(v8 + 643) = 32;
      *(_BYTE *)(v8 + 390) = v4;
      KiQueueReadyThread((struct _KPRCB *)v5, v8, v17);
      LOBYTE(v18) = v4;
      v9 = (unsigned __int8)KiSwapContext(v8, v16, v18) == 0;
LABEL_6:
      if ( !v9 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v19);
        }
        __writecr8(1uLL);
        *(_DWORD *)(v8 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
        goto LABEL_8;
LABEL_109:
      v51 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v51->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v51);
LABEL_8:
      LOBYTE(v7) = v4;
      __writecr8(v4);
      return v7;
    }
    if ( v7 )
    {
      LOBYTE(v7) = *(_BYTE *)(a1 + 11882);
      if ( !(_BYTE)v7 )
        goto LABEL_26;
    }
  }
  return v7;
}
