/*
 * XREFs of DxgkCompletePStateTransitionCB @ 0x1C003EA10
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0014370 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00143BC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z @ 0x1C003282C (-CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z.c)
 */

void __fastcall DxgkCompletePStateTransitionCB(__int64 a1, int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _MCGEN_TRACE_CONTEXT *DxgAdapter; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v9);
  DxgAdapter = (struct _MCGEN_TRACE_CONTEXT *)DpiGetDxgAdapter(a1, v6, v7);
  DXGADAPTER::CompletePStateTransitionCB(DxgAdapter, a2, a3);
  if ( v9[0] )
    KeUnstackDetachProcess(&ApcState);
}
