/*
 * XREFs of KeInitializeTimer2 @ 0x1400E3EA0
 * Callers:
 *     KiCompleteKernelInit @ 0x1405A1ABC (KiCompleteKernelInit.c)
 *     NtCreateWorkerFactory @ 0x14068D8D0 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14068DC30 (NtCreateTimer2.c)
 *     PopThermalZoneAdd @ 0x14075A950 (PopThermalZoneAdd.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14075ADF8 (PopDirectedDripsInitializeDisengageTimer.c)
 *     ExpWorkQueueManagerInitialize @ 0x14077ADC8 (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x14077F9C4 (PopInitializeTimer.c)
 *     EtwpCoverageEnsureContext @ 0x140782228 (EtwpCoverageEnsureContext.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1400E3EBC (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2();
}
