/*
 * XREFs of GetDevExtFromIndex @ 0x1C0008338
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C0023B34 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0023FAC (DeregisterKernelIdleDomains.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002B680 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     GetLpIndex @ 0x1C002C490 (GetLpIndex.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C003350C (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C00356AC (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
}
