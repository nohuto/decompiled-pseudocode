/*
 * XREFs of ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x18002B994
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029128 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::UpdateMaxTextureSize(CDesktopManager *this)
{
  int v2; // eax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 32LL))(*((_QWORD *)this + 26));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5));
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 568LL))(*((_QWORD *)this + 26));
  *((_DWORD *)this + 43) = v2;
  *((_DWORD *)this + 44) = v2;
}
