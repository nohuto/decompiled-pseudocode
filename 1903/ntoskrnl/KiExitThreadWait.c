/*
 * XREFs of KiExitThreadWait @ 0x14011B080
 * Callers:
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x14011AF94 (KiFastExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402B1ECC (KiSatisfyThreadWait.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiSelectNextThread @ 0x1400136A0 (KiSelectNextThread.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 */

char __fastcall KiExitThreadWait(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 v3; // r12
  char v4; // al
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r14
  bool v8; // zf
  __int64 v9; // r14
  bool v10; // zf
  struct _KPRCB *v11; // rbp
  _DWORD *v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r8
  struct _KPRCB *v16; // rcx
  struct _KPRCB *v17; // rbp
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // rbp
  __int64 v22; // r8
  __int64 v23; // r8
  int v24; // eax
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  struct _KPRCB *v29; // rbp
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // eax
  int v33; // eax
  _DWORD *v34; // rcx
  int v35; // eax
  _DWORD *v36; // rcx
  int v37; // eax
  struct _KPRCB *v38; // rcx
  struct _KPRCB *v39; // rcx
  struct _KPRCB *v40; // rcx
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  struct _KPRCB *v44; // rcx
  int v46; // [rsp+20h] [rbp-48h] BYREF
  int v47; // [rsp+24h] [rbp-44h] BYREF
  _QWORD *v48[8]; // [rsp+28h] [rbp-40h] BYREF
  int v49; // [rsp+78h] [rbp+10h] BYREF
  int v50; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a2 + 390);
  v4 = *(_BYTE *)(a2 + 112);
  v5 = a1;
  v48[0] = 0LL;
  if ( (v4 & 0x38) != 0 )
  {
    if ( (v4 & 0x18) != 0 )
    {
      if ( (v4 & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      CurrentPrcb = KeGetCurrentPrcb();
      v49 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v30 = SchedulerAssist[5];
            SchedulerAssist[5] = v30 + 1;
            if ( v30 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
          break;
        v31 = CurrentPrcb->SchedulerAssist;
        if ( v31 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v32 = v31[5] - 1;
            v31[5] = v32;
            if ( !v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v49);
        while ( *(_QWORD *)(v5 + 48) );
      }
      if ( !*(_QWORD *)(v5 + 16) )
        KiSelectNextThread(v5, (__int64 *)v48);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      if ( v28 )
      {
        if ( v27->NestingLevel <= 1u )
        {
          v33 = v28[5] - 1;
          v28[5] = v33;
          if ( !v33 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
      KiReadyDeferredReadyList(v5, v48);
      v6 = *(_QWORD *)(v5 + 16);
      if ( v3 < 2u )
      {
        v7 = *(_QWORD *)(v5 + 8);
        if ( !v6 )
          goto LABEL_5;
        KiAbProcessContextSwitch(*(_QWORD *)(v5 + 8), 0);
        v29 = KeGetCurrentPrcb();
        v50 = 0;
        while ( 1 )
        {
          v34 = v29->SchedulerAssist;
          if ( v34 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v35 = v34[5];
              v34[5] = v35 + 1;
              if ( v35 == -1 )
                KiRemoveSystemWorkPriorityKick(v29);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
            break;
          v36 = v29->SchedulerAssist;
          if ( v36 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v37 = v36[5] - 1;
              v36[5] = v37;
              if ( !v37 )
                KiRemoveSystemWorkPriorityKick(v29);
            }
          }
          do
            KeYieldProcessorEx(&v50);
          while ( *(_QWORD *)(v5 + 48) );
        }
        goto LABEL_25;
      }
      if ( v6 )
      {
        LOBYTE(v6) = *(_BYTE *)(v5 + 11882);
        if ( !(_BYTE)v6 )
        {
          a1 = v5;
LABEL_28:
          LOBYTE(v6) = KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2);
        }
      }
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) )
      {
        KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
        v17 = KeGetCurrentPrcb();
        v46 = 0;
        while ( 1 )
        {
          v18 = v17->SchedulerAssist;
          if ( v18 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v20 = v18[5];
              v18[5] = v20 + 1;
              if ( v20 == -1 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
            break;
          v19 = v17->SchedulerAssist;
          if ( v19 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v24 = v19[5] - 1;
              v19[5] = v24;
              if ( !v24 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          do
            KeYieldProcessorEx(&v46);
          while ( *(_QWORD *)(v5 + 48) );
        }
        v21 = *(_QWORD *)(v5 + 16);
        *(_QWORD *)(v5 + 16) = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v5, v9, 0LL);
        _enable();
        *(_QWORD *)(v5 + 8) = v21;
        if ( *(_BYTE *)(v21 + 388) == 1 )
          *(_DWORD *)(v21 + 132) = *(_DWORD *)(v21 + 132) - *(_DWORD *)(v21 + 436) + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v21 + 388) = 2;
        *(_BYTE *)(v9 + 643) = 32;
        *(_BYTE *)(v9 + 390) = 1;
        KiQueueReadyThread(v5, v9, v22);
        LOBYTE(v23) = 1;
        v10 = (unsigned __int8)KiSwapContext(v9, v21, v23) == 0;
      }
      else
      {
        v10 = (*(_DWORD *)(v9 + 116) & 0x40) == 0;
      }
      if ( !v10 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v38);
        }
        __writecr8(1uLL);
        *(_DWORD *)(v9 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v39);
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      LOBYTE(v6) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v6) = KeGetCurrentIrql();
          if ( (unsigned __int8)v6 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
            LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(v40);
          }
        }
      }
      __writecr8(0LL);
    }
  }
  else
  {
    if ( !a3 )
    {
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v3 >= 2u )
        goto LABEL_8;
      goto LABEL_113;
    }
    v6 = *(_QWORD *)(a1 + 16);
    if ( v3 < 2u )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( !v6 )
      {
LABEL_5:
        v8 = (*(_DWORD *)(v7 + 116) & 0x40) == 0;
        goto LABEL_6;
      }
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
      v11 = KeGetCurrentPrcb();
      v47 = 0;
      while ( 1 )
      {
        v12 = v11->SchedulerAssist;
        if ( v12 )
        {
          if ( v11->NestingLevel <= 1u )
          {
            v41 = v12[5];
            v12[5] = v41 + 1;
            if ( v41 == -1 )
              KiRemoveSystemWorkPriorityKick(v11);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
          break;
        v42 = v11->SchedulerAssist;
        if ( v42 )
        {
          if ( v11->NestingLevel <= 1u )
          {
            v43 = v42[5] - 1;
            v42[5] = v43;
            if ( !v43 )
              KiRemoveSystemWorkPriorityKick(v11);
          }
        }
        do
          KeYieldProcessorEx(&v47);
        while ( *(_QWORD *)(v5 + 48) );
      }
LABEL_25:
      v13 = *(_QWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(v5, v7, 0LL);
      _enable();
      *(_QWORD *)(v5 + 8) = v13;
      if ( *(_BYTE *)(v13 + 388) == 1 )
        *(_DWORD *)(v13 + 132) = *(_DWORD *)(v13 + 132) - *(_DWORD *)(v13 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v13 + 388) = 2;
      *(_BYTE *)(v7 + 643) = 32;
      *(_BYTE *)(v7 + 390) = v3;
      KiQueueReadyThread(v5, v7, v14);
      LOBYTE(v15) = v3;
      v8 = (unsigned __int8)KiSwapContext(v7, v13, v15) == 0;
LABEL_6:
      if ( !v8 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v16);
        }
        __writecr8(1uLL);
        *(_DWORD *)(v7 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
        goto LABEL_8;
LABEL_113:
      v44 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v44);
LABEL_8:
      LOBYTE(v6) = v3;
      __writecr8(v3);
      return v6;
    }
    if ( v6 )
    {
      LOBYTE(v6) = *(_BYTE *)(a1 + 11882);
      if ( !(_BYTE)v6 )
        goto LABEL_28;
    }
  }
  return v6;
}
