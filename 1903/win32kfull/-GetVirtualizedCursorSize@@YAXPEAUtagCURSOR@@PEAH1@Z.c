/*
 * XREFs of ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C002FFD0
 * Callers:
 *     NtUserGetIconSize @ 0x1C002CA60 (NtUserGetIconSize.c)
 *     _DrawIconEx @ 0x1C002CFB4 (_DrawIconEx.c)
 *     NtUserDrawIconEx @ 0x1C002D7D0 (NtUserDrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C002FB20 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     GetCursorSizeFromIndex @ 0x1C00E32E4 (GetCursorSizeFromIndex.c)
 */

void __fastcall GetVirtualizedCursorSize(struct tagCURSOR *a1, int *a2, int *a3)
{
  unsigned int v3; // ebx
  unsigned int DpiForSystem; // eax
  INT CursorSizeFromIndex; // ebx

  v3 = 1;
  *a2 = *((_DWORD *)a1 + 35);
  *a3 = *((_DWORD *)a1 + 36);
  if ( *((_WORD *)a1 + 37) == 1 || *((_WORD *)a1 + 36) == atomUSER32 )
  {
    DpiForSystem = GetDpiForSystem(a1, a2);
    if ( DpiForSystem >= 0x90 )
    {
      if ( DpiForSystem >= 0xC0 )
      {
        if ( DpiForSystem >= 0x120 )
          v3 = 4 - (DpiForSystem < 0x180);
        else
          v3 = 2;
      }
    }
    else
    {
      v3 = 0;
    }
    CursorSizeFromIndex = GetCursorSizeFromIndex(v3);
    *a2 = EngMulDiv(*a2, CursorSizeFromIndex, *((_DWORD *)a1 + 19));
    *a3 = EngMulDiv(*a3, CursorSizeFromIndex, *((_DWORD *)a1 + 19));
  }
}
