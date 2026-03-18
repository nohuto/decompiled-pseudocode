/*
 * XREFs of DxgkReleaseAdapterCoreSync @ 0x1C00BCCF0
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C001E470 (DpiEnterSystemDisplay.c)
 *     DpiLeaveSystemDisplay @ 0x1C0044EA0 (DpiLeaveSystemDisplay.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C0141C00 (DpiFdoSetAdapterPowerState.c)
 *     DpiPdoIsChildConnected @ 0x1C0144E00 (DpiPdoIsChildConnected.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C01486F0 (DpiFdoCreateRelatedObjects.c)
 *     DpiPowerArbiterThread @ 0x1C015D200 (DpiPowerArbiterThread.c)
 *     DpiFdoStopAdapter @ 0x1C0266DB0 (DpiFdoStopAdapter.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C02685B0 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C026877C (DpiEnableMsBddFallbackDriver.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C026FF04 (DpiAcpiHandleAcpiEvent.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02704CC (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00BCD10 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkReleaseAdapterCoreSync(__int64 a1)
{
  __int64 v2; // rax

  if ( a1 )
  {
    DXGADAPTER::ReleaseCoreSync();
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v2 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v2);
    return 3221225485LL;
  }
}
