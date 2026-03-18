/*
 * XREFs of VfIsVerifierEnabled @ 0x14013D624
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140598740 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x14059D990 (PopMarkComponentsBootPhase.c)
 *     IoShutdownSystem @ 0x1405A7988 (IoShutdownSystem.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140775FD0 (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x14088384C (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x1408BA748 (PopDripsWatchdogTakeAction.c)
 *     KdEnterDebugger @ 0x140954648 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 *     VfDriverUnloadImage @ 0x140960480 (VfDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
