/*
 * XREFs of DxgkEndDisplayCalloutBatch @ 0x1C015B578
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C001E468 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C015B594 (-EndDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkEndDisplayCalloutBatch(__int64 a1)
{
  return ADAPTER_DISPLAY::EndDisplayCalloutBatch(*(ADAPTER_DISPLAY **)(a1 + 2552));
}
