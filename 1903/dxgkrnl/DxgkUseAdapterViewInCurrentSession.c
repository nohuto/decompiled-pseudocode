/*
 * XREFs of DxgkUseAdapterViewInCurrentSession @ 0x1C0144114
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00E8FB0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CE40 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00E977C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01442E0 (-AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C0144340 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C014447C (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C01444F8 (-RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 */

__int64 __fastcall DxgkUseAdapterViewInCurrentSession(struct _LUID *a1, __int64 a2, char a3)
{
  char v3; // r14
  __int64 v4; // r12
  bool v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rbx
  __int64 v10; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  SESSION_ADAPTER *SessionAdapterFromLuid; // rdi
  struct DXGADAPTER *v22; // r14
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  struct DISPLAY_SOURCE *v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _BYTE v46[7]; // [rsp+31h] [rbp-88h] BYREF
  SESSION_ADAPTER *v47; // [rsp+38h] [rbp-81h] BYREF
  __int64 v48; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v49[64]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v50[72]; // [rsp+88h] [rbp-31h] BYREF

  v3 = a3;
  v4 = (unsigned int)a2;
  v6 = 0;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 74);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v35 = WdLogNewEntry5_WdError(v8, v7, v10);
    *(_QWORD *)(v35 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v37, v36);
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    return 3221225485LL;
  }
  v46[0] = 0;
  v13 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v46, 1);
  v17 = v13;
  if ( v13 < 0 )
  {
    v38 = WdLogNewEntry5_WdError(v15, v14, v16);
    *(_QWORD *)(v38 + 24) = v17;
    WdLogEvent5_WdError(v38);
  }
  else if ( v3 )
  {
    LODWORD(v17) = DXGSESSIONDATA::AddAdapterToSession(SessionDataForSpecifiedSession, a1, 0LL, &v47);
    if ( (int)v17 >= 0 )
    {
      SessionAdapterFromLuid = v47;
      v6 = 1;
      goto LABEL_8;
    }
  }
  else
  {
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionDataForSpecifiedSession, a1);
    if ( SessionAdapterFromLuid )
    {
LABEL_8:
      if ( (_DWORD)v4 != -1 )
      {
        v22 = (struct DXGADAPTER *)*((_QWORD *)SessionAdapterFromLuid + 2);
        if ( !v22 )
        {
          LODWORD(v17) = -1073741811;
          v40 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
          v40[3] = a1->HighPart;
          v40[4] = a1->LowPart;
          v40[5] = v4;
          v40[6] = -1073741811LL;
          WdLogEvent5_WdError(v40);
          goto LABEL_21;
        }
        if ( !*((_QWORD *)v22 + 319) )
        {
          v41 = WdLogNewEntry5_WdAssertion(v19, v18);
          *(_QWORD *)(v41 + 24) = 375LL;
          WdLogEvent5_WdAssertion(v41);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v48, v22, 0LL);
        v24 = COREADAPTERACCESS::AcquireExclusive(&v48, (unsigned int)(v23 + 1), v23);
        v17 = v24;
        if ( v24 >= 0 )
        {
          v28 = *((_QWORD *)v22 + 319);
          if ( (unsigned int)v4 < *(_DWORD *)(v28 + 80) )
          {
            v3 = a3;
            v29 = (struct DISPLAY_SOURCE *)(*(_QWORD *)(v28 + 112) + 3968 * v4);
            if ( a3 )
              v30 = SESSION_ADAPTER::AddDisplaySource(SessionAdapterFromLuid, v29);
            else
              v30 = SESSION_ADAPTER::RemoveDisplaySource(SessionAdapterFromLuid, v29);
            v17 = v30;
            if ( v30 < 0 )
            {
              v44 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31, v33);
              v44[3] = v4;
              v44[4] = a1->HighPart;
              v44[5] = a1->LowPart;
              v44[6] = v17;
              WdLogEvent5_WdError(v44);
            }
            COREACCESS::~COREACCESS((COREACCESS *)v50);
            COREACCESS::~COREACCESS((COREACCESS *)v49);
            goto LABEL_19;
          }
          LODWORD(v17) = -1073741811;
          v43 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
          v43[3] = v4;
          v43[4] = a1->HighPart;
          v43[5] = a1->LowPart;
          v43[6] = -1073741811LL;
          WdLogEvent5_WdError(v43);
          COREACCESS::~COREACCESS((COREACCESS *)v50);
          COREACCESS::~COREACCESS((COREACCESS *)v49);
LABEL_21:
          if ( v6 )
            DXGSESSIONDATA::RemoveAdapterFromSession(SessionDataForSpecifiedSession, a1);
          goto LABEL_23;
        }
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
        v42[3] = a1->HighPart;
        v42[4] = a1->LowPart;
        v42[5] = v17;
        WdLogEvent5_WdError(v42);
        COREACCESS::~COREACCESS((COREACCESS *)v50);
        COREACCESS::~COREACCESS((COREACCESS *)v49);
        v3 = a3;
      }
LABEL_19:
      if ( (int)v17 >= 0 )
        v6 = v3 == 0;
      goto LABEL_21;
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
    v39[3] = a1->HighPart;
    v39[4] = a1->LowPart;
    v39[5] = -1073741811LL;
    WdLogEvent5_WdError(v39);
    LODWORD(v17) = -1073741811;
  }
LABEL_23:
  if ( v46[0] )
    DxgkReleaseSessionModeChangeLock(v19, v18);
  return (unsigned int)v17;
}
