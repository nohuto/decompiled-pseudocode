/*
 * XREFs of ?GetWindow@ViewWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x1800825D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall ViewWrapperBase::GetWindow(ViewWrapperBase *this)
{
  return (HWND)*((_QWORD *)this + 33);
}
