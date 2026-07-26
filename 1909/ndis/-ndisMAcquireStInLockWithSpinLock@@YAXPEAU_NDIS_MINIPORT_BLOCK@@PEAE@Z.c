/*
 * XREFs of ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0018498
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0028904 (ndisIndicateInitialStateToBinding.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0028F10 (ndisIndicateInitialStateToFilter.c)
 *     ndisUpdateOperationalStatus @ 0x1C003F7A8 (ndisUpdateOperationalStatus.c)
 *     NdisMIndicateStatus @ 0x1C0098340 (NdisMIndicateStatus.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C00A589C (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMAcquireStInLockWithSpinLock(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 *a2)
{
  KIRQL v4; // bp
  unsigned int SyncFlags; // r8d
  unsigned int v6; // [rsp+30h] [rbp+8h]

  v4 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  for ( a1->MiniportThread = KeGetCurrentThread(); ; a1->MiniportThread = KeGetCurrentThread() )
  {
    SyncFlags = a1->SyncFlags;
    if ( (SyncFlags & 1) == 0 )
      break;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    v6 = 0;
    do
      ++v6;
    while ( v6 < 0x32 );
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  }
  *a2 = v4;
  a1->SyncFlags = SyncFlags | 1;
  a1->StatusProcessingThread = KeGetCurrentThread();
}
