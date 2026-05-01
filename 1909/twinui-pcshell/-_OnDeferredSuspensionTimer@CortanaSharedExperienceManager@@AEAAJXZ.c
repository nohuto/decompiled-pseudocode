/*
 * XREFs of ?_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180071D48
 * Callers:
 *     ?_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z @ 0x180071D10 (-_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?_IsViewVisible@CortanaSharedExperienceManager@@AEAA_NXZ @ 0x18004560C (-_IsViewVisible@CortanaSharedExperienceManager@@AEAA_NXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180045F20 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?CortanaExperienceManager_SuspensionEnabled@CortanaProactiveTelemetry@@SAXXZ @ 0x180071DEC (-CortanaExperienceManager_SuspensionEnabled@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180072140 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnDeferredSuspensionTimer(CortanaSharedExperienceManager *this)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _TP_TIMER **)((char *)this + 472);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 59);
  if ( v3 )
  {
    if ( !IsThreadpoolTimerSet(v3) )
    {
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        v1,
        0LL);
      CortanaSharedExperienceManager::_ResetActivationTimeoutPolicy(this);
      if ( !CortanaSharedExperienceManager::_IsViewVisible(this) )
      {
        v4 = *((_QWORD *)this + 62);
        v9 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 56LL))(v4, &v9) < 0 || v9 != 1 )
        {
          CortanaProactiveTelemetry::CortanaExperienceManager_SuspensionEnabled();
          v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 96LL))(*((_QWORD *)this + 62));
          if ( v5 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x5A3,
              (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
              (const char *)(unsigned int)v5,
              v7);
        }
      }
    }
  }
  return 0LL;
}
