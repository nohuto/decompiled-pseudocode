/*
 * XREFs of MiIsPteInStore @ 0x140158E7C
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiUpdatePfnPriorityByPte @ 0x1400A4880 (MiUpdatePfnPriorityByPte.c)
 *     MiUpdatePfnPriority @ 0x1400CAF14 (MiUpdatePfnPriority.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MiComputeFaultCluster @ 0x14012443C (MiComputeFaultCluster.c)
 *     MiResolveProtoCombine @ 0x1401424B4 (MiResolveProtoCombine.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAAEC (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPteInStore(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( (a2 & 4) == 0 || a2 >> 12 != *(_DWORD *)(a1 + 1140) )
    return 0LL;
  return result;
}
