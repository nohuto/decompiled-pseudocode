/*
 * XREFs of DxgkMitigatedRangeUpdateCB @ 0x1C003ED80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00143BC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     DpiMitigatedRangeUpdate @ 0x1C029D070 (DpiMitigatedRangeUpdate.c)
 */

void __fastcall DxgkMitigatedRangeUpdateCB(void *a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v2);
  DpiMitigatedRangeUpdate(a1);
  if ( v2[0] )
    KeUnstackDetachProcess(&ApcState);
}
