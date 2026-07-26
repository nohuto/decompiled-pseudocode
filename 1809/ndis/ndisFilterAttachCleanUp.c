/*
 * XREFs of ndisFilterAttachCleanUp @ 0x1C005C06C
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011A9B4 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001B3F8 (ndisSetupLwfMiniportHandlers.c)
 *     ndisIfUpdateFilterIfStack @ 0x1C002297C (ndisIfUpdateFilterIfStack.c)
 *     NdisIfAddIfStackEntry @ 0x1C0022C40 (NdisIfAddIfStackEntry.c)
 *     ndisDereferenceFilter @ 0x1C005AE80 (ndisDereferenceFilter.c)
 *     NdisIfDeregisterInterface @ 0x1C00E2EB0 (NdisIfDeregisterInterface.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00E2ED0 (NdisIfFreeNetLuidIndex.c)
 */

void __fastcall ndisFilterAttachCleanUp(PVOID P, __int64 a2, char a3)
{
  unsigned __int64 v5; // rbx
  KIRQL v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  NET_IFINDEX v13; // edx
  KIRQL v14; // bl
  KIRQL v15; // al
  KIRQL v16; // bl

  if ( a3 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)P + 88) + 1312LL);
    NdisIfDeregisterInterface(*((_DWORD *)P + 174));
    NdisIfFreeNetLuidIndex(HIWORD(v5), (v5 >> 24) & 0xFFFFFF);
    *((_QWORD *)P + 88) = 0LL;
    *((_DWORD *)P + 174) = 0;
  }
  if ( a2 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 1864) = 2099118;
    v7 = *((_QWORD *)P + 14);
    v8 = *((_QWORD *)P + 15);
    if ( v7 )
      *(_QWORD *)(v7 + 120) = v8;
    else
      *(_QWORD *)(a2 + 2056) = v8;
    v9 = *((_QWORD *)P + 15);
    v10 = *((_QWORD *)P + 14);
    if ( v9 )
      *(_QWORD *)(v9 + 112) = v10;
    else
      *(_QWORD *)(a2 + 2064) = v10;
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v6);
    v11 = *((_QWORD *)P + 15);
    if ( v11 )
    {
      v12 = *((_QWORD *)P + 14);
      if ( v12 )
        v13 = *(_DWORD *)(v12 + 696);
      else
        v13 = *(_DWORD *)(*((_QWORD *)P + 4) + 4088LL);
      NdisIfAddIfStackEntry(*(_DWORD *)(v11 + 696), v13);
      v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      ndisIfUpdateFilterIfStack(*((_QWORD *)P + 4));
      KeReleaseSpinLock(&ndisIfListLock, v14);
    }
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
    v16 = v15;
    *(_DWORD *)(a2 + 1864) = 2099157;
    ndisSetupLwfMiniportHandlers(a2);
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v16);
  }
  ndisDereferenceFilter((KSPIN_LOCK *)P, 0xFFu);
}
