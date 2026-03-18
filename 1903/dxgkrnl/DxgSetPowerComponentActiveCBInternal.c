/*
 * XREFs of DxgSetPowerComponentActiveCBInternal @ 0x1C022B440
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013BA0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013BEC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0034758 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DxgSetPowerComponentActiveCBInternal(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  DXGADAPTER *DxgAdapter; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v7);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v4, v5);
  DXGADAPTER::SetPowerComponentActiveCBInternal(DxgAdapter, a2, 1u, 0);
  if ( v7[0] )
    KeUnstackDetachProcess(&ApcState);
}
