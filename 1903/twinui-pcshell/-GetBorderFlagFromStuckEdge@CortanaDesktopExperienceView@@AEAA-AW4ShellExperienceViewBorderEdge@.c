/*
 * XREFs of ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x180082588
 * Callers:
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18003D6FC (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x18003BAD4 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::GetBorderFlagFromStuckEdge(__int64 a1, int a2, char a3, char a4)
{
  unsigned int v4; // ebx
  int v7; // esi
  unsigned int v8; // ecx
  unsigned int v9; // r9d
  int v10; // r8d
  int v11; // edx
  int v12; // edx
  int v13; // ebx

  v4 = 0;
  if ( *(_BYTE *)(a1 + 253) || a4 )
  {
    v9 = 1;
    v7 = 0;
    v10 = 0;
    v8 = 4;
  }
  else
  {
    v7 = 2;
    v8 = 12;
    v9 = 9;
    v10 = 8;
  }
  if ( !a2 )
    return v8;
  v11 = a2 - 1;
  if ( !v11 )
  {
    if ( *(_DWORD *)(a1 + 248) != 2 )
      return v10 | (a3 != 0 ? 1 : 4);
    v13 = v10;
    return v13 | 5u;
  }
  v12 = v11 - 1;
  if ( !v12 )
    return v9;
  if ( v12 == 1 )
  {
    if ( !IsSearchAndCortanaSplitEnabled() )
      return v7 | (a3 != 0 ? 1 : 4);
    v13 = v7;
    return v13 | 5u;
  }
  return v4;
}
