/*
 * XREFs of MiPfnZeroingNeeded @ 0x1400A452C
 * Callers:
 *     MiCoalesceFreePages @ 0x14002B760 (MiCoalesceFreePages.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     MiInitializeMdlBatchPages @ 0x14009F4C0 (MiInitializeMdlBatchPages.c)
 *     MiConvertContiguousPages @ 0x1400A1890 (MiConvertContiguousPages.c)
 *     MiGetLargePage @ 0x1400A3FF0 (MiGetLargePage.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiTradePage @ 0x1400D93C0 (MiTradePage.c)
 *     MiAddMdlPageToTradeBlock @ 0x14012D214 (MiAddMdlPageToTradeBlock.c)
 *     MiAllocateMdlPagesByLists @ 0x1401569B4 (MiAllocateMdlPagesByLists.c)
 *     MiFreeLargeZeroPages @ 0x1401866E4 (MiFreeLargeZeroPages.c)
 *     MiUpdateLargePagePfns @ 0x1402E039C (MiUpdateLargePagePfns.c)
 *     MiAllocateLargeZeroPages @ 0x140899454 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePage @ 0x140899FD8 (MiGetFastLargePage.c)
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
    if ( v2 == a2 || ((unsigned __int8)((1 << v2) | (1 << a2)) & (unsigned __int8)byte_140465B98) == 0 )
      return 0;
  }
  return result;
}
