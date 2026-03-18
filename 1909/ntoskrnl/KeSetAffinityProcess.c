/*
 * XREFs of KeSetAffinityProcess @ 0x14019AD38
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x1405AB130 (KiInitializeDynamicProcessorDpc.c)
 *     PspSetProcessAffinitySafe @ 0x1408C6858 (PspSetProcessAffinitySafe.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012840 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiSetIdealNodeProcessByGroup @ 0x1400EA0B0 (KiSetIdealNodeProcessByGroup.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiSetAffinityThread @ 0x1400FB8E0 (KiSetAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x14012FA70 (KeFirstGroupAffinityEx.c)
 *     KiSetThreadState @ 0x140135CAC (KiSetThreadState.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall KeSetAffinityProcess(__int64 a1, char a2, unsigned __int16 *a3)
{
  char v6; // r14
  char v7; // r12
  unsigned int v8; // edx
  unsigned int v9; // eax
  _QWORD *v10; // rcx
  __int64 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  volatile LONG *v13; // r13
  unsigned __int16 *v14; // rcx
  unsigned __int16 v15; // r14
  char v16; // r13
  _QWORD *i; // rdi
  __int64 *v18; // r8
  __int64 CurrentThread; // rdi
  struct _KPRCB *v21; // rsi
  __int64 NextThread; // rsi
  __int64 v23; // r8
  __int64 v24; // r8
  struct _KPRCB *v25; // rcx
  unsigned __int16 v26; // r14
  unsigned __int16 v27; // r8
  char v28; // r13
  _QWORD *v29; // r9
  __int64 v30; // r11
  __int64 v31; // rdx
  __int64 v32; // rax
  bool v33; // zf
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int64 v42; // rax
  _DWORD *SchedulerAssist; // rcx
  int v44; // eax
  _DWORD *v45; // rcx
  int v46; // eax
  struct _KPRCB *v47; // rcx
  struct _KPRCB *v48; // rcx
  char v49; // [rsp+20h] [rbp-E0h]
  signed __int32 v50; // [rsp+24h] [rbp-DCh] BYREF
  int v51; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v52; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+38h] [rbp-C8h]
  __int64 v54; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+48h] [rbp-B8h]
  _QWORD v56[2]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v57[11]; // [rsp+60h] [rbp-A0h] BYREF

  v56[0] = 0LL;
  v56[1] = 0LL;
  LODWORD(v57[0]) = 1310721;
  v49 = 0;
  v52 = 0LL;
  v6 = 0;
  v7 = 0;
  memset((char *)v57 + 4, 0, 0xA4uLL);
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      v6 = 1;
    }
    else
    {
      v7 = 1;
      v49 = 1;
    }
  }
  KeFirstGroupAffinityEx(v56, a3);
  v8 = *a3;
  v9 = 0;
  v50 = 0;
  if ( v8 )
  {
    v10 = a3 + 4;
    do
    {
      if ( *v10 )
        _bittestandset(&v50, v9);
      ++v9;
      ++v10;
    }
    while ( v9 < v8 );
  }
  v54 = 0LL;
  v55 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v53 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( !v6 || ((*(_DWORD *)(a1 + 444) - 1) & *(_DWORD *)(a1 + 444)) == 0 )
  {
    v14 = (unsigned __int16 *)(a1 + 80);
    if ( v7 )
    {
      v26 = *v14;
      v27 = 0;
      if ( !*v14 )
        goto LABEL_24;
      v28 = 0;
      v29 = a3 + 4;
      v30 = a1 - (_QWORD)a3;
      do
      {
        v31 = *(_QWORD *)((char *)v29 + v30 + 80);
        if ( v31 )
        {
          v54 = *(_QWORD *)((char *)v29 + v30 + 80);
          if ( v27 < *a3 )
          {
            v32 = *v29 | v31;
            if ( v32 != v31 )
            {
              v31 |= *v29;
              v54 = v32;
              v28 = 1;
            }
          }
          if ( LOWORD(v57[0]) <= v27 )
            LOWORD(v57[0]) = v27 + 1;
          *(_QWORD *)((char *)v29 + (char *)v57 - (char *)a3) |= v31;
        }
        ++v27;
        ++v29;
      }
      while ( v27 < v26 );
      v7 = v49;
      v33 = v28 == 0;
      v13 = (volatile LONG *)(a1 + 64);
      if ( v33 )
      {
LABEL_24:
        ExReleaseSpinLockExclusiveFromDpcLevel(v13);
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v52);
        if ( (unsigned __int8)CurrentIrql >= 2u )
        {
          if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
            KiRequestSoftwareInterrupt(CurrentPrcb, 2);
          return 0LL;
        }
        CurrentThread = (__int64)CurrentPrcb->CurrentThread;
        if ( CurrentPrcb->NextThread )
        {
          KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
          v21 = KeGetCurrentPrcb();
          v51 = 0;
          while ( 1 )
          {
            SchedulerAssist = v21->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( v21->NestingLevel <= 1u )
              {
                v44 = SchedulerAssist[5];
                SchedulerAssist[5] = v44 + 1;
                if ( v44 == -1 )
                  KiRemoveSystemWorkPriorityKick(v21);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
              break;
            v45 = v21->SchedulerAssist;
            if ( v45 )
            {
              if ( v21->NestingLevel <= 1u )
              {
                v46 = v45[5] - 1;
                v45[5] = v46;
                if ( !v46 )
                  KiRemoveSystemWorkPriorityKick(v21);
              }
            }
            do
              KeYieldProcessorEx(&v51);
            while ( CurrentPrcb->PrcbLock );
          }
          NextThread = (__int64)CurrentPrcb->NextThread;
          CurrentPrcb->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
          _enable();
          CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
          if ( *(_BYTE *)(NextThread + 388) == 1 )
            *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                          - *(_DWORD *)(NextThread + 436)
                                          + MEMORY[0xFFFFF78000000320];
          KiSetThreadState(NextThread, 2);
          *(_BYTE *)(CurrentThread + 643) = 32;
          *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
          KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v23);
          LOBYTE(v24) = CurrentIrql;
          if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v24) )
            goto LABEL_81;
          if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
            goto LABEL_38;
        }
        else
        {
          if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
            goto LABEL_81;
          if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
          {
LABEL_38:
            __writecr8(1uLL);
            *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
            KiDeliverApc(0, 0, 0LL);
LABEL_81:
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            {
              v48 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v48);
            }
            __writecr8((unsigned __int8)CurrentIrql);
            return 0LL;
          }
        }
        if ( KeGetCurrentIrql() >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v47);
        }
        goto LABEL_38;
      }
      v34 = v57[1];
      *(_OWORD *)v14 = v57[0];
      v35 = v57[2];
      *(_OWORD *)(a1 + 96) = v34;
      v36 = v57[3];
      *(_OWORD *)(a1 + 112) = v35;
      v37 = v57[4];
      *(_OWORD *)(a1 + 128) = v36;
      v38 = v57[5];
      *(_OWORD *)(a1 + 144) = v37;
      v39 = v57[6];
      *(_OWORD *)(a1 + 160) = v38;
      v40 = v57[8];
      *(_OWORD *)(a1 + 176) = v39;
      *(_OWORD *)(a1 + 192) = v57[7];
      v41 = v57[9];
      v42 = *(_QWORD *)&v57[10];
      *(_OWORD *)(a1 + 208) = v40;
      *(_OWORD *)(a1 + 224) = v41;
      *(_QWORD *)(a1 + 240) = v42;
    }
    else
    {
      v15 = 0;
      *(_OWORD *)v14 = *(_OWORD *)a3;
      *(_OWORD *)(a1 + 96) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(a1 + 112) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(a1 + 128) = *((_OWORD *)a3 + 3);
      *(_OWORD *)(a1 + 144) = *((_OWORD *)a3 + 4);
      *(_OWORD *)(a1 + 160) = *((_OWORD *)a3 + 5);
      *(_OWORD *)(a1 + 176) = *((_OWORD *)a3 + 6);
      *(_OWORD *)(a1 + 192) = *((_OWORD *)a3 + 7);
      *(_OWORD *)(a1 + 208) = *((_OWORD *)a3 + 8);
      *(_OWORD *)(a1 + 224) = *((_OWORD *)a3 + 9);
      *(_QWORD *)(a1 + 240) = *((_QWORD *)a3 + 20);
      if ( *a3 )
      {
        v16 = 0;
        do
        {
          if ( *(_QWORD *)&a3[4 * v15 + 4] )
          {
            KiSetIdealNodeProcessByGroup(a1, 0LL, v15);
            if ( !v16 )
            {
              v16 = 1;
              *(_WORD *)(a1 + 572) = *(_WORD *)(a1 + 2LL * v15 + 532);
            }
          }
          ++v15;
        }
        while ( v15 < *a3 );
        LOBYTE(CurrentIrql) = v53;
        v13 = (volatile LONG *)(a1 + 64);
        v7 = v49;
      }
    }
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      LOWORD(v55) = *((_WORD *)i - 100);
      v18 = &v54;
      v54 = *(_QWORD *)(a1 + 8LL * (unsigned __int16)v55 + 88);
      if ( !v54 )
        v18 = v56;
      KiSetAffinityThread((__int64)(i - 95), (__int64)&v52, v18);
    }
    if ( !v7 )
      *(_DWORD *)(a1 + 444) = v50;
    goto LABEL_24;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
  {
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return 3221225485LL;
}
