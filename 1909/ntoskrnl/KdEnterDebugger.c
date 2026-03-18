/*
 * XREFs of KdEnterDebugger @ 0x140954648
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x140182620 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x1402A2900 (KdpReport.c)
 *     KiTpWriteMemory @ 0x1402AD7A0 (KiTpWriteMemory.c)
 *     KdpCloseRemoteFile @ 0x140953F80 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x1409541F4 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x14095441C (KdpReadRemoteFile.c)
 *     KdSendTraceData @ 0x1409548BC (KdSendTraceData.c)
 *     KdpCommandString @ 0x140956BC4 (KdpCommandString.c)
 *     KdpPrint @ 0x140956C84 (KdpPrint.c)
 *     KdpPrompt @ 0x140956DFC (KdpPrompt.c)
 *     KdpSymbol @ 0x140956F70 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x140957B74 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x14013DB34 (VfIsVerifierEnabled.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KeSaveSupervisorState @ 0x1402AA9B8 (KeSaveSupervisorState.c)
 *     KeFreezeExecution @ 0x1402ADB80 (KeFreezeExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1409641B0 (VfNotifyVerifierOfEvent.c)
 */

bool __fastcall KdEnterDebugger(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // bp
  bool v4; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 Number; // rdi
  __int64 ExtendedSupervisorState; // rcx
  unsigned int *v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rax
  bool result; // al

  v2 = 0;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(3LL);
  if ( a1 )
  {
    KdTimerStop = __rdtsc();
    KdTimerDifference = KdTimerStop - KdTimerStart;
  }
  else
  {
    KdTimerStop = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v4 = KeFreezeExecution();
  off_140424608[0]();
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  ExtendedSupervisorState = (__int64)CurrentPrcb->ExtendedSupervisorState;
  qword_14050AEE8 = ~KdIgnoredSavingSupervisorXStateFeatures & (MEMORY[0xFFFFF780000005F0] | 0x100LL);
  KeSaveSupervisorState(
    ExtendedSupervisorState,
    ~KdIgnoredSavingSupervisorXStateFeatures & (MEMORY[0xFFFFF780000005F0] | 0x100LL));
  if ( (KiBugCheckActive & 3) == 0 || (unsigned int)KiBugCheckActive >> 4 != (_DWORD)Number )
    CurrentPrcb->DebuggerSavedIRQL = CurrentIrql;
  v8 = (unsigned int *)KdLogBuffer[Number];
  if ( v8 )
  {
    v9 = (unsigned __int64 *)&v8[4 * *v8 + 4];
    v10 = __rdtsc();
    *v9 = ((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10;
    v9[1] = (4 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u;
  }
  ++KdDebuggerEnteredCount;
  result = v4;
  LOBYTE(v2) = KdPortLocked == 0;
  KdDebuggerEnteredWithoutLock += v2;
  KdEnteredDebugger = 1;
  return result;
}
