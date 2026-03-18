/*
 * XREFs of ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C029C388
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C001BB9C (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C004FF08 (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 *     MonitorLogBadEDID @ 0x1C0290DF8 (MonitorLogBadEDID.c)
 *     ConvertFrequencyRange @ 0x1C0299EBC (ConvertFrequencyRange.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C0299F90 (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 *     ConvertMonitorModeTimingType @ 0x1C029A084 (ConvertMonitorModeTimingType.c)
 *     ConvertVideoSignalInfo @ 0x1C029A10C (ConvertVideoSignalInfo.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDBaseBlock(DXGMONITOR ***this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v5; // rsi
  _DWORD *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  DXGMONITOR *v10; // r14
  __int64 v11; // rax
  DXGMONITOR **v12; // rax
  int MonitorModes; // eax
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int16 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  DXGMONITOR **v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // r12d
  unsigned __int16 v27; // cx
  _DWORD *v28; // rax
  __int64 v29; // rcx
  _DWORD *v30; // rbx
  __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r13
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // r13d
  int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  DXGMONITOR **v44; // rbx
  DXGMONITOR **v45; // rax
  DXGMONITOR **v46; // rax
  int SupportedMonitorFrequencyRanges; // eax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int16 v52; // bx
  unsigned int v53; // r12d
  char *v54; // rax
  int v55; // eax
  int v56; // ebx
  _QWORD *v57; // rax
  _QWORD *v58; // r14
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r13
  __int64 v64; // rax
  DXGMONITOR **v65; // rdx
  DXGMONITOR *v66; // rax
  __int128 v68; // [rsp+30h] [rbp-20h]
  int v69; // [rsp+90h] [rbp+40h] BYREF
  int v70; // [rsp+98h] [rbp+48h]
  int v71; // [rsp+A0h] [rbp+50h] BYREF

  LOBYTE(v70) = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( !this[18] )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = this[18];
  WdLogEvent5_WdDmmEvent(v8);
  v10 = (DXGMONITOR *)(this + 27);
  if ( *(DXGMONITOR **)v10 != v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = this[18];
  v69 = 0;
  MonitorModes = EDID_V1_GetMonitorModes(
                   *((unsigned int *)v12 + 2),
                   *((_DWORD *)v12 + 4),
                   (unsigned __int8 *)v12 + 24,
                   (unsigned __int16 *)&v69,
                   0LL,
                   0LL);
  v15 = MonitorModes;
  v16 = MonitorModes + 0x80000000;
  if ( (int)v16 >= 0 && MonitorModes != -1073741789 )
  {
    v17 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v17 + 24) = v15;
    WdLogEvent5_WdError(v17);
    return (unsigned int)v15;
  }
  if ( !v69 )
  {
    v18 = WdLogNewEntry5_WdWarning(v16, 1LL, v14);
    WdLogEvent5_WdWarning(v18);
    goto LABEL_32;
  }
  v19 = (unsigned __int16 *)operator new(56LL * (unsigned int)(v69 - 1) + 60, 0x4D677844u, PagedPool);
  v5 = v19;
  if ( !v19 )
  {
    v21 = WdLogNewEntry5_WdError(v20);
    WdLogEvent5_WdError(v21);
    LODWORD(v15) = -1073741801;
    return (unsigned int)v15;
  }
  v22 = this[18];
  v71 = 0;
  v23 = EDID_V1_GetMonitorModes(
          *((unsigned int *)v22 + 2),
          *((_DWORD *)v22 + 4),
          (unsigned __int8 *)v22 + 24,
          (unsigned __int16 *)&v69,
          (struct _VideoModeDescriptor *)(v19 + 2),
          &v71);
  v15 = v23;
  if ( v23 < 0 )
    goto LABEL_13;
  v26 = 0;
  v27 = v69;
  v5[1] = v71;
  *(_QWORD *)&v68 = 0x800000008LL;
  *((_QWORD *)&v68 + 1) = 8LL;
  *v5 = v27;
  if ( v27 )
  {
    do
    {
      v28 = operator new(0x78uLL, 0x4D677844u, PagedPool);
      v30 = v28;
      if ( !v28 )
        goto LABEL_34;
      *v28 = (*((_DWORD *)this + 53))++;
      v31 = 28LL * v26;
      v69 = ConvertVideoSignalInfo((unsigned int *)&v5[v31 + 2], (__int64)(v28 + 2));
      if ( v69 < 0
        || (v30[16] = 2,
            *(_OWORD *)(v30 + 17) = v68,
            v69 = ConvertMonitorCapablitiesOrigin(
                    HIBYTE(v5[v31 + 28]),
                    (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v30 + 21)),
            v69 < 0) )
      {
        v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
        *(_QWORD *)(v35 + 24) = this[18] + 3;
        v36 = v69;
      }
      else
      {
        v37 = ConvertMonitorModeTimingType(LOBYTE(v5[v31 + 29]), v30 + 28);
        v36 = v37;
        if ( v37 >= 0 )
        {
          v40 = (unsigned __int8)v70;
          v41 = v5[1];
          if ( (unsigned int)(v30[28] - 1) <= 2 )
            v40 = 1;
          v70 = v40;
          if ( v41 == v26 )
          {
            if ( this[29] )
            {
              v42 = WdLogNewEntry5_WdAssertion(0LL);
              WdLogEvent5_WdAssertion(v42);
            }
            this[29] = (DXGMONITOR **)v30;
            v43 = 1;
          }
          else
          {
            v43 = 2;
          }
          v30[22] = v43;
          v44 = (DXGMONITOR **)(v30 + 24);
          ++*((_DWORD *)this + 52);
          v45 = this[28];
          if ( *v45 != v10 )
LABEL_56:
            __fastfail(3u);
          *v44 = v10;
          v44[1] = (DXGMONITOR *)v45;
          *v45 = (DXGMONITOR *)v44;
          this[28] = v44;
          goto LABEL_31;
        }
        v35 = WdLogNewEntry5_WdWarning(0LL, v38, v39);
        *(_QWORD *)(v35 + 24) = this[18] + 3;
      }
      *(_QWORD *)(v35 + 32) = v36;
      WdLogEvent5_WdWarning(v35);
      MonitorLogBadEDID((__int64)(this[18] + 3), v36);
      operator delete(v30);
LABEL_31:
      ++v26;
    }
    while ( v26 < *v5 );
  }
LABEL_32:
  v46 = this[18];
  LOWORD(v69) = 0;
  SupportedMonitorFrequencyRanges = EDID_V1_GetSupportedMonitorFrequencyRanges(
                                      *((_DWORD *)v46 + 2),
                                      *((_DWORD *)v46 + 4),
                                      (unsigned __int8 *)v46 + 24,
                                      (__int64)&v69,
                                      0LL);
  v15 = SupportedMonitorFrequencyRanges;
  if ( SupportedMonitorFrequencyRanges == -1073741275 )
  {
    WdLogNewEntry5_WdTrace(v24, v48, v49, v50);
    goto LABEL_47;
  }
  if ( ((SupportedMonitorFrequencyRanges + 0x80000000) & 0x80000000) != 0
    || SupportedMonitorFrequencyRanges == -1073741789 )
  {
    v52 = v69;
    if ( !(_WORD)v69 )
      goto LABEL_47;
    v53 = (unsigned __int16)v69;
    v54 = (char *)operator new(52LL * (unsigned __int16)v69 + 4, 0x4D677844u, PagedPool);
    v6 = v54;
    if ( !v54 )
    {
LABEL_34:
      v51 = WdLogNewEntry5_WdError(v29);
      WdLogEvent5_WdError(v51);
      LODWORD(v15) = -1073741801;
      goto LABEL_51;
    }
    *(_WORD *)v54 = v52;
    v55 = EDID_V1_GetSupportedMonitorFrequencyRanges(
            *((_DWORD *)this[18] + 2),
            *((_DWORD *)this[18] + 4),
            (unsigned __int8 *)this[18] + 24,
            (__int64)v54,
            (struct _FrequencyRangeDescriptor *)(v54 + 4));
    v15 = v55;
    if ( v55 >= 0 )
    {
      v56 = 0;
      if ( v53 )
      {
        do
        {
          v57 = operator new(0x40uLL, 0x4D677844u, PagedPool);
          v58 = v57;
          if ( !v57 )
            goto LABEL_34;
          v59 = ConvertFrequencyRange(&v6[13 * v56 + 1], (__int64)v57);
          v63 = v59;
          if ( v59 >= 0 )
          {
            v65 = this[34];
            v66 = (DXGMONITOR *)(v58 + 6);
            if ( *v65 != (DXGMONITOR *)(this + 33) )
              goto LABEL_56;
            *(_QWORD *)v66 = this + 33;
            v58[7] = v65;
            *v65 = v66;
            this[34] = (DXGMONITOR **)v66;
            ++*((_DWORD *)this + 64);
          }
          else
          {
            v64 = WdLogNewEntry5_WdWarning(v61, v60, v62);
            *(_QWORD *)(v64 + 24) = this[18] + 3;
            *(_QWORD *)(v64 + 32) = v63;
            WdLogEvent5_WdWarning(v64);
            MonitorLogBadEDID((__int64)(this[18] + 3), v63);
            operator delete(v58);
          }
        }
        while ( ++v56 < v53 );
      }
LABEL_47:
      if ( !(_BYTE)v70 && !*((_DWORD *)this + 64) )
        *((_DWORD *)this + 30) = 2;
      LODWORD(v15) = 0;
      goto LABEL_51;
    }
  }
LABEL_13:
  v25 = WdLogNewEntry5_WdError(v24);
  *(_QWORD *)(v25 + 24) = v15;
  WdLogEvent5_WdError(v25);
LABEL_51:
  if ( v5 )
    operator delete[](v5);
  if ( v6 )
    operator delete[](v6);
  return (unsigned int)v15;
}
