/*
 * XREFs of DxgkUnload @ 0x1C023A4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     DxgkEtwShutdown @ 0x1C0040600 (DxgkEtwShutdown.c)
 *     ?DxgkDiagShutdown@@YAJXZ @ 0x1C00409DC (-DxgkDiagShutdown@@YAJXZ.c)
 *     ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C00486E0 (-DxgkCleanupTelemetry@@YAXXZ.c)
 *     MonitorCleanupGlobal @ 0x1C00561F0 (MonitorCleanupGlobal.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0241C68 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     ?LPMDisplayCleanupGlobal@@YAXXZ @ 0x1C024F918 (-LPMDisplayCleanupGlobal@@YAXXZ.c)
 *     DpiCleanUpGlobalState @ 0x1C029DCA0 (DpiCleanUpGlobalState.c)
 *     DxgkCleanupPower @ 0x1C029E108 (DxgkCleanupPower.c)
 */

void DxgkUnload()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 1u);
  v3 = WdLogNewEntry5_WdError(v1, v0, v2);
  *(_QWORD *)(v3 + 24) = 1286LL;
  WdLogEvent5_WdError(v3);
  SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
  MonitorCleanupGlobal(v5, v4);
  LPMDisplayCleanupGlobal();
  if ( CCD_BTL::m_pGlobalBtl )
  {
    (*(void (__fastcall **)(struct CCD_BTL *, __int64))(*(_QWORD *)CCD_BTL::m_pGlobalBtl + 8LL))(
      CCD_BTL::m_pGlobalBtl,
      1LL);
    CCD_BTL::m_pGlobalBtl = 0LL;
  }
  DxgkCleanupPower();
  DpiCleanUpGlobalState();
  if ( byte_1C00A2D05 )
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
  DxgkEtwShutdown();
  if ( gScreenStudyEventSubscription )
  {
    ExUnsubscribeWnfStateChange(gScreenStudyEventSubscription);
    gScreenStudyEventSubscription = 0LL;
  }
  DxgkCleanupTelemetry();
  DxgkDiagShutdown();
  if ( g_pDeviceObject )
  {
    IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
    g_pDeviceObject = 0LL;
  }
  DXGGLOBAL::DestroyGlobal();
}
