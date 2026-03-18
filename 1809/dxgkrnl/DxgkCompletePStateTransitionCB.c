/*
 * XREFs of DxgkCompletePStateTransitionCB @ 0x1C0038450
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C80 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z @ 0x1C002D74C (-CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z.c)
 */

void __fastcall DxgkCompletePStateTransitionCB(__int64 a1, int a2, unsigned int a3)
{
  struct _MCGEN_TRACE_CONTEXT *DxgAdapter; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v7);
  DxgAdapter = (struct _MCGEN_TRACE_CONTEXT *)DpiGetDxgAdapter(a1);
  DXGADAPTER::CompletePStateTransitionCB(DxgAdapter, a2, a3);
  if ( v7[0] )
    KeUnstackDetachProcess(&ApcState);
}
