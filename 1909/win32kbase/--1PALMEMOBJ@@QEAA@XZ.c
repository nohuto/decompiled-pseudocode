/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0018630
 * Callers:
 *     EngCreatePalette @ 0x1C0071BC0 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C01264AC (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C012D720 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C013057C (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C02657B0 (bInitPALOBJ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00186C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C0018B30 (HmgRemoveObject.c)
 *     ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1C00BABBC (-DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00BABE0 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
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
          Win32FreePool((__int64)v4);
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
