/*
 * XREFs of ?ndisVerifierNdisMSendNetBufferListsComplete@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00A9D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisVerifierNdisMSendNetBufferListsComplete(void *a1, struct _NET_BUFFER_LIST *a2, __int64 a3)
{
  ndisVerifierNdisDispatch->NdisMSendNetBufferListsComplete(
    a1,
    a2,
    a3,
    (void *)*((_QWORD *)a1 + 620),
    (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))NdisMSendNetBufferListsComplete);
}
