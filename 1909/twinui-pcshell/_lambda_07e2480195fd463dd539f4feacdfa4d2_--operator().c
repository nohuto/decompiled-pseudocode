/*
 * XREFs of _lambda_07e2480195fd463dd539f4feacdfa4d2_::operator() @ 0x18008F3C8
 * Callers:
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x18013C430 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_d501edc7b04cbeac4930c1b70efb24fb___ @ 0x18008ECD0 (ShellPositionerHelpers--PerformCallbackOnView__lambda_d501edc7b04cbeac4930c1b70efb24fb___.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180128408 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_07e2480195fd463dd539f4feacdfa4d2_::operator()(__int64 a1, bool *a2)
{
  PVOID Ptr; // rdi
  __int64 (__fastcall *v5)(PVOID, _QWORD, __int64 *); // rbx
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  IUnknown **v10; // rax
  __int128 v12; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  char v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF
  __int64 v16; // [rsp+80h] [rbp+40h] BYREF

  *a2 = 1;
  v15 = 0LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  v5 = *(__int64 (__fastcall **)(PVOID, _QWORD, __int64 *))(*(_QWORD *)Ptr + 56LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v15);
  v6 = v5(Ptr, **(_QWORD **)a1, &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v14 = 1;
    v10 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk(*(_QWORD *)(a1 + 8) + 48LL, &v16);
    *(_QWORD *)&v12 = &v14;
    *((_QWORD *)&v12 + 1) = &v15;
    v7 = ShellPositionerHelpers::PerformCallbackOnView__lambda_d501edc7b04cbeac4930c1b70efb24fb___(*v10, v15, &v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    if ( v7 >= 0 )
    {
      *a2 = v14 != 0;
      v7 = 0;
      goto LABEL_7;
    }
    v8 = (unsigned int)v7;
    v9 = 7151LL;
  }
  else
  {
    v8 = (unsigned int)v6;
    v9 = 7137LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v8);
LABEL_7:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v15);
  return (unsigned int)v7;
}
