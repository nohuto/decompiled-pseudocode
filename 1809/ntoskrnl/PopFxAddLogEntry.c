/*
 * XREFs of PopFxAddLogEntry @ 0x1400FE7E4
 * Callers:
 *     PopFxProcessWork @ 0x1400FE370 (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400FE744 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x1400FE8D4 (PopFxIdleWorker.c)
 *     PopDiagTraceFxDevicePowered @ 0x1401000E0 (PopDiagTraceFxDevicePowered.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140100148 (PopFxCompleteDevicePowerRequired.c)
 *     PoFxCompleteIdleCondition @ 0x140131EF0 (PoFxCompleteIdleCondition.c)
 *     PopDiagTraceIrpFinish @ 0x140171248 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14017169C (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpStart @ 0x140172D00 (PopDiagTraceIrpStart.c)
 *     PopFxAllocatePowerIrp @ 0x14017301C (PopFxAllocatePowerIrp.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1401770D0 (PopDiagTraceFxComponentIdleState.c)
 *     PoFxCompleteIdleState @ 0x1401774E0 (PoFxCompleteIdleState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140177540 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1401783C0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14018E198 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x1402D78B8 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402D79BC (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1402D809C (PopFxHandleDirectedPowerTransition.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402D8528 (PopFxIssueComponentPerfStateChanges.c)
 *     PopPluginNotifyIdleState @ 0x1402DA548 (PopPluginNotifyIdleState.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402E0578 (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x1402E0664 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1402E0750 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1402E0B50 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1402E0C38 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxTraceDeviceRegistration @ 0x1406DA374 (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140750DDC (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x140872AF8 (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTracePerfRegistration @ 0x140874D38 (PopFxTracePerfRegistration.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x1400FE8A0 (KeGetCurrentProcessorNumberEx.c)
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
