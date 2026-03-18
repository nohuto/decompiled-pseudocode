/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00E9540
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00E8FB0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0003708 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0007644 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00D501C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00D72F0 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00E8738 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00E96E8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C012865C (MonitorIsMonitorConnected.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0128718 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C0243964 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetAllMonitorDevicesFromSessionView(
        struct _LUID *a1,
        __int64 a2,
        bool *a3,
        unsigned int *a4,
        __int64 a5)
{
  __int64 v6; // rdi
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  __int64 v13; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 LowPart; // rcx
  __int64 v20; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  bool v25; // al
  __int64 v26; // rcx
  bool v27; // cf
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int IsMonitorConnected; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // [rsp+24h] [rbp-BDh] BYREF
  int v54; // [rsp+34h] [rbp-ADh]
  __int64 v55; // [rsp+38h] [rbp-A9h]
  SESSION_VIEW *v56; // [rsp+48h] [rbp-99h]
  _BYTE v57[8]; // [rsp+50h] [rbp-91h] BYREF
  _BYTE v58[64]; // [rsp+58h] [rbp-89h] BYREF
  _BYTE v59[72]; // [rsp+98h] [rbp-49h] BYREF

  v6 = (unsigned int)a2;
  v54 = a2;
  v55 = a5;
  v9 = 0;
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 74);
  if ( v12 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v28 = WdLogNewEntry5_WdError(v11, v10, v13);
    LODWORD(v31) = -1073741811;
    *(_QWORD *)(v28 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v30, v29);
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v31;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, a1, v6);
  v56 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v17);
    v18[3] = v6;
    v18[4] = a1->HighPart;
    LowPart = a1->LowPart;
    v18[5] = LowPart;
    v18[6] = (unsigned int)PsGetCurrentProcessSessionId(LowPart, v20);
    WdLogEvent5_WdEvent(v18);
    *a3 = 1;
    *a4 = 0;
    return 0LL;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
    v34 = WdLogNewEntry5_WdAssertion(v23, v22);
    *(_QWORD *)(v34 + 24) = 1022LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v25 = *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6
     && *a1 == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 276LL);
  *a3 = v25;
  while ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6 )
  {
    v26 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    if ( a1->LowPart != *(_DWORD *)(v26 + 276) || a1->HighPart != *(_DWORD *)(v26 + 280) )
      break;
LABEL_15:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v56, PrimaryDisplaySource);
    if ( !PrimaryDisplaySource )
    {
      v27 = *a4 < v9;
      *a4 = v9;
      return v27 ? 0x80000005 : 0;
    }
    LODWORD(v6) = v54;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v57,
    *(struct DXGADAPTER *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
    0LL);
  v36 = COREADAPTERACCESS::AcquireShared((__int64)v57, 0xFFFFFFFFLL, v35);
  v39 = v36;
  if ( v36 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v38);
    v40[3] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 280LL);
    v40[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 276LL);
    v40[5] = v39;
LABEL_27:
    WdLogEvent5_WdEvent(v40);
LABEL_40:
    COREACCESS::~COREACCESS((COREACCESS *)v59);
    COREACCESS::~COREACCESS((COREACCESS *)v58);
    goto LABEL_15;
  }
  if ( !*(_BYTE *)(*((_QWORD *)PrimaryDisplaySource + 1) + 234LL) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v38, v37);
    *(_QWORD *)(v41 + 24) = 1068LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( !v55 || v9 >= *a4 )
  {
    ++v9;
    goto LABEL_40;
  }
  if ( (int)DmmEnumClientVidPnPathTargetsFromSource(
              *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
              *((unsigned int *)PrimaryDisplaySource + 4),
              1uLL,
              &v53) < 0
    || v53 != -1 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v43, v42);
    *(_QWORD *)(v44 + 24) = 1086LL;
    WdLogEvent5_WdAssertion(v44);
  }
  v45 = DmmEnumClientVidPnPathTargetsFromSource(
          *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
          *((unsigned int *)PrimaryDisplaySource + 4),
          0LL,
          &v53);
  v31 = v45;
  if ( v45 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46, v48);
LABEL_22:
    v33 = *((unsigned int *)PrimaryDisplaySource + 4);
    goto LABEL_23;
  }
  if ( v53 == -1 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v47, 0xFFFFFFFFLL, v48);
    v31 = -1073741811LL;
    goto LABEL_22;
  }
  IsMonitorConnected = MonitorIsMonitorConnected(
                         *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
                         v53,
                         1u);
  v31 = IsMonitorConnected;
  if ( IsMonitorConnected >= 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v51);
    v40[3] = v53;
    v40[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 280LL);
    v40[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 276LL);
    v40[6] = v31;
    goto LABEL_27;
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50, v52);
  v33 = v53;
LABEL_23:
  v32[3] = v33;
  v32[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 280LL);
  v32[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 276LL);
  v32[6] = v31;
  WdLogEvent5_WdError(v32);
  COREACCESS::~COREACCESS((COREACCESS *)v59);
  COREACCESS::~COREACCESS((COREACCESS *)v58);
  return (unsigned int)v31;
}
