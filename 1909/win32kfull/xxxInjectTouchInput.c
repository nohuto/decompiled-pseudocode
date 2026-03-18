/*
 * XREFs of xxxInjectTouchInput @ 0x1C01DF794
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C0230380 (NtUserInjectTouchInput.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001BBC0 (WPP_RECORDER_SF_D.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C001F58C (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     CheckGrantedAccess @ 0x1C005FC14 (CheckGrantedAccess.c)
 *     GetScreenRect @ 0x1C01082C4 (GetScreenRect.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C0114088 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     WPP_RECORDER_SF_dd @ 0x1C01DC7DC (WPP_RECORDER_SF_dd.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01DDE38 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C01DE1CC (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01DE5DC (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01DE898 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01DEB88 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01DEC14 (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01DEC84 (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DECF4 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DEE5C (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     WPP_RECORDER_SF_didi @ 0x1C01DF2C4 (WPP_RECORDER_SF_didi.c)
 *     WPP_RECORDER_SF_ii @ 0x1C01DF3E4 (WPP_RECORDER_SF_ii.c)
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
  __int64 v23; // rcx
  ULONG v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int16 v36; // r9
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // edi
  char *v42; // rax
  unsigned int v43; // ecx
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // r13
  struct tagINJECTED_CONTACT *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  int v57; // edx
  int v58; // r9d
  int v59; // ecx
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
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rbp
  int v82; // ecx
  bool v83; // cf
  ULONG v84; // r14d
  int QpcBasedTouchStackTime; // eax
  unsigned __int64 v86; // rdx
  __int64 v87; // r9
  __int64 v88; // rcx
  unsigned int *v89; // r9
  __int64 v90; // r10
  unsigned int v91; // edx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  INT *v95; // r13
  char *v96; // rbp
  __int64 v97; // r15
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  INT DpiForSystem; // edi
  INT v103; // ebx
  INT v104; // eax
  INT v105; // ecx
  INT v106; // eax
  int v107; // edx
  _DWORD *v108; // rax
  int v109; // r8d
  __int64 v110; // rcx
  unsigned __int64 v111; // rax
  int v112; // [rsp+20h] [rbp-A8h]
  unsigned int v113; // [rsp+28h] [rbp-A0h]
  unsigned int v114; // [rsp+30h] [rbp-98h]
  int v115; // [rsp+50h] [rbp-78h]
  unsigned int v116; // [rsp+54h] [rbp-74h]
  unsigned __int64 v117; // [rsp+58h] [rbp-70h]
  __int64 v118; // [rsp+60h] [rbp-68h]
  struct tagRECT v119; // [rsp+68h] [rbp-60h] BYREF
  __int128 v120; // [rsp+78h] [rbp-50h]
  unsigned int v122; // [rsp+E0h] [rbp+18h]
  __int64 v123; // [rsp+E8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = a1;
  LODWORD(v123) = 0;
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
    MSGLUA_GPQFOREGROUND(v21, v20, v22);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = 22;
      goto LABEL_14;
    }
    return 1LL;
  }
  v23 = *(_QWORD *)(v5 + 888);
  if ( !v23 )
  {
    v24 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v24, v25, v26, v27);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = 23;
    goto LABEL_160;
  }
  InputTraceLogging::RIM::InjectInput(*(_QWORD *)(v23 + 16));
  gppiInputProvider = v5;
  v31 = *(_QWORD *)(v5 + 888);
  v32 = *(unsigned int *)(v31 + 28);
  if ( (unsigned int)v4 > (unsigned int)v32 )
  {
    UserSetLastError(87LL, v28, v29, v30);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v114 = v32;
    v36 = 24;
    v113 = v4;
LABEL_118:
    WPP_RECORDER_SF_dd(v34, v33, v35, v36, (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids, v113, v114);
    return 0LL;
  }
  v37 = *((_QWORD *)v3 + 10);
  v116 = *(_DWORD *)(v31 + 40);
  v117 = *(_QWORD *)(v31 + 64);
  v122 = *((_DWORD *)v3 + 16);
  v118 = v37;
  if ( !(unsigned int)SortTouchContacts(v3, v4) )
  {
    UserSetLastError(87LL, v38, v39, v40);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = 25;
    goto LABEL_160;
  }
  v41 = 0;
  if ( !(_DWORD)v4 )
  {
LABEL_56:
    v45 = *(_QWORD *)(v5 + 888);
    v46 = *(_QWORD *)(v45 + 16);
    *(_QWORD *)&v120 = v46;
    if ( !*(_DWORD *)(*(_QWORD *)(v46 + 480) + 952LL) )
    {
      *(_DWORD *)(v45 + 32) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 888) + 36LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 888) + 40LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v5 + 888) + 48LL) = 0;
      *(_QWORD *)(*(_QWORD *)(v5 + 888) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v5 + 888) + 64LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v5 + 888) + 72LL) = 0;
      v45 = *(_QWORD *)(v5 + 888);
    }
    v47 = *(struct tagINJECTED_CONTACT **)(v45 + 80);
    if ( v122 && v37 || *(_DWORD *)(v45 + 32) && v37 || (v48 = *(_QWORD *)(v45 + 56)) != 0 && v122 )
    {
      xxxSendLastFrameTouchUp(
        *(struct tagINJECTED_CONTACT **)(v45 + 80),
        (struct DEVICEINFO *)v46,
        (unsigned int)v32,
        *(_DWORD *)(v45 + 36));
      UserSetLastError(87LL, v49, v50, v51);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_didi(*(_QWORD *)(v5 + 888), v52, v53, v54, v112);
      return 0LL;
    }
    if ( v37 || (v61 = 1, v48) )
      v61 = 0;
    v62 = *(_QWORD *)(v46 + 480);
    v115 = v61;
    if ( !*(_DWORD *)(v62 + 952) && (_DWORD)v32 )
    {
      v63 = (_DWORD *)((char *)v47 + 8);
      v64 = v32;
      do
      {
        if ( ((*v63 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          *v63 = 0x40000;
          LODWORD(v123) = 1;
        }
        v63 += 3;
        --v64;
      }
      while ( v64 );
      v62 = *(_QWORD *)(v46 + 480);
    }
    v65 = *(_DWORD *)(v62 + 952);
    v66 = v61 == 0;
    v67 = *(_QWORD *)(v5 + 888);
    v68 = 0;
    if ( v66 )
    {
      LOBYTE(v68) = v65 == 0;
      if ( !_ValidateInjectionQpcCount(v37, v117, *(_QWORD *)(v62 + 752), v68, *(_DWORD *)(v67 + 72)) )
      {
        xxxSendLastFrameTouchUp(
          v47,
          (struct DEVICEINFO *)v46,
          (unsigned int)v32,
          (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v5 + 888) + 56LL)) / gliQpcFreq);
        UserSetLastError(87LL, v74, v75, v76);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ii(
            v77,
            2u,
            0x14u,
            0x2Du,
            (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids,
            v37,
            v117);
        return 0LL;
      }
    }
    else
    {
      LOBYTE(v68) = v65 == 0;
      if ( !_ValidateInjectionTime(v122, v116, *(_DWORD *)(v62 + 744), v68, *(_DWORD *)(v67 + 48)) )
      {
        xxxSendLastFrameTouchUp(
          v47,
          (struct DEVICEINFO *)v46,
          (unsigned int)v32,
          *(_DWORD *)(*(_QWORD *)(v5 + 888) + 36LL));
        UserSetLastError(87LL, v71, v72, v73);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v36 = 44;
        v114 = v116;
        v113 = v122;
        goto LABEL_118;
      }
    }
    v119 = (struct tagRECT)*GetScreenRect(&v119, v69, v70);
    v78 = ValidateInjectedTouchFrame(v4, v3, v47, &v119, v32);
    v81 = *(_QWORD *)(v5 + 888);
    *(_QWORD *)&v119.left = v81;
    if ( !v78 )
    {
      xxxSendLastFrameTouchUp(v47, (struct DEVICEINFO *)v46, (unsigned int)v32, *(_DWORD *)(v81 + 36));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v38) = 2;
        WPP_RECORDER_SF_D(v82, v38, 20, 46, (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids, v123);
      }
      v83 = (_DWORD)v123 != 0;
      LODWORD(v123) = -(int)v123;
      v55 = v83 ? 1460 : 87;
      goto LABEL_69;
    }
    if ( v115 )
    {
      v84 = 10 * (v122 - *(_DWORD *)(v81 + 32));
      QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
      v88 = *(_QWORD *)(v46 + 480);
      if ( *(_DWORD *)(v88 + 952) )
      {
        if ( !v84 )
        {
          v88 = *(unsigned int *)(v81 + 44);
          v84 = QpcBasedTouchStackTime - *(_DWORD *)(v81 + 36);
          if ( v84 <= (unsigned int)v88 )
          {
            if ( (unsigned int)v88 - v84 >= 5 )
            {
              UserSetLastError(21LL, v86, v79, v87);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return 0LL;
              v12 = 47;
              goto LABEL_160;
            }
            v84 = v88 + 1;
          }
        }
        goto LABEL_133;
      }
      *(_DWORD *)(v81 + 32) = v122;
      *(_DWORD *)(v81 + 36) = QpcBasedTouchStackTime;
    }
    else
    {
      v111 = (unsigned __int64)(10000 * (v37 - *(_QWORD *)(v81 + 56))) / gliQpcFreq;
      v86 = (unsigned __int64)(10000 * (v37 - *(_QWORD *)(v81 + 56))) % gliQpcFreq;
      v88 = *(_QWORD *)(v46 + 480);
      v84 = v111;
      if ( *(_DWORD *)(v88 + 952) )
      {
        if ( (_DWORD)v111 == *(_DWORD *)(v81 + 44) )
        {
          UserSetLastError(21LL, v86, v79, v80);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v12 = 48;
          goto LABEL_160;
        }
        goto LABEL_133;
      }
      *(_QWORD *)(v81 + 56) = v118;
    }
    v84 = 0;
LABEL_133:
    if ( (_DWORD)v32 )
    {
      v88 = 0LL;
      v86 = v32;
      do
      {
        v88 += 12LL;
        *(_DWORD *)(v88 + *(_QWORD *)(v81 + 80) - 4) = 0x40000;
        --v86;
      }
      while ( v86 );
    }
    if ( (_DWORD)v4 )
    {
      v89 = (unsigned int *)((char *)v3 + 4);
      v90 = v4;
      do
      {
        v79 = *v89;
        v91 = v89[2];
        v89 += 36;
        *(_DWORD *)(*(_QWORD *)(v81 + 80) + 12 * v79 + 8) = v91 & 0xFFFF7FFF;
        v86 = 3 * v79;
        v88 = *(_QWORD *)(v81 + 80);
        *(_QWORD *)(v88 + 12 * v79) = *(_QWORD *)(v89 - 29);
        --v90;
      }
      while ( v90 );
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v88, v86, v79) & 0xF) != 2 && (_DWORD)v4 )
    {
      v95 = (INT *)((char *)v3 + 116);
      v96 = (char *)v3 + 32;
      v97 = v4;
      do
      {
        v123 = 0LL;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v93, v92, v94);
        LogicalToPhysicalDPIPoint(v96, v96, CurrentThreadDpiAwarenessContext, &v123);
        DpiForSystem = GetDpiForSystem(v100, v99, v101);
        v103 = *(unsigned __int16 *)(*(_QWORD *)(v123 + 40) + 64LL);
        v104 = EngMulDiv(*(v95 - 1) - *(v95 - 3), v103, DpiForSystem);
        v105 = *v95 - *(v95 - 2);
        *(v95 - 1) = v104;
        v106 = EngMulDiv(v105, v103, DpiForSystem);
        v96 += 144;
        *(_QWORD *)(v95 - 3) = 0LL;
        *v95 = v106;
        v95 += 36;
        --v97;
      }
      while ( v97 );
      v81 = *(_QWORD *)&v119.left;
      v3 = a2;
      v46 = v120;
    }
    v120 = *(_OWORD *)(*(_QWORD *)(v46 + 480) + 160LL);
    if ( (_DWORD)v4 )
    {
      v107 = DWORD1(v120);
      v108 = (_DWORD *)((char *)v3 + 36);
      v109 = v120;
      v110 = v4;
      do
      {
        *(v108 - 1) -= v109;
        *v108 -= v107;
        v108 += 36;
        --v110;
      }
      while ( v110 );
    }
    *(_DWORD *)(v81 + 44) = v84;
    if ( v115 )
    {
      if ( v116 && !v122 )
        v2 = 1;
      *(_DWORD *)(v81 + 48) = v2;
      *(_DWORD *)(v81 + 40) = v122;
    }
    else
    {
      if ( v117 && !v118 )
        v2 = 1;
      *(_DWORD *)(v81 + 72) = v2;
      *(_QWORD *)(v81 + 64) = v118;
    }
    xxxSendToTouchStack((struct DEVICEINFO *)v46, v4, v3, v84);
    return 1LL;
  }
  v42 = (char *)v3 + 12;
  while ( 1 )
  {
    if ( *((_DWORD *)v42 - 2) >= (unsigned int)v32 )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v36 = 26;
      v114 = v32;
      v34 = 18LL * v41;
      v113 = *((_DWORD *)v3 + 36 * v41 + 1);
      goto LABEL_118;
    }
    if ( *((_DWORD *)v42 - 3) != 2 )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v58 = 27;
      v59 = 18 * v41;
      v60 = *((_DWORD *)v3 + 36 * v41);
LABEL_75:
      LOBYTE(v57) = 2;
      WPP_RECORDER_SF_D(v59, v57, 20, v58, (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids, v60);
      return 0LL;
    }
    v43 = *(_DWORD *)v42 & 0xFFFF7FFF;
    if ( v43 != 0x40000 )
    {
      v38 = v43 - 0x20000;
      if ( (unsigned int)v38 > 6 || (v39 = 69LL, !_bittest((const int *)&v39, v38)) )
      {
        if ( v43 != 65542 && v43 != 262146 )
          break;
      }
    }
    v44 = *((_DWORD *)v42 + 22);
    if ( (v44 & 2) != 0 && *((_DWORD *)v42 + 31) >= 0x168u )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v58 = 29;
      v59 = 18 * v41;
      v60 = *((_DWORD *)v3 + 36 * v41 + 34);
      goto LABEL_75;
    }
    if ( (v44 & 4) != 0 && *((_DWORD *)v42 + 32) > 0xFDE8u )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v58 = 30;
      v59 = 18 * v41;
      v60 = *((_DWORD *)v3 + 36 * v41 + 35);
      goto LABEL_75;
    }
    if ( *((_DWORD *)v42 + 21) )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 31;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v42 + 28) || *((_DWORD *)v42 + 30) || *((_DWORD *)v42 + 27) || *((_DWORD *)v42 + 29) )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 32;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v42 - 1) )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 33;
      goto LABEL_160;
    }
    if ( *(_QWORD *)(v42 + 4) )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 34;
      goto LABEL_160;
    }
    if ( *(_QWORD *)(v42 + 12) )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 35;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v42 + 7) || *((_DWORD *)v42 + 8) )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 36;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v42 + 9) || *((_DWORD *)v42 + 10) )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 37;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v42 + 11) || *((_DWORD *)v42 + 12) )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 38;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v42 + 14) )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 39;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v42 + 15) )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 40;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v42 + 16) )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 41;
      goto LABEL_160;
    }
    if ( *((_DWORD *)v42 + 19) )
    {
      UserSetLastError(87LL, v38, v39, v40);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v12 = 42;
      goto LABEL_160;
    }
    ++v41;
    v42 += 144;
    if ( v41 >= (unsigned int)v4 )
      goto LABEL_56;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v38) = 2;
    WPP_RECORDER_SF_D(
      18 * v41,
      v38,
      20,
      28,
      (__int64)&WPP_81c4e12c0ebf38014ae6d7913977bf9e_Traceguids,
      *((_DWORD *)v3 + 36 * v41 + 3));
  }
  v55 = 87LL;
LABEL_69:
  UserSetLastError(v55, v38, v39, v40);
  return 0LL;
}
