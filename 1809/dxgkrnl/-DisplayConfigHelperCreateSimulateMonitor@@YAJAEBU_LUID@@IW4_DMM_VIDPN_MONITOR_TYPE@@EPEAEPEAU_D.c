/*
 * XREFs of ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B4100
 * Callers:
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B3F34 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023B0F4 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C00B659C (MonitorCreateSimulatedMonitor.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C00BB48C (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00E23D0 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DisplayConfigHelperCreateSimulateMonitor(
        struct _LUID *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  __int64 v7; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGADAPTER *v16; // rbx
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int IsTargetInClientVidPnTopology; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  int v32; // [rsp+20h] [rbp-88h]
  int v33; // [rsp+30h] [rbp-78h]
  _BYTE v34[8]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-60h] BYREF
  __int64 v36; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v37[32]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v38[40]; // [rsp+78h] [rbp-30h] BYREF

  v7 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v35);
  v16 = v11;
  if ( v11 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v36, v11, 0LL);
    v18 = COREADAPTERACCESS::AcquireExclusive(&v36, (unsigned int)(v17 + 2));
    IsTargetInClientVidPnTopology = v18;
    if ( v18 < 0 )
    {
      if ( v18 == -1073741130 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
        v30[3] = v16;
        v30[4] = *((int *)v16 + 70);
        v30[5] = *((unsigned int *)v16 + 69);
      }
      IsTargetInClientVidPnTopology = 0;
    }
    else
    {
      if ( a5 )
      {
        IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v16, v7, a5);
        if ( IsTargetInClientVidPnTopology < 0 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
          IsTargetInClientVidPnTopology = 0;
          v31[3] = v7;
          v31[4] = v16;
          v31[5] = *((int *)v16 + 70);
          v31[6] = *((unsigned int *)v16 + 69);
        }
      }
      v34[0] = 0;
      if ( a4 || (int)DmmIsTargetForcable(v16, (unsigned int)v7, v34, a3) >= 0 && v34[0] )
        IsTargetInClientVidPnTopology = MonitorCreateSimulatedMonitor(v16, v32, a4, v33, a6);
    }
    DXGADAPTER::ReleaseReference(v16);
    COREACCESS::~COREACCESS((COREACCESS *)v38);
    COREACCESS::~COREACCESS((COREACCESS *)v37);
    return (unsigned int)IsTargetInClientVidPnTopology;
  }
  else
  {
    v29 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    *(_QWORD *)(v29 + 24) = a1->HighPart;
    *(_QWORD *)(v29 + 32) = a1->LowPart;
    return 3223191554LL;
  }
}
