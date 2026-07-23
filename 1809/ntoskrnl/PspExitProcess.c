/*
 * XREFs of PspExitProcess @ 0x140609E0C
 * Callers:
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x140090200 (PspProcessUnbindVirtualizedTimers.c)
 *     PfpLogApplicationEvent @ 0x1400D8518 (PfpLogApplicationEvent.c)
 *     ExCleanTimerResolutionRequest @ 0x14013F958 (ExCleanTimerResolutionRequest.c)
 *     PsSetProcessTelemetryAppState @ 0x1405B2974 (PsSetProcessTelemetryAppState.c)
 *     PspCallProcessNotifyRoutines @ 0x1405F5C14 (PspCallProcessNotifyRoutines.c)
 *     PfSnEndProcessTrace @ 0x140607950 (PfSnEndProcessTrace.c)
 *     DbgkFlushErrorPort @ 0x140608444 (DbgkFlushErrorPort.c)
 *     EtwTraceProcess @ 0x14066D6E8 (EtwTraceProcess.c)
 */

__int64 __fastcall PspExitProcess(char a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  void *v6; // rcx

  _InterlockedOr((volatile signed __int32 *)(a2 + 772), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState(a2, 3);
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess((PEPROCESS)a2);
    result = *(unsigned int *)(a2 + 1740);
    if ( (result & 1) == 0 || *(_QWORD *)(a2 + 1808) )
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
    if ( *(int *)(a2 + 772) < 0 )
      ExCleanTimerResolutionRequest((__int64)v6);
    DbgkFlushErrorPort(a2);
    PfpLogApplicationEvent(a2, 0LL, 1);
    if ( PfSnNumActiveTraces )
      PfSnEndProcessTrace(a2, 2, 0LL);
    return PspProcessUnbindVirtualizedTimers(a2);
  }
  return result;
}
