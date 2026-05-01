/*
 * XREFs of ?GetFallbackWindow@WindowGroup@@UEAAPEAUHWND__@@XZ @ 0x180084F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall WindowGroup::GetFallbackWindow(WindowGroup *this)
{
  return (HWND)*((_QWORD *)this + 9);
}
