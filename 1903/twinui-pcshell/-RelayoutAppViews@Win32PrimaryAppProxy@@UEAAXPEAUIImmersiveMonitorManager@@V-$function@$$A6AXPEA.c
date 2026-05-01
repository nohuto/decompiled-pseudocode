/*
 * XREFs of ?RelayoutAppViews@Win32PrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18039E1E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32PrimaryAppProxy::RelayoutAppViews(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a3 + 56);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != a3;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return result;
}
