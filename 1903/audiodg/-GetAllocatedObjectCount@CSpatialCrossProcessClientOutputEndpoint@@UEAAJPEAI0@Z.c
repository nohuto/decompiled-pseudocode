/*
 * XREFs of ?GetAllocatedObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI0@Z @ 0x14005E100
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AC88 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetAllocatedObjectCount(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *((_BYTE *)this + 80) )
  {
    if ( a2 && a3 )
    {
      *a2 = *(_DWORD *)(*((_QWORD *)this + 110) + 520LL);
      *a3 = *(_DWORD *)(*((_QWORD *)this + 110) + 524LL);
      return v3;
    }
    v3 = -2147467261;
  }
  else
  {
    v3 = -2005139437;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::GetAllocatedObjectCount", 265, v3);
  return v3;
}
