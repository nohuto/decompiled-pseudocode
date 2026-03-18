/*
 * XREFs of DxgkSetPowerComponentLatencyCB @ 0x1C003EE50
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013BA0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013BEC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0035030 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DxgkSetPowerComponentLatencyCB(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v9);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v6, v7);
  DXGADAPTER::SetPowerComponentLatencyCB(DxgAdapter, a2, a3);
  if ( v9[0] )
    KeUnstackDetachProcess(&ApcState);
}
