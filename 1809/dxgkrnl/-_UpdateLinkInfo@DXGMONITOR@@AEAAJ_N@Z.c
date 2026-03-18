/*
 * XREFs of ?_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z @ 0x1C0299B04
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     DxgkSupportMultipleIntegratedDisplays @ 0x1C004A09C (DxgkSupportMultipleIntegratedDisplays.c)
 *     ?DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z @ 0x1C01D12C8 (-DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z.c)
 *     DpiGetIntegratedMonitorLinkInfo @ 0x1C0274120 (DpiGetIntegratedMonitorLinkInfo.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateLinkInfo(DXGMONITOR *this, unsigned __int8 a2)
{
  __int64 v2; // r8
  char v5; // r15
  __int64 v6; // rax
  DXGADAPTER **v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  const GUID *v10; // r8
  int updated; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  DXGADAPTER *v14; // rcx
  int v15; // r14d
  DXGADAPTER *v16; // rcx
  DXGADAPTER *v17; // r9
  int DriverVersion; // eax
  DXGADAPTER *v19; // r9
  int v20; // ecx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  DXGK_MONITORLINKINFO_CAPABILITIES v23; // r8d
  int v24; // r10d
  char v25; // r11
  __int64 v26; // rax
  __int64 v27; // r9
  DXGK_MONITORLINKINFO_USAGEHINTS v28; // eax
  char v29; // al
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _DXGKARG_UPDATEMONITORLINKINFO v34; // [rsp+20h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 4);
  v5 = 1;
  if ( !v2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
    v2 = *((_QWORD *)this + 4);
  }
  v7 = *(DXGADAPTER ***)(v2 + 8);
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
    v2 = *((_QWORD *)this + 4);
  }
  *((_DWORD *)this + 10) &= ~0x400u;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 192LL) + 64LL) + 40LL)
                 + 28LL) < 0x7000u )
  {
    LODWORD(v9) = -1073741637;
    goto LABEL_38;
  }
  v34.MonitorLinkInfo.Capabilities.Value = 0;
  v34.MonitorLinkInfo.DitheringSupport.Value = 0;
  v34.VideoPresentTargetId = *((_DWORD *)this + 11);
  v34.MonitorLinkInfo.UsageHints.Value = a2;
  LODWORD(v9) = DpiGetIntegratedMonitorLinkInfo(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 192LL),
                  v34.VideoPresentTargetId);
  if ( (int)v9 < 0 )
  {
    v5 = 0;
    updated = ADAPTER_DISPLAY::DdiUpdateMonitorLinkInfo((ADAPTER_DISPLAY *)v7, &v34, v10);
    v9 = updated;
    if ( updated < 0 )
    {
      if ( updated != -1073741637 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v13[3] = this;
        v13[4] = *((unsigned int *)this + 11);
        v13[5] = v7[2];
        v13[6] = v9;
        WdLogEvent5_WdError(v13);
      }
      goto LABEL_37;
    }
  }
  v14 = v7[2];
  v15 = (*((_DWORD *)v14 + 77) & 0x200) != 0 ? 1663 : 127;
  if ( (int)DXGADAPTER::GetDriverVersion(v14) < 2400 )
  {
    if ( (~v15 & v34.MonitorLinkInfo.Capabilities.Value) != 0 )
    {
      v26 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v26 + 24) = *((unsigned int *)this + 11);
      *(_QWORD *)(v26 + 32) = v7[2];
      WdLogEvent5_WdError(v26);
      v34.MonitorLinkInfo.Capabilities.Value &= v15;
      v17 = v7[2];
    }
    if ( (unsigned int)DXGADAPTER::GetDriverVersion(v17) == 2300
      && *(_DWORD *)(v27 + 284) == 1297040209
      && v5
      && DxgkSupportMultipleIntegratedDisplays() )
    {
      v23.Value |= 0x180u;
      v34.MonitorLinkInfo.Capabilities = v23;
    }
    goto LABEL_33;
  }
  DriverVersion = DXGADAPTER::GetDriverVersion(v16);
  v20 = 1920;
  if ( DriverVersion < 2500 )
    v20 = 896;
  v21 = ~(v15 | (unsigned int)v20);
  if ( ((unsigned int)v21 & v34.MonitorLinkInfo.Capabilities.Value) == 0
    && ((int)DXGADAPTER::GetDriverVersion(v19) > 2400 || v5 || *(_BYTE *)&v23.0 >= 0 && (*(_WORD *)&v23.0 & 0x100) == 0) )
  {
    if ( ((*(_WORD *)&v23.0 & 0x200) != 0 || (*(_WORD *)&v23.0 & 0x400) != 0) && !v24 && (v25 & 8) == 0 )
    {
      LODWORD(v9) = -1073741823;
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v22[3] = this;
      v22[4] = *((unsigned int *)this + 11);
      v22[5] = v7[2];
      goto LABEL_16;
    }
LABEL_33:
    v28.0 = (struct _DXGK_MONITORLINKINFO_USAGEHINTS::$93BFB232C2354556C10F40D8A24AA81F)v34.MonitorLinkInfo.UsageHints;
    *((_DWORD *)this + 10) |= 0x400u;
    *((DXGK_MONITORLINKINFO_USAGEHINTS *)this + 117) = v28;
    *((DXGK_MONITORLINKINFO_CAPABILITIES *)this + 118) = v23;
    if ( *((int *)v7[2] + 540) >= 9216 )
    {
      v29 = (char)v34.MonitorLinkInfo.DitheringSupport.0;
      *((_DWORD *)this + 119) = v34.MonitorLinkInfo.DitheringSupport.Value;
      if ( (v29 & 3) == 0 )
        goto LABEL_37;
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v30[3] = *((unsigned int *)this + 119);
      v30[4] = this;
      v30[5] = *((unsigned int *)this + 11);
      v30[6] = v7[2];
      WdLogEvent5_WdError(v30);
    }
    *((_DWORD *)this + 119) = 0;
LABEL_37:
    if ( (int)v9 >= 0 )
      return (unsigned int)v9;
    goto LABEL_38;
  }
  LODWORD(v9) = -1073741823;
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v21);
  v22[3] = *((unsigned int *)this + 11);
  v22[4] = v7[2];
  v22[5] = -1073741823LL;
LABEL_16:
  WdLogEvent5_WdError(v22);
LABEL_38:
  *(_QWORD *)((char *)this + 468) = 0LL;
  *((_DWORD *)this + 119) = 0;
  if ( (int)DXGADAPTER::GetDriverVersion(v7[2]) >= 2400 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v31);
    v32[3] = v7[2];
    v32[4] = *((unsigned int *)this + 11);
    v32[5] = (int)v9;
    WdLogEvent5_WdError(v32);
  }
  else
  {
    LODWORD(v9) = 0;
  }
  return (unsigned int)v9;
}
