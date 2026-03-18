/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x1400F9898
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x1400F9E04 (KeSetSystemAllowedCpuSets.c)
 *     PpmParkReportMask @ 0x1401239B0 (PpmParkReportMask.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400F9424 (KiUpdateGlobalCpuSetConfiguration.c)
 *     RtlWriteAcquireTickLock @ 0x1400F9DE0 (RtlWriteAcquireTickLock.c)
 *     KiSetThreadState @ 0x14013AC0C (KiSetThreadState.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 */

char __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1, unsigned __int8 a2)
{
  unsigned int v2; // ebp
  unsigned __int8 v3; // r14
  int v5; // r13d
  unsigned __int16 v6; // di
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int16 i; // dx
  __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  char result; // al
  __int64 CurrentThread; // rdi
  bool v18; // zf
  struct _KPRCB *v19; // rsi
  _KTHREAD *NextThread; // rsi
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 v25; // r14
  __int64 v26; // r12
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rbp
  __int64 v31; // rcx
  unsigned __int64 v32; // r11
  __int64 v33; // rdx
  int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // r8
  _DWORD *SchedulerAssist; // rcx
  int v38; // eax
  _DWORD *v39; // rcx
  int v40; // eax
  struct _KPRCB *v41; // rcx
  struct _KPRCB *v42; // rcx
  unsigned int v44; // [rsp+24h] [rbp-104h]
  _QWORD *v45; // [rsp+28h] [rbp-100h] BYREF
  int v46; // [rsp+30h] [rbp-F8h]
  _DWORD v47[43]; // [rsp+34h] [rbp-F4h] BYREF

  v2 = (unsigned __int16)KiActiveGroups;
  v3 = a2;
  v44 = (unsigned __int16)KiActiveGroups;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v5 = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = qword_140572748[v6];
      if ( !a1 )
        break;
      if ( v6 >= *a1 )
        v23 = 0LL;
      else
        v23 = *(_QWORD *)&a1[4 * v6 + 4];
      v9 = v8 ^ v23;
      *(_QWORD *)&v47[2 * v6 + 3] = v9;
      if ( KiNonParkedCpuSets[v6] != v9 )
        goto LABEL_7;
LABEL_11:
      v7 = ++v6;
      if ( v6 >= v2 )
      {
        v3 = a2;
        goto LABEL_13;
      }
    }
    v9 = KiNonParkedCpuSets[v6];
    *(_QWORD *)&v47[2 * v6 + 3] = v9;
LABEL_7:
    v5 = 1;
    v10 = v8 & v9;
    v11 = v8 ^ v8 & v9;
    if ( (v8 & v9) != 0 )
    {
      do
      {
        _BitScanForward64(&v12, v10);
        v47[1] = v12;
        v10 ^= 1LL << v12;
        *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v12)) = 1LL << v12;
      }
      while ( v10 );
      v2 = v44;
    }
    if ( v11 )
    {
      v24 = qword_140573908[2 * v6];
      v25 = (v8 ^ v24) & -(__int64)((v24 & v9) != 0 && ((v8 ^ v24) & v9) != 0);
      v45 = (_QWORD *)v25;
      v26 = v24 & -(__int64)((v24 & v9) != 0 && ((v8 ^ v24) & v9) != 0);
      v27 = v8 ^ KiSystemAllowedCpuSets[2 * v6];
      v28 = v9 & v27;
      if ( v27 )
      {
        if ( v28 )
        {
          v29 = v11 & v27;
          v11 ^= v29;
          if ( v29 )
          {
            v30 = (unsigned __int64)v45;
            do
            {
              _BitScanForward64((unsigned __int64 *)&v31, v29);
              v29 &= ~(1LL << v31);
              v46 = v31;
              if ( _bittest64(&v26, (unsigned int)v31) )
              {
                v32 = v28 & v26;
                if ( (v28 & v26) == 0 )
                  v32 = v28;
              }
              else
              {
                v32 = v28;
                if ( (v28 & v30) != 0 )
                  v32 = v28 & v30;
              }
              *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v31)) = v32;
            }
            while ( v29 );
            v2 = v44;
            v25 = (__int64)v45;
          }
        }
      }
      if ( v11 )
      {
        v33 = v8 & ~v28;
        if ( (v33 & v9) == 0 )
          v33 = v8;
        v34 = v7 << 6;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v35, v11);
          v11 &= ~(1LL << v35);
          v46 = v35;
          if ( _bittest64(&v26, (unsigned int)v35) )
          {
            v36 = v33 & v26;
            if ( (v33 & v26 & v9) == 0 )
              v36 = v33;
          }
          else
          {
            v36 = v33;
            if ( (v33 & v25 & v9) != 0 )
              v36 = v33 & v25;
          }
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v34 + v35)) = v36;
        }
        while ( v11 );
      }
    }
    goto LABEL_11;
  }
LABEL_13:
  v45 = 0LL;
  if ( v5 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < v2; KiNonParkedCpuSets[v14] = *(_QWORD *)&v47[2 * v14 + 3] )
      v14 = i++;
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration((__int64 *)&v45);
  }
  KxReleaseSpinLock(&KiCpuSetLock);
  CurrentPrcb = KeGetCurrentPrcb();
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v45);
  if ( v3 >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v19 = KeGetCurrentPrcb();
      v47[0] = 0;
      while ( 1 )
      {
        SchedulerAssist = v19->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v38 = SchedulerAssist[5];
            SchedulerAssist[5] = v38 + 1;
            if ( v38 == -1 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v39 = v19->SchedulerAssist;
        if ( v39 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v40 = v39[5] - 1;
            v39[5] = v40;
            if ( !v40 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        do
          KeYieldProcessorEx(v47);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      KiSetThreadState(NextThread, 2LL);
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v3;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v21);
      LOBYTE(v22) = v3;
      v18 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v22) == 0;
    }
    else
    {
      v18 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v18 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v41);
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v42 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v42);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
