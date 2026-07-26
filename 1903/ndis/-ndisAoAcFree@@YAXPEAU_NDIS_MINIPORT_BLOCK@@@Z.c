/*
 * XREFs of ?ndisAoAcFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011C408
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009A1C0 (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAoAcFree(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ExFreePoolWithTag(a1->AoAc, 0);
  a1->AoAc = 0LL;
}
