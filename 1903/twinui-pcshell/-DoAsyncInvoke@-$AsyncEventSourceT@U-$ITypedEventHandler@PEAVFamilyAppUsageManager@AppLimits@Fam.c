/*
 * XREFs of ?DoAsyncInvoke@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@AEAAJ$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@@Z@wistd@@@Z @ 0x1800A2584
 * Callers:
 *     ??$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAAXAEB$$TAEBQEAVStateChangedEventArgsImpl@@@Z @ 0x18009FCC0 (--$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@-$AsyncEventSourceT@U-$ITypedEventHandler@P.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x18000F750 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18004D77C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004E078 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAA@PEAV12@PEAVEventTargetArray@Details@WRL@Microsoft@@$$QEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@@Z@wistd@@$$QEAV?$function@$$A6AXXZ@8@@Z @ 0x1800A1378 (--0AsyncEventWorkItem@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLim.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U?$default_delete@UAsyncEventWorkItemBase@details@wil@@@wistd@@@wistd@@QEAAXPEAUAsyncEventWorkItemBase@details@wil@@@Z @ 0x1802066E4 (-reset@-$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U-$default_delete@UAsyncEventWorkItemBa.c)
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>::DoAsyncInvoke(
        __int64 Parameter,
        __int64 a2)
{
  char v2; // si
  volatile signed __int32 *v5; // rbx
  const char *v6; // r9
  unsigned int LastError; // edi
  _QWORD *v8; // rax
  _QWORD *v10; // [rsp+30h] [rbp-69h] BYREF
  volatile signed __int32 *v11; // [rsp+38h] [rbp-61h] BYREF
  RTL_SRWLOCK *v12[2]; // [rsp+40h] [rbp-59h] BYREF
  int v13; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v14[15]; // [rsp+58h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v2 = 0;
  LODWORD(v10) = 0;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(Parameter + 8, (__int64)v12);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v11, (__int64 *)Parameter);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v12);
  v5 = v11;
  if ( v11 )
  {
    if ( !InitOnceExecuteOnce(
            (PINIT_ONCE)(Parameter + 24),
            (PINIT_ONCE_FN)lambda_baf814ee9ae89b980ad734f70dac785d_::_lambda_invoker_cdecl_,
            (PVOID)Parameter,
            0LL) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x2C5,
                    (unsigned int)"internal\\sdk\\inc\\wil\\wrlevent.h",
                    v6);
      goto LABEL_12;
    }
    v8 = operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      v14[1] = Parameter;
      v14[0] = off_180430C28;
      v14[13] = v14;
      v8 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>::AsyncEventWorkItem::AsyncEventWorkItem(
             v8,
             Parameter,
             (__int64)v5,
             a2,
             (__int64)&v13);
      v2 = 1;
    }
    v10 = v8;
    if ( (v2 & 1) != 0 )
    {
      wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)&v13);
      v8 = v10;
    }
    if ( !v8 )
    {
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D0,
        (__int64)"internal\\sdk\\inc\\wil\\wrlevent.h",
        (const char *)0x8007000ELL);
      wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::reset(
        &v10,
        0LL);
      goto LABEL_12;
    }
    _InterlockedIncrement((volatile signed __int32 *)(Parameter + 56));
    (*(void (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)(Parameter + 48) + 48LL))(
      *(_QWORD *)(Parameter + 48),
      &v10);
    wistd::unique_ptr<wil::details::AsyncEventWorkItemBase,wistd::default_delete<wil::details::AsyncEventWorkItemBase>>::reset(
      &v10,
      0LL);
    v5 = v11;
  }
  LastError = 0;
LABEL_12:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
  return LastError;
}
