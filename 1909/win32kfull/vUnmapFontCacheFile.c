/*
 * XREFs of vUnmapFontCacheFile @ 0x1C011D9C4
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C011D930 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bInitCacheTable @ 0x1C02854F8 (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x1C0285670 (bReAllocCacheFile.c)
 * Callees:
 *     vUnmapFile @ 0x1C011DA24 (vUnmapFile.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  void *result; // rax

  v0 = qword_1C032A328;
  if ( *(_QWORD *)(qword_1C032A328 + 80) )
  {
    if ( *(_QWORD *)qword_1C032A328 )
    {
      v1 = *(_QWORD *)(qword_1C032A328 + 96);
      *(_QWORD *)(qword_1C032A328 + 96) = 0LL;
      vUnmapFile((struct _FILEVIEW *)(v0 + 48));
      v2 = (_QWORD *)qword_1C032A328;
      result = memset((void *)(qword_1C032A328 + 48), 0, 0x50uLL);
      *v2 = 0LL;
      v2[12] = v1;
    }
  }
  return result;
}
