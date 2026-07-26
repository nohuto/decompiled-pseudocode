/*
 * XREFs of NdisCancelOidRequest @ 0x1C00436C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCancelOidRequestInternal @ 0x1C0044178 (ndisCancelOidRequestInternal.c)
 */

void __stdcall NdisCancelOidRequest(NDIS_HANDLE NdisBindingHandle, PVOID RequestId)
{
  ndisCancelOidRequestInternal(*((_QWORD *)NdisBindingHandle + 2), 0LL, RequestId, 0LL);
}
