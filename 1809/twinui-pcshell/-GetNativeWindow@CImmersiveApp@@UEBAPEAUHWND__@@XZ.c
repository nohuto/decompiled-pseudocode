/*
 * XREFs of ?GetNativeWindow@CImmersiveApp@@UEBAPEAUHWND__@@XZ @ 0x1800601A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

HWND __fastcall CImmersiveApp::GetNativeWindow(CImmersiveApp *this)
{
  HWND result; // rax

  result = 0LL;
  if ( (*((_BYTE *)this + 440) & 1) != 0 )
  {
    if ( *((_QWORD *)this + 41) )
      return (HWND)(*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 40) + 32LL))(**((_QWORD **)this + 40));
  }
  return result;
}
