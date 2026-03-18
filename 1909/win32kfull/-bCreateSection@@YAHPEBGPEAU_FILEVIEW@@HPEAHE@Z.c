/*
 * XREFs of ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C0122C28
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1C011F680 (EngMapFontFileFDInternal.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0122650 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     bMapFile @ 0x1C0286D80 (bMapFile.c)
 * Callees:
 *     ?hGetHandleFromFilePath@@YAPEAXPEBGH@Z @ 0x1C0122CC0 (-hGetHandleFromFilePath@@YAPEAXPEBGH@Z.c)
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C0122DDC (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 */

__int64 __fastcall bCreateSection(PCWSTR SourceString, struct _FILEVIEW *a2, int a3, int *a4, unsigned __int8 a5)
{
  void *HandleFromFilePath; // rax

  HandleFromFilePath = hGetHandleFromFilePath(SourceString, a3 != 0);
  if ( !HandleFromFilePath || !(unsigned int)bCreateSectionFromHandle(HandleFromFilePath, SourceString, a2, a3, a4, a5) )
    return 0LL;
  if ( (*((_DWORD *)a2 + 10) & 0x10) != 0 )
  {
    ZwClose(*((HANDLE *)a2 + 6));
    *((_QWORD *)a2 + 6) = 0LL;
  }
  return 1LL;
}
