/*
 * XREFs of ?GetWindow@TabletModeViewManager@@UEAAPEAUHWND__@@XZ @ 0x1803B71A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

HWND __fastcall TabletModeViewManager::GetWindow(TabletModeViewManager *this)
{
  __int64 v1; // rcx
  HWND result; // rax

  v1 = *((_QWORD *)this + 8);
  result = 0LL;
  if ( v1 )
    return (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 64LL))(v1);
  return result;
}
