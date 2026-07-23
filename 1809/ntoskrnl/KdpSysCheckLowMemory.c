/*
 * XREFs of KdpSysCheckLowMemory @ 0x140918AB0
 * Callers:
 *     KdSystemDebugControl @ 0x140843510 (KdSystemDebugControl.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140918060 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
