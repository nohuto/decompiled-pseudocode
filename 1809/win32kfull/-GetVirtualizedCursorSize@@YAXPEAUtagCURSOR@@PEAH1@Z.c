/*
 * XREFs of ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C015BC7C
 * Callers:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C006CF78 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtUserDrawIconEx @ 0x1C006D5B0 (NtUserDrawIconEx.c)
 *     _DrawIconEx @ 0x1C006D774 (_DrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C010ABD0 (NtUserGetIconSize.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0108B5C (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C015BD48 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 */

void __fastcall GetVirtualizedCursorSize(struct tagCURSOR *a1, int *a2, int *a3)
{
  unsigned int DpiForSystem; // eax
  CCursorSizes *v7; // rcx
  INT SizeForDpi; // ebx

  *a2 = *((_DWORD *)a1 + 35);
  *a3 = *((_DWORD *)a1 + 36);
  if ( ShouldVirtualizeIconCursorSize(a1) )
  {
    DpiForSystem = GetDpiForSystem();
    SizeForDpi = CCursorSizes::GetSizeForDpi(v7, DpiForSystem);
    *a2 = EngMulDiv(*a2, SizeForDpi, *((_DWORD *)a1 + 19));
    *a3 = EngMulDiv(*a3, SizeForDpi, *((_DWORD *)a1 + 19));
  }
}
