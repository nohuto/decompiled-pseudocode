/*
 * XREFs of ?ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BDC0C
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC818 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00BD598 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ndisWdfSendPmParametersForAoAc @ 0x1C00BDCA8 (ndisWdfSendPmParametersForAoAc.c)
 *     ?ndisDisconnectInStandby@@YA_NXZ @ 0x1C011C674 (-ndisDisconnectInStandby@@YA_NXZ.c)
 */

__int64 __fastcall ndisWdfRequestNicQuiet(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v3; // al
  unsigned __int8 RemoteWakeEnabled; // bl

  AoAc = a1->AoAc;
  v3 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  RemoteWakeEnabled = AoAc->RemoteWakeEnabled;
  AoAc->WdfAoAcTransition = 1;
  KeReleaseSpinLock(&AoAc->Lock, v3);
  if ( RemoteWakeEnabled && !ndisDisconnectInStandby() )
    ndisWdfSendPmParametersForAoAc((char)a1);
  ndisUpdateMiniportCsTrafficStatistics(a1, 1);
  a1->DriverHandle->CxBlock->Chars.EvtCxPowerAoAcEngage(a1->MiniportAdapterContext);
  return 0LL;
}
