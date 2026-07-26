/*
 * XREFs of ndisIfDetachMiniportBlock @ 0x1C0042740
 * Callers:
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00E346C (ndisIfRemoveIfBlockMiniportAssociation.c)
 * Callees:
 *     ndisMDereferenceIfBlock @ 0x1C0019E34 (ndisMDereferenceIfBlock.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001C21C (IFBLOCK_DECREMENT_REF.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 */

void __fastcall ndisIfDetachMiniportBlock(__int64 a1)
{
  __int64 v1; // rsi
  KIRQL v3; // al
  KIRQL v4; // al
  KIRQL v5; // bl
  ULONG_PTR v6; // rcx
  KIRQL v7; // bl
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 4072);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  *(_BYTE *)(v1 + 1403) = 0;
  *(_BYTE *)(a1 + 4064) = 0;
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v3);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 4080) = &Event;
  ndisMDereferenceIfBlock(a1, MPIFREF_NUMBER_OF_TAGS|MPIFREF_GETTOP|0xE0);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 4080) = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  *(_QWORD *)(a1 + 4072) = 0LL;
  v5 = v4;
  v6 = *(_QWORD *)(v1 + 1448);
  *(_QWORD *)(v1 + 1416) = 0LL;
  NdisFreeRefCount(v6);
  *(_QWORD *)(v1 + 1448) = 0LL;
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v5);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF((_QWORD *)v1, 0xCu);
  KeReleaseSpinLock(&ndisIfListLock, v7);
}
