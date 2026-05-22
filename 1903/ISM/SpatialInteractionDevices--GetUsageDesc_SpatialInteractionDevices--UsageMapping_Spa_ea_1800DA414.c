/*
 * XREFs of SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___ @ 0x1800DA414
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x1800DCBB0 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___(
        _OWORD *a1,
        _WORD *a2,
        _OWORD *a3)
{
  _WORD *v5; // rcx
  __int64 v6; // r8
  __int16 v7; // ax

  *a1 = *a3;
  if ( a2[33] != 1 || a2[32] != 15 )
  {
    v5 = (_WORD *)a3 + 11;
    v6 = 0LL;
    while ( 1 )
    {
      if ( a2[33] == *(v5 - 1) && a2[32] == *v5 )
      {
        v7 = *(v5 - 3);
        if ( !v7 && !*(v5 - 2) )
          break;
        if ( a2[22] == v7 && a2[23] == *(v5 - 2) )
          break;
      }
      ++v6;
      v5 += 12;
      if ( v6 )
        return a1;
    }
    *a1 = *(_OWORD *)((char *)a3 + 24 * v6 + 24);
  }
  return a1;
}
