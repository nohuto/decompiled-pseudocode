/*
 * XREFs of ??1?$_Func_class@XPEAUIApplicationView@@PEAUIImmersiveMonitor@@@std@@QEAA@XZ @ 0x180096BF4
 * Callers:
 *     _std::function_void___cdecl(IApplicationView_____ptr64_IImmersiveMonitor_____ptr64)_::function_void___cdecl(IApplicationView_____ptr64_IImmersiveMonitor_____ptr64)__::_1_::dtor$0 @ 0x1800969DC (_std--function_void___cdecl(IApplicationView_____ptr64_IImmersiveMonitor_____ptr64)_--function_v.c)
 *     _KioskPositioner::CreateApplicationViewOperation_::_1_::dtor$0 @ 0x180097813 (_KioskPositioner--CreateApplicationViewOperation_--_1_--dtor$0.c)
 *     _UwpPrimaryAppProxy::HandleView_::_1_::dtor$0 @ 0x1800986DA (_UwpPrimaryAppProxy--HandleView_--_1_--dtor$0.c)
 *     _UwpPrimaryAppProxy::RelayoutAppViews_::_1_::dtor$0 @ 0x180099770 (_UwpPrimaryAppProxy--RelayoutAppViews_--_1_--dtor$0.c)
 *     _UwpPrimaryAppProxy::RelayoutAppViewsInternal_::_1_::dtor$0 @ 0x1800998F5 (_UwpPrimaryAppProxy--RelayoutAppViewsInternal_--_1_--dtor$0.c)
 *     _UwpPrimaryAppProxy::RemoveView_::_1_::dtor$0 @ 0x180099B1A (_UwpPrimaryAppProxy--RemoveView_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_class<void,IApplicationView *,IImmersiveMonitor *>::~_Func_class<void,IApplicationView *,IImmersiveMonitor *>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
