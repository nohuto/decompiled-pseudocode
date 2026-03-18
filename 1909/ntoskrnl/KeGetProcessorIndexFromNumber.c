/*
 * XREFs of KeGetProcessorIndexFromNumber @ 0x140004AD0
 * Callers:
 *     PoGetIdleTimes @ 0x140004998 (PoGetIdleTimes.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FF420 (KeQueryLogicalProcessorRelationship.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140127554 (KeSetIdealProcessorThreadByNumber.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140132310 (PoGetPerfStateAndParkingInfo.c)
 *     KeSetTargetProcessorDpcEx @ 0x14013C160 (KeSetTargetProcessorDpcEx.c)
 *     PpmClearSimulatedIdle @ 0x1402EE134 (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1402EFEB8 (PpmSetSimulatedIdle.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1402F0B40 (PpmUpdateProcessorIdleVeto.c)
 *     PpmClearSimulatedLoad @ 0x1402F67EC (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402F6AF8 (PpmSetSimulatedLoad.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     PspBuildCreateProcessContext @ 0x14060D280 (PspBuildCreateProcessContext.c)
 *     IopConnectInterrupt @ 0x14074338C (IopConnectInterrupt.c)
 *     PpmUpdateIdleStates @ 0x14075EFB0 (PpmUpdateIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408A2A40 (PpmInstallPlatformIdleStates.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408A6C10 (PpmPerfGetBrandedFrequency.c)
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
