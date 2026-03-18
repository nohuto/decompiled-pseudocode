/*
 * XREFs of NtDxgkVailConnect @ 0x1C025DCC0
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
 *     ?EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ @ 0x1C004278C (-EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C022A27C (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C025A034 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C025A4CC (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C025BC80 (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 NtDxgkVailConnect()
{
  __int64 v0; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int VmBusHostSubscribers; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  DXGSESSIONMGR *v30; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v33; // rbx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGPROCESS *v42; // r15
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  char v49; // al
  PVOID Object; // [rsp+20h] [rbp-60h] BYREF
  char v51; // [rsp+28h] [rbp-58h]
  _BYTE v52[16]; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF
  char v54; // [rsp+70h] [rbp-10h]

  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v2 = WdLogNewEntry5_WdError(v0);
    *(_QWORD *)(v2 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v2);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v52, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v52);
  if ( !*((_QWORD *)Current + 55) )
  {
    if ( *((_BYTE *)Current + 322) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled )
    {
      if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v5) + 79) )
      {
        Object = 0LL;
        v30 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v26) + 77);
        if ( v30 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v29);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v30,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( SessionDataForSpecifiedSession )
        {
          v35 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
          v16 = v35;
          if ( v35 >= 0 )
          {
            v54 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
            v42 = DXGPROCESS::GetCurrent();
            if ( *((_BYTE *)v42 + 448) )
            {
              v43 = WdLogNewEntry5_WdWarning(v40, v39, v41);
              *(_QWORD *)(v43 + 24) = -1073740528LL;
              WdLogEvent5_WdWarning(v43);
              LODWORD(v16) = -1073740528;
            }
            if ( (int)v16 >= 0 )
            {
              v44 = DXGSESSIONDATA::VailGuestConnect(SessionDataForSpecifiedSession);
              v16 = v44;
              if ( v44 >= 0 )
              {
                v49 = 1;
              }
              else
              {
                v48 = WdLogNewEntry5_WdWarning(v46, v45, v47);
                *(_QWORD *)(v48 + 24) = v16;
                WdLogEvent5_WdWarning(v48);
                v49 = 0;
              }
              *((_BYTE *)v42 + 448) = v49;
            }
            if ( v54 )
              KeUnstackDetachProcess(&ApcState);
          }
          else
          {
            v37 = WdLogNewEntry5_WdError(v36);
            *(_QWORD *)(v37 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v38);
            *(_QWORD *)(v37 + 32) = v16;
            WdLogEvent5_WdError(v37);
          }
          if ( Object )
            ObfDereferenceObject(Object);
        }
        else
        {
          v33 = WdLogNewEntry5_WdError(v29);
          LODWORD(v16) = -1073741790;
          *(_QWORD *)(v33 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v34);
          *(_QWORD *)(v33 + 32) = -1073741790LL;
          WdLogEvent5_WdError(v33);
        }
      }
      else
      {
        LODWORD(v16) = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v26, v25, v27, v28) + 24) = -1071775727LL;
      }
    }
    else
    {
      LODWORD(v16) = -1073741790;
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4, v6);
      v23[3] = -1073741790LL;
      v23[4] = *((_QWORD *)Current + 55) != 0LL;
      v24 = *((unsigned __int8 *)Current + 322);
      v23[5] = v24;
      v23[6] = *((_QWORD *)DXGGLOBAL::GetGlobal(v24) + 79);
      WdLogEvent5_WdWarning(v23);
    }
    goto LABEL_42;
  }
  v7 = (struct _EX_RUNDOWN_REF *)DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, (struct DXGFASTMUTEX *const)&v7[5], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
  if ( v7[13].Count )
  {
    VmBusHostSubscribers = DXGVAILOBJECT::CreateVmBusHostSubscribers((DXGVAILOBJECT *)v7);
    v16 = VmBusHostSubscribers;
    if ( VmBusHostSubscribers == -1073740528 )
    {
      v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = -1073740528LL;
    }
    else
    {
      if ( VmBusHostSubscribers >= 0 )
      {
        v18 = DXGVAILOBJECT::EnableVmBusChannel((struct _KTHREAD **)v7);
        v16 = v18;
        if ( v18 < 0 )
        {
          v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
          *(_QWORD *)(v22 + 24) = v16;
          WdLogEvent5_WdWarning(v22);
          DXGVAILOBJECT::DestroyVmBusHostSubscribers((DXGVAILOBJECT *)v7);
        }
        goto LABEL_13;
      }
      v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = v16;
    }
    WdLogEvent5_WdWarning(v17);
  }
  else
  {
    LODWORD(v16) = -1071775727;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = -1071775727LL;
  }
LABEL_13:
  if ( v51 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object);
  if ( (int)v16 >= 0 )
    ExReInitializeRundownProtection(v7 + 10);
  DxgkCompositionObject::Release((DxgkCompositionObject *)v7);
LABEL_42:
  if ( v52[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52);
  KeLeaveCriticalRegion();
  return (unsigned int)v16;
}
