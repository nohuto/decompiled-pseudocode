/*
 * XREFs of ??0TabGroupPolicyEvaluator@TabGroupingPolicy@@QEAA@PEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x1801F23D4
 * Callers:
 *     ?ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIWin32ApplicationView@@PEAUIApplicationViewCollection@@@Z @ 0x1801F28F0 (-ChooseTargetGroupAndCheckIfIsANewTabGroup@TabGroupingPolicy@@YA_NPEAUIServiceProvider@@PEAUIPro.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

TabGroupingPolicy::TabGroupPolicyEvaluator *__fastcall TabGroupingPolicy::TabGroupPolicyEvaluator::TabGroupPolicyEvaluator(
        TabGroupingPolicy::TabGroupPolicyEvaluator *this,
        struct IServiceProvider *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct IWin32ApplicationView *a4,
        struct IApplicationViewCollection *a5)
{
  *(_QWORD *)this = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 2) = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)a5 + 8LL))(a5);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    (_QWORD *)this + 3,
    (__int64)a4);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(
    (HSTRING_HEADER *)this + 3,
    (const WCHAR **)off_180400288);
  return this;
}
