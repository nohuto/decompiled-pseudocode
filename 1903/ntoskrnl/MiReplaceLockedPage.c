/*
 * XREFs of MiReplaceLockedPage @ 0x1402CA5B0
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiTbFlushType @ 0x140023DD0 (MiTbFlushType.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiCanPageMove @ 0x14009D990 (MiCanPageMove.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x1400F6324 (MiTradeActivePage.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  int v8; // eax
  __int64 Page; // rax
  __int64 v10; // rbx
  ULONG_PTR v11; // rsi
  unsigned int v12; // eax
  unsigned __int8 v14; // [rsp+68h] [rbp+10h] BYREF

  v5 = a4;
  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( *(_WORD *)(a2 + 32) != 1 )
    return 0LL;
  if ( !MiCanPageMove(a2, a2, a3, a4) )
    return 0LL;
  v14 = 17;
  v8 = MiPageToNode((__int64)(a2 + 0x58000000000LL) / 48, 0);
  Page = MiGetPage(
           *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL)),
           ((__int64)(a2 + 0x58000000000LL) / 48) & dword_140465AB0 | (v8 << byte_140465A4D) | (((*(_QWORD *)(a2 + 40) >> 36) & 3) << byte_140465A4E),
           0LL);
  if ( Page == -1 )
    return 0LL;
  v10 = 48 * Page - 0x58000000000LL;
  v11 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, &v14);
  if ( !v11 )
  {
LABEL_8:
    MiReleaseFreshPage(v10);
    return 0LL;
  }
  v12 = MiTbFlushType(a1);
  if ( !(unsigned int)MiTradeActivePage(a2, v10, a3, v12, v5) )
  {
    MiUnlockProtoPoolPage(v11, v14);
    goto LABEL_8;
  }
  MiUnlockProtoPoolPage(v11, v14);
  *(_QWORD *)(a2 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a2 + 16));
  MiReleaseFreshPage(a2);
  return 1LL;
}
