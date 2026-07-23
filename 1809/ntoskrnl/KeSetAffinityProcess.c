/*
 * XREFs of KeSetAffinityProcess @ 0x1401905F4
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x14057C260 (KiInitializeDynamicProcessorDpc.c)
 *     PspSetProcessAffinitySafe @ 0x14088A2B4 (PspSetProcessAffinitySafe.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiSetIdealNodeProcessByGroup @ 0x1400D8A84 (KiSetIdealNodeProcessByGroup.c)
 *     KiSetAffinityThread @ 0x1401154EC (KiSetAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x14012E300 (KeFirstGroupAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall KeSetAffinityProcess(__int64 a1, char a2, unsigned __int16 *a3)
{
  char v6; // r14
  unsigned int v7; // edx
  signed __int32 v8; // r13d
  unsigned int v9; // eax
  _QWORD *v10; // rcx
  signed __int32 v11; // r13d
  __int64 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  volatile LONG *v14; // r15
  unsigned __int16 *v15; // rcx
  unsigned __int16 v16; // r14
  char v17; // r12
  _QWORD *i; // rsi
  __int64 *v19; // r8
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  __int64 CurrentThread; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _KPRCB *v28; // rbx
  _KTHREAD *NextThread; // rbx
  __int64 v30; // r8
  __int64 v31; // r8
  struct _KPRCB *v32; // rcx
  unsigned __int16 v33; // r14
  unsigned __int16 v34; // r8
  char v35; // r12
  _QWORD *v36; // r9
  __int64 v37; // r11
  __int64 v38; // rdx
  __int64 v39; // rax
  bool v40; // zf
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int64 v49; // rax
  _DWORD *SchedulerAssist; // rcx
  int v51; // eax
  _DWORD *v52; // rcx
  int v53; // eax
  struct _KPRCB *v54; // rcx
  struct _KPRCB *v55; // rcx
  char v56; // [rsp+20h] [rbp-E0h]
  signed __int32 v57; // [rsp+24h] [rbp-DCh] BYREF
  int v58; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v59; // [rsp+30h] [rbp-D0h] BYREF
  struct _KPRCB *v60; // [rsp+38h] [rbp-C8h]
  __int64 v61; // [rsp+40h] [rbp-C0h]
  __int64 v62; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+50h] [rbp-B0h]
  _QWORD v64[3]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v65[11]; // [rsp+70h] [rbp-90h] BYREF

  LODWORD(v65[0]) = 1310721;
  v64[0] = 0LL;
  v64[1] = 0LL;
  v56 = 0;
  v59 = 0LL;
  v6 = 0;
  memset((char *)v65 + 4, 0, 0xA4uLL);
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
      v6 = 1;
    else
      v56 = 1;
  }
  KeFirstGroupAffinityEx(v64, a3);
  v7 = *a3;
  v8 = 0;
  v57 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = a3 + 4;
    do
    {
      if ( *v10 )
        _bittestandset(&v57, v9);
      ++v9;
      ++v10;
    }
    while ( v9 < v7 );
    v8 = v57;
  }
  v11 = v8 << 10;
  v62 = 0LL;
  v63 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v61 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = (volatile LONG *)(a1 + 64);
  v60 = CurrentPrcb;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( !v6 || (((*(_DWORD *)(a1 + 440) & 0x3FFFFC00) - 1) & *(_DWORD *)(a1 + 440) & 0x3FFFFC00) == 0 )
  {
    v15 = (unsigned __int16 *)(a1 + 80);
    if ( v56 )
    {
      v33 = *v15;
      v34 = 0;
      if ( !*v15 )
        goto LABEL_26;
      v35 = 0;
      v36 = a3 + 4;
      v37 = a1 - (_QWORD)a3;
      do
      {
        v38 = *(_QWORD *)((char *)v36 + v37 + 80);
        if ( v38 )
        {
          v62 = *(_QWORD *)((char *)v36 + v37 + 80);
          if ( v34 < *a3 )
          {
            v39 = *v36 | v38;
            if ( v39 != v38 )
            {
              v38 |= *v36;
              v62 = v39;
              v35 = 1;
            }
          }
          if ( LOWORD(v65[0]) <= v34 )
            LOWORD(v65[0]) = v34 + 1;
          *(_QWORD *)((char *)v36 + (char *)v65 - (char *)a3) |= v38;
        }
        ++v34;
        ++v36;
      }
      while ( v34 < v33 );
      CurrentPrcb = v60;
      v40 = v35 == 0;
      LOBYTE(CurrentIrql) = v61;
      if ( v40 )
      {
LABEL_26:
        ExReleaseSpinLockExclusiveFromDpcLevel(v14);
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v59, v22, v23);
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
          v28 = KeGetCurrentPrcb();
          v58 = 0;
          while ( 1 )
          {
            SchedulerAssist = v28->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( v28->NestingLevel <= 1u )
              {
                v51 = SchedulerAssist[5];
                SchedulerAssist[5] = v51 + 1;
                if ( v51 == -1 )
                  KiRemoveSystemWorkPriorityKick(v28);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
              break;
            v52 = v28->SchedulerAssist;
            if ( v52 )
            {
              if ( v28->NestingLevel <= 1u )
              {
                v53 = v52[5] - 1;
                v52[5] = v53;
                if ( !v53 )
                  KiRemoveSystemWorkPriorityKick(v28);
              }
            }
            do
              KeYieldProcessorEx(&v58, v26, v27);
            while ( CurrentPrcb->PrcbLock );
          }
          NextThread = CurrentPrcb->NextThread;
          CurrentPrcb->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
          _enable();
          KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
          *(_BYTE *)(CurrentThread + 643) = 32;
          *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
          KiQueueReadyThread(CurrentPrcb, CurrentThread, v30);
          LOBYTE(v31) = CurrentIrql;
          if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v31) )
            goto LABEL_82;
          if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
            goto LABEL_81;
        }
        else
        {
          if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
          {
LABEL_82:
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
            {
              v55 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v55->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v55);
            }
            __writecr8((unsigned __int8)CurrentIrql);
            return 0LL;
          }
          if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
          {
LABEL_81:
            __writecr8(1uLL);
            *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
            KiDeliverApc(0, 0, 0LL);
            goto LABEL_82;
          }
        }
        v54 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v54->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v54);
        goto LABEL_81;
      }
      v41 = v65[1];
      *(_OWORD *)v15 = v65[0];
      v42 = v65[2];
      *(_OWORD *)(a1 + 96) = v41;
      v43 = v65[3];
      *(_OWORD *)(a1 + 112) = v42;
      v44 = v65[4];
      *(_OWORD *)(a1 + 128) = v43;
      v45 = v65[5];
      *(_OWORD *)(a1 + 144) = v44;
      v46 = v65[6];
      *(_OWORD *)(a1 + 160) = v45;
      v47 = v65[8];
      *(_OWORD *)(a1 + 176) = v46;
      *(_OWORD *)(a1 + 192) = v65[7];
      v48 = v65[9];
      v49 = *(_QWORD *)&v65[10];
      *(_OWORD *)(a1 + 208) = v47;
      *(_OWORD *)(a1 + 224) = v48;
      *(_QWORD *)(a1 + 240) = v49;
    }
    else
    {
      v16 = 0;
      *(_OWORD *)v15 = *(_OWORD *)a3;
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
        v17 = 0;
        do
        {
          if ( *(_QWORD *)&a3[4 * v16 + 4] )
          {
            KiSetIdealNodeProcessByGroup(a1, 0LL, v16);
            if ( !v17 )
            {
              v17 = 1;
              *(_WORD *)(a1 + 568) = *(_WORD *)(a1 + 2LL * v16 + 528);
            }
          }
          ++v16;
        }
        while ( v16 < *a3 );
        CurrentPrcb = v60;
        v14 = (volatile LONG *)(a1 + 64);
        LOBYTE(CurrentIrql) = v61;
      }
    }
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      LOWORD(v63) = *((_WORD *)i - 100);
      v19 = &v62;
      v62 = *(_QWORD *)(a1 + 8LL * (unsigned __int16)v63 + 88);
      if ( !v62 )
        v19 = v64;
      KiSetAffinityThread((__int64)(i - 95), (__int64)&v59, (__int64)v19);
    }
    if ( !v56 )
    {
      _m_prefetchw((const void *)(a1 + 440));
      v20 = *(_DWORD *)(a1 + 440);
      do
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 440), v11 | v20 & 0xC00003FF, v20);
      }
      while ( v21 != v20 );
    }
    goto LABEL_26;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
  {
    v32 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v32);
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return 3221225485LL;
}
