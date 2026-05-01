/*
 * XREFs of ?Stop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18042D390
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x18042C3D0 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18003B218 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180137504 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801905B0 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?ReportStopActivity@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18042CE14 (-ReportStopActivity@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?get@?$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z @ 0x18042DD08 (-get@-$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z.c)
 */

void __fastcall wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  bool v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rax
  const struct _TlgProvider_t *v5; // rbx
  int v6; // edx
  DWORD CurrentThreadId; // eax
  int v8; // [rsp+30h] [rbp-29h] BYREF
  RTL_SRWLOCK *v9; // [rsp+38h] [rbp-21h] BYREF
  __int64 v10; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  int *v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]
  RTL_SRWLOCK **v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+98h] [rbp+3Fh]
  int v20; // [rsp+9Ch] [rbp+43h]

  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &v9);
  v2 = wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         *(_QWORD *)(a1 + 48),
         0,
         &v8);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
  if ( v2 )
  {
    wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
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
      v14 &= v6;
      v8 &= v6;
      v17 &= v6;
      v12 = &v10;
      v15 = &v8;
      v10 = 0x1000000LL;
      v13 = 8;
      v16 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v20 = 0;
      LODWORD(v9) = CurrentThreadId;
      v18 = &v9;
      v19 = 4;
      TlgWrite(v5, &unk_1804DBF46, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
