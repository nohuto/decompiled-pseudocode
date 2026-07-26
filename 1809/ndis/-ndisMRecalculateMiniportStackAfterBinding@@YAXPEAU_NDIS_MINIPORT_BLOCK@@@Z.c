/*
 * XREFs of ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C3090
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00C30B8 (ndisUpdateNoPauseOnSuspend.c)
 *     ndisUpdateMinimumStackVersion @ 0x1C00C3140 (ndisUpdateMinimumStackVersion.c)
 */

void __fastcall ndisMRecalculateMiniportStackAfterBinding(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisUpdateMinimumStackVersion(a1, 0LL, 0LL);
  ndisUpdateNoPauseOnSuspend(a1);
}
