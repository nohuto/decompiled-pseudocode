/*
 * XREFs of ndisMQueueReceiveNetBufferLists @ 0x1C006E668
 * Callers:
 *     ndisMIndicateReceiveNblsWithThrottling @ 0x1C006E1C0 (ndisMIndicateReceiveNblsWithThrottling.c)
 * Callees:
 *     ndisReturnNetBufferListsInternal @ 0x1C0026640 (ndisReturnNetBufferListsInternal.c)
 *     ?ndisMPeriodicPendingReceives@@YAEPEAXPEAU_NET_BUFFER_LIST@@KKKPEAPEAU1@@Z @ 0x1C006CE1C (-ndisMPeriodicPendingReceives@@YAEPEAXPEAU_NET_BUFFER_LIST@@KKKPEAPEAU1@@Z.c)
 *     ?ndisMPeriodicReceivesResources@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C006CF9C (-ndisMPeriodicReceivesResources@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C006D158 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006D1D4 (-ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisMQueueReceiveNetBufferLists(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        int a3,
        unsigned int a4,
        char a5)
{
  char v5; // bl
  struct _NET_BUFFER_LIST *v6; // rdi
  char v8; // al
  struct _NET_BUFFER_LIST *v9; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0LL;
  v9 = 0LL;
  if ( (a5 & 2) != 0 )
  {
    v8 = ndisMPeriodicReceivesResources(a1, a2, a3, a4, a5);
  }
  else
  {
    v8 = ndisMPeriodicPendingReceives(a1, a2, a3, a4, a5, &v9);
    v6 = v9;
  }
  if ( v8 )
  {
    ndisQueuePeriodicReceivesWorkItem(a1, v5 & 1);
    ndisQueuePeriodicReceivesTimer();
  }
  if ( v6 )
    ndisReturnNetBufferListsInternal((__int64)a1, v6, v5 & 1, 0LL);
}
