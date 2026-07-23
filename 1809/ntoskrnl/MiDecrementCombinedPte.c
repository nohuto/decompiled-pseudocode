/*
 * XREFs of MiDecrementCombinedPte @ 0x14011FA64
 * Callers:
 *     MiDeletePteList @ 0x140035B80 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x14007A850 (MiDeleteValidSystemPage.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiDereferenceCombineBlock @ 0x14011FA1C (MiDereferenceCombineBlock.c)
 *     MiProcessCrcList @ 0x140620320 (MiProcessCrcList.c)
 *     MiDereferenceCombineCrc @ 0x140860234 (MiDereferenceCombineCrc.c)
 * Callees:
 *     MiFreeCombineBlock @ 0x14011FB14 (MiFreeCombineBlock.c)
 *     MiDeleteMergedPte @ 0x14011FC90 (MiDeleteMergedPte.c)
 *     MiLogCombinedPteDelete @ 0x1402CC268 (MiLogCombinedPteDelete.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402CC2E0 (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiDecrementCombinedPte(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // r8
  __int64 v4; // rsi
  unsigned int v5; // edi

  v3 = *(volatile signed __int32 **)(((a2 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v4 = *(_QWORD *)v3;
  _InterlockedExchangeAdd(v3 + 96, 0xFFFFFFFF);
  v5 = 0;
  if ( a1
    && *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174)) != v4
    && _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
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
