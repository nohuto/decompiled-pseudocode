/*
 * XREFs of ?OnCuratedWindowHidden@TabViewManager@@UEAAXPEAUHWND__@@@Z @ 0x1801DFD90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TabViewManager::OnCuratedWindowHidden(TabViewManager *this, HWND a2)
{
  (*(void (__fastcall **)(_QWORD, HWND, _QWORD))(**((_QWORD **)this + 31) + 64LL))(*((_QWORD *)this + 31), a2, 0LL);
}
