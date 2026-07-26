/*
 * XREFs of NdisFreePacketPool @ 0x1C0052470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisFreePacketPool @ 0x1C00528C8 (ndisFreePacketPool_ea_1C00528C8.c)
 */

void __stdcall NdisFreePacketPool(NDIS_HANDLE PoolHandle)
{
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
    WPP_SF_q(0xCu, &WPP_8df08a1cf1a93f964e71fb8294d520a8_Traceguids, (__int64)PoolHandle);
  ndisFreePacketPool((struct _NDIS_PKT_POOL *)PoolHandle);
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
    WPP_SF_q(0xDu, &WPP_8df08a1cf1a93f964e71fb8294d520a8_Traceguids, (__int64)PoolHandle);
}
