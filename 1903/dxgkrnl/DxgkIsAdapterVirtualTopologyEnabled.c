/*
 * XREFs of DxgkIsAdapterVirtualTopologyEnabled @ 0x1C013EB78
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00F4750 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BDDC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsAdapterVirtualTopologyEnabled(struct _LUID a1, _DWORD *a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGADAPTER *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGADAPTER *const v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  LONG HighPart; // [rsp+24h] [rbp-C4h]
  unsigned __int64 v25; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v26[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v27[64]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v28[72]; // [rsp+78h] [rbp-70h] BYREF

  HighPart = a1.HighPart;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1, (__int64)a2);
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v25);
  v9 = v5;
  if ( v5 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v21 + 24) = 9149LL;
      WdLogEvent5_WdAssertion(v21);
    }
    COREACCESS::COREACCESS((COREACCESS *)v27, v9);
    COREACCESS::COREACCESS((COREACCESS *)v28, v12);
    DXGADAPTER::ReleaseReferenceNoTracking(v9);
    v13 = COREADAPTERACCESS::AcquireShared((__int64)v26, 0xFFFFFFFFLL, 0LL);
    v17 = v13;
    if ( v13 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
      v22[3] = HighPart;
      v22[4] = a1.LowPart;
      v22[5] = v17;
      WdLogEvent5_WdError(v22);
    }
    else
    {
      v18 = *((_QWORD *)v9 + 319);
      if ( v18 )
      {
        *a2 = *(unsigned __int8 *)(v18 + 234);
      }
      else
      {
        v23 = WdLogNewEntry5_WdError(v15, v14, v16);
        *(_QWORD *)(v23 + 24) = 9171LL;
        WdLogEvent5_WdError(v23);
        LODWORD(v17) = -1073741811;
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    COREACCESS::~COREACCESS((COREACCESS *)v27);
    return (unsigned int)v17;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v20 + 24) = HighPart;
    *(_QWORD *)(v20 + 32) = a1.LowPart;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
}
