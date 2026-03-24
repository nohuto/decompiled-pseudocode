/*
 * XREFs of VfIsVerifierEnabled @ 0x14013B9E0
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140568DB8 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x14056B53C (PopMarkComponentsBootPhase.c)
 *     IoShutdownSystem @ 0x140577C68 (IoShutdownSystem.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140709004 (PipDmgGetDriverDmarCompatLevel.c)
 *     KsepPatchDriverImportsTable @ 0x14084838C (KsepPatchDriverImportsTable.c)
 *     PopDripsWatchdogTakeAction @ 0x140879788 (PopDripsWatchdogTakeAction.c)
 *     KdEnterDebugger @ 0x140915D40 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140915E88 (KdExitDebugger.c)
 *     VfDriverUnloadImage @ 0x1409213DC (VfDriverUnloadImage.c)
 * Callees:
 *     <none>
 */

__int64 VfIsVerifierEnabled()
{
  return (unsigned int)ViVerifierEnabled;
}
