/*
 * XREFs of ?ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ @ 0x14005ED90
 * Callers:
 *     <none>
 * Callees:
 *     ?LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z @ 0x14005A158 (-LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14005BAD4 (-CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::ProcessComplete(
        CSpatialCrossProcessClientOutputEndpoint *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *((_BYTE *)this + 80) )
  {
    if ( *((_BYTE *)this + 1064) )
    {
      CSpatialCrossProcessEndpointTraceLogger::LogObjectCount(
        (CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 384),
        "Client",
        *((_DWORD *)this + 262),
        *((_DWORD *)this + 233));
      CSpatialCrossProcessBaseEndpoint::CommitWrite(
        (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16),
        *((_DWORD *)this + 262),
        *((_DWORD *)this + 233));
      *((_BYTE *)this + 1064) = 0;
      *((_DWORD *)this + 265) = 0;
    }
  }
  else
  {
    v1 = -2005139437;
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::ProcessComplete", 241, -2005139437);
  }
  return v1;
}
