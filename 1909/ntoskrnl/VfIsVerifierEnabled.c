/*
 * XREFs of VfIsVerifierEnabled @ 0x14013DB34
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x14059871C (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x14059D210 (PopMarkComponentsBootPhase.c)
 *     IoShutdownSystem @ 0x1405A7968 (IoShutdownSystem.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x1407795B0 (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x140882F4C (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x1408BA018 (PopDripsWatchdogTakeAction.c)
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
