/*
 * XREFs of ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026DE58
 * Callers:
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D1D08 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026F8C4 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CE40 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00FBB48 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C02B4438 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02C8E14 (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigHelperCreateSimulateMonitor(
        struct _LUID *a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  __int64 v8; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int IsTargetInClientVidPnTopology; // edi
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  int v26; // [rsp+20h] [rbp-108h]
  int v27; // [rsp+30h] [rbp-F8h]
  unsigned __int8 v28[8]; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v31[64]; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v32[72]; // [rsp+98h] [rbp-90h] BYREF

  v8 = (unsigned int)a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v29);
  v14 = (__int64)v11;
  if ( v11 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v30, v11, 0LL);
    v18 = COREADAPTERACCESS::AcquireExclusive(&v30, (unsigned int)(v17 + 2), v17);
    IsTargetInClientVidPnTopology = v18;
    if ( v18 >= 0 )
    {
      if ( a5 )
      {
        IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology((void *const)v14, v8, a5);
        if ( IsTargetInClientVidPnTopology < 0 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
          IsTargetInClientVidPnTopology = 0;
          v25[3] = v8;
          v25[4] = v14;
          v25[5] = *(int *)(v14 + 280);
          v25[6] = *(unsigned int *)(v14 + 276);
        }
      }
      v28[0] = 0;
      if ( a4 || (int)DmmIsTargetForceable(v14, (unsigned int)v8, v28, a3) >= 0 && v28[0] )
        IsTargetInClientVidPnTopology = MonitorCreateSimulatedMonitor((DXGADAPTER *)v14, v26, a4, v27, a6);
    }
    else
    {
      if ( v18 == -1073741130 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
        v22[3] = v14;
        v22[4] = *(int *)(v14 + 280);
        v22[5] = *(unsigned int *)(v14 + 276);
      }
      IsTargetInClientVidPnTopology = 0;
    }
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v14);
    COREACCESS::~COREACCESS((COREACCESS *)v32);
    COREACCESS::~COREACCESS((COREACCESS *)v31);
    return (unsigned int)IsTargetInClientVidPnTopology;
  }
  else
  {
    v15 = WdLogNewEntry5_WdTrace(v13, v12);
    *(_QWORD *)(v15 + 24) = a1->HighPart;
    *(_QWORD *)(v15 + 32) = a1->LowPart;
    return 3223191554LL;
  }
}
