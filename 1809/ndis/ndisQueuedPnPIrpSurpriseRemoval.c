/*
 * XREFs of ndisQueuedPnPIrpSurpriseRemoval @ 0x1C00F50E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00F4E5C (ndisPnPIrpSurpriseRemovalInner.c)
 */

void __fastcall ndisQueuedPnPIrpSurpriseRemoval(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisPnPIrpSurpriseRemovalInner(a1);
}
