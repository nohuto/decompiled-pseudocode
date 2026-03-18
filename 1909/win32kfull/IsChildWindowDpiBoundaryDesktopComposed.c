/*
 * XREFs of IsChildWindowDpiBoundaryDesktopComposed @ 0x1C00292C4
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C00287CC (ComposeWindowIfNeeded.c)
 *     DecomposeWindowIfNeeded @ 0x1C0089628 (DecomposeWindowIfNeeded.c)
 * Callees:
 *     IsChildWindowDpiBoundary @ 0x1C006F520 (IsChildWindowDpiBoundary.c)
 */

__int64 __fastcall IsChildWindowDpiBoundaryDesktopComposed(struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)IsChildWindowDpiBoundary(a1) )
    return (unsigned int)IsWindowDesktopComposed(a1) != 0;
  return v2;
}
