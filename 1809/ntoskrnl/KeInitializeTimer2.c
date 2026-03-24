/*
 * XREFs of KeInitializeTimer2 @ 0x1400FD4D0
 * Callers:
 *     KiCompleteKernelInit @ 0x140571B50 (KiCompleteKernelInit.c)
 *     NtCreateWorkerFactory @ 0x14068A1F0 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14068A550 (NtCreateTimer2.c)
 *     PopThermalZoneAdd @ 0x140745810 (PopThermalZoneAdd.c)
 *     ExpWorkQueueManagerInitialize @ 0x140754E00 (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x140759448 (PopInitializeTimer.c)
 *     EtwpCoverageEnsureContext @ 0x14075B044 (EtwpCoverageEnsureContext.c)
 *     CmpInitDelayDerefKCBEngine @ 0x14076219C (CmpInitDelayDerefKCBEngine.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1400FD4EC (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2();
}
