/*
 * XREFs of DxgkReserveGpuVirtualAddressRangeCB @ 0x1C01374C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000C7F8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C0014370 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00143BC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddressRangeCB(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGADAPTER *DxgAdapter; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rbp
  unsigned int v14; // ebx
  _QWORD *v15; // rsi
  unsigned int v16; // ebx
  __int64 v18; // rax
  int v19; // eax
  _QWORD v20[6]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v21[8]; // [rsp+50h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-50h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v21);
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent(v5, v4) + 299) & 4) != 0 )
  {
    v18 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v18 + 24) = 300LL;
    WdLogEvent5_WdError(v18);
    v16 = -1073741811;
  }
  else
  {
    DxgAdapter = (struct DXGADAPTER *)DpiGetDxgAdapter(a1, v6, v8);
    Global = DXGGLOBAL::GetGlobal(v11, v10);
    if ( *((_BYTE *)Global + 1290)
      && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
           (struct DXGGLOBAL *)((char *)Global + 1284),
           DxgAdapter) )
    {
      v16 = -1073741637;
    }
    else
    {
      v13 = *((_QWORD *)DxgAdapter + 320);
      v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DxgAdapter + 24) + 64LL) + 40LL) + 28LL);
      memset(v20, 0, sizeof(v20));
      v15 = (_QWORD *)a2;
      if ( v14 <= 0x5003 )
      {
        v19 = *(_DWORD *)(a2 + 16);
        v15 = v20;
        v20[4] = 0LL;
        v20[3] = 0LL;
        LODWORD(v20[2]) = v19;
        v20[0] = *(_QWORD *)a2;
        v20[1] = *(_QWORD *)(a2 + 8);
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(v13 + 544) + 8LL) + 824LL))(
              *(_QWORD *)(v13 + 552),
              v15);
      *(_QWORD *)(a2 + 24) = v15[3];
    }
  }
  if ( v21[0] )
    KeUnstackDetachProcess(&ApcState);
  return v16;
}
