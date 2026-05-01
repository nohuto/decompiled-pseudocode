/*
 * XREFs of ?GetShowInSwitchers@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x180079240
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x1800792A0 (-GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetShowInSwitchers(CWin32ApplicationView *this, int *a2)
{
  BOOL v4; // ebx
  HWND v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 72LL))(*((_QWORD *)this + 27)) )
    v4 = CWin32ApplicationView::GetSwitchWindow(this, &v6) >= 0;
  *a2 = v4;
  return 0LL;
}
