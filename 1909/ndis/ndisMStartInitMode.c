/*
 * XREFs of ndisMStartInitMode @ 0x1C010B520
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     NdisSetTimer @ 0x1C001CC60 (NdisSetTimer.c)
 */

void __fastcall ndisMStartInitMode(__int64 a1)
{
  if ( (unsigned __int8)ndisReferenceMiniport(a1) )
  {
    *(_BYTE *)(a1 + 1995) = 1;
    *(_QWORD *)(a1 + 2136) = ndisMDispatchReceiveNetBufferListsWithLock;
    *(_QWORD *)(a1 + 2144) = ndisMDispatchReceiveNetBufferListsWithLock;
    *(_BYTE *)(a1 + 2665) = 0;
    KeClearEvent((PRKEVENT)(a1 + 2984));
    NdisSetTimer((PNDIS_TIMER)(a1 + 2776), 0x7530u);
  }
}
