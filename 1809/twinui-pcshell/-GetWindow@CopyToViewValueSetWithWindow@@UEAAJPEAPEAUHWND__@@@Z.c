/*
 * XREFs of ?GetWindow@CopyToViewValueSetWithWindow@@UEAAJPEAPEAUHWND__@@@Z @ 0x180081AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyToViewValueSetWithWindow::GetWindow(CopyToViewValueSetWithWindow *this, HWND *a2)
{
  *a2 = (HWND)*((_QWORD *)this + 2);
  return 0LL;
}
