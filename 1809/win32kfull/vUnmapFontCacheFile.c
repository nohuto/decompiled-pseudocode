/*
 * XREFs of vUnmapFontCacheFile @ 0x1C00C3788
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00C36F4 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bInitCacheTable @ 0x1C026D33C (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x1C026D4B4 (bReAllocCacheFile.c)
 * Callees:
 *     vUnmapFile @ 0x1C00C37E8 (vUnmapFile.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  void *result; // rax

  v0 = qword_1C0317308;
  if ( *(_QWORD *)(qword_1C0317308 + 80) )
  {
    if ( *(_QWORD *)qword_1C0317308 )
    {
      v1 = *(_QWORD *)(qword_1C0317308 + 96);
      *(_QWORD *)(qword_1C0317308 + 96) = 0LL;
      vUnmapFile((struct _FILEVIEW *)(v0 + 48));
      v2 = (_QWORD *)qword_1C0317308;
      result = memset((void *)(qword_1C0317308 + 48), 0, 0x50uLL);
      *v2 = 0LL;
      v2[12] = v1;
    }
  }
  return result;
}
