/*
 * XREFs of ExRundownCompleted @ 0x1400EA950
 * Callers:
 *     PfFileInfoNotify @ 0x1400D10B0 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x1401129E0 (CmpTryToRundownHive.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x140178970 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkpDisableConsole @ 0x140292538 (BgkpDisableConsole.c)
 *     PspRundownSingleProcess @ 0x1406865E8 (PspRundownSingleProcess.c)
 *     PspIoRateEntryInitialize @ 0x140689A68 (PspIoRateEntryInitialize.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     CmShutdownSystem @ 0x140826AC4 (CmShutdownSystem.c)
 *     SmcStoreDelete @ 0x1408EBC90 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x140905C54 (EtwpCoverageSamplerStop.c)
 *     EtwpInitializeCoverageSampler @ 0x140A162B0 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x140A19260 (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
