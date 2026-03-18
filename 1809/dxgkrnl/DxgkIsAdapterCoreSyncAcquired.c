/*
 * XREFs of DxgkIsAdapterCoreSyncAcquired @ 0x1C01C7DD0
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C015D200 (DpiPowerArbiterThread.c)
 *     DpExcludeAdapterAccess @ 0x1C0262380 (DpExcludeAdapterAccess.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C026A1B4 (DpiMiracastSendSyncUserModeRequest.c)
 * Callees:
 *     ?IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C01BE120 (-IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 */

BOOLEAN __fastcall DxgkIsAdapterCoreSyncAcquired(DXGADAPTER *a1, int a2)
{
  __int64 v2; // rax

  if ( a1 )
    return DXGADAPTER::IsCoreSyncAcquired(a1, a2);
  v2 = WdLogNewEntry5_WdError(0LL);
  *(_QWORD *)(v2 + 24) = 259LL;
  WdLogEvent5_WdError(v2);
  return 0;
}
