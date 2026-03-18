/*
 * XREFs of DxgkStartDisplayCalloutBatch @ 0x1C01C5C6C
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0044888 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?StartDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01C5344 (-StartDisplayCalloutBatch@ADAPTER_DISPLAY@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkStartDisplayCalloutBatch(__int64 a1)
{
  return ADAPTER_DISPLAY::StartDisplayCalloutBatch(*(DXGADAPTER ***)(a1 + 2520));
}
