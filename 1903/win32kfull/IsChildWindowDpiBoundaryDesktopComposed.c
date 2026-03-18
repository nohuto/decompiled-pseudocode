/*
 * XREFs of IsChildWindowDpiBoundaryDesktopComposed @ 0x1C0022E54
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C0022350 (ComposeWindowIfNeeded.c)
 *     DecomposeWindowIfNeeded @ 0x1C0044C58 (DecomposeWindowIfNeeded.c)
 * Callees:
 *     IsChildWindowDpiBoundary @ 0x1C00CDE50 (IsChildWindowDpiBoundary.c)
 */

__int64 __fastcall IsChildWindowDpiBoundaryDesktopComposed(struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)IsChildWindowDpiBoundary(a1) )
    return (unsigned int)IsWindowDesktopComposed(a1) != 0;
  return v2;
}
