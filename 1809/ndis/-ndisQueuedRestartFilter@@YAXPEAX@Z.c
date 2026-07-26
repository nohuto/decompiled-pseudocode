/*
 * XREFs of ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x1C00EC710
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00EC618 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedRestartFilter(struct _NDIS_FILTER_BLOCK **P)
{
  ndisQueueFilterRestart(P[4]);
  ndisDereferenceRef(&P[4]->PnPRef.SpinLock, 0x16u);
  ExFreePoolWithTag(P, 0);
}
