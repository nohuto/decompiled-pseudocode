/*
 * XREFs of ?UpdatePropertySetWithTargetGroupForActivation@TabViewManager@@UEAAJPEAUIUnknown@@@Z @ 0x180241840
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1800997E8 (--$com_copy@UIPropertySet@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_.c)
 *     ?ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x180243D28 (-ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPro.c)
 */

__int64 __fastcall TabViewManager::UpdatePropertySetWithTargetGroupForActivation(
        struct IWin32ApplicationView **this,
        struct IUnknown *a2)
{
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v6; // [rsp+48h] [rbp+10h] BYREF
  struct IServiceProvider *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a2;
  try
  {
    wil::com_copy<Windows::Foundation::Collections::IPropertySet,IUnknown * &>(&v7, &v6);
    TabGroupingPolicy::ChooseTargetGroupAndCheckIfIsANewTabGroup(
      (struct IServiceProvider *)((unsigned __int64)(this - 10) & -(__int64)(this != (struct IWin32ApplicationView **)136)),
      v7,
      0LL,
      this[133],
      (struct IApplicationViewCollection *)0xFFFFFFFFFFFFFFFELL);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4C6,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v3);
  }
  return result;
}
