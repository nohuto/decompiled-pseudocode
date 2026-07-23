/*
 * XREFs of MxGetPhase0Mapping @ 0x1409C17B0
 * Callers:
 *     MiFillPhysicalPages @ 0x14012B050 (MiFillPhysicalPages.c)
 *     MxCopyPage @ 0x1409C0DC8 (MxCopyPage.c)
 *     MxSwapPages @ 0x1409C14C8 (MxSwapPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
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
