/*
 * XREFs of ?ndisIfDetachMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0063A90
 * Callers:
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C0114E90 (ndisIfRemoveIfBlockMiniportAssociation.c)
 * Callees:
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001B4E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     NdisFreeRefCount @ 0x1C00C7CE0 (NdisFreeRefCount.c)
 */

void __fastcall ndisIfDetachMiniportBlock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_IF_BLOCK *IfBlock; // rsi
  KIRQL v3; // al
  KIRQL v4; // al
  KIRQL v5; // bl
  ULONG_PTR MpRefCountTracker; // rcx
  KIRQL v7; // bl
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  IfBlock = a1->IfBlock;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  IfBlock->MiniportAvailable = 0;
  a1->IfBlockAvailable = 0;
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v3);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  a1->IfBlockPointerRefZeroEvent = &Event;
  ndisMDereferenceIfBlock((__int64)a1, MPIFREF_NUMBER_OF_TAGS|MPIFREF_GETTOP|0xE0);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  a1->IfBlockPointerRefZeroEvent = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  a1->IfBlock = 0LL;
  v5 = v4;
  MpRefCountTracker = (ULONG_PTR)IfBlock->MpRefCountTracker;
  IfBlock->Miniport = 0LL;
  NdisFreeRefCount(MpRefCountTracker);
  IfBlock->MpRefCountTracker = 0LL;
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v5);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF((char *)IfBlock, 0xCu);
  KeReleaseSpinLock(&ndisIfListLock, v7);
}
