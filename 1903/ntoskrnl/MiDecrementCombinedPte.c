/*
 * XREFs of MiDecrementCombinedPte @ 0x140140850
 * Callers:
 *     MiDeleteValidSystemPage @ 0x140024550 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x140026F90 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiDereferenceCombineBlock @ 0x140140824 (MiDereferenceCombineBlock.c)
 *     MiProcessCrcList @ 0x1406F3950 (MiProcessCrcList.c)
 *     MiDereferenceCombineCrc @ 0x1406F5394 (MiDereferenceCombineCrc.c)
 * Callees:
 *     MiFreeCombineBlock @ 0x1401415B4 (MiFreeCombineBlock.c)
 *     MiDeleteMergedPte @ 0x1401424E8 (MiDeleteMergedPte.c)
 *     MiLogCombinedPteDelete @ 0x1402E6660 (MiLogCombinedPteDelete.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402E66D8 (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiDecrementCombinedPte(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // r8
  __int64 v4; // rsi
  unsigned int v5; // edi

  v3 = *(volatile signed __int32 **)(((a2 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v4 = *(_QWORD *)v3;
  _InterlockedExchangeAdd(v3 + 98, 0xFFFFFFFF);
  v5 = 0;
  if ( a1
    && *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(a1 + 174)) != v4
    && !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) )
  {
    MiReturnCrossPartitionCombineCharges(v4, 1LL);
  }
  if ( _InterlockedDecrement64((volatile signed __int64 *)(a2 - 16)) )
    return 2LL;
  if ( *(_QWORD *)(a2 - 24) )
  {
    v5 = MiDeleteMergedPte(v4, a2);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(a2);
  }
  MiFreeCombineBlock(a2 - 48);
  return v5;
}
