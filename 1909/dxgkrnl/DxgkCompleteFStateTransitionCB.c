/*
 * XREFs of DxgkCompleteFStateTransitionCB @ 0x1C003E990
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0014370 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00143BC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0032714 (-CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgkCompleteFStateTransitionCB(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  DXGADAPTER *DxgAdapter; // rax
  __int64 v7; // r8
  _BYTE v8[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v8);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v4, v5);
  DXGADAPTER::CompleteFStateTransitionCB(DxgAdapter, a2, v7);
  if ( v8[0] )
    KeUnstackDetachProcess(&ApcState);
}
