/*
 * XREFs of ??9?$SharedPointerBase@G@@QEBAEH@Z @ 0x1C006077C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     UnlockDesktopMenu @ 0x1C011B560 (UnlockDesktopMenu.c)
 * Callees:
 *     <none>
 */

bool __fastcall SharedPointerBase<unsigned short>::operator!=(_QWORD *a1)
{
  return *a1 != 0LL;
}
