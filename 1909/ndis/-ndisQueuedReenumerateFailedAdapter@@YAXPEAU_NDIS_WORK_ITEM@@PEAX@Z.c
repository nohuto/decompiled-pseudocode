/*
 * XREFs of ?ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0118D40
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A39C0 (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedReenumerateFailedAdapter(PVOID P, struct _NDIS_MINIPORT_BLOCK *a2)
{
  ndisMReenumerateFailedAdapterInternal(a2);
  ndisMDereferenceIfBlock((__int64)a2, MPIFREF_FATAL_ERROR);
  ndisDereferenceMiniport((__int64)a2, 9u);
  ExFreePoolWithTag(P, 0);
}
