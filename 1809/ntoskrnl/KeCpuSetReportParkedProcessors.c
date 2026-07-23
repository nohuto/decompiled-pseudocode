/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x140114B14
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x140114A0C (KeSetSystemAllowedCpuSets.c)
 *     PpmParkReportMask @ 0x1401224A0 (PpmParkReportMask.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114E14 (KiUpdateGlobalCpuSetConfiguration.c)
 *     RtlWriteAcquireTickLock @ 0x140117AE0 (RtlWriteAcquireTickLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     memmove @ 0x1401D1640 (memmove.c)
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
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  char result; // al
  __int64 CurrentThread; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KPRCB *v22; // rbx
  _KTHREAD *NextThread; // rbx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r10
  __int64 v27; // r8
  __int64 v28; // r14
  __int64 v29; // r12
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rbp
  __int64 v34; // rcx
  unsigned __int64 v35; // r11
  __int64 v36; // rdx
  int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // r8
  _DWORD *SchedulerAssist; // rcx
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  struct _KPRCB *v44; // rcx
  struct _KPRCB *v45; // rcx
  struct _KPRCB *v46; // rcx
  unsigned int v48; // [rsp+24h] [rbp-104h]
  _QWORD *v49; // [rsp+28h] [rbp-100h] BYREF
  int v50; // [rsp+30h] [rbp-F8h]
  _DWORD v51[43]; // [rsp+34h] [rbp-F4h] BYREF

  v2 = (unsigned __int16)KiActiveGroups;
  v3 = a2;
  v48 = (unsigned __int16)KiActiveGroups;
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
      v8 = qword_1405426A8[v6];
      if ( !a1 )
        break;
      if ( v6 >= *a1 )
        v26 = 0LL;
      else
        v26 = *(_QWORD *)&a1[4 * v6 + 4];
      v9 = v8 ^ v26;
      *(_QWORD *)&v51[2 * v6 + 3] = v9;
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
    *(_QWORD *)&v51[2 * v6 + 3] = v9;
LABEL_7:
    v5 = 1;
    v10 = v8 & v9;
    v11 = v8 ^ v8 & v9;
    if ( (v8 & v9) != 0 )
    {
      do
      {
        _BitScanForward64(&v12, v10);
        v51[1] = v12;
        v10 ^= 1LL << v12;
        *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v12)) = 1LL << v12;
      }
      while ( v10 );
      v2 = v48;
    }
    if ( v11 )
    {
      v27 = qword_1405439D8[2 * v6];
      v28 = (v8 ^ v27) & -(__int64)((v27 & v9) != 0 && ((v8 ^ v27) & v9) != 0);
      v49 = (_QWORD *)v28;
      v29 = v27 & -(__int64)((v27 & v9) != 0 && ((v8 ^ v27) & v9) != 0);
      v30 = v8 ^ KiSystemAllowedCpuSets[2 * v6];
      v31 = v9 & v30;
      if ( v30 )
      {
        if ( v31 )
        {
          v32 = v11 & v30;
          v11 ^= v32;
          if ( v32 )
          {
            v33 = (unsigned __int64)v49;
            do
            {
              _BitScanForward64((unsigned __int64 *)&v34, v32);
              v32 &= ~(1LL << v34);
              v50 = v34;
              if ( _bittest64(&v29, (unsigned int)v34) )
              {
                v35 = v31 & v29;
                if ( (v31 & v29) == 0 )
                  v35 = v31;
              }
              else
              {
                v35 = v31;
                if ( (v31 & v33) != 0 )
                  v35 = v31 & v33;
              }
              *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)((v7 << 6) + v34)) = v35;
            }
            while ( v32 );
            v2 = v48;
            v28 = (__int64)v49;
          }
        }
      }
      if ( v11 )
      {
        v36 = v8 & ~v31;
        if ( (v36 & v9) == 0 )
          v36 = v8;
        v37 = v7 << 6;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v38, v11);
          v11 &= ~(1LL << v38);
          v50 = v38;
          if ( _bittest64(&v29, (unsigned int)v38) )
          {
            v39 = v36 & v29;
            if ( (v36 & v29 & v9) == 0 )
              v39 = v36;
          }
          else
          {
            v39 = v36;
            if ( (v36 & v28 & v9) != 0 )
              v39 = v36 & v28;
          }
          *((_QWORD *)KiCpuSetAffinitiesShadow + (unsigned int)(v37 + v38)) = v39;
        }
        while ( v11 );
      }
    }
    goto LABEL_11;
  }
LABEL_13:
  v49 = 0LL;
  if ( v5 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < v2; KiNonParkedCpuSets[v14] = *(_QWORD *)&v51[2 * v14 + 3] )
      v14 = i++;
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration(&v49);
  }
  KxReleaseSpinLock(&KiCpuSetLock);
  CurrentPrcb = KeGetCurrentPrcb();
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v49, v16, v17);
  if ( v3 < 2u )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v22 = KeGetCurrentPrcb();
      v51[0] = 0;
      while ( 1 )
      {
        SchedulerAssist = v22->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v41 = SchedulerAssist[5];
            SchedulerAssist[5] = v41 + 1;
            if ( v41 == -1 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v42 = v22->SchedulerAssist;
        if ( v42 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v43 = v42[5] - 1;
            v42[5] = v43;
            if ( !v43 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        do
          KeYieldProcessorEx(v51, v20, v21);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v3;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v24);
      LOBYTE(v25) = v3;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v25) )
        goto LABEL_20;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v44 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v44);
      }
    }
    else
    {
      if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
        goto LABEL_20;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v45);
      }
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
LABEL_20:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v46 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v46);
    }
    result = v3;
    __writecr8(v3);
    return result;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !result )
      return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  return result;
}
