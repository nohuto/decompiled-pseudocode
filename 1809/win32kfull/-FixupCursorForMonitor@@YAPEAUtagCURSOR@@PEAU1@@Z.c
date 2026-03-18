/*
 * XREFs of ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0017C5C
 * Callers:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00173F0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 * Callees:
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C0017C90 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C0017CAC (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 */

struct tagCURSOR *__fastcall FixupCursorForMonitor(struct tagCURSOR *a1)
{
  unsigned int CurrentCursorSize; // eax
  struct tagCURSOR *result; // rax

  if ( !a1 )
    return a1;
  CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(a1);
  result = FindDPICursor(a1, CurrentCursorSize);
  if ( !result )
    return a1;
  return result;
}
