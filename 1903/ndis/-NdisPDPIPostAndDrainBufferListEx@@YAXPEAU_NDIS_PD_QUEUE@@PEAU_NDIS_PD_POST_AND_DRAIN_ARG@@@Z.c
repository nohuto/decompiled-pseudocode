/*
 * XREFs of ?NdisPDPIPostAndDrainBufferListEx@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_NDIS_PD_POST_AND_DRAIN_ARG@@@Z @ 0x1C00BEEE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisPDPIPostAndDrainBufferListEx(struct _NDIS_PD_QUEUE *a1, struct _NDIS_PD_POST_AND_DRAIN_ARG *a2)
{
  (*((void (__fastcall **)(struct _NDIS_PD_QUEUE *, struct _NDIS_PD_POST_AND_DRAIN_ARG *))a1->PDPlatformReserved[0] + 4))(
    a1,
    a2);
}
