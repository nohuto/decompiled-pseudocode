/*
 * XREFs of KdExitDebugger @ 0x140916E88
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x140193F90 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x14028CCF0 (KdpReport.c)
 *     KiTpWriteMemory @ 0x14029C508 (KiTpWriteMemory.c)
 *     KdSendTraceData @ 0x140916FB4 (KdSendTraceData.c)
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 *     KdpCommandString @ 0x140919164 (KdpCommandString.c)
 *     KdpPrint @ 0x140919224 (KdpPrint.c)
 *     KdpPrompt @ 0x140919398 (KdpPrompt.c)
 *     KdpSymbol @ 0x140919500 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x14091A10C (KdpSetOwedBreakpoints.c)
 *     KdpCloseRemoteFile @ 0x14091A914 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x14091AA60 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x14091AC68 (KdpReadRemoteFile.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     VfIsVerifierEnabled @ 0x14013BAE0 (VfIsVerifierEnabled.c)
 *     ExQueueDebuggerWorker @ 0x14018D0F0 (ExQueueDebuggerWorker.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeRestoreSupervisorState @ 0x1402943D0 (KeRestoreSupervisorState.c)
 *     KeThawExecution @ 0x14029766C (KeThawExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x140926D20 (VfNotifyVerifierOfEvent.c)
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
  off_1403FF5F8[0]();
  KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_1404DEBA0);
  qword_1404DEBA0 = 0LL;
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
