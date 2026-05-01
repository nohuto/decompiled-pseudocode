/*
 * XREFs of ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x180033CB8
 * Callers:
 *     _lambda_583260ce1dd6aa3aeb3daffdf12db906_::operator() @ 0x180033B94 (_lambda_583260ce1dd6aa3aeb3daffdf12db906_--operator().c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18005DF90 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 *     ?SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1802A7CB0 (-SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z.c)
 *     ?put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z @ 0x1802A9300 (-put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x180033F50 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(WindowWrapperBase *this)
{
  int v2; // eax
  __int64 v3; // rsi
  unsigned int v4; // edi

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 208LL))(*((_QWORD *)this + 36));
  v2 = *((_DWORD *)this + 47);
  v3 = *((int *)this + 76);
  v4 = *((_DWORD *)this + 122);
  if ( (v2 & 0x10) != 0 && (v2 & 0x20) == 0 )
    v4 = v4 != 0;
  if ( v4 != (*(unsigned int (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)this + 128LL))(this) )
  {
    (*(void (__fastcall **)(WindowWrapperBase *, _QWORD))(*(_QWORD *)this + 152LL))(this, v4);
    if ( v3 )
      WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(this, v3, 2LL);
  }
  WindowWrapperBase::ReconcileSessionIdleTaskCompletion(this);
}
