/*
 * XREFs of ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019B2C
 * Callers:
 *     ndisUpdateOperationalStatus @ 0x1C0017108 (ndisUpdateOperationalStatus.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0017CAC (ndisIndicateInitialStateToFilter.c)
 *     ndisFIndicateStatusInternal @ 0x1C001817C (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C00188F4 (ndisIndicateInitialStateToBinding.c)
 *     NdisMIndicateStatus @ 0x1C0060B30 (NdisMIndicateStatus.c)
 *     ndisSendSystemPowerStateIndication @ 0x1C0069D10 (ndisSendSystemPowerStateIndication.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMAcquireStInLockWithSpinLock(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 *a2)
{
  KIRQL v4; // bp
  unsigned int SyncFlags; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // [rsp+30h] [rbp+8h]

  v4 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  for ( a1->MiniportThread = KeGetCurrentThread(); ; a1->MiniportThread = KeGetCurrentThread() )
  {
    a1->LockDbg = 2102630;
    SyncFlags = a1->SyncFlags;
    if ( (SyncFlags & 1) == 0 )
      break;
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    v7 = 0;
    do
      ++v7;
    while ( v7 < 0x32 );
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  }
  a1->StatusProcessingDbgX = 2102634;
  a1->SyncFlags = SyncFlags | 1;
  CurrentThread = KeGetCurrentThread();
  *a2 = v4;
  a1->StatusProcessingThread = CurrentThread;
}
