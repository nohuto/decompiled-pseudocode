/*
 * XREFs of ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0124EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CE40 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00E8738 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01281E4 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C012865C (MonitorIsMonitorConnected.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0128718 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02C8E14 (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall CompleteTopologyTransitionCallback(struct DXGADAPTER *this, _QWORD *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r12
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // esi
  unsigned __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rdx
  MONITOR_MGR *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+20h] [rbp-99h]
  int v29; // [rsp+30h] [rbp-89h]
  unsigned int v30; // [rsp+44h] [rbp-75h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v31; // [rsp+48h] [rbp-71h] BYREF
  __int64 v32; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v33[64]; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v34[72]; // [rsp+98h] [rbp-21h] BYREF

  v2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v32, this, 0LL);
  v6 = COREADAPTERACCESS::AcquireExclusive(&v32, (unsigned int)(v5 + 1), v5);
  v9 = 0;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741130 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
      v19[3] = this;
      v19[4] = *((int *)this + 70);
      v19[5] = *((unsigned int *)this + 69);
    }
    else
    {
      v9 = v6;
    }
  }
  else
  {
    v10 = *((_QWORD *)this + 319);
    if ( v10 )
    {
      v11 = 0;
      if ( *(_DWORD *)(v10 + 80) )
      {
        do
        {
          v30 = -1;
          v12 = 0LL;
          while ( 1 )
          {
            v13 = DmmEnumClientVidPnPathTargetsFromSource(this, v11, v12++, &v30);
            if ( v13 < 0 || v30 == -1 )
              break;
            v31 = D3DKMDT_VOT_UNINITIALIZED;
            DmmGetVideoOutputTechnology(this, v30, 0LL, &v31);
            if ( v31 == D3DKMDT_VOT_MIRACAST )
            {
              if ( *(_DWORD *)a2 || *((_DWORD *)a2 + 1) )
              {
                v24 = WdLogNewEntry5_WdAssertion(v21, v20);
                *(_QWORD *)(v24 + 24) = 7332LL;
                WdLogEvent5_WdAssertion(v24);
              }
              *a2 = *(_QWORD *)((char *)this + 276);
            }
            if ( (int)MonitorIsMonitorConnected(this, v30, 0) >= 0 )
            {
              v25 = WdLogNewEntry5_WdTrace(v23, v22);
              *(_QWORD *)(v25 + 24) = this;
              *(_QWORD *)(v25 + 32) = v30;
              MonitorCreateSimulatedMonitor(this, v28, 0, v29, (__int64)v2);
            }
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)(*((_QWORD *)this + 319) + 80LL) );
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v15, v14);
        WdLogEvent5_WdAssertion(v26);
      }
      v17 = *((_QWORD *)this + 319);
      if ( v17 && (v15 = *(MONITOR_MGR **)(v17 + 96)) != 0LL )
      {
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(v15, v2);
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v15, v14, v16);
        *(_QWORD *)(v27 + 24) = this;
        WdLogEvent5_WdError(v27);
      }
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v34);
  COREACCESS::~COREACCESS((COREACCESS *)v33);
  return v9;
}
