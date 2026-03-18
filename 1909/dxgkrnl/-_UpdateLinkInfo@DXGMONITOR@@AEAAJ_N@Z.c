/*
 * XREFs of ?_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z @ 0x1C0178A60
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017398C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178698 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z @ 0x1C01FFB30 (-DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z.c)
 *     DpiGetIntegratedMonitorLinkInfo @ 0x1C02AF740 (DpiGetIntegratedMonitorLinkInfo.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateLinkInfo(DXGMONITOR *this, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int8 v3; // bl
  char v5; // r15
  ADAPTER_DISPLAY *v6; // r14
  __int64 Value; // rcx
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  int updated; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  DXGK_MONITORLINKINFO_USAGEHINTS v22; // eax
  char v23; // al
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _DXGKARG_UPDATEMONITORLINKINFO v26; // [rsp+20h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 4);
  *(_QWORD *)&v26.VideoPresentTargetId = 0LL;
  v3 = a2;
  *(_QWORD *)&v26.MonitorLinkInfo.Capabilities.0 = 0LL;
  v5 = 1;
  if ( !v2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
    v2 = *((_QWORD *)this + 4);
  }
  v6 = *(ADAPTER_DISPLAY **)(v2 + 8);
  if ( !v6 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
    v2 = *((_QWORD *)this + 4);
  }
  *((_DWORD *)this + 10) &= ~0x400u;
  Value = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 192LL) + 64LL);
  if ( *(_DWORD *)(*(_QWORD *)(Value + 40) + 28LL) < 0x7000u )
  {
    LODWORD(v8) = -1073741637;
    goto LABEL_7;
  }
  v26.MonitorLinkInfo.Capabilities.Value = 0;
  v26.MonitorLinkInfo.DitheringSupport.Value = 0;
  v26.VideoPresentTargetId = *((_DWORD *)this + 11);
  v26.MonitorLinkInfo.UsageHints.Value = v3;
  LODWORD(v8) = DpiGetIntegratedMonitorLinkInfo(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 192LL),
                  v26.VideoPresentTargetId,
                  &v26.MonitorLinkInfo);
  if ( (int)v8 < 0 )
  {
    v5 = 0;
    updated = ADAPTER_DISPLAY::DdiUpdateMonitorLinkInfo(v6, &v26);
    v8 = updated;
    if ( updated < 0 )
    {
      if ( updated != -1073741637 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(Value, a2, v2);
        v13[3] = this;
        v13[4] = *((unsigned int *)this + 11);
        v13[5] = *((_QWORD *)v6 + 2);
        v13[6] = v8;
        WdLogEvent5_WdError(v13);
      }
      goto LABEL_43;
    }
  }
  v14 = *((_QWORD *)v6 + 2);
  v15 = (*(_DWORD *)(v14 + 308) & 0x200) != 0 ? 1663 : 127;
  if ( *(int *)(v14 + 2452) >= 2600 )
  {
    if ( *(_BYTE *)&v26.MonitorLinkInfo.Capabilities.0 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v14, a2, v2);
      *(_QWORD *)(v16 + 24) = *((unsigned int *)this + 11);
      *(_QWORD *)(v16 + 32) = *((_QWORD *)v6 + 2);
      WdLogEvent5_WdError(v16);
    }
    v15 |= 0x800u;
  }
  Value = v26.MonitorLinkInfo.Capabilities.Value;
  LODWORD(Value) = v26.MonitorLinkInfo.Capabilities.Value & 0xFFFFFF7F;
  v26.MonitorLinkInfo.Capabilities.Value &= ~0x80u;
  v2 = *((_QWORD *)v6 + 2);
  a2 = *(unsigned int *)(v2 + 2452);
  if ( (int)a2 < 2400 )
  {
    if ( (~v15 & (unsigned int)Value) != 0 )
    {
      v20 = WdLogNewEntry5_WdError(Value, a2, v2);
      *(_QWORD *)(v20 + 24) = *((unsigned int *)this + 11);
      *(_QWORD *)(v20 + 32) = *((_QWORD *)v6 + 2);
      WdLogEvent5_WdError(v20);
      Value = v15 & v26.MonitorLinkInfo.Capabilities.Value;
      v26.MonitorLinkInfo.Capabilities.Value &= v15;
    }
    v21 = *((_QWORD *)v6 + 2);
    if ( *(_DWORD *)(v21 + 2452) == 2300 && *(_DWORD *)(v21 + 284) == 1297040209 && v5 && byte_1C00A2758 )
    {
      LODWORD(Value) = Value | 0x100;
      v26.MonitorLinkInfo.Capabilities.Value = Value;
    }
    goto LABEL_39;
  }
  v17 = 1792;
  if ( (int)a2 < 2500 )
    v17 = 768;
  if ( (~(v15 | v17) & (unsigned int)Value) == 0 && ((int)a2 > 2400 || v5 || (Value & 0x100) == 0) )
  {
    if ( (Value & 0x200) != 0 || (Value & 0x400) != 0 )
    {
      v19 = *(_DWORD *)(v2 + 308);
      if ( (v19 & 0x200) == 0 && (v19 & 8) == 0 )
      {
        LODWORD(v8) = -1073741823;
        v18 = (_QWORD *)WdLogNewEntry5_WdError(Value, a2, v2);
        v18[3] = this;
        v18[4] = *((unsigned int *)this + 11);
        v18[5] = *((_QWORD *)v6 + 2);
        goto LABEL_26;
      }
    }
LABEL_39:
    v22.0 = (struct _DXGK_MONITORLINKINFO_USAGEHINTS::$93BFB232C2354556C10F40D8A24AA81F)v26.MonitorLinkInfo.UsageHints;
    *((_DWORD *)this + 10) |= 0x400u;
    *((DXGK_MONITORLINKINFO_USAGEHINTS *)this + 117) = v22;
    *((_DWORD *)this + 118) = Value;
    if ( *(int *)(*((_QWORD *)v6 + 2) + 2184LL) >= 9216 )
    {
      v23 = (char)v26.MonitorLinkInfo.DitheringSupport.0;
      *((_DWORD *)this + 119) = v26.MonitorLinkInfo.DitheringSupport.Value;
      if ( (v23 & 3) == 0 )
        goto LABEL_43;
      v24 = (_QWORD *)WdLogNewEntry5_WdError(Value, a2, v2);
      v24[3] = *((unsigned int *)this + 119);
      v24[4] = this;
      v24[5] = *((unsigned int *)this + 11);
      v24[6] = *((_QWORD *)v6 + 2);
      WdLogEvent5_WdError(v24);
    }
    *((_DWORD *)this + 119) = 0;
LABEL_43:
    if ( (int)v8 >= 0 )
      return (unsigned int)v8;
    goto LABEL_7;
  }
  LODWORD(v8) = -1073741823;
  v18 = (_QWORD *)WdLogNewEntry5_WdError(Value, a2, v2);
  v18[3] = *((unsigned int *)this + 11);
  v18[4] = *((_QWORD *)v6 + 2);
  v18[5] = -1073741823LL;
LABEL_26:
  WdLogEvent5_WdError(v18);
LABEL_7:
  *(_QWORD *)((char *)this + 468) = 0LL;
  *((_DWORD *)this + 119) = 0;
  if ( *(int *)(*((_QWORD *)v6 + 2) + 2452LL) >= 2400 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(Value, a2, v2);
    v25[3] = *((_QWORD *)v6 + 2);
    v25[4] = *((unsigned int *)this + 11);
    v25[5] = (int)v8;
    WdLogEvent5_WdError(v25);
  }
  else
  {
    LODWORD(v8) = 0;
  }
  return (unsigned int)v8;
}
