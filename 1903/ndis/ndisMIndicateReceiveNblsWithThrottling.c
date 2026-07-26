/*
 * XREFs of ndisMIndicateReceiveNblsWithThrottling @ 0x1C00AEE10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z @ 0x1C00AD2D4 (-ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z.c)
 *     ?ndisMQueueReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00ADD24 (-ndisMQueueReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisPeriodicReceivesGetMaxNblCount @ 0x1C00AEE60 (ndisPeriodicReceivesGetMaxNblCount.c)
 */

void __fastcall ndisMIndicateReceiveNblsWithThrottling(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        int a3,
        unsigned int a4,
        char a5)
{
  unsigned int MaxNblCount; // eax
  unsigned int v7; // r8d
  __int64 v8; // r9
  struct _NDIS_FILTER_BLOCK *v9; // r10
  unsigned int v10; // r11d

  if ( (a5 & 1) != 0 || KeGetCurrentIrql() )
  {
    ndisMQueueReceiveNetBufferLists(a1, a2, a3, a4, a5);
  }
  else
  {
    MaxNblCount = ndisPeriodicReceivesGetMaxNblCount();
    ndisMIndicateSplitNblChain(v9, a2, v7, v8, v10, MaxNblCount);
  }
}
