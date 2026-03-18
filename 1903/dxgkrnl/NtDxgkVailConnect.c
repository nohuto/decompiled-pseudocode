/*
 * XREFs of NtDxgkVailConnect @ 0x1C0293E40
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
 *     ?EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ @ 0x1C004977C (-EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C025EAE8 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C029030C (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02907AC (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0291FAC (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall NtDxgkVailConnect(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _EX_RUNDOWN_REF *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int VmBusHostSubscribers; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  DXGSESSIONMGR *v32; // rbx
  __int64 v33; // r8
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  struct DXGPROCESS *v51; // r15
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  char v58; // al
  PVOID Object; // [rsp+20h] [rbp-60h] BYREF
  char v60; // [rsp+28h] [rbp-58h]
  _BYTE v61[16]; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF
  char v63; // [rsp+70h] [rbp-10h]

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v5);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v61, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
  if ( !*((_QWORD *)Current + 52) )
  {
    if ( *((_BYTE *)Current + 298) || g_OSTestSigningEnabled && (_BYTE)KdDebuggerEnabled )
    {
      if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v9, v8) + 76) )
      {
        Object = 0LL;
        v32 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v29, v28) + 74);
        if ( v32 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v31, v30);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v32,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( SessionDataForSpecifiedSession )
        {
          v39 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
          v18 = v39;
          if ( v39 >= 0 )
          {
            v63 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
            v51 = DXGPROCESS::GetCurrent(v47, v46);
            if ( *((_BYTE *)v51 + 424) )
            {
              v52 = WdLogNewEntry5_WdWarning(v49, v48, v50);
              *(_QWORD *)(v52 + 24) = -1073740528LL;
              WdLogEvent5_WdWarning(v52);
              LODWORD(v18) = -1073740528;
            }
            if ( (int)v18 >= 0 )
            {
              v53 = DXGSESSIONDATA::VailGuestConnect(SessionDataForSpecifiedSession);
              v18 = v53;
              if ( v53 >= 0 )
              {
                v58 = 1;
              }
              else
              {
                v57 = WdLogNewEntry5_WdWarning(v55, v54, v56);
                *(_QWORD *)(v57 + 24) = v18;
                WdLogEvent5_WdWarning(v57);
                v58 = 0;
              }
              *((_BYTE *)v51 + 424) = v58;
            }
            if ( v63 )
              KeUnstackDetachProcess(&ApcState);
          }
          else
          {
            v43 = WdLogNewEntry5_WdError(v41, v40, v42);
            *(_QWORD *)(v43 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v45, v44);
            *(_QWORD *)(v43 + 32) = v18;
            WdLogEvent5_WdError(v43);
          }
          if ( Object )
            ObfDereferenceObject(Object);
        }
        else
        {
          v36 = WdLogNewEntry5_WdError(v31, v30, v33);
          LODWORD(v18) = -1073741790;
          *(_QWORD *)(v36 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v38, v37);
          *(_QWORD *)(v36 + 32) = -1073741790LL;
          WdLogEvent5_WdError(v36);
        }
      }
      else
      {
        LODWORD(v18) = -1071775727;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28) + 24) = -1071775727LL;
      }
    }
    else
    {
      LODWORD(v18) = -1073741790;
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
      v25[3] = -1073741790LL;
      v25[4] = *((_QWORD *)Current + 52) != 0LL;
      v26 = *((unsigned __int8 *)Current + 298);
      v25[5] = v26;
      v25[6] = *((_QWORD *)DXGGLOBAL::GetGlobal(v26, v27) + 76);
      WdLogEvent5_WdWarning(v25);
    }
    goto LABEL_42;
  }
  v11 = (struct _EX_RUNDOWN_REF *)DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v61);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, (struct DXGFASTMUTEX *const)&v11[5], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
  if ( v11[13].Count )
  {
    VmBusHostSubscribers = DXGVAILOBJECT::CreateVmBusHostSubscribers((DXGVAILOBJECT *)v11);
    v18 = VmBusHostSubscribers;
    if ( VmBusHostSubscribers == -1073740528 )
    {
      v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v19 + 24) = -1073740528LL;
    }
    else
    {
      if ( VmBusHostSubscribers >= 0 )
      {
        v20 = DXGVAILOBJECT::EnableVmBusChannel((struct _KTHREAD **)v11, v15);
        v18 = v20;
        if ( v20 < 0 )
        {
          v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
          *(_QWORD *)(v24 + 24) = v18;
          WdLogEvent5_WdWarning(v24);
          DXGVAILOBJECT::DestroyVmBusHostSubscribers((DXGVAILOBJECT *)v11);
        }
        goto LABEL_13;
      }
      v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v19 + 24) = v18;
    }
    WdLogEvent5_WdWarning(v19);
  }
  else
  {
    LODWORD(v18) = -1071775727;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = -1071775727LL;
  }
LABEL_13:
  if ( v60 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object);
  if ( (int)v18 >= 0 )
    ExReInitializeRundownProtection(v11 + 10);
  DxgkCompositionObject::Release((DxgkCompositionObject *)v11);
LABEL_42:
  if ( v61[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v61);
  KeLeaveCriticalRegion();
  return (unsigned int)v18;
}
