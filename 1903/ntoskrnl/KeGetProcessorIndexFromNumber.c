/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140004A40
 * Callers:
 *     PoGetIdleTimes @ 0x140004908 (PoGetIdleTimes.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FD290 (KeQueryLogicalProcessorRelationship.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140126A54 (KeSetIdealProcessorThreadByNumber.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140131B00 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetTargetProcessorDpcEx @ 0x14013BB40 (KeSetTargetProcessorDpcEx.c)
 *     PpmClearSimulatedIdle @ 0x1402EE3D4 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402F0158 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402F0DE0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmClearSimulatedLoad @ 0x1402F6D3C (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402F7048 (PpmSetSimulatedLoad.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x14060B770 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14074148C (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x14075A720 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408A3200 (PpmInstallPlatformIdleStates.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408A73B0 (PpmPerfGetBrandedFrequency.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetProcessorIndexFromNumber(PPROCESSOR_NUMBER ProcNumber)
{
  unsigned __int16 Group; // ax
  unsigned __int8 Number; // dl
  ULONG result; // eax

  if ( ProcNumber->Reserved )
    return -1;
  Group = ProcNumber->Group;
  if ( !ProcNumber->Group && !ProcNumber->Number )
    return 0;
  if ( Group >= (unsigned __int16)KiMaximumGroups )
    return -1;
  Number = ProcNumber->Number;
  if ( Number >= 0x40u )
    return -1;
  result = KiProcessorNumberToIndexMappingTable[64 * (unsigned __int64)Group + Number];
  if ( !result )
    return -1;
  return result;
}
