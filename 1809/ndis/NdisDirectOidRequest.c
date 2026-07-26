/*
 * XREFs of NdisDirectOidRequest @ 0x1C00436E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisDirectOidRequest(NDIS_HANDLE NdisBindingHandle, PNDIS_OID_REQUEST OidRequest)
{
  return (*((__int64 (__fastcall **)(NDIS_HANDLE, PNDIS_OID_REQUEST))NdisBindingHandle + 91))(
           NdisBindingHandle,
           OidRequest);
}
