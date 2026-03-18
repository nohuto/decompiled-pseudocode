/*
 * XREFs of DxgSetPowerComponentIdleCB @ 0x1C0037FF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C80 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C002F3C4 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgSetPowerComponentIdleCB(__int64 a1, int a2)
{
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v5);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::SetPowerComponentIdleCB(DxgAdapter, a2);
  if ( v5[0] )
    KeUnstackDetachProcess(&ApcState);
}
