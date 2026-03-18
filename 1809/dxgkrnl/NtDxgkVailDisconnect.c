/*
 * XREFs of NtDxgkVailDisconnect @ 0x1C025E0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0019470 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003699C (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C003DBC4 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C022A27C (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C025A4CC (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C025BDD0 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 NtDxgkVailDisconnect()
{
  __int64 v0; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v2; // rax
  __int64 v4; // rcx
  struct DXGVAILOBJECT *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  DXGSESSIONMGR *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGPROCESS *v22; // r14
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  char v29; // al
  __int64 v30; // rax
  PVOID Object; // [rsp+20h] [rbp-60h] BYREF
  char v32; // [rsp+28h] [rbp-58h]
  _BYTE v33[16]; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF
  char v35; // [rsp+70h] [rbp-10h]

  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
    if ( *((_QWORD *)Current + 55) )
    {
      v5 = DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v5 + 10);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, (struct DXGVAILOBJECT *)((char *)v5 + 40), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
      DXGVAILOBJECT::DisableVmBusChannel((struct _KTHREAD **)v5);
      LODWORD(v6) = DXGVAILOBJECT::DestroyVmBusHostSubscribers(v5);
      if ( v32 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object);
      DxgkCompositionObject::Release(v5);
    }
    else if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v4) + 79)
           && (*((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled) )
    {
      Object = 0LL;
      SessionDataForSpecifiedSession = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8) + 77);
      if ( SessionDataForSpecifiedSession )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                           SessionDataForSpecifiedSession,
                                           CurrentProcessSessionId);
      }
      if ( SessionDataForSpecifiedSession )
      {
        v15 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
        v6 = v15;
        if ( v15 >= 0 )
        {
          v35 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
          v22 = DXGPROCESS::GetCurrent();
          if ( !*((_BYTE *)v22 + 448) )
          {
            v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
            LODWORD(v6) = -2147483611;
            *(_QWORD *)(v23 + 24) = -2147483611LL;
            WdLogEvent5_WdWarning(v23);
          }
          if ( (int)v6 >= 0 )
          {
            v24 = DXGSESSIONDATA::VailGuestDisconnect(SessionDataForSpecifiedSession);
            v6 = v24;
            if ( v24 >= 0 )
            {
              v29 = 0;
            }
            else
            {
              v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
              *(_QWORD *)(v28 + 24) = v6;
              WdLogEvent5_WdWarning(v28);
              v29 = 1;
            }
            *((_BYTE *)v22 + 448) = v29;
          }
          if ( v35 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          v17 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v18);
          *(_QWORD *)(v17 + 32) = v6;
          WdLogEvent5_WdError(v17);
        }
        if ( Object )
          ObfDereferenceObject(Object);
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v13 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v14);
        *(_QWORD *)(v13 + 32) = -1073741790LL;
        WdLogEvent5_WdError(v13);
        LODWORD(v6) = -1073741790;
      }
    }
    else
    {
      LODWORD(v6) = -1073741790;
      v30 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v30 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v30);
    }
    KeLeaveCriticalRegion();
    if ( v33[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
    return (unsigned int)v6;
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(v0);
    *(_QWORD *)(v2 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v2);
    return 3221225485LL;
  }
}
