/*
 * XREFs of DxgkIsAdapterCoreSyncAcquired @ 0x1C01F7044
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C01815C0 (DpiPowerArbiterThread.c)
 *     DpExcludeAdapterAccess @ 0x1C029C1A0 (DpExcludeAdapterAccess.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x1C02A39CC (DpiFdoWaitConnectionChangeComplete.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C02A59BC (DpiMiracastSendSyncUserModeRequest.c)
 * Callees:
 *     ?IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01EDD58 (-IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

BOOLEAN __fastcall DxgkIsAdapterCoreSyncAcquired(DXGADAPTER *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  if ( a1 )
    return DXGADAPTER::IsCoreSyncAcquired(a1, a2);
  v3 = WdLogNewEntry5_WdError(0LL, a2, a3);
  *(_QWORD *)(v3 + 24) = 323LL;
  WdLogEvent5_WdError(v3);
  return 0;
}
