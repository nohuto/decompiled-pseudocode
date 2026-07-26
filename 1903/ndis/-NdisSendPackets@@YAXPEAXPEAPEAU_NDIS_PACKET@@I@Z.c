/*
 * XREFs of ?NdisSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00944F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisSendPackets(void (__fastcall **a1)(_QWORD, _QWORD), struct _NDIS_PACKET **a2)
{
  ((void (__fastcall **)(_QWORD, struct _NDIS_PACKET **))a1)[21](a1, a2);
}
