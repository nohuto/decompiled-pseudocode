/*
 * XREFs of ndisPktMonRegisterComponentsCallback @ 0x1C0050680
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001BD00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisIsMiniportReady @ 0x1C005021C (ndisIsMiniportReady.c)
 *     ndisDereferenceFilter @ 0x1C005AE80 (ndisDereferenceFilter.c)
 *     ndisPktMonMiniportRegister @ 0x1C00BDA64 (ndisPktMonMiniportRegister.c)
 *     ndisPktMonFilterRegister @ 0x1C00C36AC (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C00C37D0 (ndisPktMonOpenRegister.c)
 */

void ndisPktMonRegisterComponentsCallback()
{
  KIRQL v0; // al
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  KIRQL v2; // di
  KIRQL v3; // al
  KSPIN_LOCK *v4; // rbx
  KIRQL v5; // di
  KIRQL v6; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rbx
  KIRQL v8; // di
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v1 = ndisMiniportList;
  v2 = v0;
  while ( v1 )
  {
    if ( v1->PnPDeviceState == NdisPnPDeviceStarted && ndisReferenceMiniport((__int64)v1) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, v2);
      if ( ndisIsMiniportReady(v1) )
      {
        memset(&v1->PktMonComp, 0, sizeof(v1->PktMonComp));
        ndisPktMonMiniportRegister(v1);
      }
      v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport((__int64)v1, 0x55u);
    }
    v1 = v1->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
  v4 = (KSPIN_LOCK *)ndisGlobalFilterList;
  v5 = v3;
  if ( ndisGlobalFilterList )
  {
    do
    {
      if ( (v4[7] & 0x108) == 0 && ndisReferenceRefEx(v4 + 9, 2u, &v9) )
      {
        KeReleaseSpinLock(&ndisGlobalFilterListLock, v5);
        if ( (v4[7] & 0x108) == 0 )
        {
          memset(v4 + 100, 0, 0x38uLL);
          ndisPktMonFilterRegister(v4);
        }
        v5 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
        ndisDereferenceFilter(v4);
      }
      v4 = (KSPIN_LOCK *)v4[13];
    }
    while ( v4 );
  }
  KeReleaseSpinLock(&ndisGlobalFilterListLock, v5);
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v8 = v6;
  while ( NextGlobalOpen )
  {
    KeAcquireSpinLockAtDpcLevel(&NextGlobalOpen->SpinLock);
    if ( (NextGlobalOpen->OpenFlags & 0x8000) != 0
      || (NextGlobalOpen->OpenFlags & 0x10000) != 0
      || !NextGlobalOpen->References )
    {
      KeReleaseSpinLockFromDpcLevel(&NextGlobalOpen->SpinLock);
    }
    else
    {
      ndisMReferenceOpen((__int64)NextGlobalOpen, 0x13u);
      KeReleaseSpinLockFromDpcLevel(&NextGlobalOpen->SpinLock);
      KeReleaseSpinLock(&ndisGlobalOpenListLock, v8);
      if ( (NextGlobalOpen->OpenFlags & 0x8000) == 0 && (NextGlobalOpen->OpenFlags & 0x10000) == 0 )
      {
        memset(&NextGlobalOpen->PktMonComp, 0, sizeof(NextGlobalOpen->PktMonComp));
        ndisPktMonOpenRegister(NextGlobalOpen);
      }
      v8 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
      ndisMDereferenceOpenUnlocked((__int64)NextGlobalOpen, 19);
    }
    NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v8);
}
