/*
 * XREFs of ndisSetBusyAsync @ 0x1C00B9AB0
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C0009E80 (ndisQueuedCheckForHang.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DCC0 (ndisMSendNBLToMiniportInternal.c)
 *     ndisReturnNblWithPowerQueue @ 0x1C0011390 (ndisReturnNblWithPowerQueue.c)
 *     ndisMDoDirectOidRequest @ 0x1C001D980 (ndisMDoDirectOidRequest.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C006A6E0 (ndisDoCancelDirectOidRequest.c)
 *     ndisMCancelSendNetBufferListsOnMiniport @ 0x1C008A2C0 (ndisMCancelSendNetBufferListsOnMiniport.c)
 * Callees:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00B64A0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00B6AA8 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 */

char __fastcall ndisSetBusyAsync(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        unsigned __int32 a3,
        void *a4,
        unsigned int a5)
{
  if ( (a1->Flags & 0x80u) == 0 )
    return ndisWdmSetBusyAsync(a1, a2, a3, a4, a5);
  else
    return ndisWdfSetBusyAsync(a1, a2, a3, (unsigned int *)a4, a5);
}
