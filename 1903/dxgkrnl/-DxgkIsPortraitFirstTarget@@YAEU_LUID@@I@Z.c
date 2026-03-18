/*
 * XREFs of ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C026E2EC
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026E72C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

unsigned __int8 __fastcall DxgkIsPortraitFirstTarget(struct _LUID a1, unsigned int a2, const GUID *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  const GUID *v30; // r8
  int v32; // [rsp+28h] [rbp-79h] BYREF
  __int64 v33; // [rsp+30h] [rbp-71h]
  char v34; // [rsp+38h] [rbp-69h]
  __int64 v35; // [rsp+40h] [rbp-61h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v37[8]; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v38[64]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v39[72]; // [rsp+A0h] [rbp-1h] BYREF

  v32 = -1;
  v33 = 0LL;
  v4 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 2180;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2180);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2180LL);
  Global = DXGGLOBAL::GetGlobal(v6, v5);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v36);
  v12 = v8;
  if ( v8 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v8, 0LL);
    v16 = (int)COREADAPTERACCESS::AcquireShared((__int64)v37, 0xFFFFFFFFLL, v15);
    DXGADAPTER::ReleaseReferenceNoTracking(v12);
    if ( (int)v16 >= 0 )
    {
      v21 = *((_QWORD *)v12 + 319);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 88);
        if ( v22 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v35, *(_QWORD *)(v21 + 88));
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v22 + 80) + 72LL));
          v23 = *(_QWORD *)(v22 + 80);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v23, v4);
          if ( TargetById )
          {
            LOBYTE(v12) = *((_BYTE *)TargetById + 405);
          }
          else
          {
            v28 = WdLogNewEntry5_WdError(v26, v25, v27);
            *(_QWORD *)(v28 + 24) = v4;
            *(_QWORD *)(v28 + 32) = v12;
            WdLogEvent5_WdError(v28);
            LOBYTE(v12) = 0;
          }
          if ( v23 )
            ReferenceCounted::Release((ReferenceCounted *)(v23 + 64), v25, v27);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v35 + 40));
          goto LABEL_19;
        }
      }
      v20 = WdLogNewEntry5_WdError(v18, v17, v19);
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v20 + 32) = v16;
    }
    *(_QWORD *)(v20 + 24) = v12;
    WdLogEvent5_WdError(v20);
    LOBYTE(v12) = 0;
LABEL_19:
    COREACCESS::~COREACCESS((COREACCESS *)v39);
    COREACCESS::~COREACCESS((COREACCESS *)v38);
    goto LABEL_20;
  }
  v13 = WdLogNewEntry5_WdError(v10, v9, v11);
  *(_QWORD *)(v13 + 24) = 2721LL;
  WdLogEvent5_WdError(v13);
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v14);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v32);
  return (unsigned __int8)v12;
}
