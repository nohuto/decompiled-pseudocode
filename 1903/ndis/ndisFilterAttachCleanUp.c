/*
 * XREFs of ndisFilterAttachCleanUp @ 0x1C008F4AC
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisSetupLwfMiniportHandlers @ 0x1C00240B4 (ndisSetupLwfMiniportHandlers.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C0029E44 (ndisIfUpdateFilterIfStack.c)
 *     NdisIfAddIfStackEntry @ 0x1C002A1F0 (NdisIfAddIfStackEntry.c)
 *     ndisDereferenceFilter @ 0x1C008E05C (ndisDereferenceFilter.c)
 *     NdisIfDeregisterInterface @ 0x1C0114940 (NdisIfDeregisterInterface.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C0114960 (NdisIfFreeNetLuidIndex.c)
 */

void __fastcall ndisFilterAttachCleanUp(PVOID P, struct _NDIS_MINIPORT_BLOCK *a2, char a3)
{
  unsigned __int64 v5; // rbx
  KIRQL v6; // r8
  __int64 v7; // rdx
  _NDIS_FILTER_BLOCK *v8; // rcx
  __int64 v9; // rcx
  _NDIS_FILTER_BLOCK *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  NET_IFINDEX v13; // edx
  KIRQL v14; // bl
  KIRQL v15; // al
  KIRQL v16; // bl

  if ( a3 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)P + 87) + 1312LL);
    NdisIfDeregisterInterface(*((_DWORD *)P + 172));
    NdisIfFreeNetLuidIndex(HIWORD(v5), (v5 >> 24) & 0xFFFFFF);
    *((_QWORD *)P + 87) = 0LL;
    *((_DWORD *)P + 172) = 0;
  }
  if ( a2 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    a2->MiniportThread = KeGetCurrentThread();
    v7 = *((_QWORD *)P + 14);
    v8 = (_NDIS_FILTER_BLOCK *)*((_QWORD *)P + 15);
    if ( v7 )
      *(_QWORD *)(v7 + 120) = v8;
    else
      a2->LowestFilter = v8;
    v9 = *((_QWORD *)P + 15);
    v10 = (_NDIS_FILTER_BLOCK *)*((_QWORD *)P + 14);
    if ( v9 )
      *(_QWORD *)(v9 + 112) = v10;
    else
      a2->HighestFilter = v10;
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v6);
    v11 = *((_QWORD *)P + 15);
    if ( v11 )
    {
      v12 = *((_QWORD *)P + 14);
      if ( v12 )
        v13 = *(_DWORD *)(v12 + 688);
      else
        v13 = *(_DWORD *)(*((_QWORD *)P + 4) + 4056LL);
      NdisIfAddIfStackEntry(*(_DWORD *)(v11 + 688), v13);
      v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      ndisIfUpdateFilterIfStack(*((_QWORD *)P + 4));
      KeReleaseSpinLock(&ndisIfListLock, v14);
    }
    v15 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
    a2->MiniportThread = KeGetCurrentThread();
    v16 = v15;
    ndisSetupLwfMiniportHandlers(a2);
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v16);
  }
  ndisDereferenceFilter((KSPIN_LOCK *)P, 0xFFu);
}
