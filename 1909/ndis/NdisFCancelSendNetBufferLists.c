/*
 * XREFs of NdisFCancelSendNetBufferLists @ 0x1C008D770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisFCancelSendNetBufferLists(NDIS_HANDLE NdisFilterHandle, PVOID CancelId)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PVOID))NdisFilterHandle + 80))(NdisFilterHandle, CancelId);
}
