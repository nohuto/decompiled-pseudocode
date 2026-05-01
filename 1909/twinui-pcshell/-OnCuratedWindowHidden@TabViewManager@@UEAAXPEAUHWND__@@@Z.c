/*
 * XREFs of ?OnCuratedWindowHidden@TabViewManager@@UEAAXPEAUHWND__@@@Z @ 0x180252840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TabViewManager::OnCuratedWindowHidden(TabViewManager *this, HWND a2)
{
  (*(void (__fastcall **)(_QWORD, HWND, _QWORD))(**((_QWORD **)this + 32) + 64LL))(*((_QWORD *)this + 32), a2, 0LL);
}
