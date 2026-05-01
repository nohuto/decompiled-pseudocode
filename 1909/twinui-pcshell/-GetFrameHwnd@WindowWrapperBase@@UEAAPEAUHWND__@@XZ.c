/*
 * XREFs of ?GetFrameHwnd@WindowWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x18006D3A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

HWND __fastcall WindowWrapperBase::GetFrameHwnd(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 216LL))(*((_QWORD *)this + 34));
  return (HWND)*((_QWORD *)this + 16);
}
