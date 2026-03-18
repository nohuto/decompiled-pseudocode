/*
 * XREFs of ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0239B74
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0239F8C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

unsigned __int8 __fastcall DxgkIsPortraitFirstTarget(struct _LUID a1, unsigned int a2, const GUID *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rcx
  DXGADAPTER *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v23; // [rsp+20h] [rbp-29h] BYREF
  __int64 v24; // [rsp+28h] [rbp-21h]
  char v25; // [rsp+30h] [rbp-19h]
  _BYTE v26[8]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v27[32]; // [rsp+48h] [rbp-1h] BYREF
  _BYTE v28[56]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v29; // [rsp+C0h] [rbp+77h] BYREF
  unsigned __int64 v30; // [rsp+C8h] [rbp+7Fh] BYREF

  v23 = -1;
  v24 = 0LL;
  v4 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v25 = 1;
    v23 = 2180;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2180);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 2180);
  Global = DXGGLOBAL::GetGlobal(v5);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v30);
  v9 = v7;
  if ( v7 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v7, 0LL);
    v11 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26);
    DXGADAPTER::ReleaseReference(v9);
    if ( (int)v11 >= 0 )
    {
      v14 = *((_QWORD *)v9 + 315);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 88);
        if ( v15 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v29, *(_QWORD *)(v14 + 88));
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 80) + 72LL));
          v16 = *(_QWORD *)(v15 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v16, v4);
          if ( TargetById )
          {
            LOBYTE(v9) = *((_BYTE *)TargetById + 405);
          }
          else
          {
            v19 = WdLogNewEntry5_WdError(v18);
            *(_QWORD *)(v19 + 24) = v4;
            *(_QWORD *)(v19 + 32) = v9;
            WdLogEvent5_WdError(v19);
            LOBYTE(v9) = 0;
          }
          if ( v16 )
            ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29 + 40));
          goto LABEL_19;
        }
      }
      v13 = WdLogNewEntry5_WdError(v12);
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v13 + 32) = v11;
    }
    *(_QWORD *)(v13 + 24) = v9;
    WdLogEvent5_WdError(v13);
    LOBYTE(v9) = 0;
LABEL_19:
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    COREACCESS::~COREACCESS((COREACCESS *)v27);
    goto LABEL_20;
  }
  v10 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v10 + 24) = 2692LL;
  WdLogEvent5_WdError(v10);
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v23);
  return (unsigned __int8)v9;
}
