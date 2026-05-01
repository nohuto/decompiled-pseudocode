/*
 * XREFs of ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1803BD790
 * Callers:
 *     ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1803BC7B0 (-HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 *     ?RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1803BD690 (-RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A6AXPEAUI.c)
 *     ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1803BD930 (-RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _lambda_280d05e5955ef1ef6fea1bffa32e8a2c_::operator() @ 0x1800AD174 (_lambda_280d05e5955ef1ef6fea1bffa32e8a2c_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1802A1A98 (-clear@-$list@V-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@.c)
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1803BC3A4 (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall UwpPrimaryAppProxy::RelayoutAppViewsInternal(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v5; // rsi
  _QWORD *i; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9[2]; // [rsp+28h] [rbp-29h] BYREF
  __int64 v10; // [rsp+38h] [rbp-19h] BYREF
  __int128 v11; // [rsp+40h] [rbp-11h]
  __int64 v12; // [rsp+50h] [rbp-1h]
  __int64 v13; // [rsp+58h] [rbp+7h]
  __int128 v14; // [rsp+68h] [rbp+17h] BYREF
  __int64 v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+37h]

  v13 = -2LL;
  v16 = a3;
  UwpPrimaryAppProxy::GetSortedConnectedMonitors(a1, v9, a2);
  v10 = *(_QWORD *)v9[0];
  *(_QWORD *)&v11 = &v10;
  *((_QWORD *)&v11 + 1) = v9;
  v12 = a3;
  v14 = v11;
  v15 = a3;
  v5 = *(_QWORD **)(a1 + 56);
  for ( i = *(_QWORD **)(a1 + 48); i != v5; ++i )
    lambda_280d05e5955ef1ef6fea1bffa32e8a2c_::operator()((__int64 **)&v14, i);
  std::list<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::clear((__int64)v9);
  std::_Deallocate<16,0>(v9[0], (const struct std::nothrow_t *)0x18);
  v8 = *(_QWORD *)(a3 + 56);
  if ( v8 )
  {
    LOBYTE(v7) = v8 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v7);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
}
