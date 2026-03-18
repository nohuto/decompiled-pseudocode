/*
 * XREFs of PpmCheckSnapAllDeliveredPerformance @ 0x140035C00
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14015C1C0 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     PpmConvertTime @ 0x140004EB4 (PpmConvertTime.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400358F0 (PpmSnapPerformanceAccumulation.c)
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x140036AB0 (EtwpLevelKeywordEnabled.c)
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x140117F64 (PpmPerfCheckForIllegalProcessorThrottle.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

char PpmCheckSnapAllDeliveredPerformance()
{
  unsigned __int64 v0; // rdx
  __int64 v1; // r15
  struct _KPRCB *v2; // rdi
  _PROC_PERF_CHECK *PerfCheck; // rbx
  unsigned __int8 v4; // r14
  _PROC_PERF_CHECK_SNAP *p_CurrentSnap; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 Time; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v17; // r8d
  __int64 v18; // rcx
  int v19; // r8d
  unsigned __int64 *v20; // r9
  __int64 v21; // r10
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int16 Group; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v29; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v30; // [rsp+50h] [rbp-B0h]
  unsigned __int16 v31; // [rsp+58h] [rbp-A8h]
  int v32; // [rsp+5Ah] [rbp-A6h]
  __int16 v33; // [rsp+5Eh] [rbp-A2h]
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v35[4]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v37[22]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int8 *p_GroupIndex; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  int *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]
  _DWORD *v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]

  memset(v37, 0, 0xA8uLL);
  v32 = 0;
  v33 = 0;
  KeCopyAffinityEx(v37, &PpmCheckRegistered);
  v30 = v37[1];
  v29 = v37;
  v31 = 0;
  while ( v30 )
  {
LABEL_3:
    _BitScanForward64(&v0, v30);
    v35[2] = v0;
    v30 &= ~(1LL << v0);
    v1 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v31 + (unsigned __int8)v0];
    if ( (unsigned int)v1 >= (unsigned int)KeNumberProcessors_0 )
    {
      v2 = 0LL;
    }
    else
    {
      _mm_lfence();
      v2 = (struct _KPRCB *)KiProcessorBlock[v1];
    }
    PerfCheck = v2->PowerState.PerfCheck;
    v4 = v2 != KeGetCurrentPrcb();
    if ( !PerfCheck )
      goto LABEL_20;
    p_CurrentSnap = &PerfCheck->CurrentSnap;
    if ( PpmSnapPerformanceAccumulation((__int64)v2, 0, v4, 1, (LARGE_INTEGER *)&PerfCheck->CurrentSnap) )
    {
      Time = PerfCheck->LastDeliveredSnap.Time;
      if ( p_CurrentSnap->Time > Time )
      {
        v9 = p_CurrentSnap->Time - Time;
        v10 = PerfCheck->CurrentSnap.Active - PerfCheck->LastDeliveredSnap.Active;
        if ( v10 <= v9 )
        {
          if ( v4 )
            goto LABEL_10;
          goto LABEL_34;
        }
        if ( !v4 )
        {
LABEL_34:
          PpmPerfCheckForIllegalProcessorThrottle(v2, v6, v7, 0x140000000uLL);
LABEL_10:
          if ( v10 )
          {
            v11 = (PerfCheck->CurrentSnap.PerformanceScaledActive - PerfCheck->LastDeliveredSnap.PerformanceScaledActive)
                / v10;
            v12 = (PerfCheck->CurrentSnap.FrequencyScaledActive - PerfCheck->LastDeliveredSnap.FrequencyScaledActive)
                % v10;
            if ( __PAIR64__(
                   (PerfCheck->CurrentSnap.FrequencyScaledActive - PerfCheck->LastDeliveredSnap.FrequencyScaledActive)
                 / v10,
                   v11) != *(_QWORD *)&PerfCheck->LastDeliveredPerformance )
            {
              v35[0] = (PerfCheck->CurrentSnap.FrequencyScaledActive - PerfCheck->LastDeliveredSnap.FrequencyScaledActive)
                     / v10;
              v34 = v11;
              if ( PpmEtwRegistered )
              {
                if ( PpmEtwHandle )
                {
                  LOBYTE(v12) = 4;
                  if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, v12, 128LL)
                    || *(_BYTE *)(v15 + 101)
                    && (LOBYTE(v13) = 4, (unsigned __int8)EtwpLevelKeywordEnabled(
                                                            *(_QWORD *)(v15 + 40) + 96LL,
                                                            v13,
                                                            v14)) )
                  {
                    Group = v2->Group;
                    v36 = PpmConvertTime(v9, PopQpcFrequency, 0xF4240uLL);
                    *(_QWORD *)&UserData.Size = 2LL;
                    UserData.Ptr = (ULONGLONG)&Group;
                    v40 = 1LL;
                    p_GroupIndex = &v2->GroupIndex;
                    v41 = &v34;
                    v43 = &v36;
                    v45 = v35;
                    v42 = 4LL;
                    v44 = 8LL;
                    v46 = 4LL;
                    EtwWriteEx(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
                  }
                }
              }
            }
          }
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.Time = *(_OWORD *)&p_CurrentSnap->Time;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.Stall = *(_OWORD *)&PerfCheck->CurrentSnap.Stall;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.PerformanceScaledActive = *(_OWORD *)&PerfCheck->CurrentSnap.PerformanceScaledActive;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.CyclesActive = *(_OWORD *)&PerfCheck->CurrentSnap.CyclesActive;
          *(_OWORD *)PerfCheck->LastDeliveredSnap.TaggedThreadCycles = *(_OWORD *)PerfCheck->CurrentSnap.TaggedThreadCycles;
          *(_QWORD *)&PerfCheck->LastDeliveredSnap.ResponsivenessEvents = *(_QWORD *)&PerfCheck->CurrentSnap.ResponsivenessEvents;
LABEL_20:
          v17 = KiProcessorIndexToNumberMappingTable[v1];
          v18 = v17 >> 6;
          if ( LOWORD(v37[0]) > (unsigned int)v18 )
            v37[v18 + 1] &= ~(1LL << (v17 & 0x3F));
        }
      }
    }
  }
  while ( ++v31 < (unsigned int)LOWORD(v37[0]) )
  {
    v30 = v37[v31 + 1];
    if ( v30 )
      goto LABEL_3;
  }
  v19 = 0;
  if ( LOWORD(v37[0]) )
  {
    v20 = &v37[1];
    v21 = LOWORD(v37[0]);
    do
    {
      v22 = *v20++;
      v19 += (unsigned int)((0x101010101010101LL
                           * ((((v22 - ((v22 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v22 - ((v22 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v22 - ((v22 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v22 - ((v22 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v21;
    }
    while ( v21 );
  }
  PpmCheckCount = v19;
  if ( !v19 )
    return 1;
  v23 = v37[1];
  v31 = 0;
  while ( v23 )
  {
LABEL_29:
    _BitScanForward64(&v24, v23);
    v35[3] = v24;
    v30 = v23 & ~(1LL << v24);
    v25 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v31 + (unsigned __int8)v24];
    if ( (unsigned int)v25 >= (unsigned int)KeNumberProcessors_0 )
      v26 = 0LL;
    else
      v26 = KiProcessorBlock[v25];
    _m_prefetchw((const void *)(v26 + 24144));
    if ( !_InterlockedOr((volatile signed __int32 *)(v26 + 24144), 1u) )
      KiInsertQueueDpc(v26 + 24080, 0);
    v23 = v30;
  }
  while ( ++v31 < (unsigned int)LOWORD(v37[0]) )
  {
    v23 = v37[v31 + 1];
    v30 = v23;
    if ( v23 )
      goto LABEL_29;
  }
  return 0;
}
