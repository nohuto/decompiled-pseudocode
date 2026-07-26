/*
 * XREFs of ?ndisVerifierNdisMIndicateStatusEx@@YAXPEAXPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00A9CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisVerifierNdisMIndicateStatusEx(void *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  ndisVerifierNdisDispatch->NdisMIndicateStatusEx(
    a1,
    a2,
    (void *)*((_QWORD *)a1 + 620),
    (void (__fastcall *)(void *, _NDIS_STATUS_INDICATION *))NdisMIndicateStatusEx);
}
