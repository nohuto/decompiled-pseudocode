/*
 * XREFs of DxgkNeedToEnableCddPrimary @ 0x1C02037D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0001FE4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00CD4B0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

char __fastcall DxgkNeedToEnableCddPrimary(struct DXGADAPTER *this, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rsi
  __int64 v5; // rax
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  _QWORD *v10; // rax
  DXGADAPTER ***v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  ADAPTER_DISPLAY *v15; // rcx
  __int64 v16; // rax
  struct DXGADAPTER *v17; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v19[8]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v20[64]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v21[72]; // [rsp+98h] [rbp-70h] BYREF

  v2 = 0;
  v3 = (unsigned int)a2;
  if ( !this )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v5 + 24) = 7320LL;
    WdLogEvent5_WdAssertion(v5);
  }
  PairingAdapters = DxgkpGetPairingAdapters(this, (unsigned int)v3, 0LL, 0LL, &v17, &v18, 0);
  v9 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v12 = (DXGADAPTER ***)v17;
    if ( !v17 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v13 + 24) = 7350LL;
      WdLogEvent5_WdAssertion(v13);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, (struct DXGADAPTER *const)v12, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v12);
    if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v19, 0xFFFFFFFFLL, 0LL) >= 0 )
    {
      v15 = (ADAPTER_DISPLAY *)v12[319];
      if ( !v15 )
      {
        v16 = WdLogNewEntry5_WdAssertion(0LL, v14);
        *(_QWORD *)(v16 + 24) = 7364LL;
        WdLogEvent5_WdAssertion(v16);
        v15 = (ADAPTER_DISPLAY *)v12[319];
      }
      if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(v15, (unsigned int)v3, 0)
        && !ADAPTER_DISPLAY::GetVidPnSourceOwner(v12[319], v3) )
      {
        v2 = 1;
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v21);
    COREACCESS::~COREACCESS((COREACCESS *)v20);
    return v2;
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v8);
    v10[3] = this;
    v10[4] = v3;
    v10[5] = v9;
    WdLogEvent5_WdEvent(v10);
    return 0;
  }
}
