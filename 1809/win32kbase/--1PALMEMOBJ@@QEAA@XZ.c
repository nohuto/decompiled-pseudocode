/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1C001CF20
 * Callers:
 *     EngCreatePalette @ 0x1C005F490 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00FF2A0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C01060D0 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0108D5C (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C021A8AC (bInitPALOBJ.c)
 * Callees:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001D520 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C001D600 (HmgRemoveObject.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1C00AA358 (-DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00AA37C (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall PALMEMOBJ::~PALMEMOBJ(PALMEMOBJ *this)
{
  __int64 v1; // rax
  _QWORD *v3; // rdx
  unsigned __int8 *v4; // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 2) )
    {
      XEPALOBJ::DecShareRefCountAndInvalidatePalette(this);
    }
    else
    {
      v3 = *(_QWORD **)this;
      if ( v1 != *(_QWORD *)(v1 + 120) )
      {
        v5 = *(_QWORD *)(v1 + 120);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v5);
        v1 = *(_QWORD *)this;
        v3 = *(_QWORD **)this;
      }
      v4 = *(unsigned __int8 **)(v1 + 104);
      if ( v4 )
      {
        if ( v4 != gpRGBXlate )
        {
          Win32FreePool(v4);
          v1 = *(_QWORD *)this;
        }
        *(_QWORD *)(v1 + 104) = 0LL;
        v3 = *(_QWORD **)this;
      }
      if ( HmgRemoveObject(*v3, 0, 1, 1, 8, 0LL) )
        XEPALOBJ::FreePaletteMemory(this);
    }
  }
}
