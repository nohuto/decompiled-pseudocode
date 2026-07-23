/*
 * XREFs of MiReplaceLockedPage @ 0x14018B174
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     MiCanPageMove @ 0x140118464 (MiCanPageMove.c)
 *     MiTradeActivePage @ 0x14012DFF4 (MiTradeActivePage.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rdi
  int v9; // eax
  __int64 Page; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned __int8 v15; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(a2 + 32) == 1 && MiCanPageMove(a2) )
  {
    v15 = 17;
    v8 = (*(_QWORD *)(a2 + 40) >> 36) & 3LL;
    v9 = MiPageToNode((a2 + 0x58000000000LL) / 48, 0);
    Page = MiGetPage(
             *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL)),
             (v9 << byte_14043B109) | ((_DWORD)v8 << byte_14043B10A) | (unsigned int)((a2 + 0x58000000000LL) / 48) & dword_14043B148,
             0);
    if ( Page != -1 )
    {
      v11 = 48 * Page - 0x58000000000LL;
      v12 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, &v15);
      if ( v12 )
      {
        v13 = MiTbFlushType(a1);
        if ( (unsigned int)MiTradeActivePage(a2, v11, a3, v13, a4) )
        {
          MiUnlockProtoPoolPage(v12, v15);
          *(_QWORD *)(a2 + 16) = ZeroPte;
          MiSetOriginalPtePfnFromFreeList((_QWORD *)(a2 + 16));
          MiReleaseFreshPage(a2);
          return 1LL;
        }
        MiUnlockProtoPoolPage(v12, v15);
      }
      MiReleaseFreshPage(v11);
    }
  }
  return 0LL;
}
