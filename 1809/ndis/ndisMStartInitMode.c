/*
 * XREFs of ndisMStartInitMode @ 0x1C00BCF2C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     NdisSetTimer @ 0x1C00154D0 (NdisSetTimer.c)
 */

void __fastcall ndisMStartInitMode(__int64 a1)
{
  if ( ndisReferenceMiniport(a1) )
  {
    *(_BYTE *)(a1 + 2003) = 1;
    *(_QWORD *)(a1 + 2152) = ndisMDispatchReceiveNetBufferListsWithLock;
    *(_QWORD *)(a1 + 2160) = ndisMDispatchReceiveNetBufferListsWithLock;
    *(_BYTE *)(a1 + 2681) = 0;
    KeClearEvent((PRKEVENT)(a1 + 3000));
    NdisSetTimer((PNDIS_TIMER)(a1 + 2792), 0x7530u);
  }
}
