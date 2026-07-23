/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x1400A73B0
 * Callers:
 *     PoGetIdleTimes @ 0x1400A7260 (PoGetIdleTimes.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400DC030 (KeQueryLogicalProcessorRelationship.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140131D74 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetTargetProcessorDpcEx @ 0x14013A1B0 (KeSetTargetProcessorDpcEx.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14015CED0 (KeSetIdealProcessorThreadByNumber.c)
 *     PpmClearSimulatedIdle @ 0x1402D3EF4 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402D5C88 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402D6900 (PpmUpdateProcessorIdleVeto.c)
 *     PpmClearSimulatedLoad @ 0x1402DB39C (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402DB7A4 (PpmSetSimulatedLoad.c)
 *     PspBuildCreateProcessContext @ 0x140623378 (PspBuildCreateProcessContext.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     IopConnectInterrupt @ 0x1407119EC (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x14072A820 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140867F50 (PpmInstallPlatformIdleStates.c)
 *     PpmPerfGetBrandedFrequency @ 0x14086C34C (PpmPerfGetBrandedFrequency.c)
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
