/*
 * XREFs of ndisIfCreateOrUpdateInterface @ 0x1C0042394
 * Callers:
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00EA23C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001C21C (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C001E404 (ndisIfFindInterfaceByInterfaceGuid.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C0042598 (ndisIfDeregisterInterfaceEx.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C00B3EDC (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C00E262C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ndisIfOpenInterfacePersistedStorage @ 0x1C00E33B0 (ndisIfOpenInterfacePersistedStorage.c)
 */

void __fastcall ndisIfCreateOrUpdateInterface(struct _GUID *a1)
{
  int v2; // eax
  KIRQL v3; // si
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // rax
  struct _LIST_ENTRY *v5; // rdi
  KIRQL v6; // bl
  unsigned int Flink_high; // ebx
  KIRQL v8; // si
  HANDLE v9; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v2 = ndisIfOpenInterfacePersistedStorage(a1, &v9);
  if ( (int)(v2 + 0x80000000) < 0 || v2 == -1073741772 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
    v5 = InterfaceByInterfaceGuid;
    if ( InterfaceByInterfaceGuid )
    {
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByInterfaceGuid[90].Flink, 0xFu);
      ++LODWORD(v5[81].Blink);
    }
    KeReleaseSpinLock(&ndisIfListLock, v3);
    if ( v9 )
    {
      if ( v5 )
      {
        ndisIfUpdateIfBlockFromPersistedState((struct _NDIS_IF_BLOCK *)v5, (struct KRegKey *)&v9);
        v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        IFBLOCK_DECREMENT_REF(v5, 0xFu);
        KeReleaseSpinLock(&ndisIfListLock, v6);
      }
      else
      {
        Handle = 0LL;
        ndisLoadNetworkInterfaceFromPersistedState(a1, (struct KRegKey *)&v9, (struct KRegKey *)&Handle);
        if ( Handle )
          ZwClose(Handle);
      }
    }
    else
    {
      if ( !v5 )
        return;
      Flink_high = 0;
      v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      if ( LODWORD(v5[88].Flink) == 1 )
        Flink_high = HIDWORD(v5->Flink);
      IFBLOCK_DECREMENT_REF(v5, 0xFu);
      KeReleaseSpinLock(&ndisIfListLock, v8);
      if ( Flink_high )
        ndisIfDeregisterInterfaceEx(Flink_high, 1LL);
    }
  }
  if ( v9 )
    ZwClose(v9);
}
