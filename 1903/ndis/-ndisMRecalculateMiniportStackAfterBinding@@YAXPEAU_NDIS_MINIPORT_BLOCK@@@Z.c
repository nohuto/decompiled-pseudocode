/*
 * XREFs of ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01042E0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0103B94 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00271F4 (ndisUpdateNoPauseOnSuspend.c)
 *     ndisUpdateMinimumStackVersion @ 0x1C0104308 (ndisUpdateMinimumStackVersion.c)
 */

void __fastcall ndisMRecalculateMiniportStackAfterBinding(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisUpdateMinimumStackVersion(a1, 0LL, 0LL);
  ndisUpdateNoPauseOnSuspend((__int64)a1);
}
