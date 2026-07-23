/*
 * XREFs of VfIsVerifierEnabled @ 0x14013BAE0
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140569DB8 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x14056C53C (PopMarkComponentsBootPhase.c)
 *     IoShutdownSystem @ 0x140578C68 (IoShutdownSystem.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14070A2A4 (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x1408495EC (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x14087A9E8 (PopDripsWatchdogTakeAction.c)
 *     KdEnterDebugger @ 0x140916D40 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140916E88 (KdExitDebugger.c)
 *     VfDriverUnloadImage @ 0x1409223DC (VfDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
