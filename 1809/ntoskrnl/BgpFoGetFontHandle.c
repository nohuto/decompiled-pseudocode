/*
 * XREFs of BgpFoGetFontHandle @ 0x1409512A4
 * Callers:
 *     ResFwConfigureDisplayStringResources @ 0x14094F650 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x14094F6DC (AnFwConfigureProgressResources.c)
 *     BgpTxtGetRegionContext @ 0x1409508BC (BgpTxtGetRegionContext.c)
 *     BgpTxtCreateRegion @ 0x14095103C (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x140952730 (BgpConsoleInitialize.c)
 *     BgpFoDetermineFontInformation @ 0x1409FC748 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 */

__int64 __fastcall BgpFoGetFontHandle(wchar_t *Str2, __int64 **a2)
{
  int v4; // esi
  __int64 i; // rdi
  __int64 *j; // rbx

  v4 = -1073741275;
  if ( !a2 || !FontLibraryInitialized )
    return 3221225485LL;
  *a2 = 0LL;
  for ( i = FopFontFileListHead; (__int64 *)i != &FopFontFileListHead; i = *(_QWORD *)i )
  {
    for ( j = *(__int64 **)(i + 40); j != (__int64 *)(i + 40); j = (__int64 *)*j )
    {
      if ( Str2 )
      {
        if ( !wcsicmp((const wchar_t *)j[4], Str2) )
        {
LABEL_9:
          *a2 = j;
          v4 = 0;
          break;
        }
      }
      else if ( (*(_DWORD *)(i + 28) & 1) != 0 )
      {
        goto LABEL_9;
      }
    }
    if ( v4 >= 0 )
      break;
  }
  return (unsigned int)v4;
}
