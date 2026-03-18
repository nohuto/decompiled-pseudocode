/*
 * XREFs of DxgkUseAdapterViewInCurrentSession @ 0x1C00BC27C
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00BC560 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C00BB974 (-RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C00BB9FC (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C00BBB2C (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C00BBC70 (-AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00ED85C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall DxgkUseAdapterViewInCurrentSession(struct _LUID *a1, unsigned int a2, char a3)
{
  char v3; // r14
  __int64 v4; // r12
  bool v6; // r13
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA ***SessionDataForSpecifiedSession; // r15
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // rdi
  struct DXGADAPTER *v16; // r14
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct DISPLAY_SOURCE *v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 LowPart; // rcx
  SESSION_ADAPTER *v34; // [rsp+20h] [rbp-60h] BYREF
  __int64 v35; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v36[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v37[40]; // [rsp+58h] [rbp-28h] BYREF
  char v39; // [rsp+D8h] [rbp+58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 77);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    SessionDataForSpecifiedSession = (DXGSESSIONDATA ***)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                           v8,
                                                           CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v25 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v25 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v26);
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  v39 = 0;
  v11 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v39, 1);
  v13 = v11;
  if ( v11 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v27 + 24) = v13;
    WdLogEvent5_WdError(v27);
  }
  else if ( v3 )
  {
    LODWORD(v13) = DXGSESSIONDATA::AddAdapterToSession(SessionDataForSpecifiedSession, a1, &v34);
    if ( (int)v13 >= 0 )
    {
      SessionAdapterFromLuid = v34;
      v6 = 1;
      goto LABEL_8;
    }
  }
  else
  {
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                               (DXGSESSIONDATA *)SessionDataForSpecifiedSession,
                               a1);
    if ( SessionAdapterFromLuid )
    {
LABEL_8:
      if ( (_DWORD)v4 == -1 )
        goto LABEL_18;
      v16 = (struct DXGADAPTER *)*((_QWORD *)SessionAdapterFromLuid + 2);
      if ( v16 )
      {
        if ( !*((_QWORD *)v16 + 315) )
        {
          v30 = WdLogNewEntry5_WdAssertion(v14);
          *(_QWORD *)(v30 + 24) = 365LL;
          WdLogEvent5_WdAssertion(v30);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v35, v16, 0LL);
        v18 = COREADAPTERACCESS::AcquireExclusive(&v35, (unsigned int)(v17 + 1));
        v13 = v18;
        if ( v18 < 0 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v19);
          v31[3] = a1->HighPart;
          v31[4] = a1->LowPart;
          v31[5] = v13;
          goto LABEL_35;
        }
        v20 = *((_QWORD *)v16 + 315);
        if ( (unsigned int)v4 < *(_DWORD *)(v20 + 80) )
        {
          v21 = (struct DISPLAY_SOURCE *)(*(_QWORD *)(v20 + 112) + 3760 * v4);
          if ( a3 )
            v22 = SESSION_ADAPTER::AddDisplaySource(SessionAdapterFromLuid, v21);
          else
            v22 = SESSION_ADAPTER::RemoveDisplaySource(SessionAdapterFromLuid, v21);
          v13 = v22;
          if ( v22 >= 0 )
            goto LABEL_17;
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v23);
          v31[3] = v4;
          v31[4] = a1->HighPart;
          LowPart = a1->LowPart;
          v31[6] = v13;
          v31[5] = LowPart;
LABEL_35:
          WdLogEvent5_WdError(v31);
LABEL_17:
          COREACCESS::~COREACCESS((COREACCESS *)v37);
          COREACCESS::~COREACCESS((COREACCESS *)v36);
          v3 = a3;
LABEL_18:
          if ( (int)v13 >= 0 )
            v6 = v3 == 0;
          goto LABEL_20;
        }
        LODWORD(v13) = -1073741811;
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v32[3] = v4;
        v32[4] = a1->HighPart;
        v32[5] = a1->LowPart;
        v32[6] = -1073741811LL;
        WdLogEvent5_WdError(v32);
        COREACCESS::~COREACCESS((COREACCESS *)v37);
        COREACCESS::~COREACCESS((COREACCESS *)v36);
      }
      else
      {
        LODWORD(v13) = -1073741811;
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v14);
        v29[3] = a1->HighPart;
        v29[4] = a1->LowPart;
        v29[5] = v4;
        v29[6] = -1073741811LL;
        WdLogEvent5_WdError(v29);
      }
LABEL_20:
      if ( v6 )
        DXGSESSIONDATA::RemoveAdapterFromSession((DXGSESSIONDATA *)SessionDataForSpecifiedSession, a1);
      goto LABEL_22;
    }
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v28[3] = a1->HighPart;
    v28[4] = a1->LowPart;
    v28[5] = -1073741811LL;
    WdLogEvent5_WdError(v28);
    LODWORD(v13) = -1073741811;
  }
LABEL_22:
  if ( v39 )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v13;
}
