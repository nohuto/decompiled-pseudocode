/*
 * XREFs of DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C003E6B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0014370 (DpiGetDxgAdapter.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0034E10 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DxgSetPowerComponentIdleForceAsyncCBInternal(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  DXGADAPTER *DxgAdapter; // rax

  v3 = a2;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, a2, a3);
  DXGADAPTER::SetPowerComponentIdleCBInternal(DxgAdapter, v3, 2u);
}
