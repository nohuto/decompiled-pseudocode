/*
 * XREFs of GetDevExtFromIndex @ 0x1C0003C00
 * Callers:
 *     GetLpIndex @ 0x1C001AFD0 (GetLpIndex.c)
 *     RegisterKernelIdleDomains @ 0x1C001D704 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C001DA80 (DeregisterKernelIdleDomains.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C002DC90 (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C002E444 (LpiEnumerateDependencies.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C002E834 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *(_QWORD *)(DevExts + 8LL * a1);
}
