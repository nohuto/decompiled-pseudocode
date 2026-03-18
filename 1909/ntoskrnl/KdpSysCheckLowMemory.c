/*
 * XREFs of KdpSysCheckLowMemory @ 0x140956500
 * Callers:
 *     KdSystemDebugControl @ 0x14087D3F0 (KdSystemDebugControl.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140955A3C (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
