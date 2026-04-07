/*
 * XREFs of ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x180079328
 * Callers:
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJXZ @ 0x180023B34 (-ValidateDevice@UdwmDcompVisual@@QEAAJXZ.c)
 *     ?CheckInteropDCompDevice@CDesktopManager@@AEAAJPEA_N@Z @ 0x18002CB88 (-CheckInteropDCompDevice@CDesktopManager@@AEAAJPEA_N@Z.c)
 *     ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180044BD4 (-ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z @ 0x1800789C4 (-CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x18001D3A0 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073C5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseDXGIAdapter@CDesktopManager@@AEAAJXZ @ 0x1800796B4 (-ReleaseDXGIAdapter@CDesktopManager@@AEAAJXZ.c)
 */

void CDesktopManager::HandleInteropDeviceLost(void)
{
  CDesktopManager *v0; // rax
  __int64 v1; // rcx
  CDesktopManager *v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CDesktopManager::ReleaseDXGIAdapter(CDesktopManager::s_pDesktopManagerInstance);
  v0 = CDesktopManager::s_pDesktopManagerInstance;
  v1 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    v0 = CDesktopManager::s_pDesktopManagerInstance;
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27) = 0LL;
  }
  v2 = (CDesktopManager *)*((_QWORD *)v0 + 29);
  if ( v2 )
  {
    (*(void (__fastcall **)(CDesktopManager *))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29) = 0LL;
  }
  v3 = CDesktopManager::EnsureDCompositionInteropDevice(v2);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD23,
      (__int64)"windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)v3);
  CWindowList::OnInteropDeviceRecreated(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61));
}
