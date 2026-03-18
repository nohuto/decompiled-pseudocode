/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00CB000
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C003E43C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     bAddAllFlEntry @ 0x1C004FC90 (bAddAllFlEntry.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C004FE94 (bReadUserSystemEUDCRegistry.c)
 *     bAddFlEntry @ 0x1C00C9FBC (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00CA2F0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bUnloadEudcFont @ 0x1C00CAC68 (bUnloadEudcFont.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C025A5C0 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     GreEudcLoadLinkW @ 0x1C0267E84 (GreEudcLoadLinkW.c)
 *     bDeleteFlEntry @ 0x1C026864C (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C0268824 (bWriteUserSystemEUDCRegistry.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C0290084 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this, unsigned int a2)
{
  __int64 v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = PALLOCMEM2(a2);
  *(_QWORD *)this = v3;
  if ( !v3 )
    EngSetLastError(8u);
  return this;
}
