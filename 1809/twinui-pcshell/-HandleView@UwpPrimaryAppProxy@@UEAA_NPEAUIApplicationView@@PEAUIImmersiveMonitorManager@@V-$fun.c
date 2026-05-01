/*
 * XREFs of ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x180098540
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180088C90 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$emplace_back@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUIApplicationView@@@Z @ 0x180096814 (--$emplace_back@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exceptio.c)
 *     ??0?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18009699C (--0-$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?FindAppView@UwpPrimaryAppProxy@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x180097B84 (-FindAppView@UwpPrimaryAppProxy@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types.c)
 *     ?GetAppHostId@UwpPrimaryAppProxy@@AEAA_KPEAUIApplicationView@@@Z @ 0x180097CA4 (-GetAppHostId@UwpPrimaryAppProxy@@AEAA_KPEAUIApplicationView@@@Z.c)
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1800997D0 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall UwpPrimaryAppProxy::HandleView(RTL_SRWLOCK *a1, struct IApplicationView *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  UwpPrimaryAppProxy *v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 AppHostId; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct IUnknown **v20; // [rsp+20h] [rbp-88h] BYREF
  __int64 v21[2]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v22[112]; // [rsp+38h] [rbp-70h] BYREF
  PSRWLOCK SRWLock; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+20h]

  v24 = a4;
  v21[1] = -2LL;
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
  wil::srwlock::lock_exclusive(a1 + 5, &SRWLock);
  if ( a1[6].Ptr == a1[7].Ptr )
  {
    a1[9].Ptr = (PVOID)AppHostId;
  }
  else if ( a1[9].Ptr != (PVOID)AppHostId )
  {
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v19 = *(_QWORD *)(a4 + 56);
    if ( v19 )
    {
      LOBYTE(v15) = v19 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v15);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    return 0;
  }
  v21[0] = (__int64)a2;
  UwpPrimaryAppProxy::FindAppView((__int64)a1, &v20, (struct IUnknown *)a2);
  if ( v20 == a1[7].Ptr )
  {
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::emplace_back<IApplicationView * &>(
      (__int64)&a1[6],
      v21);
    v17 = std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(
            (__int64)v22,
            a4);
    UwpPrimaryAppProxy::RelayoutAppViewsInternal(a1, a3, v17);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v18 = *(_QWORD *)(a4 + 56);
  if ( v18 )
  {
    LOBYTE(v16) = v18 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, v16);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return 1;
}
