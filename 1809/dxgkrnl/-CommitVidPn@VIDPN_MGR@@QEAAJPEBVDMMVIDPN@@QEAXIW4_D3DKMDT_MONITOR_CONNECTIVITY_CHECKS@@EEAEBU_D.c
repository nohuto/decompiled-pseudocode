/*
 * XREFs of ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00B91E4
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B883C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C00022FC (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C00B932C (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C00BAF08 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C00BAF80 (MonitorIsUsingSimulatedMonitor.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C027C1E8 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPn(
        ADAPTER_DISPLAY **this,
        const struct DMMVIDPN *a2,
        void *const a3,
        unsigned int a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        char a6,
        unsigned __int8 a7,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a8,
        unsigned __int8 *a9)
{
  __int64 v9; // r12
  char v13; // di
  ADAPTER_DISPLAY *v14; // rcx
  __int64 v15; // rcx
  ADAPTER_DISPLAY *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rsi
  ADAPTER_DISPLAY *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rsi
  ADAPTER_DISPLAY *v37; // rax
  __int64 v38; // rax
  ADAPTER_DISPLAY *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // rax
  _DXGKARG_COMMITVIDPN v44; // [rsp+20h] [rbp-20h] BYREF

  v9 = a4;
  if ( a2 == (const struct DMMVIDPN *)-96LL )
  {
    v27 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v27);
  }
  v13 = *((_BYTE *)a8 + 4) & 8;
  memset(&v44, 0, sizeof(v44));
  if ( a2 == (const struct DMMVIDPN *)-88LL )
    v44.hFunctionalVidPn = 0LL;
  else
    v44.hFunctionalVidPn = (D3DKMDT_HVIDPN)a2;
  v44.hPrimaryAllocation = a3;
  v44.AffectedVidPnSourceId = v9;
  v44.Flags = (DXGKARG_COMMITVIDPN_FLAGS)(*(_DWORD *)&v44.Flags & 0xFFFFFFFC | a6 & 1 | (2 * (a7 & 1)));
  v14 = this[1];
  if ( !v14 )
  {
    v28 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v28);
    v14 = this[1];
  }
  if ( (int)MonitorIsUsingSimulatedMonitor(*((DXGADAPTER **)v14 + 2)) < 0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( a7 )
    v44.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  else
    v44.MonitorConnectivityChecks = a5;
  if ( v13 )
    goto LABEL_17;
  v16 = this[1];
  if ( !v16 )
  {
    v30 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v30);
    v16 = this[1];
  }
  v17 = ADAPTER_DISPLAY::DdiCommitVidPn(v16, &v44);
  v22 = v17;
  if ( v17 == -1071774920 || v17 == -1071774976 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19, v18, v20, v21);
    v36[3] = a2;
    v36[4] = v9;
    v37 = this[1];
    if ( !v37 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v35);
      WdLogEvent5_WdAssertion(v38);
      v37 = this[1];
    }
    v36[5] = *((_QWORD *)v37 + 2);
    WdLogEvent5_WdDmmEvent(v36);
    if ( v44.MonitorConnectivityChecks == D3DKMDT_MCC_ENFORCE && a9 )
      *a9 = 1;
    v39 = this[1];
    if ( !v39 )
    {
      v40 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v40);
      v39 = this[1];
    }
    if ( (int)MonitorGetNumConnectedMonitor(*((DXGADAPTER **)v39 + 2)) < 0 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v41);
      WdLogEvent5_WdAssertion(v42);
    }
    goto LABEL_25;
  }
  if ( v17 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v32[3] = a2;
    v33 = this[1];
    if ( !v33 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v31);
      WdLogEvent5_WdAssertion(v34);
      v33 = this[1];
    }
    v32[4] = *((_QWORD *)v33 + 2);
    v32[5] = v22;
    WdLogEvent5_WdError(v32);
LABEL_25:
    DmmLogCommitVidPnFailedPacket(&v44, (unsigned int)v22, 4LL);
    return (unsigned int)v22;
  }
LABEL_17:
  v23 = VIDPN_MGR::CacheVidPnToBeComitted((VIDPN_MGR *)this, a2, v9, a8);
  v25 = v23;
  if ( v23 >= 0 )
    return 0LL;
  v43 = (_QWORD *)WdLogNewEntry5_WdError(v24);
  v43[5] = (int)(*(_DWORD *)a8 << 28) >> 28;
  v43[3] = a2;
  v43[4] = v9;
  v43[6] = v25;
  WdLogEvent5_WdError(v43);
  return (unsigned int)v25;
}
