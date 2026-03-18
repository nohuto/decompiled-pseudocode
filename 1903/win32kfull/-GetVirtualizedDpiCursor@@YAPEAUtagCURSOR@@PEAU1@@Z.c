/*
 * XREFs of ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0030084
 * Callers:
 *     NtUserGetIconSize @ 0x1C002CA60 (NtUserGetIconSize.c)
 *     NtUserDrawIconEx @ 0x1C002D7D0 (NtUserDrawIconEx.c)
 *     NtUserGetIconInfo @ 0x1C002F700 (NtUserGetIconInfo.c)
 *     NtUserGetCursorFrameInfo @ 0x1C012B190 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C00300C4 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C01175F4 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0124B38 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 */

struct tagCURSOR *__fastcall GetVirtualizedDpiCursor(struct tagCURSOR *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagCURSOR *result; // rax
  unsigned int DpiForSystem; // eax
  CCursorSizes *v6; // rcx
  unsigned int SizeForDpi; // eax

  if ( !ShouldVirtualizeIconCursorSize(a1) )
    return a1;
  DpiForSystem = GetDpiForSystem(v3, v2);
  SizeForDpi = CCursorSizes::GetSizeForDpi(v6, DpiForSystem);
  result = FindDPICursor(a1, SizeForDpi);
  if ( !result )
    return a1;
  return result;
}
