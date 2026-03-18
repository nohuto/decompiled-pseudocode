/*
 * XREFs of DxgkQueryModeListCacheLuid @ 0x1C014B440
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C001B340 (-QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkQueryModeListCacheLuid(struct _LUID *a1, __int64 a2, struct _LUID *a3)
{
  __int64 v3; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGADAPTER *v9; // rdi
  __int64 v10; // r8
  __int64 PairingAdapters; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  struct DXGADAPTER *v27; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v29[8]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v30[64]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v31[72]; // [rsp+98h] [rbp-70h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v21 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v21 + 24) = 7442LL;
LABEL_16:
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  if ( !a3 )
  {
    v21 = WdLogNewEntry5_WdError(a1, a2, 0LL);
    *(_QWORD *)(v21 + 24) = 7449LL;
    goto LABEL_16;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, (unsigned __int64 *)&v27);
  if ( !v9 )
  {
    v21 = WdLogNewEntry5_WdError(v8, v7, v10);
    *(_QWORD *)(v21 + 24) = a1->HighPart;
    *(_QWORD *)(v21 + 32) = a1->LowPart;
    goto LABEL_16;
  }
  PairingAdapters = (int)DxgkpGetPairingAdapters(v9, (unsigned int)v3, 0LL, 0LL, &v27, &v28, 0);
  DXGADAPTER::ReleaseReferenceNoTracking(v9);
  if ( (int)PairingAdapters < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v13);
    v22[3] = 0LL;
    v22[4] = v3;
    v22[5] = PairingAdapters;
    WdLogEvent5_WdEvent(v22);
  }
  else
  {
    v14 = v27;
    if ( !v27 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v23 + 24) = 7496LL;
      WdLogEvent5_WdAssertion(v23);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v14, 0LL);
    PairingAdapters = (int)COREADAPTERACCESS::AcquireShared((__int64)v29, 0xFFFFFFFFLL, v15);
    DXGADAPTER::ReleaseReferenceNoTracking(v14);
    if ( (int)PairingAdapters < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v17, v16, v18);
      *(_QWORD *)(v24 + 24) = v14;
      *(_QWORD *)(v24 + 32) = PairingAdapters;
      WdLogEvent5_WdError(v24);
    }
    else
    {
      v19 = *((_QWORD *)v14 + 319);
      if ( !v19 )
      {
        v25 = WdLogNewEntry5_WdAssertion(0LL, v16);
        *(_QWORD *)(v25 + 24) = 7518LL;
        WdLogEvent5_WdAssertion(v25);
        v19 = *((_QWORD *)v14 + 319);
      }
      if ( (unsigned int)v3 >= *(_DWORD *)(v19 + 80) )
      {
        v26 = WdLogNewEntry5_WdError(v19, v16, v18);
        *(_QWORD *)(v26 + 24) = v3;
        *(_QWORD *)(v26 + 32) = v14;
        WdLogEvent5_WdError(v26);
        LODWORD(PairingAdapters) = -1073741811;
      }
      else
      {
        LODWORD(PairingAdapters) = ADAPTER_DISPLAY::QueryModeListCacheLuid((DXGADAPTER **)v19, v3, a3);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v31);
    COREACCESS::~COREACCESS((COREACCESS *)v30);
  }
  return (unsigned int)PairingAdapters;
}
