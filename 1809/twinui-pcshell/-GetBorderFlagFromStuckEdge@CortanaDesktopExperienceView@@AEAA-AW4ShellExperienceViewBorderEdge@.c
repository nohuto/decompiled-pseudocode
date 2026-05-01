/*
 * XREFs of ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x180188C1C
 * Callers:
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180014C40 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaDesktopExperienceView::GetBorderFlagFromStuckEdge(__int64 a1, int a2, char a3, char a4)
{
  unsigned int v4; // r10d
  int v5; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  int v8; // r11d
  int v9; // edx
  int v10; // edx

  v4 = 0;
  if ( *(_BYTE *)(a1 + 229) || a4 )
  {
    v7 = 1;
    v5 = 0;
    v8 = 0;
    v6 = 4;
  }
  else
  {
    v5 = 2;
    v6 = 12;
    v7 = 9;
    v8 = 8;
  }
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          return v5 | (a3 != 0 ? 1 : 4);
      }
      else
      {
        return v7;
      }
    }
    else
    {
      return v8 | (a3 != 0 ? 1 : 4);
    }
  }
  else
  {
    return v6;
  }
  return v4;
}
