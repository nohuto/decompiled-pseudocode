/*
 * XREFs of ?OnViewNeedinessChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801E2C70
 * Callers:
 *     ?OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801DF630 (-OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?TryGetLastSelectedTabForView@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801ED994 (-TryGetLastSelectedTabForView@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell.c)
 */

__int64 __fastcall TabViewManager::OnViewNeedinessChanged(TabViewManager *this, struct IApplicationView *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  TabViewManager::TryGetLastSelectedTabForView(this, &v11, a2);
  v3 = v11;
  if ( !v11 )
    goto LABEL_7;
  v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 176LL))(a2, &v10);
  v6 = v4;
  if ( v4 >= 0 )
  {
    LOBYTE(v5) = v10 != 0;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 208LL))(v3, v5);
    v6 = v4;
    if ( v4 < 0 )
    {
      v7 = 2640LL;
      goto LABEL_6;
    }
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v7 = 2639LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v4);
LABEL_8:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v11);
  return v6;
}
