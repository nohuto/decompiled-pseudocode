/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C02D0680
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178698 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003E4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0021BF0 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0250690 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C02CEC7C (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromCache(DXGMONITOR *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 result; // rax
  struct DXGADAPTER *v12; // rsi
  bool v13; // al
  unsigned int v14; // r15d
  char v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  EDIDCACHE *v19; // rcx
  int EdidForTarget; // esi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v31; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 108) == 1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 32) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_QWORD *)this + 17) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  v8 = operator new[](0x9FuLL, 0x4D677844u, PagedPool);
  if ( !v8 )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
    WdLogEvent5_WdError(v10);
    return 3221225495LL;
  }
  v12 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
  v13 = IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)this + 12));
  v14 = *((_DWORD *)this + 11);
  v15 = v13;
  v19 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 95);
  if ( v19 )
    EdidForTarget = EDIDCACHE::GetEdidForTarget(v19, v12, v14, v15, (unsigned __int8 *const)v8 + 24, &v31);
  else
    EdidForTarget = -1073741801;
  if ( EdidForTarget < 0 )
  {
    v21 = WdLogNewEntry5_WdDmmEvent(v19, v18);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdDmmEvent(v21);
LABEL_18:
    operator delete[](v8);
    return (unsigned int)EdidForTarget;
  }
  if ( (int)EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v8 + 24) < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v23, v22, v24);
    WdLogEvent5_WdError(v25);
    EdidForTarget = -1073741275;
    goto LABEL_18;
  }
  ConvertMonitorCapablitiesOrigin((unsigned int)v31, (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v8 + 1));
  *v8 = 0LL;
  *((_DWORD *)v8 + 3) = 1;
  v8[2] = 128LL;
  v26 = operator new[](8uLL, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 17) = v26;
  if ( !v26 )
  {
    v30 = WdLogNewEntry5_WdError(v28, v27, v29);
    WdLogEvent5_WdError(v30);
    EdidForTarget = -1073741801;
    goto LABEL_18;
  }
  *v26 = 0LL;
  **((_QWORD **)this + 17) = v8;
  result = 0LL;
  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 18) = v8;
  return result;
}
