/*
 * XREFs of PspExitProcess @ 0x140671BFC
 * Callers:
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PfpLogApplicationEvent @ 0x140096F98 (PfpLogApplicationEvent.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x1400E77FC (PspProcessUnbindVirtualizedTimers.c)
 *     ExCleanTimerResolutionRequest @ 0x14013D108 (ExCleanTimerResolutionRequest.c)
 *     PspCallProcessNotifyRoutines @ 0x1405EB524 (PspCallProcessNotifyRoutines.c)
 *     PsSetProcessTelemetryAppState @ 0x1406356F4 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceProcess @ 0x140690330 (EtwTraceProcess.c)
 *     DbgkFlushErrorPort @ 0x1406E404C (DbgkFlushErrorPort.c)
 *     PfSnEndProcessTrace @ 0x1406E6D0C (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PspExitProcess(char a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  void *v6; // rcx

  _InterlockedOr((volatile signed __int32 *)(a2 + 780), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState(a2, 3);
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess(a2);
    result = *(unsigned int *)(a2 + 1788);
    if ( (result & 1) == 0 || *(_QWORD *)(a2 + 1856) )
    {
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines((_QWORD *)a2, 0LL, 0);
      result = (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  v6 = *(void **)(a2 + 1120);
  if ( v6 )
  {
    if ( v6 == (void *)1 )
      goto LABEL_8;
    result = ObfDereferenceObject(v6);
  }
  *(_QWORD *)(a2 + 1120) = 1LL;
LABEL_8:
  if ( a1 )
  {
    if ( *(int *)(a2 + 780) < 0 )
      ExCleanTimerResolutionRequest((__int64)v6);
    DbgkFlushErrorPort(a2);
    PfpLogApplicationEvent(a2, 0LL, 1);
    if ( PfSnNumActiveTraces )
      PfSnEndProcessTrace(a2, 2LL);
    return PspProcessUnbindVirtualizedTimers(a2);
  }
  return result;
}
