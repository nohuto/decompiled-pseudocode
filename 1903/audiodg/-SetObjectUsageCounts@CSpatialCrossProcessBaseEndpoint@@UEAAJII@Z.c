/*
 * XREFs of ?SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z @ 0x14005D1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z @ 0x140059C34 (-LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AC88 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z @ 0x14005B940 (-CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::SetObjectUsageCounts(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3,
        const GUID *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // r8

  v7 = -2005139437;
  CSpatialCrossProcessEndpointTraceLogger::LogAsarUsageReporting(
    (CSpatialCrossProcessBaseEndpoint *)((char *)this + 376),
    a2,
    a3,
    a4);
  v8 = *((_QWORD *)this + 109);
  if ( !v8 )
    goto LABEL_5;
  if ( a2 + a3 > *(_DWORD *)(v8 + 524) )
  {
    v7 = -2005139346;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::SetObjectUsageCounts", 1040, v7);
    return v7;
  }
  _InterlockedExchange64((volatile __int64 *)(v8 + 64), __SPAIR64__(a3, a2));
  CSpatialCrossProcessBaseEndpoint::CheckResourceLimits((CSpatialCrossProcessBaseEndpoint *)((char *)this - 24), a3);
  return 0;
}
