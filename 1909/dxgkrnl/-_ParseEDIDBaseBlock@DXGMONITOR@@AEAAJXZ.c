/*
 * XREFs of ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C0175E70
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0173E0C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0020428 (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C00209AC (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     ConvertFrequencyRange @ 0x1C01753F8 (ConvertFrequencyRange.c)
 *     ConvertMonitorModeTimingType @ 0x1C01761F4 (ConvertMonitorModeTimingType.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0176254 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ConvertVideoSignalInfo @ 0x1C0176298 (ConvertVideoSignalInfo.c)
 *     MonitorLogBadEDID @ 0x1C02C9950 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDBaseBlock(DXGMONITOR ***this, __int64 a2)
{
  unsigned __int16 *v3; // rsi
  _DWORD *v4; // r15
  DXGMONITOR **v5; // rax
  int MonitorModes; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int16 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  DXGMONITOR **v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // r12d
  unsigned __int16 v21; // cx
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _DWORD *v26; // rbx
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r13
  int v35; // r13d
  int v36; // eax
  int v37; // eax
  DXGMONITOR **v38; // rbx
  DXGMONITOR **v39; // rax
  DXGMONITOR **v40; // rax
  int SupportedMonitorFrequencyRanges; // eax
  __int16 v42; // bx
  unsigned int v43; // r12d
  char *v44; // rax
  int v45; // eax
  int v46; // ebx
  _QWORD *v47; // rax
  _QWORD *v48; // r14
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r13
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  DXGMONITOR *v59; // r14
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  DXGMONITOR **v69; // rdx
  DXGMONITOR *v70; // rax
  __int128 v71; // [rsp+30h] [rbp-20h]
  int v72; // [rsp+90h] [rbp+40h] BYREF
  int v73; // [rsp+98h] [rbp+48h]
  int v74; // [rsp+A0h] [rbp+50h] BYREF

  LOBYTE(v73) = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( !this[18] )
  {
    v55 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v55);
  }
  v56 = WdLogNewEntry5_WdDmmEvent(this, a2);
  *(_QWORD *)(v56 + 24) = this;
  *(_QWORD *)(v56 + 32) = this[18];
  WdLogEvent5_WdDmmEvent(v56);
  v59 = (DXGMONITOR *)(this + 27);
  if ( *(DXGMONITOR **)v59 != v59 )
  {
    v60 = WdLogNewEntry5_WdAssertion(v58, v57);
    WdLogEvent5_WdAssertion(v60);
  }
  v5 = this[18];
  v72 = 0;
  MonitorModes = EDID_V1_GetMonitorModes(
                   *((unsigned int *)v5 + 2),
                   *((_DWORD *)v5 + 4),
                   (unsigned __int8 *)v5 + 24,
                   (unsigned __int16 *)&v72,
                   0LL,
                   0LL);
  v9 = MonitorModes;
  v10 = MonitorModes + 0x80000000;
  if ( (int)v10 >= 0 && MonitorModes != -1073741789 )
  {
    v61 = WdLogNewEntry5_WdError(v10, v7, v8);
    *(_QWORD *)(v61 + 24) = v9;
    WdLogEvent5_WdError(v61);
    return (unsigned int)v9;
  }
  if ( v72 )
  {
    v11 = (unsigned __int16 *)operator new[](56LL * (unsigned int)(v72 - 1) + 60, 0x4D677844u, PagedPool);
    v3 = v11;
    if ( !v11 )
    {
      v63 = WdLogNewEntry5_WdError(v13, v12, v14);
      WdLogEvent5_WdError(v63);
      LODWORD(v9) = -1073741801;
      return (unsigned int)v9;
    }
    v15 = this[18];
    v74 = 0;
    v16 = EDID_V1_GetMonitorModes(
            *((unsigned int *)v15 + 2),
            *((_DWORD *)v15 + 4),
            (unsigned __int8 *)v15 + 24,
            (unsigned __int16 *)&v72,
            (struct _VideoModeDescriptor *)(v11 + 2),
            &v74);
    v9 = v16;
    if ( v16 < 0 )
      goto LABEL_47;
    v20 = 0;
    v21 = v72;
    v3[1] = v74;
    *(_QWORD *)&v71 = 0x800000008LL;
    *((_QWORD *)&v71 + 1) = 8LL;
    *v3 = v21;
    if ( v21 )
    {
      do
      {
        v22 = operator new[](0x78uLL, 0x4D677844u, PagedPool);
        v26 = v22;
        if ( !v22 )
          goto LABEL_51;
        *v22 = (*((_DWORD *)this + 53))++;
        v27 = 28LL * v20;
        v72 = ConvertVideoSignalInfo(&v3[v27 + 2], v22 + 2);
        if ( v72 < 0
          || (v26[16] = 2,
              *(_OWORD *)(v26 + 17) = v71,
              v72 = ConvertMonitorCapablitiesOrigin(HIBYTE(v3[v27 + 28]), v26 + 21),
              v72 < 0) )
        {
          v65 = WdLogNewEntry5_WdWarning(v29, v28, v30);
          *(_QWORD *)(v65 + 24) = this[18] + 3;
          v34 = v72;
        }
        else
        {
          v31 = ConvertMonitorModeTimingType(LOBYTE(v3[v27 + 29]), v26 + 28);
          v34 = v31;
          if ( v31 >= 0 )
          {
            v35 = (unsigned __int8)v73;
            v36 = v3[1];
            if ( (unsigned int)(v26[28] - 1) <= 2 )
              v35 = 1;
            v73 = v35;
            if ( v36 == v20 )
            {
              if ( this[29] )
              {
                v66 = WdLogNewEntry5_WdAssertion(0LL, 1LL);
                WdLogEvent5_WdAssertion(v66);
              }
              this[29] = (DXGMONITOR **)v26;
              v37 = 1;
            }
            else
            {
              v37 = 2;
            }
            v26[22] = v37;
            v38 = (DXGMONITOR **)(v26 + 24);
            ++*((_DWORD *)this + 52);
            v39 = this[28];
            if ( *v39 != v59 )
LABEL_28:
              __fastfail(3u);
            *v38 = v59;
            v38[1] = (DXGMONITOR *)v39;
            *v39 = (DXGMONITOR *)v38;
            this[28] = v38;
            goto LABEL_18;
          }
          v65 = WdLogNewEntry5_WdWarning(0LL, v32, v33);
          *(_QWORD *)(v65 + 24) = this[18] + 3;
        }
        *(_QWORD *)(v65 + 32) = v34;
        WdLogEvent5_WdWarning(v65);
        MonitorLogBadEDID(this[18] + 3, (unsigned int)v34);
        operator delete(v26);
LABEL_18:
        ++v20;
      }
      while ( v20 < *v3 );
    }
  }
  else
  {
    v62 = WdLogNewEntry5_WdWarning(v10, 1LL, v8);
    WdLogEvent5_WdWarning(v62);
  }
  v40 = this[18];
  LOWORD(v72) = 0;
  SupportedMonitorFrequencyRanges = EDID_V1_GetSupportedMonitorFrequencyRanges(
                                      *((_DWORD *)v40 + 2),
                                      *((_DWORD *)v40 + 4),
                                      (unsigned __int8 *)v40 + 24,
                                      (__int64)&v72,
                                      0LL);
  v9 = SupportedMonitorFrequencyRanges;
  if ( SupportedMonitorFrequencyRanges == -1073741275 )
  {
    WdLogNewEntry5_WdTrace(v18, v17);
    goto LABEL_33;
  }
  if ( ((SupportedMonitorFrequencyRanges + 0x80000000) & 0x80000000) != 0
    || SupportedMonitorFrequencyRanges == -1073741789 )
  {
    v42 = v72;
    if ( !(_WORD)v72 )
      goto LABEL_33;
    v43 = (unsigned __int16)v72;
    v44 = (char *)operator new[](52LL * (unsigned __int16)v72 + 4, 0x4D677844u, PagedPool);
    v4 = v44;
    if ( !v44 )
    {
LABEL_51:
      v67 = WdLogNewEntry5_WdError(v24, v23, v25);
      WdLogEvent5_WdError(v67);
      LODWORD(v9) = -1073741801;
      goto LABEL_35;
    }
    *(_WORD *)v44 = v42;
    v45 = EDID_V1_GetSupportedMonitorFrequencyRanges(
            *((_DWORD *)this[18] + 2),
            *((_DWORD *)this[18] + 4),
            (unsigned __int8 *)this[18] + 24,
            (__int64)v44,
            (struct _FrequencyRangeDescriptor *)(v44 + 4));
    v9 = v45;
    if ( v45 >= 0 )
    {
      v46 = 0;
      if ( v43 )
      {
        do
        {
          v47 = operator new[](0x40uLL, 0x4D677844u, PagedPool);
          v48 = v47;
          if ( !v47 )
            goto LABEL_51;
          v49 = ConvertFrequencyRange(&v4[13 * v46 + 1], (__int64)v47);
          v53 = v49;
          if ( v49 < 0 )
          {
            v68 = WdLogNewEntry5_WdWarning(v51, v50, v52);
            *(_QWORD *)(v68 + 24) = this[18] + 3;
            *(_QWORD *)(v68 + 32) = v53;
            WdLogEvent5_WdWarning(v68);
            MonitorLogBadEDID(this[18] + 3, (unsigned int)v53);
            operator delete(v48);
          }
          else
          {
            v69 = this[34];
            v70 = (DXGMONITOR *)(v48 + 6);
            if ( *v69 != (DXGMONITOR *)(this + 33) )
              goto LABEL_28;
            *(_QWORD *)v70 = this + 33;
            v48[7] = v69;
            *v69 = v70;
            this[34] = (DXGMONITOR **)v70;
            ++*((_DWORD *)this + 64);
          }
        }
        while ( ++v46 < v43 );
      }
LABEL_33:
      if ( !(_BYTE)v73 && !*((_DWORD *)this + 64) )
        *((_DWORD *)this + 30) = 2;
      LODWORD(v9) = 0;
      goto LABEL_35;
    }
  }
LABEL_47:
  v64 = WdLogNewEntry5_WdError(v18, v17, v19);
  *(_QWORD *)(v64 + 24) = v9;
  WdLogEvent5_WdError(v64);
LABEL_35:
  if ( v3 )
    operator delete[](v3);
  if ( v4 )
    operator delete[](v4);
  return (unsigned int)v9;
}
