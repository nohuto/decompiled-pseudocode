/*
 * XREFs of ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005E2B8
 * Callers:
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140061860 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 * Callees:
 *     ?LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z @ 0x14005BEB4 (-LogGetAvailableObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDI@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005CD58 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005E448 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x14005F338 (-ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z @ 0x14005F390 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
        const struct CSpatialCrossProcessBaseEndpoint::ControlData **this,
        unsigned int *a2,
        unsigned int *a3)
{
  int Index; // ebx
  const struct CSpatialCrossProcessBaseEndpoint::ControlData *v7; // rdx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  unsigned int v10; // esi

  *a3 = 0;
  *a2 = 0;
  Index = CSpatialCrossProcessBaseEndpoint::ValidateControlData((CSpatialCrossProcessBaseEndpoint *)this, this[110]);
  if ( Index < 0
    || (Index = CSpatialCrossProcessBaseEndpoint::ValidateBlockDescriptors((CSpatialCrossProcessBaseEndpoint *)this),
        Index < 0)
    || (Index = CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex((CSpatialCrossProcessBaseEndpoint *)this, a2),
        Index < 0) )
  {
    if ( Index != -2005139358 )
      goto LABEL_8;
  }
  else
  {
    v7 = this[110];
    v8 = *((_DWORD *)v7 + 130) + *((_DWORD *)v7 + 131);
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)v7 + *a2 + 8, 0, 0);
    v10 = v9;
    if ( v9 > v8 )
    {
      Index = -2147418113;
LABEL_8:
      SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing", 830, Index);
      return (unsigned int)Index;
    }
    CSpatialCrossProcessEndpointTraceLogger::LogGetAvailableObjectCount(
      (CSpatialCrossProcessEndpointTraceLogger *)(this + 48),
      "ServerProc",
      v9);
    *a3 = v10;
  }
  return (unsigned int)Index;
}
