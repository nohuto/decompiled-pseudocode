/*
 * XREFs of PopFxAddLogEntry @ 0x1400E1184
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x1400E0654 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x1400E09B0 (PopDiagTraceFxDevicePowered.c)
 *     PopFxProcessWork @ 0x1400E0D10 (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400E10E4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x1400E1274 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x140133000 (PoFxCompleteIdleCondition.c)
 *     PopDiagTraceIrpFinish @ 0x140172A68 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpStart @ 0x140173E48 (PopDiagTraceIrpStart.c)
 *     PopFxAllocatePowerIrp @ 0x140174190 (PopFxAllocatePowerIrp.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14017B52C (PopDiagTraceFxDevicePowerState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140181040 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1401814D0 (PopDiagTraceFxComponentIdleState.c)
 *     PoFxCompleteIdleState @ 0x1401815D0 (PoFxCompleteIdleState.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140182020 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1401989D8 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x1402F2968 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402F2A6C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1402F319C (PopFxHandleDirectedPowerTransition.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402F3844 (PopFxIssueComponentPerfStateChanges.c)
 *     PopPluginNotifyIdleState @ 0x1402F5B30 (PopPluginNotifyIdleState.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402FD204 (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x1402FD2F0 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x1402FD3DC (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1402FD7F0 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1402FD8F4 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxTraceDeviceRegistration @ 0x14071C29C (PopFxTraceDeviceRegistration.c)
 *     PopFxUnregisterDevice @ 0x14077189C (PopFxUnregisterDevice.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140779A34 (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopFxTracePerfRegistration @ 0x1408B1308 (PopFxTracePerfRegistration.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x1400E1240 (KeGetCurrentProcessorNumberEx.c)
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
