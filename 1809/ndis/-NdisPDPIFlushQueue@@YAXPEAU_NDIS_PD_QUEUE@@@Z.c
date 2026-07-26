/*
 * XREFs of ?NdisPDPIFlushQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C007AF20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall NdisPDPIFlushQueue(struct _NDIS_PD_QUEUE *a1)
{
  void (__fastcall **v1)(struct _NDIS_PD_QUEUE *); // rdi

  v1 = (void (__fastcall **)(struct _NDIS_PD_QUEUE *))a1->PDPlatformReserved[0];
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x69u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1);
  v1[3](a1);
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x6Au, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1);
}
