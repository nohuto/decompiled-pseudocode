/*
 * XREFs of PopFxAddLogEntry @ 0x1400B1094
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x1400B0564 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x1400B08C0 (PopDiagTraceFxDevicePowered.c)
 *     PopFxProcessWork @ 0x1400B0C20 (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400B0FF4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x1400B1184 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x140132510 (PoFxCompleteIdleCondition.c)
 *     PopDiagTraceIrpFinish @ 0x140172338 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpStart @ 0x140173718 (PopDiagTraceIrpStart.c)
 *     PopFxAllocatePowerIrp @ 0x140173A60 (PopFxAllocatePowerIrp.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14017AE3C (PopDiagTraceFxDevicePowerState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140180950 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140180DE0 (PopDiagTraceFxComponentIdleState.c)
 *     PoFxCompleteIdleState @ 0x140180EE0 (PoFxCompleteIdleState.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140181930 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140198378 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x1402F2C08 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402F2D0C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1402F343C (PopFxHandleDirectedPowerTransition.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402F3AE4 (PopFxIssueComponentPerfStateChanges.c)
 *     PopPluginNotifyIdleState @ 0x1402F6080 (PopPluginNotifyIdleState.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402FD754 (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x1402FD840 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1402FD92C (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1402FDD40 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1402FDE44 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxTraceDeviceRegistration @ 0x14071A4AC (PopFxTraceDeviceRegistration.c)
 *     PopFxUnregisterDevice @ 0x14076EA3C (PopFxUnregisterDevice.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140776454 (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopFxTracePerfRegistration @ 0x1408B1AA8 (PopFxTracePerfRegistration.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x1400B1150 (KeGetCurrentProcessorNumberEx.c)
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
      v7 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 848), 1u) % *(_DWORD *)(v4 + 832);
      v8 = *(_QWORD *)(v4 + 840);
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
