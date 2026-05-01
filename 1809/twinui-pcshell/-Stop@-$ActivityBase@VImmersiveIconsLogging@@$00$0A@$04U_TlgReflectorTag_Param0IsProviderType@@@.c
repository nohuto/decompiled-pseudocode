/*
 * XREFs of ?Stop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803ABC00
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x1803AB054 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002F694 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F3074 (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180145740 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?ReportStopActivity@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1803AB6EC (-ReportStopActivity@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?get@?$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z @ 0x1803AC434 (-get@-$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z.c)
 */

void __fastcall wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(__int64 a1)
{
  bool v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rax
  const struct _TlgProvider_t *v5; // rbx
  int v6; // edx
  DWORD CurrentThreadId; // eax
  int v8; // [rsp+30h] [rbp-9h] BYREF
  RTL_SRWLOCK *v9; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  RTL_SRWLOCK **v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &v9);
  v2 = wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         *(_QWORD *)(a1 + 48),
         0,
         &v8);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
  if ( v2 )
  {
    wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
      (_QWORD *)a1,
      v8);
  }
  else
  {
    v4 = wil::details::static_lazy<ImmersiveIconsLogging>::get(
           v3,
           lambda_ff1cb61a894a675aef28afa9d97db49a_::_lambda_invoker_cdecl_);
    v5 = *(const struct _TlgProvider_t **)(v4 + 8);
    if ( *(_DWORD *)v5 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v4 + 8), 0LL) )
    {
      v8 &= v6;
      v13 &= v6;
      v11 = &v8;
      v12 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v16 = 0;
      LODWORD(v9) = CurrentThreadId;
      v14 = &v9;
      v15 = 4;
      TlgWrite(v5, &unk_180447A4F, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
