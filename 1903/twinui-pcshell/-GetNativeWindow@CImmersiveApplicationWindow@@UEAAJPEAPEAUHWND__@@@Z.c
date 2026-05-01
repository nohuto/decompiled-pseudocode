/*
 * XREFs of ?GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z @ 0x180084520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationWindow::GetNativeWindow(CImmersiveApplicationWindow *this, HWND *a2)
{
  *a2 = (HWND)*((_QWORD *)this + 2);
  return 0LL;
}
