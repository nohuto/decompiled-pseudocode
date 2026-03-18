/*
 * XREFs of vUnmapFontCacheFile @ 0x1C00E9054
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00E8FC0 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bInitCacheTable @ 0x1C0285BB8 (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x1C0285D30 (bReAllocCacheFile.c)
 * Callees:
 *     vUnmapFile @ 0x1C00E90B4 (vUnmapFile.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  void *result; // rax

  v0 = qword_1C032C338;
  if ( *(_QWORD *)(qword_1C032C338 + 80) )
  {
    if ( *(_QWORD *)qword_1C032C338 )
    {
      v1 = *(_QWORD *)(qword_1C032C338 + 96);
      *(_QWORD *)(qword_1C032C338 + 96) = 0LL;
      vUnmapFile((struct _FILEVIEW *)(v0 + 48));
      v2 = (_QWORD *)qword_1C032C338;
      result = memset((void *)(qword_1C032C338 + 48), 0, 0x50uLL);
      *v2 = 0LL;
      v2[12] = v1;
    }
  }
  return result;
}
