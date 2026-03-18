/*
 * XREFs of MxGetPhase0Mapping @ 0x1409FC76C
 * Callers:
 *     MiFillPhysicalPages @ 0x14012B9B4 (MiFillPhysicalPages.c)
 *     MxCopyPage @ 0x1409FBD30 (MxCopyPage.c)
 *     MxSwapPages @ 0x1409FC488 (MxSwapPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 MxGetPhase0Mapping()
{
  unsigned __int64 v1; // r10
  unsigned __int64 v2; // r9
  __int64 v3; // r9
  __int64 v4; // r11

  if ( MiHalScratchPte )
    return MiHalScratchPte << 25 >> 16;
  v1 = (((unsigned __int64)MiLowHalVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  while ( (*(_BYTE *)v1 & 1) == 0 )
  {
LABEL_9:
    v1 += 8LL;
    if ( (v1 & 0xFFF) == 0 )
      return 0LL;
  }
  v2 = (__int64)(v1 << 25) >> 16;
  while ( MI_READ_PTE_LOCK_FREE(v2) )
  {
    v2 = v3 + 8;
    if ( (v2 & 0xFFF) == 0 )
      goto LABEL_9;
  }
  MiHalScratchPte = v3;
  return ((v3 << 25) - v4) >> 16;
}
