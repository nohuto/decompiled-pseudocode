/*
 * XREFs of ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0025644
 * Callers:
 *     NtUserGetIconSize @ 0x1C00225E0 (NtUserGetIconSize.c)
 *     NtUserDrawIconEx @ 0x1C0022EF0 (NtUserDrawIconEx.c)
 *     NtUserGetIconInfo @ 0x1C0024CC0 (NtUserGetIconInfo.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0106160 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C0025684 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C00F15B4 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0101268 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 */

struct tagCURSOR *__fastcall GetVirtualizedDpiCursor(struct tagCURSOR *a1)
{
  __int64 v2; // rcx
  struct tagCURSOR *result; // rax
  unsigned int DpiForSystem; // eax
  CCursorSizes *v5; // rcx
  unsigned int SizeForDpi; // eax

  if ( !ShouldVirtualizeIconCursorSize(a1) )
    return a1;
  DpiForSystem = GetDpiForSystem(v2);
  SizeForDpi = CCursorSizes::GetSizeForDpi(v5, DpiForSystem);
  result = FindDPICursor(a1, SizeForDpi);
  if ( !result )
    return a1;
  return result;
}
