/*
 * XREFs of ?ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0079AA8
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00787C4 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00794A8 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FCD38 (-ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWdfRequestNicQuiet(struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v3; // al

  AoAc = MiniportAdapterHandle->AoAc;
  v3 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  AoAc->WdfAoAcTransition = 1;
  KeReleaseSpinLock(&AoAc->Lock, v3);
  ndisMSendOidPmParametersForAoAc(MiniportAdapterHandle);
  ndisUpdateMiniportCsTrafficStatistics(MiniportAdapterHandle, 1);
  MiniportAdapterHandle->DriverHandle->CxBlock->Chars.EvtCxPowerAoAcEngage(MiniportAdapterHandle->MiniportAdapterContext);
  return 0LL;
}
