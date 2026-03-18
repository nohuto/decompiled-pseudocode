/*
 * XREFs of ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C007E470
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C007D790 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C007F6D4 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C0080BA0 (EngUnmapFontFileFD.c)
 * Callees:
 *     ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z @ 0x1C007CC44 (-MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C007E4B8 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 */

void __fastcall vUnmapFileFD(struct _FILEVIEW *a1, char a2)
{
  UmfdHostLifeTimeManager::MmUnmapViewOfSection(*((void **)a1 + 2), *((_QWORD *)a1 + 9));
  if ( !*((_QWORD *)a1 + 1) && a2 )
    vUnreferenceFileviewSection(a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}
