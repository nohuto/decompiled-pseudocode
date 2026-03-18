/*
 * XREFs of ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F6990
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C00B659C (MonitorCreateSimulatedMonitor.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00C25BC (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D4FC0 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00E550C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C0137574 (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall CompleteTopologyTransitionCallback(struct DXGADAPTER *this, _QWORD *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r12
  int v5; // r8d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned __int64 v14; // r15
  int v15; // eax
  MONITOR_MGR *v16; // rcx
  __int64 v17; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-39h]
  int v31; // [rsp+30h] [rbp-29h]
  __int64 v32; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v33[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v34[40]; // [rsp+68h] [rbp+Fh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v35; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v36; // [rsp+D0h] [rbp+77h] BYREF

  v2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v32, this, 0LL);
  v6 = COREADAPTERACCESS::AcquireExclusive(&v32, (unsigned int)(v5 + 1));
  v11 = 0;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741130 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
      v19[3] = this;
      v19[4] = *((int *)this + 70);
      v19[5] = *((unsigned int *)this + 69);
    }
    else
    {
      v11 = v6;
    }
  }
  else
  {
    v12 = *((_QWORD *)this + 315);
    if ( v12 )
    {
      v13 = 0;
      if ( *(_DWORD *)(v12 + 80) )
      {
        do
        {
          v36 = -1;
          v14 = 0LL;
          while ( 1 )
          {
            v15 = DmmEnumClientVidPnPathTargetsFromSource(this, v13, v14++, &v36);
            if ( v15 < 0 || v36 == -1 )
              break;
            v35 = D3DKMDT_VOT_UNINITIALIZED;
            DmmGetVideoOutputTechnology(this, v36, 0LL, &v35);
            if ( v35 == D3DKMDT_VOT_MIRACAST )
            {
              if ( *(_DWORD *)a2 || *((_DWORD *)a2 + 1) )
              {
                v25 = WdLogNewEntry5_WdAssertion(v20);
                *(_QWORD *)(v25 + 24) = 7181LL;
                WdLogEvent5_WdAssertion(v25);
              }
              *a2 = *(_QWORD *)((char *)this + 276);
            }
            LOBYTE(v35) = 0;
            if ( (int)MonitorIsMonitorConnected(this, v36, 0) >= 0 && !(_BYTE)v35 )
            {
              v26 = WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
              *(_QWORD *)(v26 + 24) = this;
              *(_QWORD *)(v26 + 32) = v36;
              MonitorCreateSimulatedMonitor((PERESOURCE *)this, v36, 4LL, v27, v30, 0, v31, (__int64)v2);
            }
          }
          ++v13;
        }
        while ( v13 < *(_DWORD *)(*((_QWORD *)this + 315) + 80LL) );
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v28);
      }
      v17 = *((_QWORD *)this + 315);
      if ( v17 && (v16 = *(MONITOR_MGR **)(v17 + 96)) != 0LL )
      {
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(v16, v2);
      }
      else
      {
        v29 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v29 + 24) = this;
        WdLogEvent5_WdError(v29);
      }
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v34);
  COREACCESS::~COREACCESS((COREACCESS *)v33);
  return v11;
}
