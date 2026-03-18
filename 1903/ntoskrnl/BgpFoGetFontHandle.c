/*
 * XREFs of BgpFoGetFontHandle @ 0x1409902F4
 * Callers:
 *     ResFwConfigureDisplayStringResources @ 0x14098E650 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x14098E6E4 (AnFwConfigureProgressResources.c)
 *     BgpTxtGetRegionContext @ 0x14098F908 (BgpTxtGetRegionContext.c)
 *     BgpTxtCreateRegion @ 0x140990088 (BgpTxtCreateRegion.c)
 *     BgpConsoleInitialize @ 0x1409917A0 (BgpConsoleInitialize.c)
 *     BgpFoDetermineFontInformation @ 0x140A413EC (BgpFoDetermineFontInformation.c)
 * Callees:
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
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
