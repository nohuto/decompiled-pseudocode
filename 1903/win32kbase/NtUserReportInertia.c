/*
 * XREFs of NtUserReportInertia @ 0x1C0004670
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1C00047DC (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0004810 (-GetInstance@CInertiaManager@@SAPEAV1@XZ.c)
 *     WPP_RECORDER_SF_iDqqqq @ 0x1C000482C (WPP_RECORDER_SF_iDqqqq.c)
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0031954 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C003904C (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00392A4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0041A48 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0042A10 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 *     UserFindBaseWindowHandleLocked @ 0x1C01203F0 (UserFindBaseWindowHandleLocked.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C015D7A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1C017D7C8 (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x1C017E4B0 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 *     UserGetLastError @ 0x1C01A1E3C (UserGetLastError.c)
 */

_BOOL8 __fastcall NtUserReportInertia(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  ULONG64 v10; // r14
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r9d
  struct tagTHREADINFO *v14; // r12
  int v15; // edx
  char v16; // r15
  int v17; // ebx
  CInertiaManager *Instance; // rax
  bool v19; // al
  int v20; // edx
  __int64 v21; // rcx
  BOOL v22; // esi
  int v24; // r9d
  int v25; // r9d
  PVOID CurrentProcess; // rax
  int v27; // edx
  __int64 v28; // rcx
  int v29; // edx
  __int64 BaseWindowHandleLocked; // rax
  __int64 v31; // rcx
  int v32; // r9d
  int v33; // r15d
  __int64 v34; // rax
  int v35; // edx
  int v36; // edx
  int v37; // edi
  ULONG64 v38; // rcx
  __int128 *v39; // rcx
  CInertiaManager *v40; // rcx
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // r13
  struct CInputDest *v44; // r9
  bool v45; // al
  int v46; // edx
  char LastError; // bl
  char v48; // al
  int v49; // edx
  __int64 v50; // [rsp+68h] [rbp-280h] BYREF
  int v51; // [rsp+70h] [rbp-278h]
  unsigned __int64 v52; // [rsp+78h] [rbp-270h]
  double v53; // [rsp+88h] [rbp-260h] BYREF
  CInertiaManager *v54; // [rsp+90h] [rbp-258h]
  __int64 v55; // [rsp+98h] [rbp-250h]
  int v56; // [rsp+A0h] [rbp-248h]
  __int128 v57; // [rsp+B0h] [rbp-238h]
  __int128 v58; // [rsp+C0h] [rbp-228h]
  __int64 v59; // [rsp+D0h] [rbp-218h]
  __int128 v60; // [rsp+D8h] [rbp-210h]
  __int128 v61; // [rsp+E8h] [rbp-200h]
  __int128 v62; // [rsp+F8h] [rbp-1F0h]
  _DWORD v63[30]; // [rsp+110h] [rbp-1D8h] BYREF
  char v64; // [rsp+188h] [rbp-160h]
  _BYTE v65[40]; // [rsp+190h] [rbp-158h] BYREF
  _OWORD v66[3]; // [rsp+1B8h] [rbp-130h] BYREF
  _D3DMATRIX v67; // [rsp+1F0h] [rbp-F8h] BYREF
  _BYTE v68[128]; // [rsp+230h] [rbp-B8h] BYREF

  v52 = a1;
  v10 = a5;
  EnterCrit(0LL, 1LL);
  v14 = gptiCurrent;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_iDqqqq(v12, v11, (unsigned int)&WPP_RECORDER_INITIALIZED, v13);
  v15 = 0;
  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_102:
      v22 = 0;
      v28 = 87LL;
      goto LABEL_103;
    }
    v24 = 67;
LABEL_16:
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v15, 21, v24, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    goto LABEL_102;
  }
  if ( (a2 & 0xFFFFFFF8) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_102;
    v25 = 68;
LABEL_101:
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v15, 21, v25, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, a2);
    goto LABEL_102;
  }
  LOBYTE(v12) = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
    {
LABEL_99:
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_102;
      v25 = 69;
      goto LABEL_101;
    }
LABEL_7:
    if ( !(_BYTE)v12 )
    {
      v16 = 0;
      goto LABEL_9;
    }
    goto LABEL_99;
  }
  if ( (a2 & 2) != 0 )
    goto LABEL_7;
  v16 = 1;
LABEL_9:
  v17 = a2 & 4;
  if ( !v17 )
    goto LABEL_10;
  if ( a3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_102;
    v24 = 70;
    goto LABEL_16;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v12, 0LL);
  v27 = 0;
  if ( CurrentProcess )
    v27 = CurrentProcess == g_pepDwm;
  if ( !v27 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v27) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v27, 21, 71, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    }
    v22 = 0;
LABEL_31:
    v28 = 5LL;
LABEL_103:
    UserSetLastError(v28);
    goto LABEL_13;
  }
LABEL_10:
  Instance = CInertiaManager::GetInstance();
  v54 = Instance;
  if ( !v16 )
  {
    v19 = CInertiaManager::InvalidateInertiaInfo(Instance, *((_QWORD *)v14 + 52), v52);
    v22 = v19;
    if ( v19 )
      goto LABEL_12;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v20, 21, 83, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    }
    v22 = 0;
    goto LABEL_31;
  }
  memset(v63, 0, sizeof(v63));
  v64 = 0;
  if ( a4 )
  {
    BaseWindowHandleLocked = UserFindBaseWindowHandleLocked(a3, *((_QWORD *)v14 + 52), 0LL);
    if ( !BaseWindowHandleLocked )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v29) = 2;
        WPP_RECORDER_SF_q((_DWORD)gBaseLog, v29, 21, 72, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, a3);
      }
      v22 = 0;
