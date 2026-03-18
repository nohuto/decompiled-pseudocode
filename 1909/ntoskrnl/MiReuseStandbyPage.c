/*
 * XREFs of MiReuseStandbyPage @ 0x1402DA660
 * Callers:
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA6D0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiReuseStandbyPage(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // edi
  char v3; // dl
  char v4; // al

  v2 = MiUnlinkPageFromList(BugCheckParameter2, 0);
  MiRestoreTransitionPte(BugCheckParameter2, 0);
  v3 = *(_BYTE *)(BugCheckParameter2 + 34) & 0xFD;
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x200000000000000uLL;
  v3 |= 5u;
  v4 = *(_BYTE *)(BugCheckParameter2 + 35);
  *(_BYTE *)(BugCheckParameter2 + 34) = v3;
  *(_BYTE *)(BugCheckParameter2 + 34) = v3 & 0xC7;
  *(_BYTE *)(BugCheckParameter2 + 35) = v4 & 0xDF;
  *(_QWORD *)(BugCheckParameter2 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(BugCheckParameter2 + 16));
  return v2;
}
