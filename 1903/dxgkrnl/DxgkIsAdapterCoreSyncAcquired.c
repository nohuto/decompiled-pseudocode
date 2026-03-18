/*
 * XREFs of DxgkIsAdapterCoreSyncAcquired @ 0x1C01F69D4
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C017D7D0 (DpiPowerArbiterThread.c)
 *     DpExcludeAdapterAccess @ 0x1C029BD90 (DpExcludeAdapterAccess.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x1C02A35BC (DpiFdoWaitConnectionChangeComplete.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C02A55AC (DpiMiracastSendSyncUserModeRequest.c)
 * Callees:
 *     ?IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01ED728 (-IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
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
