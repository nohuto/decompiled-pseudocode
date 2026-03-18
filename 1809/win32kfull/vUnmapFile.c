/*
 * XREFs of vUnmapFile @ 0x1C00C37E8
 * Callers:
 *     vUnmapFontCacheFile @ 0x1C00C3788 (vUnmapFontCacheFile.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C026D7E0 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     EngFreeModule @ 0x1C026E5A0 (EngFreeModule.c)
 *     EngUnmapFontFile @ 0x1C026E820 (EngUnmapFontFile.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C008D590 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 */

void __fastcall vUnmapFile(PVOID *a1)
{
  MmUnmapViewInSessionSpace(a1[1]);
  if ( !a1[2] )
    vUnreferenceFileviewSection((struct _FILEVIEW *)a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}
