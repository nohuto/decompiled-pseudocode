/*
 * XREFs of ?GetFrameWindow@ViewWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x180087D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall ViewWrapperBase::GetFrameWindow(ViewWrapperBase *this)
{
  return (HWND)*((_QWORD *)this + 34);
}
