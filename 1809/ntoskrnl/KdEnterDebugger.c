/*
 * XREFs of KdEnterDebugger @ 0x140916D40
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x140193F90 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x14028CCF0 (KdpReport.c)
 *     KiTpWriteMemory @ 0x14029C508 (KiTpWriteMemory.c)
 *     KdSendTraceData @ 0x140916FB4 (KdSendTraceData.c)
 *     KdpCommandString @ 0x140919164 (KdpCommandString.c)
 *     KdpPrint @ 0x140919224 (KdpPrint.c)
 *     KdpPrompt @ 0x140919398 (KdpPrompt.c)
 *     KdpSymbol @ 0x140919500 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x14091A10C (KdpSetOwedBreakpoints.c)
 *     KdpCloseRemoteFile @ 0x14091A914 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x14091AA60 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x14091AC68 (KdpReadRemoteFile.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x14013BAE0 (VfIsVerifierEnabled.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeSaveSupervisorState @ 0x140294468 (KeSaveSupervisorState.c)
 *     KeFreezeExecution @ 0x1402971B8 (KeFreezeExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x140926D20 (VfNotifyVerifierOfEvent.c)
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
  off_1403FF608[0]();
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  ExtendedSupervisorState = (__int64)CurrentPrcb->ExtendedSupervisorState;
  qword_1404DEBA0 = ~KdIgnoredSavingSupervisorXStateFeatures & (MEMORY[0xFFFFF780000005F0] | 0x100LL);
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
