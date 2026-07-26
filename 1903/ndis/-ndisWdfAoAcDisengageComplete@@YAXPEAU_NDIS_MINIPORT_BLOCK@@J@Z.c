/*
 * XREFs of ?ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00BD6E8
 * Callers:
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C00BD7E8 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     NdisWdfAsyncPowerReferenceCompleteNotification @ 0x1C011BC70 (NdisWdfAsyncPowerReferenceCompleteNotification.c)
 * Callees:
 *     ndisSelectiveSuspendClearStop @ 0x1C00B9200 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00BAAE0 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00BCFA8 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisWdfAoAcDisengageComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v5; // al

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  AoAc->ActiveState = (a2 >> 31) & 4;
  AoAc->WdfAoAcTransition = 0;
  KeReleaseSpinLock(&AoAc->Lock, v5);
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendClearStop((__int64)a1, 7);
  ndisSetTempRefTimer(a1, ndisNicQuietWakeTimeout);
  ndisAoAcCompleteQueuedIrps(a1, a2);
  KeSetEvent(&AoAc->WdfAoAcDisengagedEvent, 0, 0);
}
