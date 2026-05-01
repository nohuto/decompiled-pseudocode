/*
 * XREFs of ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001ED38
 * Callers:
 *     ?WindowDiscoveredFromShellHook@WindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x18001EC30 (-WindowDiscoveredFromShellHook@WindowWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     _lambda_6061614c749b16812af3d2bf0deac9fc_::operator() @ 0x1800668C4 (_lambda_6061614c749b16812af3d2bf0deac9fc_--operator().c)
 * Callees:
 *     ?PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x18001EC84 (-PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18001F15C (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18001F558 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 *     ?PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ @ 0x18001F758 (-PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180020F7C (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180021160 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::SetWindowId(WindowWrapperBase *a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  const char *v7; // r9
  int v8; // edi
  unsigned int v9; // r14d
  bool v10; // zf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  v6 = *((_QWORD *)a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 200LL))(v6);
    v8 = *((_DWORD *)a1 + 74);
    if ( (_DWORD)v4 != v8 )
    {
      *((_DWORD *)a1 + 74) = v4;
      WindowReadyState::SetWindow((char *)a1 + 360, v4, 0LL);
      v9 = 0;
      v10 = (_DWORD)v4 == 0;
      if ( (_DWORD)v4 )
      {
        (*(void (__fastcall **)(WindowWrapperBase *, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, 0LL);
        if ( a3 != 1 )
        {
          WindowWrapperBase::PushZbidToWindow((__int64)a1, *((_DWORD *)a1 + 125));
          WindowWrapperBase::PushBoundsToWindow(a1, 3LL);
          WindowWrapperBase::PushPointerActivationPolicyToWindow(a1);
        }
        v10 = (_DWORD)v4 == 0;
        v8 = v4;
      }
      LOBYTE(v9) = v10;
      WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(a1, v8, v9);
      WindowWrapperBase::ReconcileSessionIdleTaskCompletion(a1);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x5D2,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v7);
  }
}
