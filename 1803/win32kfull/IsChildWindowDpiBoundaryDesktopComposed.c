/*
 * XREFs of IsChildWindowDpiBoundaryDesktopComposed @ 0x1C007605C
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C0075FC4 (ComposeWindowIfNeeded.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C3AB8 (DecomposeWindowIfNeeded.c)
 * Callees:
 *     IsChildWindowDpiBoundary @ 0x1C002A5A8 (IsChildWindowDpiBoundary.c)
 */

__int64 __fastcall IsChildWindowDpiBoundaryDesktopComposed(struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)IsChildWindowDpiBoundary(a1) )
    return (unsigned int)IsWindowDesktopComposed(a1) != 0;
  return v2;
}
