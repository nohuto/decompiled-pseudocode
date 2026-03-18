/*
 * XREFs of ?_ParseDisplayIDForMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C02CFD94
 * Callers:
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02D01BC (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DisplayID_GetSupportedModes@@YAJPEAUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x1C0057584 (-DisplayID_GetSupportedModes@@YAJPEAUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 *     ConvertMonitorModeTimingType @ 0x1C0172404 (ConvertMonitorModeTimingType.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0172464 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ConvertVideoSignalInfo @ 0x1C01724A8 (ConvertVideoSignalInfo.c)
 *     MonitorLogBadEDID @ 0x1C02C9890 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_ParseDisplayIDForMonitorModes(DXGMONITOR *this, __int64 a2)
{
  unsigned int v2; // r13d
  struct DisplayIDObj *v3; // r14
  char v5; // r12
  unsigned __int16 *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  int SupportedModes; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int16 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // r8d
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  _DWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _DWORD *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rax
  int v48; // eax
  _QWORD *v49; // rbx
  _QWORD *v50; // rax
  __int64 v52; // rax
  __int128 v53; // [rsp+20h] [rbp-20h]
  unsigned int v54; // [rsp+80h] [rbp+40h] BYREF
  __int64 v55; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  v3 = (DXGMONITOR *)((char *)this + 168);
  v5 = 0;
  v6 = 0LL;
  if ( !*((_QWORD *)this + 21) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (_QWORD *)((char *)this + 216);
  if ( (_QWORD *)*v8 != v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = WdLogNewEntry5_WdDmmEvent(this, a2);
  *(_QWORD *)(v10 + 24) = this;
  *(_QWORD *)(v10 + 32) = *(_QWORD *)v3;
  WdLogEvent5_WdDmmEvent(v10);
  v54 = 0;
  SupportedModes = DisplayID_GetSupportedModes(v3, &v54, 0LL, 0LL);
  v14 = SupportedModes;
  v15 = SupportedModes + 0x80000000;
  if ( (int)v15 >= 0 && SupportedModes != -1073741789 )
  {
    v16 = WdLogNewEntry5_WdError(v15, v12, v13);
    *(_QWORD *)(v16 + 24) = v14;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v14;
  }
  if ( !v54 )
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v12, v13);
    WdLogEvent5_WdWarning(v17);
LABEL_36:
    *((_DWORD *)this + 64) = 0;
    if ( !v5 )
      *((_DWORD *)this + 30) = 2;
    LODWORD(v14) = 0;
    goto LABEL_39;
  }
  v18 = (unsigned __int16 *)operator new[](56LL * (v54 - 1) + 60, 0x4D677844u, PagedPool);
  v6 = v18;
  if ( !v18 )
  {
    v22 = WdLogNewEntry5_WdError(v20, v19, v21);
    WdLogEvent5_WdError(v22);
    LODWORD(v14) = -1073741801;
    return (unsigned int)v14;
  }
  LODWORD(v55) = 0;
  v23 = DisplayID_GetSupportedModes(v3, &v54, (unsigned int *)&v55, (struct _VideoModeDescriptor *)(v18 + 2));
  v14 = v23;
  if ( v23 >= 0 )
  {
    *v6 = v54;
    v28 = 28LL * (unsigned int)v55;
    v6[1] = v55;
    v29 = v6[v28 + 13];
    v30 = v6[v28 + 12];
    v31 = *((_DWORD *)this + 10) | 0x100;
    if ( v30 >= v29 )
      v31 = *((_DWORD *)this + 10) & 0xFFFFFEFF;
    v32 = v31 & 0xFFFFFDFF;
    if ( v30 >= v29 )
      v30 = v29;
    *(_QWORD *)&v53 = 0x800000008LL;
    *((_QWORD *)&v53 + 1) = 8LL;
    *((_DWORD *)this + 10) = (v30 < 0x400 ? 0x200 : 0) | v32;
    if ( !*v6 )
      goto LABEL_36;
    while ( 1 )
    {
      v33 = operator new[](0x78uLL, 0x4D677844u, PagedPool);
      v37 = v33;
      if ( !v33 )
      {
        v52 = WdLogNewEntry5_WdError(v35, v34, v36);
        WdLogEvent5_WdError(v52);
        LODWORD(v14) = -1073741801;
        goto LABEL_39;
      }
      *v33 = (*((_DWORD *)this + 53))++;
      v55 = 56LL * v2;
      v54 = ConvertVideoSignalInfo((unsigned int *)&v6[(unsigned __int64)v55 / 2 + 2], (__int64)(v33 + 2));
      if ( (v54 & 0x80000000) != 0
        || (v42 = v55,
            v37[16] = 2,
            *(_OWORD *)(v37 + 17) = v53,
            v54 = ConvertMonitorCapablitiesOrigin(*((unsigned __int8 *)v6 + v42 + 57), v37 + 21),
            (v54 & 0x80000000) != 0) )
      {
        v41 = WdLogNewEntry5_WdError(v39, v38, v40);
        *(_QWORD *)(v41 + 24) = *(_QWORD *)v3;
        *(_QWORD *)(v41 + 32) = (int)v54;
        WdLogEvent5_WdError(v41);
      }
      else
      {
        v54 = ConvertMonitorModeTimingType(LOBYTE(v6[(unsigned __int64)v55 / 2 + 29]), v37 + 28);
        if ( (v54 & 0x80000000) == 0 )
        {
          if ( (unsigned int)(v37[28] - 1) <= 2 )
            v5 = 1;
          if ( v6[1] == v2 )
          {
            if ( *((_QWORD *)this + 29) )
            {
              v47 = WdLogNewEntry5_WdAssertion(0LL, 1LL);
              WdLogEvent5_WdAssertion(v47);
            }
            *((_QWORD *)this + 29) = v37;
            v48 = 1;
          }
          else
          {
            v48 = 2;
          }
          v37[22] = v48;
          v49 = v37 + 24;
          ++*((_DWORD *)this + 52);
          v50 = (_QWORD *)*((_QWORD *)this + 28);
          if ( (_QWORD *)*v50 != v8 )
            __fastfail(3u);
          *v49 = v8;
          v49[1] = v50;
          *v50 = v49;
          *((_QWORD *)this + 28) = v49;
          goto LABEL_35;
        }
        v45 = WdLogNewEntry5_WdWarning(0LL, v43, v44);
        *(_QWORD *)(v45 + 24) = *(_QWORD *)v3;
        *(_QWORD *)(v45 + 32) = (int)v54;
        WdLogEvent5_WdWarning(v45);
        MonitorLogBadEDID(*(_QWORD *)v3, v54, v46);
      }
      operator delete(v37);
LABEL_35:
      if ( ++v2 >= *v6 )
        goto LABEL_36;
    }
  }
  v27 = WdLogNewEntry5_WdError(v25, v24, v26);
  *(_QWORD *)(v27 + 24) = v14;
  WdLogEvent5_WdError(v27);
LABEL_39:
  if ( v6 )
    operator delete[](v6);
  return (unsigned int)v14;
}
