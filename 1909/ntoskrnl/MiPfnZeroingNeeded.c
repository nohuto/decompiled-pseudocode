/*
 * XREFs of MiPfnZeroingNeeded @ 0x14009735C
 * Callers:
 *     MiCoalesceFreePages @ 0x14002BB50 (MiCoalesceFreePages.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiGetLargePage @ 0x140096E20 (MiGetLargePage.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 *     MiInitializeMdlBatchPages @ 0x1400C3614 (MiInitializeMdlBatchPages.c)
 *     MiConvertContiguousPages @ 0x1400C4818 (MiConvertContiguousPages.c)
 *     MiAddMdlPageToTradeBlock @ 0x14012DC64 (MiAddMdlPageToTradeBlock.c)
 *     MiAllocateMdlPagesByLists @ 0x140157054 (MiAllocateMdlPagesByLists.c)
 *     MiFreeLargeZeroPages @ 0x140186C94 (MiFreeLargeZeroPages.c)
 *     MiUpdateLargePagePfns @ 0x1402E00FC (MiUpdateLargePagePfns.c)
 *     MiAllocateLargeZeroPages @ 0x140898C74 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePage @ 0x1408997F8 (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPfnZeroingNeeded(__int64 a1, int a2)
{
  int v2; // ecx
  _BOOL8 result; // rax

  result = 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x3E0LL) == 0 )
  {
    v2 = *(unsigned __int8 *)(a1 + 34) >> 6;
    if ( v2 == a2 || ((unsigned __int8)((1 << v2) | (1 << a2)) & (unsigned __int8)byte_140465898) == 0 )
      return 0;
  }
  return result;
}
