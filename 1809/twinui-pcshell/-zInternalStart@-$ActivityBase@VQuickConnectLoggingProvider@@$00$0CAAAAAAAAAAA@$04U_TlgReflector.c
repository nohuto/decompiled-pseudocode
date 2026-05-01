/*
 * XREFs of ?zInternalStart@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180176C00
 * Callers:
 *     ?StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ @ 0x1801748E8 (-StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ @ 0x1801749BC (-StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x180174A90 (-StartActivity@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXXZ @ 0x180174B64 (-StartActivity@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x180174C38 (-StartActivity@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x180174D0C (-StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x180174DE0 (-StartActivity@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x180174EB4 (-StartActivity@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x180174F88 (-StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18002F6C0 (TraceLoggingProviderEnabled.c)
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18010B090 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x180176B04 (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

void __fastcall wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  RTL_SRWLOCK *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v4 = wil::details::static_lazy<QuickConnectLoggingProvider>::get(
         v3,
         (void (__cdecl *)())lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_);
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)v4[1], 5u, 0x200000000000uLL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_QWORD *)(v2 + 8) = 0LL;
  v5 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
}
