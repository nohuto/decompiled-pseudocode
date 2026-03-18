/*
 * XREFs of ExRundownCompleted @ 0x14008F8D0
 * Callers:
 *     CmpTryToRundownHive @ 0x14000FCAC (CmpTryToRundownHive.c)
 *     PfFileInfoNotify @ 0x1400D3DC0 (PfFileInfoNotify.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EAC0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkpDisableConsole @ 0x14027DC48 (BgkpDisableConsole.c)
 *     PspRundownSingleProcess @ 0x140603A48 (PspRundownSingleProcess.c)
 *     PspIoRateEntryInitialize @ 0x140605F28 (PspIoRateEntryInitialize.c)
 *     CmpPerformUnloadKey @ 0x1406923B0 (CmpPerformUnloadKey.c)
 *     CmShutdownSystem @ 0x1407EC8D4 (CmShutdownSystem.c)
 *     SmcStoreDelete @ 0x1408AF35C (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x1408C8E50 (EtwpCoverageSamplerStop.c)
 *     EtwpInitializeCoverageSampler @ 0x1409D0554 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x1409D4634 (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
