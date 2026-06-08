/*
 * XREFs of GetDevExtFromIndex @ 0x1C00082B4
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C00244DC (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0024984 (DeregisterKernelIdleDomains.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002D914 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     GetLpIndex @ 0x1C002E9D0 (GetLpIndex.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C003603C (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0038534 (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
}
