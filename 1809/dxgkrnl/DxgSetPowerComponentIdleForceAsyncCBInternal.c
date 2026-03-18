/*
 * XREFs of DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C00380F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C002F4A4 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DxgSetPowerComponentIdleForceAsyncCBInternal(__int64 a1, unsigned int a2)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::SetPowerComponentIdleCBInternal(DxgAdapter, a2, 2u);
}
