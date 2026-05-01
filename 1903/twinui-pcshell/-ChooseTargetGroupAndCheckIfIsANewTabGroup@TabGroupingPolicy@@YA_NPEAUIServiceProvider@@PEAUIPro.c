/*
 * XREFs of ?ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x180243D28
 * Callers:
 *     ?EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x18022EC20 (-EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 *     ?UpdatePropertySetWithTargetGroupForActivation@TabViewManager@@UEAAJPEAUIUnknown@@@Z @ 0x180241840 (-UpdatePropertySetWithTargetGroupForActivation@TabViewManager@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??0TabGroupPolicyEvaluator@TabGroupingPolicy@@QEAA@PEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x180243804 (--0TabGroupPolicyEvaluator@TabGroupingPolicy@@QEAA@PEAUIServiceProvider@@PEAUIPropertySet@Collec.c)
 *     _lambda_2cb0432609559d0b9f8b724cd53e45e8_::operator() @ 0x1802438B4 (_lambda_2cb0432609559d0b9f8b724cd53e45e8_--operator().c)
 */

bool __fastcall TabGroupingPolicy::ChooseTargetGroupAndCheckIfIsANewTabGroup(
        struct IServiceProvider *this,
        struct IServiceProvider *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct IWin32ApplicationView *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  bool v7; // bl
  struct IApplicationViewCollection **v9; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h] BYREF
  __int64 v11; // [rsp+48h] [rbp-21h] BYREF
  __int64 v12; // [rsp+50h] [rbp-19h] BYREF
  __int64 v13; // [rsp+58h] [rbp-11h] BYREF
  __int64 v14; // [rsp+60h] [rbp-9h] BYREF
  __int64 v15; // [rsp+68h] [rbp-1h]
  __int64 v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+A0h] [rbp+37h]

  TabGroupingPolicy::TabGroupPolicyEvaluator::TabGroupPolicyEvaluator(
    (TabGroupingPolicy::TabGroupPolicyEvaluator *)&v10,
    this,
    (struct Windows::Foundation::Collections::IPropertySet *)a2,
    a3,
    a4);
  v9 = (struct IApplicationViewCollection **)&v10;
  lambda_2cb0432609559d0b9f8b724cd53e45e8_::operator()(&v9, v4, v5);
  v6 = v15;
  if ( !v15 )
    v6 = v16;
  v7 = v6 == 0;
  v17 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v12);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v7;
}
