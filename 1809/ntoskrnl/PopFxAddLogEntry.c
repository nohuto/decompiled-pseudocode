/*
 * XREFs of PopFxAddLogEntry @ 0x1400FE884
 * Callers:
 *     PopFxProcessWork @ 0x1400FE410 (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400FE7E4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x1400FE974 (PopFxIdleWorker.c)
 *     PopDiagTraceFxDevicePowered @ 0x140100180 (PopDiagTraceFxDevicePowered.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1401001E8 (PopFxCompleteDevicePowerRequired.c)
 *     PoFxCompleteIdleCondition @ 0x140131FE0 (PoFxCompleteIdleCondition.c)
 *     PopDiagTraceIrpFinish @ 0x140171368 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1401717BC (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpStart @ 0x140172E20 (PopDiagTraceIrpStart.c)
 *     PopFxAllocatePowerIrp @ 0x14017313C (PopFxAllocatePowerIrp.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1401771F0 (PopDiagTraceFxComponentIdleState.c)
 *     PoFxCompleteIdleState @ 0x140177600 (PoFxCompleteIdleState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140177660 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1401784E0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14018E2F8 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x1402D7BA8 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402D7CAC (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1402D838C (PopFxHandleDirectedPowerTransition.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402D8818 (PopFxIssueComponentPerfStateChanges.c)
 *     PopPluginNotifyIdleState @ 0x1402DA838 (PopPluginNotifyIdleState.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402E0868 (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x1402E0954 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1402E0A40 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1402E0E40 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1402E0F28 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxTraceDeviceRegistration @ 0x1406DB5F4 (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140751FAC (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x140873D38 (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTracePerfRegistration @ 0x140875F78 (PopFxTracePerfRegistration.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x1400FE940 (KeGetCurrentProcessorNumberEx.c)
 */

void __fastcall PopFxAddLogEntry(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdi

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      v7 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 840), 1u) % *(_DWORD *)(v4 + 824);
      v8 = *(_QWORD *)(v4 + 832);
      v9 = 3 * v7;
      *(_QWORD *)(v8 + 8 * v9) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v8 + 8 * v9 + 8) = a3;
      *(_BYTE *)(v8 + 8 * v9 + 9) = a2;
      *(_WORD *)(v8 + 8 * v9 + 10) = KeGetCurrentProcessorNumberEx(0LL);
      *(_WORD *)(v8 + 8 * v9 + 12) = KeGetCurrentThread()[1].CycleTime;
      *(_WORD *)(v8 + 8 * v9 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_QWORD *)(v8 + 8 * v9 + 16) = a4;
    }
  }
}
