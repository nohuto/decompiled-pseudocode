/*
 * XREFs of ?GetFrameFormat@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14005BF00
 * Callers:
 *     <none>
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140003FBC (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AC88 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetFrameFormat(
        CSpatialCrossProcessBaseEndpoint *this,
        struct tWAVEFORMATEX **a2)
{
  int v2; // ebx

  if ( !*((_BYTE *)this + 96) )
  {
    v2 = -2005139437;
LABEL_6:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetFrameFormat", 471, v2);
    return (unsigned int)v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_6;
  }
  v2 = CloneWaveFormat((const struct tWAVEFORMATEX *)(*((_QWORD *)this + 112) + 532LL), a2);
  if ( v2 < 0 )
    goto LABEL_6;
  return (unsigned int)v2;
}
