/*
 * XREFs of ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C0017C90
 * Callers:
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0017C5C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00DED40 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C015BD0C (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01B8548 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 *     NtUserLinkDpiCursor @ 0x1C02192B0 (NtUserLinkDpiCursor.c)
 * Callees:
 *     <none>
 */

struct tagCURSOR *__fastcall FindDPICursor(struct tagCURSOR *a1, int a2)
{
  struct tagCURSOR *result; // rax

  for ( result = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
        result && *((_DWORD *)result + 19) != a2;
        result = (struct tagCURSOR *)*((_QWORD *)result + 5) )
  {
    ;
  }
  return result;
}
