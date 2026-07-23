/*
 * XREFs of KeInitializeTimer2 @ 0x1400FD550
 * Callers:
 *     KiCompleteKernelInit @ 0x140572B50 (KiCompleteKernelInit.c)
 *     NtCreateWorkerFactory @ 0x14068B3B0 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14068B710 (NtCreateTimer2.c)
 *     PopThermalZoneAdd @ 0x140746A00 (PopThermalZoneAdd.c)
 *     ExpWorkQueueManagerInitialize @ 0x140755FF0 (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x14075A638 (PopInitializeTimer.c)
 *     EtwpCoverageEnsureContext @ 0x14075C234 (EtwpCoverageEnsureContext.c)
 *     CmpInitDelayDerefKCBEngine @ 0x14076338C (CmpInitDelayDerefKCBEngine.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1400FD56C (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2();
}
