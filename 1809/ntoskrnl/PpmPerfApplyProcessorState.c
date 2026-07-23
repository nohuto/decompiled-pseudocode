/*
 * XREFs of PpmPerfApplyProcessorState @ 0x14017547C
 * Callers:
 *     PpmPerfAction @ 0x14010BA20 (PpmPerfAction.c)
 *     PpmPerfApplyProcessorStates @ 0x140175290 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x14005FA00 (PpmUpdatePerformanceFeedback.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     PpmContinueActiveTimeAccumulation @ 0x1400A5F8C (PpmContinueActiveTimeAccumulation.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1401755E0 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmEventTraceExpectedUtility @ 0x1401758B0 (PpmEventTraceExpectedUtility.c)
 *     PpmScaleIdleStateValues @ 0x140175928 (PpmScaleIdleStateValues.c)
 *     PpmEventProcessorPerfStateChange @ 0x14017594C (PpmEventProcessorPerfStateChange.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PpmGetIdleGenerationCounter @ 0x1402D41C8 (PpmGetIdleGenerationCounter.c)
 */

char __fastcall PpmPerfApplyProcessorState(struct _KPRCB *a1, char a2)
{
  _PROC_PERF_CONSTRAINT *PerfConstraint; // rdi
  _PROC_PERF_DOMAIN *Domain; // rsi
  char v6; // r12
  struct _KPRCB *Master; // rcx
  char v8; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  KSPIN_LOCK *p_QosUpdateLock; // r15
  bool v14; // bp
  char updated; // di
  __int64 v16; // r8
  __int64 v17; // r9
  void (__fastcall *DomainPerfControlHandler)(unsigned __int64, _PERF_CONTROL_STATE_SELECTION *, unsigned __int8, unsigned __int8); // rax
  __int64 v20; // rbp
  __int16 v21; // [rsp+60h] [rbp-8h]
  _PROC_PERF_CONSTRAINT *v22; // [rsp+70h] [rbp+8h]

  PerfConstraint = a1->PowerState.PerfConstraint;
  Domain = a1->PowerState.Domain;
  v22 = PerfConstraint;
  v6 = 1;
  Master = Domain->Master;
  if ( a1 == Master || (v8 = 0, Domain->InitiateAllProcessors) )
    v8 = 1;
  if ( Domain->Coordination != 0xFD && a2 )
    v8 = 1;
  if ( a1 != KeGetCurrentPrcb() && (a1 == Master || v8 && Domain->AffinitizeControl) )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( KeGetCurrentPrcb() != a1 )
  {
    v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PpmGetIdleGenerationCounter)(
            a1,
            (LARGE_INTEGER)PerformanceCounter.QuadPart);
    if ( v20 )
    {
      updated = PpmUpdatePerformanceFeedback((__int64)a1, 0, 1, 0, 0LL);
      if ( !updated )
      {
LABEL_28:
        if ( !updated )
          return updated;
        PerfConstraint = v22;
        goto LABEL_10;
      }
      if ( v20 == PpmGetIdleGenerationCounter(a1, v11) )
      {
        updated = 1;
        goto LABEL_28;
      }
    }
    return 0;
  }
  PpmContinueActiveTimeAccumulation((__int64)a1, PerformanceCounter.QuadPart, v10.QuadPart);
LABEL_10:
  p_QosUpdateLock = &PerfConstraint->QosUpdateLock;
  if ( PerfConstraint->UseQosUpdateLock )
  {
    _disable();
    v14 = (v21 & 0x200) != 0;
    KxAcquireSpinLock(&PerfConstraint->QosUpdateLock);
  }
  else
  {
    v6 = 0;
    v14 = 0;
  }
  LOBYTE(v12) = a2;
  LOBYTE(v11) = v8;
  updated = PpmPerfArbitratorApplyProcessorState(a1, v11, v12);
  if ( v6 )
  {
    KxReleaseSpinLock(p_QosUpdateLock);
    if ( v14 )
      _enable();
  }
  if ( updated )
  {
    if ( a1 == Domain->Master )
    {
      DomainPerfControlHandler = Domain->DomainPerfControlHandler;
      if ( DomainPerfControlHandler )
      {
        LOBYTE(v17) = a2;
        LOBYTE(v16) = v8;
        DomainPerfControlHandler(Domain->DomainContext, Domain->QosSelection, v16, v17);
      }
    }
    if ( !a2 )
    {
      PpmEventProcessorPerfStateChange(a1);
      a1->PowerState.GuaranteedPerformancePercent = Domain->GuaranteedPercent;
      PpmScaleIdleStateValues(&a1->PowerState);
      PpmEventTraceExpectedUtility(a1);
    }
  }
  return updated;
}
