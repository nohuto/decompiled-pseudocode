/*
 * XREFs of ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C01086E4
 * Callers:
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 * Callees:
 *     ResetPointerDevices @ 0x1C01087BC (ResetPointerDevices.c)
 */

void __fastcall PrepareForMasterInputThreadTakingOver(struct LegacyInputDispatcher *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  EnterCrit(0LL, 1LL);
  SetThreadPriority();
  if ( gptiManipulationThread )
    SetThreadBasePriority(*gptiManipulationThread, 16LL);
  ResetPointerDevices();
  gbPendRecreateTouchInjectionDevices = 1;
  CleanupSensorExplicitly(2LL);
  EtwTraceRitDisEngaged();
  ZwSetEvent(ghDITRITEvent, 0LL);
  LegacyInputDispatcher::PurgeInputDispatcherObjects(a1);
  CBaseInput::RegisterDispatcherObject(gpKeyboardSensor, a1);
  gbDIT = 1;
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
}
