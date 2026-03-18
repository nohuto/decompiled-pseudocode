/*
 * XREFs of KeInitializeTimer2 @ 0x1400FD4B0
 * Callers:
 *     KiCompleteKernelInit @ 0x140571B50 (KiCompleteKernelInit.c)
 *     NtCreateWorkerFactory @ 0x14068A210 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14068A570 (NtCreateTimer2.c)
 *     PopThermalZoneAdd @ 0x140745830 (PopThermalZoneAdd.c)
 *     ExpWorkQueueManagerInitialize @ 0x140754E20 (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x140759468 (PopInitializeTimer.c)
 *     EtwpCoverageEnsureContext @ 0x14075B064 (EtwpCoverageEnsureContext.c)
 *     CmpInitDelayDerefKCBEngine @ 0x1407621BC (CmpInitDelayDerefKCBEngine.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1400FD4CC (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2();
}
