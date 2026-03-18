/*
 * XREFs of KdExitDebugger @ 0x140954790
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x140181F30 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x1402A2BA0 (KdpReport.c)
 *     KiTpWriteMemory @ 0x1402ADA40 (KiTpWriteMemory.c)
 *     KdpCloseRemoteFile @ 0x140953F80 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x1409541F4 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x14095441C (KdpReadRemoteFile.c)
 *     KdSendTraceData @ 0x1409548BC (KdSendTraceData.c)
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 *     KdpCommandString @ 0x140956BC4 (KdpCommandString.c)
 *     KdpPrint @ 0x140956C84 (KdpPrint.c)
 *     KdpPrompt @ 0x140956DFC (KdpPrompt.c)
 *     KdpSymbol @ 0x140956F70 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x140957B74 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     VfIsVerifierEnabled @ 0x14013D624 (VfIsVerifierEnabled.c)
 *     ExQueueDebuggerWorker @ 0x14019717C (ExQueueDebuggerWorker.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     KeRestoreSupervisorState @ 0x1402AABC0 (KeRestoreSupervisorState.c)
 *     KeThawExecution @ 0x1402AE2FC (KeThawExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1409641B0 (VfNotifyVerifierOfEvent.c)
 */

__int64 __fastcall KdExitDebugger(char a1)
{
  __int64 v1; // rax
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 result; // rax

  KdEnteredDebugger = 0;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = (_DWORD *)KdLogBuffer[v1];
  if ( v3 )
  {
    v4 = (unsigned int)*v3;
    v5 = __rdtsc();
    *(_QWORD *)&v3[4 * v4 + 6] = v3[4 * v4 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u | ((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - *(_QWORD *)&v3[4 * v4 + 4]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v4 == 254 )
      *v3 = 0;
    else
      *v3 = v4 + 1;
  }
  off_1404245F8[0]();
  KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_14050B1A8);
  qword_14050B1A8 = 0LL;
  KeThawExecution(a1);
  if ( KdTimerStop )
    KdTimerStart = __rdtsc();
  else
    KdTimerStart = 0LL;
  if ( !PoHiberInProgress && (KiBugCheckActive & 3) == 0 )
  {
    if ( !_InterlockedExchange(&KdpTimeSlipPending, 2) )
      KeInsertQueueDpc(&KdpTimeSlipDpc, 0LL, 0LL);
    ExQueueDebuggerWorker();
  }
  result = VfIsVerifierEnabled();
  if ( (_DWORD)result )
    return VfNotifyVerifierOfEvent(4LL);
  return result;
}
