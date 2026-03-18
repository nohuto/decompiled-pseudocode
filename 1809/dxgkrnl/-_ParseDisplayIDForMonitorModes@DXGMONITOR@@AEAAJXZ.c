/*
 * XREFs of ?_ParseDisplayIDForMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C029BF60
 * Callers:
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029CE54 (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?DisplayID_GetSupportedModes@@YAJPEAUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x1C0050C34 (-DisplayID_GetSupportedModes@@YAJPEAUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 *     MonitorLogBadEDID @ 0x1C0290DF8 (MonitorLogBadEDID.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C0299F90 (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 *     ConvertMonitorModeTimingType @ 0x1C029A084 (ConvertMonitorModeTimingType.c)
 *     ConvertVideoSignalInfo @ 0x1C029A10C (ConvertVideoSignalInfo.c)
 */

__int64 __fastcall DXGMONITOR::_ParseDisplayIDForMonitorModes(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  struct DisplayIDObj *v5; // r14
  char v7; // r12
  unsigned __int16 *v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  int SupportedModes; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int16 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  _DWORD *v31; // rax
  __int64 v32; // rcx
  _DWORD *v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  _QWORD *v42; // rbx
  _QWORD *v43; // rax
  __int64 v45; // rax
  __int128 v46; // [rsp+20h] [rbp-20h]
  unsigned int v47; // [rsp+80h] [rbp+40h] BYREF
  __int64 v48; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0;
  v5 = (DXGMONITOR *)((char *)this + 168);
  v7 = 0;
  v8 = 0LL;
  if ( !*((_QWORD *)this + 21) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = (_QWORD *)((char *)this + 216);
  if ( (_QWORD *)*v10 != v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
  *(_QWORD *)(v12 + 24) = this;
  *(_QWORD *)(v12 + 32) = *(_QWORD *)v5;
  WdLogEvent5_WdDmmEvent(v12);
  v47 = 0;
  SupportedModes = DisplayID_GetSupportedModes(v5, &v47, 0LL, 0LL);
  v16 = SupportedModes;
  v17 = SupportedModes + 0x80000000;
  if ( (int)v17 >= 0 && SupportedModes != -1073741789 )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = v16;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v16;
  }
  if ( !v47 )
  {
    v19 = WdLogNewEntry5_WdWarning(v17, v14, v15);
    WdLogEvent5_WdWarning(v19);
LABEL_36:
    *((_DWORD *)this + 64) = 0;
    if ( !v7 )
      *((_DWORD *)this + 30) = 2;
    LODWORD(v16) = 0;
    goto LABEL_39;
  }
  v20 = (unsigned __int16 *)operator new(56LL * (v47 - 1) + 60, 0x4D677844u, PagedPool);
  v8 = v20;
  if ( !v20 )
  {
    v22 = WdLogNewEntry5_WdError(v21);
    WdLogEvent5_WdError(v22);
    LODWORD(v16) = -1073741801;
    return (unsigned int)v16;
  }
  LODWORD(v48) = 0;
  v23 = DisplayID_GetSupportedModes(v5, &v47, (unsigned int *)&v48, (struct _VideoModeDescriptor *)(v20 + 2));
  v16 = v23;
  if ( v23 >= 0 )
  {
    *v8 = v47;
    v26 = 28LL * (unsigned int)v48;
    v8[1] = v48;
    v27 = v8[v26 + 13];
    v28 = v8[v26 + 12];
    v29 = *((_DWORD *)this + 10) | 0x100;
    if ( v28 >= v27 )
      v29 = *((_DWORD *)this + 10) & 0xFFFFFEFF;
    v30 = v29 & 0xFFFFFDFF;
    if ( v28 >= v27 )
      v28 = v27;
    *(_QWORD *)&v46 = 0x800000008LL;
    *((_QWORD *)&v46 + 1) = 8LL;
    *((_DWORD *)this + 10) = (v28 < 0x400 ? 0x200 : 0) | v30;
    if ( !*v8 )
      goto LABEL_36;
    while ( 1 )
    {
      v31 = operator new(0x78uLL, 0x4D677844u, PagedPool);
      v33 = v31;
      if ( !v31 )
      {
        v45 = WdLogNewEntry5_WdError(v32);
        WdLogEvent5_WdError(v45);
        LODWORD(v16) = -1073741801;
        goto LABEL_39;
      }
      *v31 = (*((_DWORD *)this + 53))++;
      v48 = 56LL * v4;
      v47 = ConvertVideoSignalInfo((unsigned int *)&v8[(unsigned __int64)v48 / 2 + 2], (__int64)(v31 + 2));
      if ( (v47 & 0x80000000) != 0
        || (v36 = v48,
            v33[16] = 2,
            *(_OWORD *)(v33 + 17) = v46,
            v47 = ConvertMonitorCapablitiesOrigin(
                    *((unsigned __int8 *)v8 + v36 + 57),
                    (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v33 + 21)),
            (v47 & 0x80000000) != 0) )
      {
        v35 = WdLogNewEntry5_WdError(v34);
        *(_QWORD *)(v35 + 24) = *(_QWORD *)v5;
        *(_QWORD *)(v35 + 32) = (int)v47;
        WdLogEvent5_WdError(v35);
      }
      else
      {
        v47 = ConvertMonitorModeTimingType(LOBYTE(v8[(unsigned __int64)v48 / 2 + 29]), v33 + 28);
        if ( (v47 & 0x80000000) == 0 )
        {
          if ( (unsigned int)(v33[28] - 1) <= 2 )
            v7 = 1;
          if ( v8[1] == v4 )
          {
            if ( *((_QWORD *)this + 29) )
            {
              v40 = WdLogNewEntry5_WdAssertion(0LL);
              WdLogEvent5_WdAssertion(v40);
            }
            *((_QWORD *)this + 29) = v33;
            v41 = 1;
          }
          else
          {
            v41 = 2;
          }
          v33[22] = v41;
          v42 = v33 + 24;
          ++*((_DWORD *)this + 52);
          v43 = (_QWORD *)*((_QWORD *)this + 28);
          if ( (_QWORD *)*v43 != v10 )
            __fastfail(3u);
          *v42 = v10;
          v42[1] = v43;
          *v43 = v42;
          *((_QWORD *)this + 28) = v42;
          goto LABEL_35;
        }
        v39 = WdLogNewEntry5_WdWarning(0LL, v37, v38);
        *(_QWORD *)(v39 + 24) = *(_QWORD *)v5;
        *(_QWORD *)(v39 + 32) = (int)v47;
        WdLogEvent5_WdWarning(v39);
        MonitorLogBadEDID(*(_QWORD *)v5, v47);
      }
      operator delete(v33);
LABEL_35:
      if ( ++v4 >= *v8 )
        goto LABEL_36;
    }
  }
  v25 = WdLogNewEntry5_WdError(v24);
  *(_QWORD *)(v25 + 24) = v16;
  WdLogEvent5_WdError(v25);
LABEL_39:
  if ( v8 )
    operator delete[](v8);
  return (unsigned int)v16;
}
