/*
 * XREFs of ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C012D254
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C012D788 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C000E2F8 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C012BBC0 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C012BC38 (MonitorIsUsingSimulatedMonitor.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C012D3A4 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C02B45A0 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPn(
        ADAPTER_DISPLAY **this,
        const struct DMMVIDPN *a2,
        void *const a3,
        unsigned int a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        char a6,
        int a7,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a8,
        unsigned __int8 *a9)
{
  __int64 v9; // r12
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v13; // r13
  char v14; // di
  char v15; // si
  int v16; // ecx
  ADAPTER_DISPLAY *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  ADAPTER_DISPLAY *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rsi
  ADAPTER_DISPLAY *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rsi
  ADAPTER_DISPLAY *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  ADAPTER_DISPLAY *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // rdi
  ADAPTER_DISPLAY *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  ADAPTER_DISPLAY *v58; // rcx
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rcx
  _QWORD *v66; // rdi
  ADAPTER_DISPLAY *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  _DXGKARG_COMMITVIDPN v70; // [rsp+20h] [rbp-20h] BYREF

  v9 = a4;
  if ( a2 == (const struct DMMVIDPN *)-96LL )
  {
    v32 = WdLogNewEntry5_WdAssertion(this, -96LL);
    WdLogEvent5_WdAssertion(v32);
  }
  v13 = a8;
  *(_QWORD *)&v70.Flags = 0LL;
  v14 = *((_BYTE *)a8 + 4) & 8;
  if ( a2 == (const struct DMMVIDPN *)-88LL )
    v70.hFunctionalVidPn = 0LL;
  else
    v70.hFunctionalVidPn = (D3DKMDT_HVIDPN)a2;
  v70.hPrimaryAllocation = a3;
  v15 = a7;
  v70.AffectedVidPnSourceId = v9;
  v16 = a7 & 1;
  LOBYTE(a7) = 0;
  v70.Flags = (DXGKARG_COMMITVIDPN_FLAGS)(*(_DWORD *)&v70.Flags & 0xFFFFFFFC | a6 & 1 | (2 * v16));
  v17 = this[1];
  if ( !v17 )
  {
    v33 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v33);
    v17 = this[1];
  }
  if ( (int)MonitorIsUsingSimulatedMonitor(*((DXGADAPTER **)v17 + 2), &a7) < 0 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( (_BYTE)a7 || v15 )
    v70.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  else
    v70.MonitorConnectivityChecks = a5;
  if ( v14 )
    goto LABEL_18;
  v20 = this[1];
  if ( !v20 )
  {
    v35 = WdLogNewEntry5_WdAssertion(0LL, v18);
    WdLogEvent5_WdAssertion(v35);
    v20 = this[1];
  }
  v21 = ADAPTER_DISPLAY::DdiCommitVidPn(v20, &v70);
  v25 = v21;
  if ( v21 != -1071774920 && v21 != -1071774976 )
  {
    if ( v21 >= 0 )
      goto LABEL_18;
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
    v38[3] = a2;
    v39 = this[1];
    if ( !v39 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v37, v36);
      WdLogEvent5_WdAssertion(v40);
      v39 = this[1];
    }
    v38[4] = *((_QWORD *)v39 + 2);
    v38[5] = v25;
    WdLogEvent5_WdError(v38);
LABEL_25:
    DmmLogCommitVidPnFailedPacket(&v70, (unsigned int)v25, 4LL);
    return (unsigned int)v25;
  }
  v43 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v23, v22);
  v43[3] = a2;
  v43[4] = v9;
  v44 = this[1];
  if ( !v44 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v42, v41);
    WdLogEvent5_WdAssertion(v45);
    v44 = this[1];
  }
  v43[5] = *((_QWORD *)v44 + 2);
  WdLogEvent5_WdDmmEvent(v43);
  if ( v70.MonitorConnectivityChecks == D3DKMDT_MCC_ENFORCE && a9 )
    *a9 = 1;
  a7 = 0;
  v47 = this[1];
  if ( !v47 )
  {
    v48 = WdLogNewEntry5_WdAssertion(0LL, v46);
    WdLogEvent5_WdAssertion(v48);
    v47 = this[1];
  }
  if ( (int)MonitorGetNumConnectedMonitor(*((DXGADAPTER **)v47 + 2), &a7) < 0 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v50, v49);
    WdLogEvent5_WdAssertion(v51);
  }
  if ( a7 != 1 || v70.MonitorConnectivityChecks != D3DKMDT_MCC_ENFORCE || a6 )
    goto LABEL_25;
  v54 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v50, v49);
  v54[3] = a2;
  v54[4] = v9;
  v55 = this[1];
  if ( !v55 )
  {
    v56 = WdLogNewEntry5_WdAssertion(v53, v52);
    WdLogEvent5_WdAssertion(v56);
    v55 = this[1];
  }
  v54[5] = *((_QWORD *)v55 + 2);
  WdLogEvent5_WdDmmEvent(v54);
  v58 = this[1];
  v70.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  if ( !v58 )
  {
    v59 = WdLogNewEntry5_WdAssertion(0LL, v57);
    WdLogEvent5_WdAssertion(v59);
    v58 = this[1];
  }
  v60 = ADAPTER_DISPLAY::DdiCommitVidPn(v58, &v70);
  v63 = v60;
  if ( v60 >= 0 )
  {
    DmmLogCommitVidPnFailedPacket(&v70, (unsigned int)v60, 3LL);
LABEL_18:
    v26 = VIDPN_MGR::CacheVidPnToBeComitted((VIDPN_MGR *)this, a2, v9, v13);
    v30 = v26;
    if ( v26 >= 0 )
      return 0LL;
    v69 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29);
    v69[5] = (int)(*(_DWORD *)v13 << 28) >> 28;
    v69[3] = a2;
    v69[4] = v9;
    v69[6] = v30;
    WdLogEvent5_WdError(v69);
    return (unsigned int)v30;
  }
  v66 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v62, v61);
  v66[3] = a2;
  v66[4] = v9;
  v67 = this[1];
  if ( !v67 )
  {
    v68 = WdLogNewEntry5_WdAssertion(v65, v64);
    WdLogEvent5_WdAssertion(v68);
    v67 = this[1];
  }
  v66[5] = *((_QWORD *)v67 + 2);
  v66[6] = v63;
  WdLogEvent5_WdDmmEvent(v66);
  DmmLogCommitVidPnFailedPacket(&v70, (unsigned int)v63, 2LL);
  return (unsigned int)v63;
}
