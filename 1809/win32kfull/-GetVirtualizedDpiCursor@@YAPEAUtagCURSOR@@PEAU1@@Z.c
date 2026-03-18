/*
 * XREFs of ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C015BD0C
 * Callers:
 *     NtUserGetIconInfo @ 0x1C006CB50 (NtUserGetIconInfo.c)
 *     NtUserDrawIconEx @ 0x1C006D5B0 (NtUserDrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C010ABD0 (NtUserGetIconSize.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0122D00 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C0017C90 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0108B5C (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C015BD48 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 */

struct tagCURSOR *__fastcall GetVirtualizedDpiCursor(struct tagCURSOR *a1)
{
  unsigned int DpiForSystem; // eax
  CCursorSizes *v3; // rcx
  int SizeForDpi; // eax
  struct tagCURSOR *result; // rax

  if ( !ShouldVirtualizeIconCursorSize(a1) )
    return a1;
  DpiForSystem = GetDpiForSystem();
  SizeForDpi = CCursorSizes::GetSizeForDpi(v3, DpiForSystem);
  result = FindDPICursor(a1, SizeForDpi);
  if ( !result )
    return a1;
  return result;
}
