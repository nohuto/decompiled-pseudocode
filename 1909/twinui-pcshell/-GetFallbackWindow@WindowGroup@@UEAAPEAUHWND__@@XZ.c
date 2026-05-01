/*
 * XREFs of ?GetFallbackWindow@WindowGroup@@UEAAPEAUHWND__@@XZ @ 0x180087AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall WindowGroup::GetFallbackWindow(WindowGroup *this)
{
  return (HWND)*((_QWORD *)this + 9);
}
