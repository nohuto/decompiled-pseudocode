/*
 * XREFs of ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7908
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7F50 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003E4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0056044 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C012F480 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0145494 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178698 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C01798E4 (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateSimulatedMonitor(
        __int64 a1,
        __int64 a2,
        int a3,
        struct DXGMONITOR *a4,
        DXGMONITOR **a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  DXGMONITOR **v6; // r14
  __int64 v8; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v19; // ebx
  __int64 v20; // rax
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  DXGMONITOR *v26; // rbx
  __int64 v27; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdi
  __int64 v34; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v35; // [rsp+78h] [rbp+10h] BYREF

  v6 = a5;
  v8 = (unsigned int)a2;
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (_DWORD)v8 == -1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( a3 == 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v13);
  }
  *v6 = 0LL;
  v14 = a6;
  if ( a3 == 5 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v35 = D3DKMDT_VOT_UNINITIALIZED;
    if ( (int)DmmGetVideoOutputTechnology(*(DXGADAPTER **)(v15 + 16), (unsigned int)v8, &v35, 0LL) < 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v18);
    }
    v19 = v35;
    if ( v35 == D3DKMDT_VOT_UNINITIALIZED )
    {
      v20 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v20);
    }
    if ( v19 < D3DKMDT_VOT_HD15 || v19 > D3DKMDT_VOT_COMPONENT_VIDEO && v19 != D3DKMDT_VOT_SDTVDONGLE )
    {
      if ( *(_BYTE *)(a1 + 3) )
      {
        if ( !IsInternalVideoOutput(v19) || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 2452LL) >= 1200 )
          MONITOR_MGR::_EnableDisableMonitor(a1, 0xFFFFFFFFLL, 0, 8, 1uLL);
      }
    }
  }
  v22 = (char *)operator new[](0x500uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v22 )
    v26 = DXGMONITOR::DXGMONITOR(v22, (struct MONITOR_MGR *)a1);
  else
    v26 = 0LL;
  if ( v26 )
  {
    v29 = DXGMONITOR::_InitializeMonitor((__int64)v26, (unsigned int)v8, 0LL, 0, 0, a3, a4, v14);
    v33 = v29;
    if ( v29 >= 0 )
    {
      *v6 = v26;
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v31, v30, v32);
      *(_QWORD *)(v34 + 24) = v8;
      *(_QWORD *)(v34 + 32) = v33;
      WdLogEvent5_WdError(v34);
      DXGMONITOR::`scalar deleting destructor'(v26);
    }
    return (unsigned int)v33;
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v24, v23, v25);
    WdLogEvent5_WdError(v27);
    return 3221225495LL;
  }
}
