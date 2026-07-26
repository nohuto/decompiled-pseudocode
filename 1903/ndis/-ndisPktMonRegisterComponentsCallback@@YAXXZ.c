/*
 * XREFs of ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C007C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F3C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceFilter @ 0x1C008E05C (ndisDereferenceFilter.c)
 *     ndisPktMonFilterRegister @ 0x1C010242C (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C0102588 (ndisPktMonOpenRegister.c)
 *     ndisPktMonMiniportRegister @ 0x1C0106F3C (ndisPktMonMiniportRegister.c)
 */

void ndisPktMonRegisterComponentsCallback(void)
{
  KIRQL v0; // al
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  KIRQL v2; // di
  KIRQL v3; // al
  KSPIN_LOCK *v4; // rbx
  KIRQL v5; // di
  KIRQL v6; // al
  __int64 v7; // rbx
  KIRQL v8; // si
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v1 = ndisMiniportList;
  v2 = v0;
  while ( v1 )
  {
    if ( v1->PnPDeviceState == NdisPnPDeviceStarted && (unsigned __int8)ndisReferenceMiniport((__int64)v1) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, v2);
      v1->PktMonComp.CompHandle = 0LL;
      *(_QWORD *)&v1->PktMonComp.PacketType = 0LL;
      ndisPktMonMiniportRegister((char)v1);
      v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport((__int64)v1, 0x55u);
    }
    v1 = v1->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
  v4 = (KSPIN_LOCK *)ndisGlobalFilterList;
  v5 = v3;
  while ( v4 )
  {
    if ( (v4[7] & 0x100) == 0 && ndisReferenceRefEx(v4 + 9, 2u, &v9) )
    {
      KeReleaseSpinLock(&ndisGlobalFilterListLock, v5);
      v4[99] = 0LL;
      v4[100] = 0LL;
      ndisPktMonFilterRegister((char)v4);
      v5 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
      ndisDereferenceFilter(v4);
    }
    v4 = (KSPIN_LOCK *)v4[13];
  }
  KeReleaseSpinLock(&ndisGlobalFilterListLock, v5);
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  v7 = *(_QWORD *)ndisGlobalOpenList;
  v8 = v6;
  while ( v7 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 232));
    if ( (*(_DWORD *)(v7 + 224) & 0x8000) != 0 || !*(_DWORD *)(v7 + 228) )
    {
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v7 + 232));
    }
    else
    {
      ndisMReferenceOpen(v7, 0x13u);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v7 + 232));
      KeReleaseSpinLock(&ndisGlobalOpenListLock, v8);
      *(_QWORD *)(v7 + 920) = 0LL;
      *(_QWORD *)(v7 + 928) = 0LL;
      ndisPktMonOpenRegister(v7);
      v8 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
      ndisMDereferenceOpenUnlocked(v7, 19);
    }
    v7 = *(_QWORD *)(v7 + 384);
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v8);
}