LABEL_38:
      v31 = 1400LL;
LABEL_40:
      UserSetLastError(v31);
      CInputDest::SetEmpty((CInputDest *)v63);
      goto LABEL_13;
    }
    a3 = BaseWindowHandleLocked;
  }
  if ( !a5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v29) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v29, 21, 73, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    }
    v22 = 0;
    goto LABEL_48;
  }
  if ( v17 )
  {
    v33 = 1;
    if ( !a6 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v32 = 78;
      goto LABEL_46;
    }
  }
  else
  {
    v33 = 0;
    v34 = CInputDest::CInputDest(v68, a3, 2 - (unsigned int)(a4 != 0), 2LL);
    CInputDest::operator=(v63, v34);
    CInputDest::SetEmpty((CInputDest *)v68);
    if ( !v63[0]
      || CInputDest::TestWindowFlag((CInputDest *)v63, 0x480u)
      || CInputDest::TestWindowFlag((CInputDest *)v63, 0x380u) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v35) = 2;
        WPP_RECORDER_SF_q((_DWORD)gBaseLog, v35, 21, 74, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids, a3);
      }
      v22 = 0;
      goto LABEL_38;
    }
    if ( v63[23] == 2 && CInputDest::IsCompositionInput((CInputDest *)v63) && !a6 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v32 = 75;
LABEL_46:
      LOBYTE(v29) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v29, 21, v32, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
LABEL_47:
      v22 = 0;
LABEL_48:
      v31 = 87LL;
      goto LABEL_40;
    }
    if ( v14 != CInputDest::GetThreadInfo((CInputDest *)v63)
      && v14 != CInputDest::GetDelegateThreadInfo((CInputDest *)v63) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v32 = 76;
      goto LABEL_46;
    }
    v36 = 800;
    if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - *((_DWORD *)v14 + 322) > 0x7D0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = 2;
        WPP_RECORDER_SF_Dd(
          (_DWORD)gBaseLog,
          v36,
          21,
          77,
          (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
          *((_DWORD *)v14 + 322),
          (unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24);
      }
      v22 = 0;
      v31 = 5LL;
      goto LABEL_40;
    }
  }
  v37 = (*((_DWORD *)v14 + 306) >> 17) & 1;
  v50 = 0LL;
  v51 = 0;
  memset(v65, 0, sizeof(v65));
  memset(v66, 0, sizeof(v66));
  if ( a5 + 12 < a5 || a5 + 12 > MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v55 = *(_QWORD *)v10;
  v56 = *(_DWORD *)(v10 + 8);
  v50 = v55;
  v51 = v56;
  if ( a6 )
  {
    v38 = a6;
    if ( a6 + 40 < a6 || a6 + 40 > MmUserProbeAddress )
      v38 = MmUserProbeAddress;
    v57 = *(_OWORD *)v38;
    v58 = *(_OWORD *)(v38 + 16);
    v59 = *(_QWORD *)(v38 + 32);
    *(_OWORD *)v65 = v57;
    *(_OWORD *)&v65[16] = v58;
    *(_QWORD *)&v65[32] = v59;
  }
  if ( a4 )
  {
    v39 = (__int128 *)a4;
    if ( a4 + 48 < a4 || a4 + 48 > MmUserProbeAddress )
      v39 = (__int128 *)MmUserProbeAddress;
    v60 = *v39;
    v61 = v39[1];
    v62 = v39[2];
    v66[0] = v60;
    v66[1] = v61;
    v66[2] = v62;
  }
  memset(&v67, 0, sizeof(v67));
  if ( CInertiaManager::ValidateInertiaInfo(
         v40,
         (struct INERTIA_INFO *)&v50,
         (const struct INERTIA_REGION *)((unsigned __int64)v65 & -(__int64)(a6 != 0)),
         &v67,
         &v53) )
  {
    v43 = -(__int64)a4;
    v44 = (struct CInputDest *)v63;
    if ( v33 )
      v44 = 0LL;
    v45 = CInertiaManager::AddInertiaInfo(
            v54,
            v14,
            v52,
            v44,
            (struct tagInputRoutingInfo *)((unsigned __int64)v66 & -(__int64)(v43 != 0)),
            v37,
            v33,
            (const struct INERTIA_INFO *)&v50,
            v53,
            (const struct tagRECT *)((unsigned __int64)v65 & -(__int64)(a6 != 0)),
            (const struct _D3DMATRIX *)((unsigned __int64)&v67 & -(__int64)(a6 != 0)));
    v22 = v45;
    if ( v45 )
    {
      CInputDest::SetEmpty((CInputDest *)v63);
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v46) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v46, 21, 81, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    }
    v42 = 5LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v41) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v41, 21, 80, (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids);
    }
    v42 = 87LL;
  }
  v22 = 0;
  UserSetLastError(v42);
  CInputDest::SetEmpty((CInputDest *)v63);
LABEL_12:
  if ( !v22 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    v48 = UserGetLastError();
    LOBYTE(v49) = 2;
    WPP_RECORDER_SF_Dd(
      (_DWORD)gBaseLog,
      v49,
      21,
      84,
      (__int64)&WPP_82f020aa5a8e3e941fb8073f58c0e6dc_Traceguids,
      v48,
      LastError);
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v21);
  return v22;
}
