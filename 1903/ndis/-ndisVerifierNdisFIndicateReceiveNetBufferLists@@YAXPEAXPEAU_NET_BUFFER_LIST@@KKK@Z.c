/*
 * XREFs of ?ndisVerifierNdisFIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00A9990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisVerifierNdisFIndicateReceiveNetBufferLists(void *a1, struct _NET_BUFFER_LIST *a2)
{
  ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *))ndisVerifierNdisDispatch->NdisFIndicateReceiveNetBufferLists)(
    a1,
    a2);
}
