/*
 * XREFs of PopIdleInitAoAcDozeS4Timer @ 0x140749908
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14013B020 (KeInitializeIRTimer.c)
 *     PoRegisterPowerSettingCallback @ 0x14058AEE0 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS PopIdleInitAoAcDozeS4Timer()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF

  PopIdleAoAcDozeS4Lock = 0LL;
  v1 = 131080;
  KeInitializeIRTimer(
    (__int64)&PopIdleAoAcDozeS4Timer,
    (__int64)PopIdleAoAcDozeS4TimerCallback,
    0LL,
    (unsigned __int8 *)&v1,
    2);
  PopIdleAoAcDozeS4WorkItem.Parameter = 0LL;
  PopIdleAoAcDozeS4WorkItem.List.Flink = 0LL;
  PopIdleAoAcDozeS4WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopIdleAoAcDozeToS4;
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_GLOBAL_USER_PRESENCE,
           (PPOWER_SETTING_CALLBACK)PopIdleGlobalUserPresenceCallback,
           0LL,
           0LL);
}
