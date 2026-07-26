/*
 * XREFs of ?ndisFindFirstReceiveFilterByOpen@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C003A6F0
 * Callers:
 *     ndisClearReceiveFiltersForProtocol @ 0x1C00E1CA0 (ndisClearReceiveFiltersForProtocol.c)
 * Callees:
 *     <none>
 */

struct _NDIS_RECEIVE_FILTER_BLOCK *__fastcall ndisFindFirstReceiveFilterByOpen(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  _LIST_ENTRY *v3; // rdi
  KIRQL v4; // cl
  _LIST_ENTRY *Flink; // rax

  MiniportHandle = a1->MiniportHandle;
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
  MiniportHandle->MiniportThread = KeGetCurrentThread();
  Flink = MiniportHandle->ReceiveFilterList.Flink;
  MiniportHandle->LockDbg = 2689705;
  while ( Flink != &MiniportHandle->ReceiveFilterList )
  {
    if ( (struct _NDIS_OPEN_BLOCK *)Flink[4].Flink == a1 )
    {
      v3 = Flink;
      break;
    }
    Flink = Flink->Flink;
  }
  MiniportHandle->MiniportThread = 0LL;
  MiniportHandle->LockDbg = 0;
  KeReleaseSpinLock(&MiniportHandle->Lock, v4);
  return (struct _NDIS_RECEIVE_FILTER_BLOCK *)v3;
}
