/*
 * XREFs of KeInitializeTimer2 @ 0x1400E8C90
 * Callers:
 *     KiCompleteKernelInit @ 0x1405A1A9C (KiCompleteKernelInit.c)
 *     NtCreateWorkerFactory @ 0x140680E40 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x1406811A0 (NtCreateTimer2.c)
 *     PopThermalZoneAdd @ 0x14075F1E0 (PopThermalZoneAdd.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14075F688 (PopDirectedDripsInitializeDisengageTimer.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407735B0 (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x1407823E4 (PopInitializeTimer.c)
 *     EtwpCoverageEnsureContext @ 0x1407844F8 (EtwpCoverageEnsureContext.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1400E8CAC (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2();
}
