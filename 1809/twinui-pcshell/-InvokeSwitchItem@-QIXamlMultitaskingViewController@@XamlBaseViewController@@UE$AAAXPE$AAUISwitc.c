/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180294BA0
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800A5F70 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwit.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18028F1F4 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18025B55C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18025B7BC (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?get@Data@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVObject@Platform@@XZ @ 0x18025D9E0 (-get@Data@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVObject@Platform.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_152963d5211cf6149a80abe334e76dfa___ @ 0x180291EF8 (Windows--Internal--ComTaskPool--QueueTask__lambda_152963d5211cf6149a80abe334e76dfa___.c)
 *     _lambda_152963d5211cf6149a80abe334e76dfa_::_lambda_152963d5211cf6149a80abe334e76dfa_ @ 0x180292EBC (_lambda_152963d5211cf6149a80abe334e76dfa_--_lambda_152963d5211cf6149a80abe334e76dfa_.c)
 *     _lambda_152963d5211cf6149a80abe334e76dfa_::__lambda_152963d5211cf6149a80abe334e76dfa_ @ 0x180293784 (_lambda_152963d5211cf6149a80abe334e76dfa_--__lambda_152963d5211cf6149a80abe334e76dfa_.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x1802949F8 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 *     ?get@GroupingState@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AW4SwitchItemGroupingState@3456@XZ @ 0x180297850 (-get@GroupingState@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA-AW4SwitchIt.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64 *); // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  IUnknown *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18[5]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+38h] BYREF

  v17[1] = -2LL;
  v4 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  if ( (unsigned int)Windows::Internal::ComposableShell::Multitasking::ISwitchItem::GroupingState::get(a2) == 2 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::Internal::ComposableShell::Multitasking::ISwitchItem::Data::get(a2);
    v17[0] = (__int64)v5;
    v6 = __abi_winrt_cast_to(1, v5, (__int64)&_uuidof__AVShellTab_Tabs_ComposableShell_Internal_Windows__);
    v16 = v6;
    __abi_winrt_ptr_assign(&v20, v6);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v5)[2])(v5);
    v4 = v20;
    if ( v20 )
    {
      v7 = Windows::Internal::ComposableShell::Multitasking::ISwitchItem::Data::get(a2);
      v17[0] = v7;
      v8 = *(_QWORD *)(a1 + 88);
      wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v19);
      (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, v7, &v19);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  else
  {
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v19);
    XamlBaseViewController::GetAppViewFromSwitchItem(v9, a2, &v19);
  }
  if ( v19 )
  {
    v10 = *(IUnknown **)(a1 + 56);
    v16 = (__int64)v10;
    if ( v10 )
      ((void (__fastcall *)(IUnknown *))v10->lpVtbl->AddRef)(v10);
    v11 = __abi_winrt_cast_to(
            0,
            *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 96),
            (__int64)&_uuidof__AUITabController_Tabs_ComposableShell_Internal_Windows__);
    v12 = __abi_winrt_ptr_ctor(v11);
    v17[0] = v12;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    CoAllowSetForegroundWindow(v10, 0LL);
    v13 = lambda_152963d5211cf6149a80abe334e76dfa_::_lambda_152963d5211cf6149a80abe334e76dfa_(
            v18,
            &v16,
            &v19,
            v17,
            &v20);
    Windows::Internal::ComTaskPool::QueueTask__lambda_152963d5211cf6149a80abe334e76dfa___(v14, v13);
    lambda_152963d5211cf6149a80abe334e76dfa_::__lambda_152963d5211cf6149a80abe334e76dfa_(v18);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v16);
  }
  result = wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return result;
}
