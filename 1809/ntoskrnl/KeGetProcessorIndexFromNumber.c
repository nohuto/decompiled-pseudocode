/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x1400A7470
 * Callers:
 *     PoGetIdleTimes @ 0x1400A7320 (PoGetIdleTimes.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400DBFB0 (KeQueryLogicalProcessorRelationship.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140131CA4 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetTargetProcessorDpcEx @ 0x14013A0B0 (KeSetTargetProcessorDpcEx.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14015CDD0 (KeSetIdealProcessorThreadByNumber.c)
 *     PpmClearSimulatedIdle @ 0x1402D3D04 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402D5A98 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402D6710 (PpmUpdateProcessorIdleVeto.c)
 *     PpmClearSimulatedLoad @ 0x1402DB1AC (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402DB5B4 (PpmSetSimulatedLoad.c)
 *     PspBuildCreateProcessContext @ 0x140622378 (PspBuildCreateProcessContext.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     IopConnectInterrupt @ 0x14071074C (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x140729630 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140866CF0 (PpmInstallPlatformIdleStates.c)
 *     PpmPerfGetBrandedFrequency @ 0x14086B0EC (PpmPerfGetBrandedFrequency.c)
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
