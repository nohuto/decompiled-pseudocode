/*
 * XREFs of xxxInjectTouchInput @ 0x1C01DF914
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C02309A0 (NtUserInjectTouchInput.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001B498 (WPP_RECORDER_SF_D.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C001DB9C (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     CheckGrantedAccess @ 0x1C00BE534 (CheckGrantedAccess.c)
 *     GetScreenRect @ 0x1C012D034 (GetScreenRect.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C013A088 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     WPP_RECORDER_SF_dd @ 0x1C01DC95C (WPP_RECORDER_SF_dd.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01DDFB8 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C01DE34C (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01DE75C (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01DEA18 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01DED08 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01DED94 (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01DEE04 (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DEE74 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DEFDC (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     WPP_RECORDER_SF_didi @ 0x1C01DF444 (WPP_RECORDER_SF_didi.c)
 *     WPP_RECORDER_SF_ii @ 0x1C01DF564 (WPP_RECORDER_SF_ii.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInjectTouchInput(unsigned int a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  int v2; // esi
  struct tagPOINTER_TOUCH_INFO *v3; // r15
  __int64 v4; // r12
  __int64 v5; // rbp
  ULONG v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  int v11; // ecx
  int v12; // r9d
  int v13; // edx
  ULONG v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  ULONG v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int16 v37; // r9
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v42; // edi
  char *v43; // rax
  unsigned int v44; // ecx
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // r13
  struct tagINJECTED_CONTACT *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  unsigned __int16 v58; // r9
  __int64 v59; // rcx
  int v60; // eax
  int v61; // r9d
  __int64 v62; // r8
  _DWORD *v63; // rcx
  unsigned __int64 v64; // rdx
  int v65; // eax
  bool v66; // zf
  __int64 v67; // rcx
  int v68; // r9d
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // r8
  unsigned int *v81; // r9
  __int64 v82; // rbp
  __int64 v83; // rcx
  bool v84; // cf
  ULONG v85; // r14d
  int QpcBasedTouchStackTime; // eax
  unsigned __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r10
  unsigned int v90; // edx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  INT *v95; // r13
  char *v96; // rbp
  __int64 v97; // r15
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  INT DpiForSystem; // edi
  INT v104; // ebx
  INT v105; // eax
  INT v106; // ecx
  INT v107; // eax
  int v108; // edx
  _DWORD *v109; // rax
  int v110; // r8d
  __int64 v111; // rcx
  unsigned __int64 v112; // rax
  int v113; // [rsp+20h] [rbp-A8h]
  unsigned int v114; // [rsp+28h] [rbp-A0h]
  unsigned int v115; // [rsp+30h] [rbp-98h]
  int v116; // [rsp+50h] [rbp-78h]
  unsigned int v117; // [rsp+54h] [rbp-74h]
  unsigned __int64 v118; // [rsp+58h] [rbp-70h]
  __int64 v119; // [rsp+60h] [rbp-68h]
  struct tagRECT v120; // [rsp+68h] [rbp-60h] BYREF
  __int128 v121; // [rsp+78h] [rbp-50h]
  unsigned int v123; // [rsp+E0h] [rbp+18h]
  __int64 v124; // [rsp+E8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = a1;
  LODWORD(v124) = 0;
  v5 = *(_QWORD *)(gptiCurrent + 416LL);
  CheckCurrentInjectionConfiguration();
  if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput )
  {
    v6 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v6, v7, v8, v9);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = 19;
LABEL_160:
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_(v11, v10, 20, v12, (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids);
    return 0LL;
  }
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 888LL), 0x20u) )
  {
    v14 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v14, v15, v16, v17);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = 20;
    goto LABEL_160;
  }
  v18 = gptiBlockInput;
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = 21;
LABEL_14:
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(v18, v13, 20, v19, (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids);
      return 1LL;
    }
    return 1LL;
  }
  if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1u) )
  {
    MSGLUA_GPQFOREGROUND(v21, v20, v22, v23);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = 22;
      goto LABEL_14;
    }
    return 1LL;
  }
  v24 = *(_QWORD *)(v5 + 888);
  if ( !v24 )
  {
    v25 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v25, v26, v27, v28);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = 23;
    goto LABEL_160;
  }
  InputTraceLogging::RIM::InjectInput(*(_QWORD *)(v24 + 16));
  gppiInputProvider = v5;
  v32 = *(_QWORD *)(v5 + 888);
  v33 = *(unsigned int *)(v32 + 28);
  if ( (unsigned int)v4 > (unsigned int)v33 )
  {
    UserSetLastError(87LL, v29, v30, v31);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v115 = v33;
    v37 = 24;
    v114 = v4;
LABEL_118:
    WPP_RECORDER_SF_dd(v35, v34, v36, v37, (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids, v114, v115);
    return 0LL;
  }
  v38 = *((_QWORD *)v3 + 10);
  v117 = *(_DWORD *)(v32 + 40);
  v118 = *(_QWORD *)(v32 + 64);
  v123 = *((_DWORD *)v3 + 16);
  v119 = v38;
  if ( !(unsigned int)SortTouchContacts((__int64)v3, v4) )
  {
    UserSetLastError(87LL, v39, v40, v41);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = 25;
    goto LABEL_160;
  }
  v42 = 0;
  if ( !(_DWORD)v4 )
  {
LABEL_56:
    v46 = *(_QWORD *)(v5 + 888);
    v47 = *(_QWORD *)(v46 + 16);
    *(_QWORD *)&v121 = v47;
    if ( !*(_DWORD *)(*(_QWORD *)(v47 + 480) + 952LL) )
    {
      *(_DWORD *)(v46 + 32) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 888) + 36LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 888) + 40LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 888) + 48LL) = 0;
      *(_QWORD *)(*(_QWORD *)(v5 + 888) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v5 + 888) + 64LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v5 + 888) + 72LL) = 0;
      v46 = *(_QWORD *)(v5 + 888);
    }
    v48 = *(struct tagINJECTED_CONTACT **)(v46 + 80);
    if ( v123 && v38 || *(_DWORD *)(v46 + 32) && v38 || (v49 = *(_QWORD *)(v46 + 56)) != 0 && v123 )
    {
      xxxSendLastFrameTouchUp(
        *(struct tagINJECTED_CONTACT **)(v46 + 80),
        (struct DEVICEINFO *)v47,
        (unsigned int)v33,
        *(_DWORD *)(v46 + 36));
      UserSetLastError(87LL, v50, v51, v52);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_didi(*(_QWORD *)(v5 + 888), v53, v54, v55, v113);
      return 0LL;
    }
    if ( v38 || (v61 = 1, v49) )
      v61 = 0;
    v62 = *(_QWORD *)(v47 + 480);
    v116 = v61;
    if ( !*(_DWORD *)(v62 + 952) && (_DWORD)v33 )
    {
      v63 = (_DWORD *)((char *)v48 + 8);
      v64 = v33;
      do
      {
        if ( ((*v63 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          *v63 = 0x40000;
          LODWORD(v124) = 1;
        }
        v63 += 3;
        --v64;
      }
      while ( v64 );
      v62 = *(_QWORD *)(v47 + 480);
    }
    v65 = *(_DWORD *)(v62 + 952);
    v66 = v61 == 0;
    v67 = *(_QWORD *)(v5 + 888);
    v68 = 0;
    if ( v66 )
    {
      LOBYTE(v68) = v65 == 0;
      if ( !_ValidateInjectionQpcCount(v38, v118, *(_QWORD *)(v62 + 752), v68, *(_DWORD *)(v67 + 72)) )
      {
        xxxSendLastFrameTouchUp(
          v48,
          (struct DEVICEINFO *)v47,
          (unsigned int)v33,
          (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v5 + 888) + 56LL)) / gliQpcFreq);
        UserSetLastError(87LL, v75, v76, v77);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ii(
            v78,
            2u,
            0x14u,
            0x2Du,
            (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids,
            v38,
            v118);
        return 0LL;
      }
    }
    else
    {
      LOBYTE(v68) = v65 == 0;
      if ( !_ValidateInjectionTime(v123, v117, *(_DWORD *)(v62 + 744), v68, *(_DWORD *)(v67 + 48)) )
      {
        xxxSendLastFrameTouchUp(
          v48,
          (struct DEVICEINFO *)v47,
          (unsigned int)v33,
          *(_DWORD *)(*(_QWORD *)(v5 + 888) + 36LL));
        UserSetLastError(87LL, v72, v73, v74);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v37 = 44;
        v115 = v117;
        v114 = v123;
        goto LABEL_118;
      }
    }
    v120 = (struct tagRECT)*GetScreenRect(&v120, v69, v70, v71);
    v79 = ValidateInjectedTouchFrame(v4, v3, v48, &v120, v33);
    v82 = *(_QWORD *)(v5 + 888);
    *(_QWORD *)&v120.left = v82;
    if ( !v79 )
    {
      xxxSendLastFrameTouchUp(v48, (struct DEVICEINFO *)v47, (unsigned int)v33, *(_DWORD *)(v82 + 36));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(v83, 2u, 0x14u, 0x2Eu, (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids, v124);
      v84 = (_DWORD)v124 != 0;
      LODWORD(v124) = -(int)v124;
      v56 = v84 ? 1460 : 87;
      goto LABEL_69;
    }
    if ( v116 )
    {
      v85 = 10 * (v123 - *(_DWORD *)(v82 + 32));
      QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
      v88 = *(_QWORD *)(v47 + 480);
      if ( *(_DWORD *)(v88 + 952) )
      {
        if ( !v85 )
        {
          v88 = *(unsigned int *)(v82 + 44);
          v85 = QpcBasedTouchStackTime - *(_DWORD *)(v82 + 36);
          if ( v85 <= (unsigned int)v88 )
          {
            if ( (unsigned int)v88 - v85 >= 5 )
            {
              UserSetLastError(21LL, v87, v80, (__int64)v81);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return 0LL;
              v12 = 47;
              goto LABEL_160;
            }
            v85 = v88 + 1;
          }
        }
        goto LABEL_133;
      }
      *(_DWORD *)(v82 + 32) = v123;
      *(_DWORD *)(v82 + 36) = QpcBasedTouchStackTime;
    }
    else
    {
      v112 = (unsigned __int64)(10000 * (v38 - *(_QWORD *)(v82 + 56))) / gliQpcFreq;
      v87 = (unsigned __int64)(10000 * (v38 - *(_QWORD *)(v82 + 56))) % gliQpcFreq;
      v88 = *(_QWORD *)(v47 + 480);
      v85 = v112;
      if ( *(_DWORD *)(v88 + 952) )
      {
        if ( (_DWORD)v112 == *(_DWORD *)(v82 + 44) )
        {
          UserSetLastError(21LL, v87, v80, (__int64)v81);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v12 = 48;
          goto LABEL_160;
        }
        goto LABEL_133;
      }
      *(_QWORD *)(v82 + 56) = v119;
    }
    v85 = 0;
LABEL_133:
    if ( (_DWORD)v33 )
    {
      v88 = 0LL;
      v87 = v33;
      do
      {
        v88 += 12LL;
        *(_DWORD *)(v88 + *(_QWORD *)(v82 + 80) - 4) = 0x40000;
        --v87;
      }
      while ( v87 );
    }
    if ( (_DWORD)v4 )
    {
      v81 = (unsigned int *)((char *)v3 + 4);
      v89 = v4;
      do
      {
        v80 = *v81;
        v90 = v81[2];
        v81 += 36;
        *(_DWORD *)(*(_QWORD *)(v82 + 80) + 12 * v80 + 8) = v90 & 0xFFFF7FFF;
        v87 = 3 * v80;
        v88 = *(_QWORD *)(v82 + 80);
        *(_QWORD *)(v88 + 12 * v80) = *(_QWORD *)(v81 - 29);
        --v89;
      }
      while ( v89 );
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v88, v87, v80, (__int64)v81) & 0xF) != 2 && (_DWORD)v4 )
    {
      v95 = (INT *)((char *)v3 + 116);
      v96 = (char *)v3 + 32;
      v97 = v4;
      do
      {
        v124 = 0LL;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v92, v91, v93, v94);
        LogicalToPhysicalDPIPoint(v96, v96, CurrentThreadDpiAwarenessContext, &v124);
        DpiForSystem = GetDpiForSystem(v100, v99, v101, v102);
        v104 = *(unsigned __int16 *)(*(_QWORD *)(v124 + 40) + 64LL);
        v105 = EngMulDiv(*(v95 - 1) - *(v95 - 3), v104, DpiForSystem);
        v106 = *v95 - *(v95 - 2);
        *(v95 - 1) = v105;
        v107 = EngMulDiv(v106, v104, DpiForSystem);
        v96 += 144;
        *(_QWORD *)(v95 - 3) = 0LL;
        *v95 = v107;
        v95 += 36;
        --v97;
      }
      while ( v97 );
      v82 = *(_QWORD *)&v120.left;
      v3 = a2;
      v47 = v121;
    }
    v121 = *(_OWORD *)(*(_QWORD *)(v47 + 480) + 160LL);
    if ( (_DWORD)v4 )
    {
      v108 = DWORD1(v121);
      v109 = (_DWORD *)((char *)v3 + 36);
      v110 = v121;
      v111 = v4;
      do
      {
        *(v109 - 1) -= v110;
        *v109 -= v108;
        v109 += 36;
        --v111;
      }
      while ( v111 );
    }
    *(_DWORD *)(v82 + 44) = v85;
    if ( v116 )
    {
      if ( v117 && !v123 )
        v2 = 1;
      *(_DWORD *)(v82 + 48) = v2;
      *(_DWORD *)(v82 + 40) = v123;
    }
    else
    {
      if ( v118 && !v119 )
        v2 = 1;
      *(_DWORD *)(v82 + 72) = v2;
      *(_QWORD *)(v82 + 64) = v119;
    }
    xxxSendToTouchStack((struct DEVICEINFO *)v47, v4, v3, v85);
    return 1LL;
  }
  v43 = (char *)v3 + 12;
  while ( 1 )
  {
    if ( *((_DWORD *)v43 - 2) >= (unsigned int)v33 )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v37 = 26;
      v115 = v33;
      v35 = 18LL * v42;
      v114 = *((_DWORD *)v3 + 36 * v42 + 1);
      goto LABEL_118;
    }
    if ( *((_DWORD *)v43 - 3) != 2 )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v58 = 27;
      v59 = 18LL * v42;
      v60 = *((_DWORD *)v3 + 36 * v42);
LABEL_75:
      WPP_RECORDER_SF_D(v59, 2u, 0x14u, v58, (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids, v60);
      return 0LL;
    }
    v44 = *(_DWORD *)v43 & 0xFFFF7FFF;
    if ( v44 != 0x40000 )
    {
      v39 = v44 - 0x20000;
      if ( (unsigned int)v39 > 6 || (v40 = 69LL, !_bittest((const int *)&v40, v39)) )
      {
        if ( v44 != 65542 && v44 != 262146 )
          break;
      }
    }
    v45 = *((_DWORD *)v43 + 22);
    if ( (v45 & 2) != 0 && *((_DWORD *)v43 + 31) >= 0x168u )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v58 = 29;
      v59 = 18LL * v42;
      v60 = *((_DWORD *)v3 + 36 * v42 + 34);
      goto LABEL_75;
    }
    if ( (v45 & 4) != 0 && *((_DWORD *)v43 + 32) > 0xFDE8u )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v58 = 30;
      v59 = 18LL * v42;
      v60 = *((_DWORD *)v3 + 36 * v42 + 35);
      goto LABEL_75;
    }
    if ( *((_DWORD *)v43 + 21) )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 31;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v43 + 28) || *((_DWORD *)v43 + 30) || *((_DWORD *)v43 + 27) || *((_DWORD *)v43 + 29) )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 32;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v43 - 1) )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 33;
      goto LABEL_160;
    }
    if ( *(_QWORD *)(v43 + 4) )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 34;
      goto LABEL_160;
    }
    if ( *(_QWORD *)(v43 + 12) )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 35;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v43 + 7) || *((_DWORD *)v43 + 8) )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 36;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v43 + 9) || *((_DWORD *)v43 + 10) )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 37;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v43 + 11) || *((_DWORD *)v43 + 12) )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 38;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v43 + 14) )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 39;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v43 + 15) )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 40;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v43 + 16) )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 41;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v43 + 19) )
    {
      UserSetLastError(87LL, v39, v40, v41);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 42;
      goto LABEL_160;
    }
    ++v42;
    v43 += 144;
    if ( v42 >= (unsigned int)v4 )
      goto LABEL_56;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      18LL * v42,
      2u,
      0x14u,
      0x1Cu,
      (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids,
      *((_DWORD *)v3 + 36 * v42 + 3));
  v56 = 87LL;
LABEL_69:
  UserSetLastError(v56, v39, v40, v41);
  return 0LL;
}
