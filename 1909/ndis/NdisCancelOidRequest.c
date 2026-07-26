/*
 * XREFs of NdisCancelOidRequest @ 0x1C0068FD0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCancelOidRequestInternal @ 0x1C0069FC4 (ndisCancelOidRequestInternal.c)
 */

void __stdcall NdisCancelOidRequest(NDIS_HANDLE NdisBindingHandle, PVOID RequestId)
{
  ndisCancelOidRequestInternal(*((_QWORD *)NdisBindingHandle + 2), 0, (char)RequestId);
}
