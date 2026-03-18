/*
 * XREFs of PspExitProcess @ 0x140652A2C
 * Callers:
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x1400C8558 (PspProcessUnbindVirtualizedTimers.c)
 *     PfpLogApplicationEvent @ 0x1400D42B8 (PfpLogApplicationEvent.c)
 *     ExCleanTimerResolutionRequest @ 0x14013D618 (ExCleanTimerResolutionRequest.c)
 *     PspCallProcessNotifyRoutines @ 0x1405EBCF4 (PspCallProcessNotifyRoutines.c)
 *     PsSetProcessTelemetryAppState @ 0x140638944 (PsSetProcessTelemetryAppState.c)
 *     DbgkFlushErrorPort @ 0x140652D10 (DbgkFlushErrorPort.c)
 *     PfSnEndProcessTrace @ 0x14066E9E4 (PfSnEndProcessTrace.c)
 *     EtwTraceProcess @ 0x1406838A0 (EtwTraceProcess.c)
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
