/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x1400A7450
 * Callers:
 *     PoGetIdleTimes @ 0x1400A7300 (PoGetIdleTimes.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400DBF90 (KeQueryLogicalProcessorRelationship.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140131C84 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetTargetProcessorDpcEx @ 0x14013A090 (KeSetTargetProcessorDpcEx.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14015CDB0 (KeSetIdealProcessorThreadByNumber.c)
 *     PpmClearSimulatedIdle @ 0x1402D3C04 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402D5998 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402D6610 (PpmUpdateProcessorIdleVeto.c)
 *     PpmClearSimulatedLoad @ 0x1402DB0AC (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402DB4B4 (PpmSetSimulatedLoad.c)
 *     PspBuildCreateProcessContext @ 0x140622378 (PspBuildCreateProcessContext.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     IopConnectInterrupt @ 0x14071076C (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x140729650 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140866D10 (PpmInstallPlatformIdleStates.c)
 *     PpmPerfGetBrandedFrequency @ 0x14086B10C (PpmPerfGetBrandedFrequency.c)
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
