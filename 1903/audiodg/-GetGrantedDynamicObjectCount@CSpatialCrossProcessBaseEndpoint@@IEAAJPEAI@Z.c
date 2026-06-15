/*
 * XREFs of ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005BFBC
 * Callers:
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005C40C (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessClientEndpoint@@UEAAJPEAI@Z @ 0x14005DC50 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessClientEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x140058E74 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AC88 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x14005D37C (-ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z @ 0x14005D3D4 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetGrantedDynamicObjectCount(
        const struct ControlData **this,
        unsigned int *a2)
{
  int v4; // ebx
  unsigned int v5; // r9d
  signed __int64 v6; // rax
  unsigned int v7; // ecx

  *a2 = 0;
  v4 = CSpatialCrossProcessBaseEndpoint::ValidateControlData((CSpatialCrossProcessBaseEndpoint *)this, this[112]);
  if ( v4 < 0 )
    goto LABEL_13;
  v4 = CSpatialCrossProcessBaseEndpoint::ValidateBlockDescriptors((CSpatialCrossProcessBaseEndpoint *)this);
  if ( v4 < 0 )
    goto LABEL_13;
  while ( (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)this[112] + 7, 0, 0) <= *((_DWORD *)this[112] + 131) )
  {
    if ( (CSpatialCrossProcessBaseEndpoint::ReadCPFlags((__int64)this) & 0x40) != 0 )
    {
      *a2 = v5;
    }
    else
    {
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this[112] + 8, 0LL, 0LL);
      v7 = v6 + HIDWORD(v6);
      if ( v5 < (int)v6 + HIDWORD(v6) )
        v7 = v5;
      *a2 = v7;
    }
    if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)this[112] + 7, 0, 0) )
      goto LABEL_12;
  }
  v4 = -2005139387;
LABEL_12:
  if ( v4 < 0 )
LABEL_13:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetGrantedDynamicObjectCount", 760, v4);
  return (unsigned int)v4;
}
