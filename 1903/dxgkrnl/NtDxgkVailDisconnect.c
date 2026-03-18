/*
 * XREFs of NtDxgkVailDisconnect @ 0x1C0294250
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0002010 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001ADD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003CD84 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C004457C (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C025EAE8 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02907AC (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02920FC (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall NtDxgkVailDisconnect(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGVAILOBJECT *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v19; // r8
  unsigned int CurrentProcessSessionId; // eax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGPROCESS *v36; // r14
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  char v43; // al
  __int64 v44; // rax
  PVOID Object; // [rsp+20h] [rbp-60h] BYREF
  char v46; // [rsp+28h] [rbp-58h]
  _BYTE v47[16]; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF
  char v49; // [rsp+70h] [rbp-10h]

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v47, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
    if ( *((_QWORD *)Current + 52) )
    {
      v10 = DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v10 + 10);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, (struct DXGVAILOBJECT *)((char *)v10 + 40), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
      DXGVAILOBJECT::DisableVmBusChannel((struct _KTHREAD **)v10, v11);
      LODWORD(v12) = DXGVAILOBJECT::DestroyVmBusHostSubscribers(v10);
      if ( v46 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object);
      DxgkCompositionObject::Release(v10);
    }
    else if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v9, v8) + 76)
           && (*((_BYTE *)Current + 298) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      Object = 0LL;
      SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal(v14, v13) + 74);
      if ( SessionDataForSpecifiedSession )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17, v16);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                           SessionDataForSpecifiedSession,
                                           CurrentProcessSessionId);
      }
      if ( SessionDataForSpecifiedSession )
      {
        v24 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
        v12 = v24;
        if ( v24 >= 0 )
        {
          v49 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
          v36 = DXGPROCESS::GetCurrent(v32, v31);
          if ( !*((_BYTE *)v36 + 424) )
          {
            v37 = WdLogNewEntry5_WdWarning(v34, v33, v35);
            LODWORD(v12) = -2147483611;
            *(_QWORD *)(v37 + 24) = -2147483611LL;
            WdLogEvent5_WdWarning(v37);
          }
          if ( (int)v12 >= 0 )
          {
            v38 = DXGSESSIONDATA::VailGuestDisconnect(SessionDataForSpecifiedSession);
            v12 = v38;
            if ( v38 >= 0 )
            {
              v43 = 0;
            }
            else
            {
              v42 = WdLogNewEntry5_WdWarning(v40, v39, v41);
              *(_QWORD *)(v42 + 24) = v12;
              WdLogEvent5_WdWarning(v42);
              v43 = 1;
            }
            *((_BYTE *)v36 + 424) = v43;
          }
          if ( v49 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          v28 = WdLogNewEntry5_WdError(v26, v25, v27);
          *(_QWORD *)(v28 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v30, v29);
          *(_QWORD *)(v28 + 32) = v12;
          WdLogEvent5_WdError(v28);
        }
        if ( Object )
          ObfDereferenceObject(Object);
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(v17, v16, v19);
        *(_QWORD *)(v21 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v23, v22);
        *(_QWORD *)(v21 + 32) = -1073741790LL;
        WdLogEvent5_WdError(v21);
        LODWORD(v12) = -1073741790;
      }
    }
    else
    {
      LODWORD(v12) = -1073741790;
      v44 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v44 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v44);
    }
    KeLeaveCriticalRegion();
    if ( v47[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
    return (unsigned int)v12;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v5);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
