/*
 * XREFs of ?GetWindow@TabletModeViewManager@@UEAAPEAUHWND__@@XZ @ 0x1803D66B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
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
