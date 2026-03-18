/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00BCAEC
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00BC560 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000413C (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000E160 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00C25BC (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00E550C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00ED068 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00ED084 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00ED7C8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C0137574 (MonitorIsMonitorConnected.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C020F93C (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetAllMonitorDevicesFromSessionView(
        struct _LUID *a1,
        unsigned int a2,
        bool *a3,
        unsigned int *a4,
        __int64 a5)
{
  __int64 v6; // rdi
  unsigned int v9; // r15d
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  SESSION_VIEW *SessionViewFromSource; // rax
  _QWORD *v15; // rbx
  __int64 LowPart; // rcx
  __int64 result; // rax
  __int64 v18; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  bool v20; // al
  __int64 v21; // rcx
  bool v22; // cf
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  int IsMonitorConnected; // eax
  __int64 v39; // rcx
  unsigned int v40; // [rsp+2Ch] [rbp-4Dh] BYREF
  SESSION_VIEW *v41; // [rsp+50h] [rbp-29h]
  _BYTE v42[8]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v43[32]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v44[40]; // [rsp+80h] [rbp+7h] BYREF

  v6 = a2;
  v9 = 0;
  v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 77);
  if ( v11 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v23 = WdLogNewEntry5_WdError(v10);
    LODWORD(v25) = -1073741811;
    *(_QWORD *)(v23 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v24);
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    return (unsigned int)v25;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, a1, v6);
  v41 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v15[3] = v6;
    v15[4] = a1->HighPart;
    LowPart = a1->LowPart;
    v15[5] = LowPart;
    v15[6] = (unsigned int)PsGetCurrentProcessSessionId(LowPart);
    WdLogEvent5_WdEvent(v15);
    *a4 = 0;
    result = 0LL;
    *a3 = 1;
    return result;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
    v28 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v28 + 24) = 1010LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v20 = *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6
     && *a1 == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 276LL);
  *a3 = v20;
  while ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6 )
  {
    v21 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    if ( a1->LowPart != *(_DWORD *)(v21 + 276) || a1->HighPart != *(_DWORD *)(v21 + 280) )
      break;
LABEL_15:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v41, PrimaryDisplaySource);
    if ( !PrimaryDisplaySource )
    {
      v22 = *a4 < v9;
      *a4 = v9;
      return v22 ? 0x80000005 : 0;
    }
    LODWORD(v6) = a2;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v42,
    *(struct DXGADAPTER *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
    0LL);
  v29 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v42);
  v31 = v29;
  if ( v29 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v32[3] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 280LL);
    v32[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 276LL);
    v32[5] = v31;
LABEL_27:
    WdLogEvent5_WdEvent(v32);
LABEL_40:
    COREACCESS::~COREACCESS((COREACCESS *)v44);
    COREACCESS::~COREACCESS((COREACCESS *)v43);
    goto LABEL_15;
  }
  if ( !*(_BYTE *)(*((_QWORD *)PrimaryDisplaySource + 1) + 133LL) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v30);
    *(_QWORD *)(v33 + 24) = 1056LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( !a5 || v9 >= *a4 )
  {
    ++v9;
    goto LABEL_40;
  }
  if ( DmmEnumClientVidPnPathTargetsFromSource(
         *(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
         *((_DWORD *)PrimaryDisplaySource + 4),
         1uLL,
         &v40) < 0
    || v40 != -1 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v34);
    *(_QWORD *)(v35 + 24) = 1074LL;
    WdLogEvent5_WdAssertion(v35);
  }
  v36 = DmmEnumClientVidPnPathTargetsFromSource(
          *(void *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
          *((_DWORD *)PrimaryDisplaySource + 4),
          0LL,
          &v40);
  v25 = v36;
  if ( v36 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v37);
LABEL_22:
    v27 = *((unsigned int *)PrimaryDisplaySource + 4);
    goto LABEL_23;
  }
  if ( v40 == -1 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v37);
    v25 = -1073741811LL;
    goto LABEL_22;
  }
  IsMonitorConnected = MonitorIsMonitorConnected(
                         *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
                         v40,
                         1u);
  v25 = IsMonitorConnected;
  if ( IsMonitorConnected >= 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v32[3] = v40;
    v32[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 280LL);
    v32[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 276LL);
    v32[6] = v25;
    goto LABEL_27;
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdError(v39);
  v27 = v40;
LABEL_23:
  v26[3] = v27;
  v26[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 280LL);
  v26[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 276LL);
  v26[6] = v25;
  WdLogEvent5_WdError(v26);
  COREACCESS::~COREACCESS((COREACCESS *)v44);
  COREACCESS::~COREACCESS((COREACCESS *)v43);
  return (unsigned int)v25;
}
