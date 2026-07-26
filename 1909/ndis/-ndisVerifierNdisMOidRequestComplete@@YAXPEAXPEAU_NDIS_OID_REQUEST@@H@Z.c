/*
 * XREFs of ?ndisVerifierNdisMOidRequestComplete@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00A9CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisVerifierNdisMOidRequestComplete(void *a1, struct _NDIS_OID_REQUEST *a2, __int64 a3)
{
  ndisVerifierNdisDispatch->NdisMOidRequestComplete(
    a1,
    a2,
    a3,
    (void *)*((_QWORD *)a1 + 620),
    (void (__fastcall *)(void *, _NDIS_OID_REQUEST *, int))NdisMOidRequestComplete);
}
