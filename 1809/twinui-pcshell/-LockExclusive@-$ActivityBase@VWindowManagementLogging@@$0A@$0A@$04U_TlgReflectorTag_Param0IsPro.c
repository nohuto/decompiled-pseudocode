/*
 * XREFs of ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002F628
 * Callers:
 *     ?StartActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAAXXZ @ 0x18002DDF8 (-StartActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@InitializePosition@ShellPositionerTelemetry@@QEAAXXZ @ 0x18002DFDC (-StartActivity@InitializePosition@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ @ 0x18002F1B0 (-StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x18002F35C (-StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002FA94 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StopActivity@InitializePosition@ShellPositionerTelemetry@@MEAAXXZ @ 0x18006E4C0 (-StopActivity@InitializePosition@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ @ 0x18006E670 (-StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180306560 (-NotifyFailure@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180307308 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803073FC (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18002A0F0 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002F694 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@$$QEAV01@@Z @ 0x18002F6AC (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180088C90 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

__int64 __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  Microsoft::WRL::WeakRef *v4; // rax
  int v5; // edi
  __int64 v6; // r8
  int v7; // r8d
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 304);
  if ( v2 )
  {
    wil::srwlock::lock_exclusive(v2 + 248, &v10);
    v4 = (Microsoft::WRL::WeakRef *)&v10;
    v6 = 0LL;
    v5 = 1;
  }
  else
  {
    v9 = 0LL;
    v4 = Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v9);
    v5 = 0;
    v6 = 2LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
    a2,
    v4,
    v6);
  if ( v7 )
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
  if ( v5 )
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v10);
  return a2;
}
