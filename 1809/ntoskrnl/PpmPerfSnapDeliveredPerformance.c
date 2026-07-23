/*
 * XREFs of PpmPerfSnapDeliveredPerformance @ 0x14010BAC0
 * Callers:
 *     PpmPerfAction @ 0x14010BA20 (PpmPerfAction.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 *     PpmSnapPerformanceAccumulation @ 0x14005BDC0 (PpmSnapPerformanceAccumulation.c)
 *     PpmConvertTime @ 0x1400A7C54 (PpmConvertTime.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1402E197C (PopDiagTraceIllegalProcessorThrottle.c)
 */

char __fastcall PpmPerfSnapDeliveredPerformance(struct _KPRCB *a1)
{
  unsigned __int8 v2; // r12
  _PROC_PERF_CHECK *PerfCheck; // rbx
  _PROC_PERF_CHECK_SNAP *p_CurrentSnap; // rsi
  char result; // al
  unsigned __int64 Time; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  _PROC_PERF_CONSTRAINT *PerfConstraint; // r12
  _PROC_PERF_DOMAIN *Domain; // r13
  void (__fastcall *GetFFHThrottleState)(unsigned __int64 *); // rax
  unsigned __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rcx
  __int16 Group; // [rsp+40h] [rbp-59h] BYREF
  int v18; // [rsp+48h] [rbp-51h] BYREF
  int v19; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int8 *p_GroupIndex; // [rsp+80h] [rbp-19h]
  __int64 v24; // [rsp+88h] [rbp-11h]
  int *v25; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+98h] [rbp-1h]
  unsigned __int64 *v27; // [rsp+A0h] [rbp+7h]
  __int64 v28; // [rsp+A8h] [rbp+Fh]
  int *v29; // [rsp+B0h] [rbp+17h]
  __int64 v30; // [rsp+B8h] [rbp+1Fh]

  v2 = a1 != KeGetCurrentPrcb();
  PerfCheck = a1->PowerState.PerfCheck;
  if ( !PerfCheck )
    return 1;
  p_CurrentSnap = &PerfCheck->CurrentSnap;
  result = PpmSnapPerformanceAccumulation((LARGE_INTEGER *)a1, 0, v2, 1, (LARGE_INTEGER *)&PerfCheck->CurrentSnap);
  if ( result )
  {
    Time = PerfCheck->LastDeliveredSnap.Time;
    if ( p_CurrentSnap->Time <= Time )
      return 0;
    v7 = p_CurrentSnap->Time - Time;
    v8 = PerfCheck->CurrentSnap.Active - PerfCheck->LastDeliveredSnap.Active;
    if ( v8 > v7 )
    {
      if ( v2 )
        return 0;
    }
    else if ( v2 )
    {
LABEL_15:
      if ( v8 )
      {
        v12 = (PerfCheck->CurrentSnap.PerformanceScaledActive - PerfCheck->LastDeliveredSnap.PerformanceScaledActive)
            / v8;
        if ( __PAIR64__(
               (PerfCheck->CurrentSnap.FrequencyScaledActive - PerfCheck->LastDeliveredSnap.FrequencyScaledActive) / v8,
               v12) != *(_QWORD *)&PerfCheck->LastDeliveredPerformance )
        {
          v19 = (PerfCheck->CurrentSnap.FrequencyScaledActive - PerfCheck->LastDeliveredSnap.FrequencyScaledActive) / v8;
          v18 = v12;
          if ( PpmEtwRegistered
            && PpmEtwHandle
            && (EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, 4u, 128LL)
             || *(_BYTE *)(v14 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v14 + 40) + 96LL, 4u, v13)) )
          {
            Group = a1->Group;
            v21 = PpmConvertTime(v7, PopQpcFrequency, 0xF4240uLL);
            *(_QWORD *)&UserData.Size = 2LL;
            v24 = 1LL;
            UserData.Ptr = (ULONGLONG)&Group;
            v26 = 4LL;
            p_GroupIndex = &a1->GroupIndex;
            v28 = 8LL;
            v25 = &v18;
            v27 = &v21;
            v29 = &v19;
            v30 = 4LL;
            EtwWriteEx(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
          }
        }
      }
      result = 1;
      *(_OWORD *)&PerfCheck->LastDeliveredSnap.Time = *(_OWORD *)&p_CurrentSnap->Time;
      *(_OWORD *)&PerfCheck->LastDeliveredSnap.Stall = *(_OWORD *)&PerfCheck->CurrentSnap.Stall;
      *(_OWORD *)&PerfCheck->LastDeliveredSnap.PerformanceScaledActive = *(_OWORD *)&PerfCheck->CurrentSnap.PerformanceScaledActive;
      *(_OWORD *)&PerfCheck->LastDeliveredSnap.CyclesActive = *(_OWORD *)&PerfCheck->CurrentSnap.CyclesActive;
      *(_OWORD *)PerfCheck->LastDeliveredSnap.TaggedThreadCycles = *(_OWORD *)PerfCheck->CurrentSnap.TaggedThreadCycles;
      *(_QWORD *)&PerfCheck->LastDeliveredSnap.ResponsivenessEvents = *(_QWORD *)&PerfCheck->CurrentSnap.ResponsivenessEvents;
      return result;
    }
    PerfConstraint = a1->PowerState.PerfConstraint;
    Domain = a1->PowerState.Domain;
    if ( PopProcessorThrottleLogInterval )
    {
      if ( Domain )
      {
        if ( PerfConstraint )
        {
          GetFFHThrottleState = Domain->GetFFHThrottleState;
          if ( GetFFHThrottleState )
          {
            if ( a1->PowerState.FFHThrottleStateInfo.EnableLogging )
            {
              GetFFHThrottleState(&v20);
              if ( PerfConstraint->Selection.SelectedPercent < Domain->MinPerfPercent )
              {
                a1->PowerState.FFHThrottleStateInfo.Initialized = 0;
              }
              else if ( a1->PowerState.FFHThrottleStateInfo.Initialized )
              {
                if ( a1->PowerState.FFHThrottleStateInfo.LastValue != v20 )
                {
                  v16 = a1->PowerState.FFHThrottleStateInfo.MismatchCount + 1;
                  a1->PowerState.FFHThrottleStateInfo.MismatchCount = v16;
                  if ( !((unsigned int)v16 % PopProcessorThrottleLogInterval) || (_DWORD)v16 == 1 )
                  {
                    LODWORD(v16) = KeGetPcr()->Prcb.Number;
                    PopDiagTraceIllegalProcessorThrottle(
                      v16,
                      v20,
                      &a1->PowerState.FFHThrottleStateInfo.LastLogTickCount);
                  }
                }
              }
              else
              {
                a1->PowerState.FFHThrottleStateInfo.Initialized = 1;
              }
              a1->PowerState.FFHThrottleStateInfo.LastValue = v20;
            }
          }
        }
      }
    }
    goto LABEL_15;
  }
  return result;
}
