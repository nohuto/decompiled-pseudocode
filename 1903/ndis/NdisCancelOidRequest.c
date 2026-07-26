/*
 * XREFs of NdisCancelOidRequest @ 0x1C0068E00
 * Callers:
 *     <none>
 * Callees:
 *     ndisCancelOidRequestInternal @ 0x1C0069DF4 (ndisCancelOidRequestInternal.c)
 */

void __stdcall NdisCancelOidRequest(NDIS_HANDLE NdisBindingHandle, PVOID RequestId)
{
  ndisCancelOidRequestInternal(*((_QWORD *)NdisBindingHandle + 2), 0, (char)RequestId);
}
