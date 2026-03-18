/*
 * XREFs of MI_IS_PTE_IN_WS_SWAP_SET @ 0x14005B160
 * Callers:
 *     MiUnlockMdlWritePages @ 0x140024D30 (MiUnlockMdlWritePages.c)
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiReservePageFileSpace @ 0x14002F780 (MiReservePageFileSpace.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiWriteCompletePfn @ 0x1400BDF90 (MiWriteCompletePfn.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiAddToReservationCluster @ 0x140163208 (MiAddToReservationCluster.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PTE_IN_WS_SWAP_SET(__int64 a1, _WORD *a2)
{
  __int16 v2; // cx
  __int64 result; // rax

  v2 = *(_WORD *)(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*a2) >> 4) + 7904) + 204LL);
  result = 1LL;
  if ( (v2 & 0x10) == 0 && ((v2 & 0x20) == 0 || (*(_QWORD *)a2 & 2) == 0) )
    return 0LL;
  return result;
}
