/*
 * XREFs of ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1800997D0
 * Callers:
 *     ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x180098540 (-HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 *     ?RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1800996F0 (-RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A6AXPEAUI.c)
 *     ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x180099A10 (-RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _lambda_f2d251a8fca91fba8309c9b36f0f2507_::operator() @ 0x180096DE0 (_lambda_f2d251a8fca91fba8309c9b36f0f2507_--operator().c)
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x180098094 (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall UwpPrimaryAppProxy::RelayoutAppViewsInternal(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  void *v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[2]; // [rsp+28h] [rbp-29h] BYREF
  __int64 v14; // [rsp+38h] [rbp-19h] BYREF
  __int128 v15; // [rsp+40h] [rbp-11h]
  __int64 v16; // [rsp+50h] [rbp-1h]
  __int64 v17; // [rsp+58h] [rbp+7h]
  __int128 v18; // [rsp+68h] [rbp+17h] BYREF
  __int64 v19; // [rsp+78h] [rbp+27h]
  __int64 v20; // [rsp+88h] [rbp+37h]

  v17 = -2LL;
  v20 = a3;
  UwpPrimaryAppProxy::GetSortedConnectedMonitors(a1, v13, a2);
  v5 = (_QWORD **)v13[0];
  v14 = *(_QWORD *)v13[0];
  *(_QWORD *)&v15 = &v14;
  *((_QWORD *)&v15 + 1) = v13;
  v16 = a3;
  v18 = v15;
  v19 = a3;
  v6 = *(_QWORD **)(a1 + 56);
  v7 = *(_QWORD **)(a1 + 48);
  if ( v7 != v6 )
  {
    do
      lambda_f2d251a8fca91fba8309c9b36f0f2507_::operator()((__int64 **)&v18, v7++);
    while ( v7 != v6 );
    v5 = (_QWORD **)v13[0];
  }
  v8 = *v5;
  *v5 = v5;
  *(_QWORD *)(v13[0] + 8LL) = v13[0];
  v13[1] = 0LL;
  v9 = (void *)v13[0];
  if ( v8 != (_QWORD *)v13[0] )
  {
    do
    {
      v10 = (_QWORD *)*v8;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v8 + 2);
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x18);
      v8 = v10;
      v9 = (void *)v13[0];
    }
    while ( v10 != (_QWORD *)v13[0] );
  }
  std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)0x18);
  v12 = *(_QWORD *)(a3 + 56);
  if ( v12 )
  {
    LOBYTE(v11) = v12 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
}
