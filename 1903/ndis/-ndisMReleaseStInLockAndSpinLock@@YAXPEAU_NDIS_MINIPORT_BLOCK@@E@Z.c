/*
 * XREFs of ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0029408
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0028914 (ndisIndicateInitialStateToBinding.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0028F20 (ndisIndicateInitialStateToFilter.c)
 *     ndisUpdateOperationalStatus @ 0x1C003F7B8 (ndisUpdateOperationalStatus.c)
 *     NdisMIndicateStatus @ 0x1C0098170 (NdisMIndicateStatus.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C00A56CC (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMReleaseStInLockAndSpinLock(struct _NDIS_MINIPORT_BLOCK *a1, KIRQL a2)
{
  a1->SyncFlags &= ~1u;
  a1->StatusProcessingThread = 0LL;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  KeLowerIrql(a2);
}
