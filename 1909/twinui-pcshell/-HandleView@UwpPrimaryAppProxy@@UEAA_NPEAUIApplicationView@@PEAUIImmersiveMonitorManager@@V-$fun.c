/*
 * XREFs of ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1803BC7B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18030BAE4 (--0-$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??$emplace_back@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUIApplicationView@@@Z @ 0x1803BAAFC (--$emplace_back@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exceptio.c)
 *     ?FindAppView@UwpPrimaryAppProxy@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1803BBDF4 (-FindAppView@UwpPrimaryAppProxy@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types.c)
 *     ?GetAppHostId@UwpPrimaryAppProxy@@AEAA_KPEAUIApplicationView@@@Z @ 0x1803BBF14 (-GetAppHostId@UwpPrimaryAppProxy@@AEAA_KPEAUIApplicationView@@@Z.c)
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1803BD790 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall UwpPrimaryAppProxy::HandleView(RTL_SRWLOCK *a1, struct IApplicationView *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  UwpPrimaryAppProxy *v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 AppHostId; // rbp
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20[3]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v21[72]; // [rsp+38h] [rbp-70h] BYREF
  struct IUnknown **v22; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+20h]

  v23 = a4;
  v20[1] = -2LL;
  if ( !(*((unsigned __int8 (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 1))(a1) )
  {
    v10 = *(_QWORD *)(a4 + 56);
    if ( v10 )
    {
      LOBYTE(v8) = v10 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v8);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    return 0;
  }
  AppHostId = UwpPrimaryAppProxy::GetAppHostId(v9, a2);
  if ( AppHostId == -1 )
  {
    v14 = *(_QWORD *)(a4 + 56);
    if ( v14 )
    {
      LOBYTE(v12) = v14 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v12);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    return 0;
  }
  AcquireSRWLockExclusive(a1 + 5);
  v20[2] = (__int64)&a1[5];
  if ( a1[6].Ptr == a1[7].Ptr )
  {
    a1[9].Ptr = (PVOID)AppHostId;
  }
  else if ( a1[9].Ptr != (PVOID)AppHostId )
  {
    if ( a1 != (RTL_SRWLOCK *)-40LL )
      ReleaseSRWLockExclusive(a1 + 5);
    v19 = *(_QWORD *)(a4 + 56);
    if ( v19 )
    {
      LOBYTE(v15) = v19 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v15);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    return 0;
  }
  v20[0] = (__int64)a2;
  UwpPrimaryAppProxy::FindAppView((__int64)a1, &v22, (struct IUnknown *)a2);
  if ( v22 == a1[7].Ptr )
  {
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::emplace_back<IApplicationView * &>(
      (__int64)&a1[6],
      v20);
    v17 = std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(
            (__int64)v21,
            a4);
    UwpPrimaryAppProxy::RelayoutAppViewsInternal(a1, a3, v17);
  }
  if ( a1 != (RTL_SRWLOCK *)-40LL )
    ReleaseSRWLockExclusive(a1 + 5);
  v18 = *(_QWORD *)(a4 + 56);
  if ( v18 )
  {
    LOBYTE(v16) = v18 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, v16);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return 1;
}
