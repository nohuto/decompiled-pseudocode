/*
 * XREFs of _lambda_214da7917066b4ac4c78f06185022e97_::operator() @ 0x1801D6398
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_214da7917066b4ac4c78f06185022e97__long_Windows::Internal::Shell::Experience::ITabTransferEventBroker_____ptr64_::_Do_call @ 0x1801F00D0 (std--_Func_impl_no_alloc__lambda_214da7917066b4ac4c78f06185022e97__long_Windows--In_ea_1801F00D0.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_214da7917066b4ac4c78f06185022e97_::operator()(_OWORD *a1, __int64 a2)
{
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10[3]; // [rsp+28h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v10[1] = -2LL;
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  v9 = 0LL;
  ActivationFactory = RoGetActivationFactory(v12, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v9);
  v5 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *a1;
    v10[0] = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *, __int64 *))(*(_QWORD *)v9 + 160LL))(
           v9,
           &hstringHeader,
           v10);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, v10[0]);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v7 = 2256LL;
    }
    else
    {
      v7 = 2255LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v6);
LABEL_9:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v10);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8CC,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_10:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v9);
  return v5;
}
