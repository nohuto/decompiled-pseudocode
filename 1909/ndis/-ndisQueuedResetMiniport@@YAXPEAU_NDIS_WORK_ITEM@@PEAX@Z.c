/*
 * XREFs of ?ndisQueuedResetMiniport@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0097D10
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisMResetMiniportInternal @ 0x1C009BE9C (ndisMResetMiniportInternal.c)
 */

void __fastcall ndisQueuedResetMiniport(PVOID P, struct _NDIS_MINIPORT_BLOCK *a2)
{
  ndisMResetMiniportInternal(a2, 3);
  ndisDereferenceMiniport((__int64)a2, 8u);
  ExFreePoolWithTag(P, 0);
}
