/*
 * XREFs of ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001D520
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C001CF20 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001D520 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C001FCE0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00440A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00AAD70 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00AB4F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C00F84C0 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00FF2A0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001D520 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C001D600 (HmgRemoveObject.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1C00AA358 (-DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00AA37C (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall XEPALOBJ::vUnrefPalette(XEPALOBJ *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rcx
  unsigned __int8 *v4; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 24) & 0x1000000) != 0 || !HmgRemoveObject(*(_QWORD *)v2, 0, 1, 0, 8, 0LL) )
    {
      XEPALOBJ::DecShareRefCountAndInvalidatePalette(this);
    }
    else
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
  }
}
