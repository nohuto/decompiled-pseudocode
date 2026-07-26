/*
 * XREFs of ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1C00EF4C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ?ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00602A0 (-ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMUpdateInterfaceWorker(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisMFlushInterfaceChanges(a1);
  ndisDereferenceMiniport((__int64)a1, 0x3Au);
}
