/*
 * XREFs of ndisIfCreateOrUpdateInterface @ 0x1C0067A40
 * Callers:
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C0115E70 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001B4E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C003EAAC (ndisIfFindInterfaceByInterfaceGuid.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00638AC (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C00FC168 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ndisIfOpenInterfacePersistedStorage @ 0x1C0114E70 (ndisIfOpenInterfacePersistedStorage.c)
 */

void __fastcall ndisIfCreateOrUpdateInterface(struct _GUID *a1)
{
  int v2; // eax
  KIRQL v3; // si
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // rax
  struct _LIST_ENTRY *v5; // rdi
  KIRQL v6; // bl
  int Flink_high; // ebx
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
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByInterfaceGuid[89].Blink, 0xFu);
      ++LODWORD(v5[81].Blink);
    }
    KeReleaseSpinLock(&ndisIfListLock, v3);
    if ( v9 )
    {
      if ( v5 )
      {
        ndisIfUpdateIfBlockFromPersistedState((struct _NDIS_IF_BLOCK *)v5, (struct KRegKey *)&v9);
        v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        IFBLOCK_DECREMENT_REF((char *)v5, 0xFu);
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
      if ( LODWORD(v5[87].Blink) == 1 )
        Flink_high = HIDWORD(v5->Flink);
      IFBLOCK_DECREMENT_REF((char *)v5, 0xFu);
      KeReleaseSpinLock(&ndisIfListLock, v8);
      if ( Flink_high )
        ndisIfDeregisterInterfaceEx(Flink_high, 1);
    }
  }
  if ( v9 )
    ZwClose(v9);
}
