/*
 * XREFs of KdpSysCheckLowMemory @ 0x140917AB0
 * Callers:
 *     KdSystemDebugControl @ 0x1408422B0 (KdSystemDebugControl.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140917060 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
