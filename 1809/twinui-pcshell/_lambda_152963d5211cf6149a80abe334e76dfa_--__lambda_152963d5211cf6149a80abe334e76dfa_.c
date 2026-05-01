/*
 * XREFs of _lambda_152963d5211cf6149a80abe334e76dfa_::__lambda_152963d5211cf6149a80abe334e76dfa_ @ 0x180293784
 * Callers:
 *     ??_E?$CTaskWrapper@V_lambda_152963d5211cf6149a80abe334e76dfa_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180294410 (--_E-$CTaskWrapper@V_lambda_152963d5211cf6149a80abe334e76dfa_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180294BA0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitc.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_152963d5211cf6149a80abe334e76dfa_::__lambda_152963d5211cf6149a80abe334e76dfa_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = a1[3];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = a1[2];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(a1 + 1);
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(a1);
}
