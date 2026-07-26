/*
 * XREFs of NdisMCoSendNetBufferListsComplete @ 0x1C0088D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMCoSendNetBufferListsComplete(
        NDIS_HANDLE NdisVcHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG SendCompleteFlags)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG))NdisVcHandle + 32))(
    NdisVcHandle,
    NetBufferLists,
    SendCompleteFlags);
}
