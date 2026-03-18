/*
 * XREFs of DxgkReserveGpuVirtualAddressRangeCB @ 0x1C00F23D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C80 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0012DE4 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddressRangeCB(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  struct DXGADAPTER *DxgAdapter; // rdi
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 v12; // rax
  int v13; // eax
  _QWORD v14[2]; // [rsp+20h] [rbp-78h] BYREF
  int v15; // [rsp+30h] [rbp-68h]
  __int64 v16; // [rsp+38h] [rbp-60h]
  __int64 v17; // [rsp+40h] [rbp-58h]
  _BYTE v18[8]; // [rsp+50h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v18);
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent() + 323) & 4) != 0 )
  {
    v12 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v12 + 24) = 300LL;
    WdLogEvent5_WdError(v12);
    v10 = -1073741811;
  }
  else
  {
    DxgAdapter = (struct DXGADAPTER *)DpiGetDxgAdapter(a1);
    Global = DXGGLOBAL::GetGlobal(v6);
    if ( *((_BYTE *)Global + 1322)
      && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
           (struct DXGGLOBAL *)((char *)Global + 1316),
           DxgAdapter) )
    {
      v10 = -1073741637;
    }
    else
    {
      v8 = (_QWORD *)a2;
      v9 = *((_QWORD *)DxgAdapter + 316);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DxgAdapter + 24) + 64LL) + 40LL) + 28LL) <= 0x5003u )
      {
        v13 = *(_DWORD *)(a2 + 16);
        v8 = v14;
        v17 = 0LL;
        v16 = 0LL;
        v15 = v13;
        v14[0] = *(_QWORD *)a2;
        v14[1] = *(_QWORD *)(a2 + 8);
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(v9 + 544) + 8LL) + 824LL))(
              *(_QWORD *)(v9 + 552),
              v8);
      *(_QWORD *)(a2 + 24) = v8[3];
    }
  }
  if ( v18[0] )
    KeUnstackDetachProcess(&ApcState);
  return v10;
}
