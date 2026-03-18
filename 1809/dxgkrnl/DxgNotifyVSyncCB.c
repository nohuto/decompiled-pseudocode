/*
 * XREFs of DxgNotifyVSyncCB @ 0x1C0037E30
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C80 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C002DF08 (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
 */

void __fastcall DxgNotifyVSyncCB(__int64 a1, unsigned int a2)
{
  DXGADAPTER *DxgAdapter; // rax
  const GUID *v5; // r8
  _BYTE v6[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v6);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  DXGADAPTER::NotifyVSync(DxgAdapter, a2, v5);
  if ( v6[0] )
    KeUnstackDetachProcess(&ApcState);
}
