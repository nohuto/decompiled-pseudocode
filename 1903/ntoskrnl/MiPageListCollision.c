/*
 * XREFs of MiPageListCollision @ 0x1401194A4
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14002BE20 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14009C010 (MiUnlinkNodeLargePageHelper.c)
 *     MiReplenishPageSlist @ 0x1400DB080 (MiReplenishPageSlist.c)
 *     MiScrubNodeLargePageList @ 0x1402E6DC0 (MiScrubNodeLargePageList.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiZeroPageWorkMapping @ 0x140119504 (MiZeroPageWorkMapping.c)
 */

__int64 __fastcall MiPageListCollision(__int64 a1)
{
  __int64 v1; // r10
  __int64 result; // rax
  int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r8
  _BYTE *v6; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 34) &= ~8u;
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_BYTE *)(v1 + 69) = 1;
  result = MiSwizzleInvalidPte(128LL);
  *(_QWORD *)(v5 + 16) = result;
  v6 = *(_BYTE **)(v4 + 32);
  if ( v6 )
  {
    if ( (*v6 & 1) != 0 )
      return MiZeroPageWorkMapping(*(unsigned int *)(v4 + 64), v6, v3 == 0 ? 2 : 0, (unsigned int)-v3);
  }
  return result;
}
