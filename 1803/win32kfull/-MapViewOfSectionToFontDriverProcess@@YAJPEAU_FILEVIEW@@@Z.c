/*
 * XREFs of ?MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z @ 0x1C007EF14
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0082860 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C00BF524 (EngMapFontFileFDInternal.c)
 * Callees:
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C007EF68 (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 */

__int64 __fastcall MapViewOfSectionToFontDriverProcess(struct _FILEVIEW *a1)
{
  char *v1; // r8
  enum _SECTION_INHERIT v3; // [rsp+30h] [rbp-28h]
  unsigned int v4; // [rsp+38h] [rbp-20h]
  unsigned int v5; // [rsp+40h] [rbp-18h]
  unsigned __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  union _LARGE_INTEGER v7; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = (char *)a1 + 16;
  v7.QuadPart = 0LL;
  if ( (*((_DWORD *)a1 + 10) & 0x20) != 0 )
    return UmfdHostLifeTimeManager::MmMapViewOfSection(
             *((void **)a1 + 4),
             (void **)a1 + 2,
             (unsigned __int64)v1,
             0LL,
             &v7,
             &v6,
             v3,
             v4,
             v5,
             (unsigned __int64 *)a1 + 9);
  else
    return MmMapViewOfSection(*((_QWORD *)a1 + 4), gpepCSRSS, v1, 0LL, 0LL, &v7, &v6, 2, 0x400000, 2);
}
