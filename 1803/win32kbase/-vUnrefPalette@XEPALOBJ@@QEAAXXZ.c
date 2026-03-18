/*
 * XREFs of ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C003E480
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001D470 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C003E160 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C003E480 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003E880 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003EA60 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C003EE00 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C0076780 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00CB78C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C003E480 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C003F690 (HmgRemoveObject.c)
 *     ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1C0075FA8 (-DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C0075FCC (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall XEPALOBJ::vUnrefPalette(XEPALOBJ *this)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rcx
  unsigned __int8 *v4; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD **)this;
  if ( v2 )
  {
    if ( (v2[3] & 0x1000000) == 0 && HmgRemoveObject(*v2, 0, 1, 0, 8, 0LL) )
    {
      v3 = *(_QWORD **)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 24LL) & 0x800) != 0 && v3[6] )
      {
        v5 = v3[6];
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v5);
        v3 = *(_QWORD **)this;
      }
      if ( v3 != (_QWORD *)v3[15] )
      {
        v5 = v3[15];
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v5);
        v3 = *(_QWORD **)this;
      }
      v4 = (unsigned __int8 *)v3[13];
      if ( v4 )
      {
        if ( v4 != gpRGBXlate )
        {
          Win32FreePool(v3[13]);
          v3 = *(_QWORD **)this;
        }
        v3[13] = 0LL;
      }
      XEPALOBJ::FreePaletteMemory(this);
    }
    else
    {
      XEPALOBJ::DecShareRefCountAndInvalidatePalette(this);
    }
  }
}
