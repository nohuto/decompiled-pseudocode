/*
 * XREFs of DxgkPowerRuntimeControlRequestCB @ 0x1C003EE90
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0014370 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00143BC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0pj @ 0x1C0035750 (McTemplateK0pj.c)
 */

__int64 __fastcall DxgkPowerRuntimeControlRequestCB(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 DxgAdapter; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v17; // rbx
  unsigned int v18; // ebx
  __int64 v19; // rax
  _BYTE v21[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v21);
  DxgAdapter = DpiGetDxgAdapter(a1, v11, v12);
  v17 = DxgAdapter;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pj(v15, &Dxgk_PowerRuntimeControlRequestCB, v16, DxgAdapter, a2);
  if ( v17 && *(_BYTE *)(v17 + 3033) )
  {
    v18 = PoFxPowerControl(*(_QWORD *)(v17 + 2600), a2, a3, a4, a5, a6, a7);
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v15, v14, v16);
    *(_QWORD *)(v19 + 24) = 471LL;
    WdLogEvent5_WdError(v19);
    v18 = -1073741823;
  }
  if ( v21[0] )
    KeUnstackDetachProcess(&ApcState);
  return v18;
}
