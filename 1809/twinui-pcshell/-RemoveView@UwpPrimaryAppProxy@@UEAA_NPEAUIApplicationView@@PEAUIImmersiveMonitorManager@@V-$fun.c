/*
 * XREFs of ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x180099A10
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180088C90 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??0?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18009699C (--0-$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?FindAppView@UwpPrimaryAppProxy@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x180097B84 (-FindAppView@UwpPrimaryAppProxy@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types.c)
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1800997D0 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18009A85C (-erase@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall UwpPrimaryAppProxy::RemoveView(RTL_SRWLOCK *a1, struct IUnknown *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rcx
  struct IUnknown **v14[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v15[88]; // [rsp+30h] [rbp-58h] BYREF
  PSRWLOCK SRWLock; // [rsp+90h] [rbp+8h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+20h]

  v17 = a4;
  v14[1] = (struct IUnknown **)-2LL;
  wil::srwlock::lock_exclusive(a1 + 5, &SRWLock);
  UwpPrimaryAppProxy::FindAppView((__int64)a1, v14, a2);
  if ( v14[0] == a1[7].Ptr )
  {
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v13 = *(_QWORD *)(a4 + 56);
    if ( v13 )
    {
      LOBYTE(v8) = v13 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v8);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    return 0;
  }
  else
  {
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::erase(&a1[6], v14);
    if ( a1[6].Ptr == a1[7].Ptr )
    {
      a1[9].Ptr = (PVOID)-1LL;
    }
    else
    {
      v10 = std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(
              (__int64)v15,
              a4);
      UwpPrimaryAppProxy::RelayoutAppViewsInternal((__int64)a1, a3, v10);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v11 = *(_QWORD *)(a4 + 56);
    if ( v11 )
    {
      LOBYTE(v9) = v11 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v9);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    return 1;
  }
}
