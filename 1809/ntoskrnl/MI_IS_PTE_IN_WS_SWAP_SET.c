/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x14011BA24
 * Callers:
 *     MiWriteCompletePfn @ 0x14001E770 (MiWriteCompletePfn.c)
 *     MiDeletePteList @ 0x140035B80 (MiDeletePteList.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiReservePageFileSpace @ 0x140081310 (MiReservePageFileSpace.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiAddToReservationCluster @ 0x14015096C (MiAddToReservationCluster.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(__int64 a1, _WORD *a2)
{
  __int16 v2; // cx

  v2 = *(_WORD *)(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*a2) >> 4) + 7136) + 204LL);
  return (v2 & 0x10) != 0 || (v2 & 0x20) != 0 && (*(_QWORD *)a2 & 2) != 0;
}
