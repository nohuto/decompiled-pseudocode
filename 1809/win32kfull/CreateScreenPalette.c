/*
 * XREFs of CreateScreenPalette @ 0x1C02283A8
 * Callers:
 *     xxxSnapWindow @ 0x1C0155AF4 (xxxSnapWindow.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01F75A0 (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     GreGetSystemPaletteUse @ 0x1C012D764 (GreGetSystemPaletteUse.c)
 *     GreGetSystemPaletteEntries @ 0x1C029B500 (GreGetSystemPaletteEntries.c)
 */

__int64 __fastcall CreateScreenPalette(HDC a1, __int64 *a2, __int64 *a3)
{
  unsigned int v6; // ebx
  int v7; // ebp
  signed int DeviceCaps; // esi
  unsigned __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // esi
  __int64 v12; // rax
  _BYTE *v13; // rcx
  __int64 Palette; // rax

  v6 = 0;
  if ( (unsigned int)GreGetSystemPaletteUse(a1) == 1 )
    v7 = (int)GreGetDeviceCaps(a1, 106LL) / 2;
  else
    v7 = 1;
  DeviceCaps = GreGetDeviceCaps(a1, 104LL);
  if ( DeviceCaps < 0 )
    return 3221225485LL;
  if ( DeviceCaps < v7 )
    return 3221225485LL;
  v9 = 4LL * (unsigned int)DeviceCaps;
  if ( v9 > 0xFFFFFFFF || (unsigned int)(v9 + 8) < 8 )
    return 3221225485LL;
  v10 = Win32AllocPoolWithQuota((unsigned int)(v9 + 8), 1650684757LL);
  if ( v10 )
  {
    *(_WORD *)(v10 + 2) = DeviceCaps;
    *(_WORD *)v10 = 768;
    if ( !(unsigned int)GreGetSystemPaletteEntries(a1, 0, DeviceCaps, (struct tagPALETTEENTRY *)(v10 + 4)) )
      goto LABEL_14;
    v11 = DeviceCaps - v7;
    if ( v7 < (__int64)v11 )
    {
      v12 = v11 - (__int64)v7;
      v13 = (_BYTE *)(v10 + 7 + 4LL * v7);
      do
      {
        *v13 = 4;
        v13 += 4;
        --v12;
      }
      while ( v12 );
    }
    Palette = GreCreatePalette(v10, v7);
    if ( Palette )
    {
      *a2 = v10;
      *a3 = Palette;
    }
    else
    {
LABEL_14:
      Win32FreePool(v10);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
