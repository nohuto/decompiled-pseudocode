/*
 * XREFs of ExRundownCompleted @ 0x1400E59B0
 * Callers:
 *     PfFileInfoNotify @ 0x140093D90 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x1400993CC (CmpTryToRundownHive.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x140178280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkpDisableConsole @ 0x1402927D8 (BgkpDisableConsole.c)
 *     PspRundownSingleProcess @ 0x140693078 (PspRundownSingleProcess.c)
 *     PspIoRateEntryInitialize @ 0x1406964F8 (PspIoRateEntryInitialize.c)
 *     CmpPerformUnloadKey @ 0x14069AC04 (CmpPerformUnloadKey.c)
 *     CmShutdownSystem @ 0x1408273C4 (CmShutdownSystem.c)
 *     SmcStoreDelete @ 0x1408EC388 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x1409062F4 (EtwpCoverageSamplerStop.c)
 *     EtwpInitializeCoverageSampler @ 0x140A160D0 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x140A18DA0 (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
