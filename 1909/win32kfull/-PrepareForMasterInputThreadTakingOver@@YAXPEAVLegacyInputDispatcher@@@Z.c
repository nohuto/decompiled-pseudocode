/*
 * XREFs of ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C0077B24
 * Callers:
 *     RawInputThread @ 0x1C0077DE0 (RawInputThread.c)
 * Callees:
 *     ResetPointerDevices @ 0x1C0139DC0 (ResetPointerDevices.c)
 */

void __fastcall PrepareForMasterInputThreadTakingOver(struct LegacyInputDispatcher *a1)
{
  __int64 v2; // rcx

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
  UserSessionSwitchLeaveCrit(v2);
}
