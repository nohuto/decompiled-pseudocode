/*
 * XREFs of ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C007EE00
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0082860 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C00BF524 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C007EE54 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z @ 0x1C007EE9C (-MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z.c)
 */

void __fastcall vUnmapFileFD(struct _FILEVIEW *a1, char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 10) & 0x20) != 0 )
    UmfdHostLifeTimeManager::MmUnmapViewOfSection(v4, *((_QWORD *)a1 + 9));
  else
    MmUnmapViewOfSection(gpepCSRSS, v4);
  if ( !*((_QWORD *)a1 + 1) && a2 )
    vUnreferenceFileviewSection(a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}
