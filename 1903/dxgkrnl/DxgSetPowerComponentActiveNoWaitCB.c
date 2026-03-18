/*
 * XREFs of DxgSetPowerComponentActiveNoWaitCB @ 0x1C003E3A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013BA0 (DpiGetDxgAdapter.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0034758 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DxgSetPowerComponentActiveNoWaitCB(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  DXGADAPTER *DxgAdapter; // rax

  v3 = a2;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, a2, a3);
  DXGADAPTER::SetPowerComponentActiveCBInternal(DxgAdapter, v3, 0, 0);
}
