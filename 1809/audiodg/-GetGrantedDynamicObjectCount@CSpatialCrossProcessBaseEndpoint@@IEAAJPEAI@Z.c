/*
 * XREFs of ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005DF4C
 * Callers:
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005E39C (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessClientEndpoint@@UEAAJPEAI@Z @ 0x14005FC00 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessClientEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x14005AD44 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005CD58 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x14005F338 (-ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z @ 0x14005F390 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetGrantedDynamicObjectCount(
        const struct CSpatialCrossProcessBaseEndpoint::ControlData **this,
        unsigned int *a2)
{
  int v4; // ebx
  unsigned int v5; // r9d
  signed __int64 v6; // rax
  unsigned int v7; // ecx

  *a2 = 0;
  v4 = CSpatialCrossProcessBaseEndpoint::ValidateControlData((CSpatialCrossProcessBaseEndpoint *)this, this[110]);
  if ( v4 < 0 )
    goto LABEL_13;
  v4 = CSpatialCrossProcessBaseEndpoint::ValidateBlockDescriptors((CSpatialCrossProcessBaseEndpoint *)this);
  if ( v4 < 0 )
    goto LABEL_13;
  while ( (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)this[110] + 7, 0, 0) <= *((_DWORD *)this[110] + 131) )
  {
    if ( (CSpatialCrossProcessBaseEndpoint::ReadCPFlags((__int64)this) & 0x40) != 0 )
    {
      *a2 = v5;
    }
    else
    {
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this[110] + 8, 0LL, 0LL);
      v7 = v6 + HIDWORD(v6);
      if ( v5 < (int)v6 + HIDWORD(v6) )
        v7 = v5;
      *a2 = v7;
    }
    if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)this[110] + 7, 0, 0) )
      goto LABEL_12;
  }
  v4 = -2005139387;
LABEL_12:
  if ( v4 < 0 )
LABEL_13:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetGrantedDynamicObjectCount", 749, v4);
  return (unsigned int)v4;
}
