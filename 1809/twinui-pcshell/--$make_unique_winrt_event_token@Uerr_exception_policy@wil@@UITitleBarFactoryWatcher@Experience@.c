/*
 * XREFs of ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@P834567@EAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YA?AV?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@1@PEAUITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@P834567@EAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@Z1@Z @ 0x1801F5C2C
 * Callers:
 *     ?EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ @ 0x1801F7544 (-EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$com_weak_query_failfast@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801F5AF8 (--$com_weak_query_failfast@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Window.c)
 */

_QWORD *__fastcall wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher,long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(Windows::Foundation::IEventHandler<IInspectable *> *,EventRegistrationToken *),long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(EventRegistrationToken),Windows::Foundation::IEventHandler<IInspectable *> *>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 (__fastcall *a3)(_QWORD, __int64, __int64 *),
        __int64 a4,
        __int64 a5)
{
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3(a2, a5, &v16);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5800LL,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  *a1 = v16;
  a1[1] = 0LL;
  a1[2] = a4;
  v13 = a2;
  v9 = wil::com_weak_query_failfast<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter * &>(v14, &v13);
  v10 = *v9;
  *v9 = 0LL;
  v11 = a1[1];
  a1[1] = v10;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v14);
  return a1;
}
