/*
 * XREFs of ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C00BFABC
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BF82C (-bCreateSectionFromHandle@@YAHPEAXPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 * Callees:
 *     ?QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z @ 0x1C00BFB5C (-QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 */

__int64 __fastcall bIsFileInSystemFontsDir(void *a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v4; // edi
  int v6; // ebp
  struct _OBJECT_NAME_INFORMATION *v7; // rbx

  v4 = 0;
  v6 = 1;
  if ( !a1 )
    return 0LL;
  v7 = (struct _OBJECT_NAME_INFORMATION *)_InterlockedExchange64(&gpniScratch, 0LL);
  if ( v7 || (v6 = 0, (v7 = (struct _OBJECT_NAME_INFORMATION *)PALLOCMEM2(0x190uLL)) != 0LL) )
  {
    if ( QueryNameStringFromHandle(a1, v7, a3, a4) >= 0
      && gpniFontsDirectory
      && RtlPrefixString(gpniFontsDirectory, (const STRING *)v7, 1u) )
    {
      v4 = 1;
    }
    if ( v6 )
      _InterlockedExchange64(&gpniScratch, (__int64)v7);
    else
      Win32FreePool(v7);
  }
  return v4;
}
