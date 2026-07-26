/*
 * XREFs of ndisSetBusyAsync @ 0x1C0075F2C
 * Callers:
 *     ndisMSendNBLToMiniportInternal @ 0x1C0005AC0 (ndisMSendNBLToMiniportInternal.c)
 *     ndisQueuedCheckForHang @ 0x1C0008570 (ndisQueuedCheckForHang.c)
 *     ndisReturnNblWithPowerQueue @ 0x1C0008AE0 (ndisReturnNblWithPowerQueue.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C00447E0 (ndisDoCancelDirectOidRequest.c)
 *     ndisMDoDirectOidRequest @ 0x1C00458A0 (ndisMDoDirectOidRequest.c)
 *     ndisMCancelSendNetBufferListsOnMiniport @ 0x1C0056190 (ndisMCancelSendNetBufferListsOnMiniport.c)
 * Callees:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C0072F18 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C0073304 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
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
