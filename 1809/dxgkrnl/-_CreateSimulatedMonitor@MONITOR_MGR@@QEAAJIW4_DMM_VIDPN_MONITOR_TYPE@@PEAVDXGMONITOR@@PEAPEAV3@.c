/*
 * XREFs of ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B43B8
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B69D4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0018C34 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C00B6114 (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B66B4 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00C25BC (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateSimulatedMonitor(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        DXGMONITOR **a5,
        __int64 a6)
{
  DXGMONITOR **v6; // r14
  __int64 v8; // rsi
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v14; // ebx
  PVOID v15; // rax
  __int64 v16; // rcx
  DXGMONITOR *v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-48h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v31; // [rsp+78h] [rbp+10h] BYREF

  v6 = a5;
  v8 = a2;
  if ( !a5 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( (_DWORD)v8 == -1 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( a3 == 1 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v24);
  }
  *v6 = 0LL;
  v11 = a6;
  if ( a3 == 5 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v31 = D3DKMDT_VOT_UNINITIALIZED;
    if ( (int)DmmGetVideoOutputTechnology(*(void *const *)(v12 + 16), v8, &v31, 0LL) < 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v25);
    }
    v14 = v31;
    if ( v31 == D3DKMDT_VOT_UNINITIALIZED )
    {
      v26 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v26);
    }
    if ( v14 < D3DKMDT_VOT_HD15 || v14 > D3DKMDT_VOT_COMPONENT_VIDEO && v14 != D3DKMDT_VOT_SDTVDONGLE )
    {
      if ( *(_BYTE *)(a1 + 3) )
      {
        if ( !IsInternalVideoOutput(v14)
          || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL)) >= 1200 )
        {
          MONITOR_MGR::_EnableDisableMonitor(a1, 0xFFFFFFFFLL, 0LL, 8LL, 1LL, v11);
        }
      }
    }
  }
  v15 = operator new(0x430uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v15 )
    v17 = DXGMONITOR::DXGMONITOR(v15, (struct MONITOR_MGR *)a1);
  else
    v17 = 0LL;
  if ( v17 )
  {
    LOBYTE(v30) = 0;
    v18 = DXGMONITOR::_InitializeMonitor(v17, (unsigned int)v8, 0LL, 0LL, v30, a3, a4, v11);
    v20 = v18;
    if ( v18 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v29 + 24) = v8;
      *(_QWORD *)(v29 + 32) = v20;
      WdLogEvent5_WdError(v29);
      DXGMONITOR::`scalar deleting destructor'(v17);
    }
    else
    {
      *v6 = v17;
    }
    return (unsigned int)v20;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v16);
    WdLogEvent5_WdError(v28);
    return 3221225495LL;
  }
}
