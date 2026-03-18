/*
 * XREFs of vUnmapFontCacheFile @ 0x1C004F654
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C004F5D0 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bInitCacheTable @ 0x1C0259D90 (bInitCacheTable.c)
 *     bReAllocCacheFile @ 0x1C0259EF0 (bReAllocCacheFile.c)
 * Callees:
 *     vUnmapFile @ 0x1C004F6B4 (vUnmapFile.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  void *result; // rax

  v0 = qword_1C0326C58;
  if ( *(_QWORD *)(qword_1C0326C58 + 80) )
  {
    if ( *(_QWORD *)qword_1C0326C58 )
    {
      v1 = *(_QWORD *)(qword_1C0326C58 + 96);
      *(_QWORD *)(qword_1C0326C58 + 96) = 0LL;
      vUnmapFile((struct _FILEVIEW *)(v0 + 48));
      v2 = (_QWORD *)qword_1C0326C58;
      result = memset((void *)(qword_1C0326C58 + 48), 0, 0x50uLL);
      *v2 = 0LL;
      v2[12] = v1;
    }
  }
  return result;
}
