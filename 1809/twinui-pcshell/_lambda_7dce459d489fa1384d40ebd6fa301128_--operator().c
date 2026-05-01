/*
 * XREFs of _lambda_7dce459d489fa1384d40ebd6fa301128_::operator() @ 0x180089C4C
 * Callers:
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1800F7BC8 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_f50e41e2a94bb9c65f89ee2429a9e4ef___ @ 0x180089594 (ShellPositionerHelpers--PerformCallbackOnView__lambda_f50e41e2a94bb9c65f89ee2429a9e4ef___.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@SA_NXZ @ 0x18008A440 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_ShellLauncherV2_RS5@@@wil@@SA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1800E72E8 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_7dce459d489fa1384d40ebd6fa301128_::operator()(__int64 a1, bool *a2)
{
  PVOID Ptr; // rbx
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  IUnknown **v10; // rax
  __int128 v11; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v13; // [rsp+68h] [rbp+28h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  *a2 = 1;
  if ( !(unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_ShellLauncherV2_RS5>::__private_IsEnabled(a1) )
    return 0LL;
  v14 = 0LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v14);
  v6 = (*(__int64 (__fastcall **)(PVOID, _QWORD, __int64 *))(*(_QWORD *)Ptr + 56LL))(Ptr, **(_QWORD **)a1, &v14);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v13 = 1;
    v10 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk(*(_QWORD *)(a1 + 8) + 48LL, &v15);
    *(_QWORD *)&v11 = &v13;
    *((_QWORD *)&v11 + 1) = &v14;
    v7 = ShellPositionerHelpers::PerformCallbackOnView__lambda_f50e41e2a94bb9c65f89ee2429a9e4ef___(*v10, v14, &v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    if ( v7 >= 0 )
    {
      *a2 = v13 != 0;
      v7 = 0;
      goto LABEL_9;
    }
    v8 = (unsigned int)v7;
    v9 = 6951LL;
  }
  else
  {
    v8 = (unsigned int)v6;
    v9 = 6937LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v8);
LABEL_9:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
  return (unsigned int)v7;
}
