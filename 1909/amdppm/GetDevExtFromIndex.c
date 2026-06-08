/*
 * XREFs of GetDevExtFromIndex @ 0x1C0002520
 * Callers:
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C001C010 (InitEnergyCountersOnCurrentProcessor.c)
 *     UnInitEnergyCountersOnCurrentProcessor @ 0x1C001C260 (UnInitEnergyCountersOnCurrentProcessor.c)
 *     GetLpIndex @ 0x1C0021210 (GetLpIndex.c)
 *     RegisterKernelIdleDomains @ 0x1C0028E88 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0029228 (DeregisterKernelIdleDomains.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C00320A0 (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C003450C (LpiEnumerateDependencies.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0034944 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + a1);
}
