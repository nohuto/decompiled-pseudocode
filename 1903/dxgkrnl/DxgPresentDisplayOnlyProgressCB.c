/*
 * XREFs of DxgPresentDisplayOnlyProgressCB @ 0x1C003E310
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013BA0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013BEC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C0046FCC (-PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@.c)
 */

void __fastcall DxgPresentDisplayOnlyProgressCB(__int64 a1, const struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  DXGDODPRESENT *v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v7);
  v6 = *(DXGDODPRESENT **)(*(_QWORD *)(DpiGetDxgAdapter(a1, v4, v5) + 2552) + 368LL);
  if ( v6 )
    DXGDODPRESENT::PresentDisplayOnlySetProgress(v6, a2);
  if ( v7[0] )
    KeUnstackDetachProcess(&ApcState);
}
