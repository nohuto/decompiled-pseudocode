/*
 * XREFs of ?RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1800996F0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??0?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18009699C (--0-$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1800997D0 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall UwpPrimaryAppProxy::RelayoutAppViews(RTL_SRWLOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE v9[96]; // [rsp+28h] [rbp-60h] BYREF
  RTL_SRWLOCK *v10; // [rsp+90h] [rbp+8h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+18h]

  v11 = a3;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 5, &v10);
  v6 = std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(
         (__int64)v9,
         a3);
  UwpPrimaryAppProxy::RelayoutAppViewsInternal(a1, a2, v6);
  CAutoSRWSharedLock::~CAutoSRWSharedLock((CAutoSRWSharedLock *)&v10);
  v8 = *(_QWORD *)(a3 + 56);
  if ( v8 )
  {
    LOBYTE(v7) = v8 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v7);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
}
