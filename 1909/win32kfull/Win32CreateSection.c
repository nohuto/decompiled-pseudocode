/*
 * XREFs of Win32CreateSection @ 0x1C010BBE4
 * Callers:
 *     CreateDesktopHeap @ 0x1C010BB30 (CreateDesktopHeap.c)
 *     cMapRemoteFonts @ 0x1C0286E5C (cMapRemoteFonts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32CreateSection(_QWORD *a1)
{
  int Section; // ebx

  Section = MmCreateSection(a1, 983071LL, 0LL);
  if ( Section >= 0 )
    ObDeleteCapturedInsertInfo(*a1);
  return (unsigned int)Section;
}
