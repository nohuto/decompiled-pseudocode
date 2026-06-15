/*
 * XREFs of ?GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x14005F830
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AC88 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D7A0 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetAvailableObjectCount(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10
  _DWORD *v4; // r11

  v2 = *((_DWORD *)this + 281);
  *a2 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v2 = -2005139437;
LABEL_11:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::GetAvailableObjectCount", 49, v2);
    return v2;
  }
  if ( CSpatialCrossProcessBaseEndpoint::IsRunning((CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16))
    || *(_DWORD *)(v3 + 1128) == 1 )
  {
    if ( *(_BYTE *)(v3 + 1120) )
      *v4 = *(_DWORD *)(v3 + 1116);
    if ( v2 != -2005139433 && v2 != -2005139358 && v2 >= 2 )
      goto LABEL_11;
  }
  else
  {
    return (unsigned int)-2005139433;
  }
  return v2;
}
