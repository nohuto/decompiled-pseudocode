/*
 * XREFs of ??9?$SharedPointerBase@G@@QEBAEH@Z @ 0x1C00BF09C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     UnlockDesktopMenu @ 0x1C00E12C8 (UnlockDesktopMenu.c)
 * Callees:
 *     <none>
 */

bool __fastcall SharedPointerBase<unsigned short>::operator!=(_QWORD *a1)
{
  return *a1 != 0LL;
}
