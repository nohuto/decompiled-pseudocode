/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C00B5F38
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C004F2D0 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00B6044 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C0299F90 (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromCache(DXGMONITOR *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  struct DXGADAPTER *v4; // rsi
  bool v5; // al
  unsigned int v6; // r15d
  unsigned __int8 v7; // r14
  __int64 v8; // rcx
  EDIDCACHE *v9; // rcx
  int EdidForTarget; // esi
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v22; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 108) == 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_DWORD *)this + 32) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((_QWORD *)this + 17) )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v15);
  }
  v3 = operator new(0x9FuLL, 0x4D677844u, PagedPool);
  if ( v3 )
  {
    v4 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    v5 = IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)this + 12));
    v6 = *((_DWORD *)this + 11);
    v7 = v5;
    v9 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8) + 98);
    if ( v9 )
      EdidForTarget = EDIDCACHE::GetEdidForTarget(v9, v4, v6, v7, (unsigned __int8 *const)v3 + 24, &v22);
    else
      EdidForTarget = -1073741801;
    if ( EdidForTarget < 0 )
    {
      v11 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v11 + 24) = this;
      WdLogEvent5_WdDmmEvent(v11);
LABEL_12:
      operator delete[](v3);
      return (unsigned int)EdidForTarget;
    }
    if ( (int)EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v3 + 24) < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v17);
      WdLogEvent5_WdError(v18);
      EdidForTarget = -1073741275;
      goto LABEL_12;
    }
    ConvertMonitorCapablitiesOrigin(v22, (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v3 + 1));
    *v3 = 0LL;
    *((_DWORD *)v3 + 3) = 1;
    v3[2] = 128LL;
    v19 = operator new(8uLL, 0x4D677844u, PagedPool);
    *((_QWORD *)this + 17) = v19;
    if ( !v19 )
    {
      v21 = WdLogNewEntry5_WdError(v20);
      WdLogEvent5_WdError(v21);
      EdidForTarget = -1073741801;
      goto LABEL_12;
    }
    *v19 = 0LL;
    **((_QWORD **)this + 17) = v3;
    result = 0LL;
    *((_DWORD *)this + 32) = 1;
    *((_QWORD *)this + 18) = v3;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v2);
    WdLogEvent5_WdError(v16);
    return 3221225495LL;
  }
  return result;
}
