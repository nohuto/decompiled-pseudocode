/*
 * XREFs of xxxInjectTouchInput @ 0x1C01CBA28
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C0218BE0 (NtUserInjectTouchInput.c)
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C0006948 (MSGLUA_GPQFOREGROUND.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CheckGrantedAccess @ 0x1C00AA204 (CheckGrantedAccess.c)
 *     IsGpqForegroundAccessible @ 0x1C00AFFBC (IsGpqForegroundAccessible.c)
 *     GetScreenRect @ 0x1C00B9150 (GetScreenRect.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01CA560 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C01CA8F4 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01CAD78 (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01CAFD8 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01CB150 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01CB1DC (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01CB24C (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01CB2BC (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01CB418 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInjectTouchInput(unsigned int a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  int v2; // esi
  __int64 v4; // r12
  __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  char *v15; // rax
  unsigned int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r13
  struct tagINJECTED_CONTACT *v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // r9
  int v23; // r9d
  __int64 v24; // r8
  _DWORD *v25; // rcx
  unsigned __int64 v26; // rdx
  int v27; // eax
  bool v28; // zf
  __int64 v29; // rcx
  int v30; // r9d
  __int64 v31; // rdx
  struct tagRECT *ScreenRect; // rax
  __int64 v33; // rbp
  bool v34; // cf
  int v35; // edi
  ULONG v36; // r14d
  int QpcBasedTouchStackTime; // eax
  __int64 v38; // rcx
  unsigned int *v39; // r9
  __int64 v40; // r10
  __int64 v41; // r8
  unsigned int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rcx
  INT *v45; // r13
  char *v46; // rbp
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  INT DpiForSystem; // edi
  INT v49; // ebx
  INT v50; // eax
  INT v51; // ecx
  INT v52; // eax
  _DWORD *v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  int v56; // [rsp+30h] [rbp-88h]
  unsigned int v57; // [rsp+34h] [rbp-84h]
  unsigned __int64 v58; // [rsp+38h] [rbp-80h]
  unsigned __int64 v59; // [rsp+40h] [rbp-78h]
  __int64 v60; // [rsp+48h] [rbp-70h]
  __int64 v61; // [rsp+50h] [rbp-68h]
  __int128 v62; // [rsp+50h] [rbp-68h]
  struct tagRECT v63; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v66; // [rsp+D0h] [rbp+18h]
  __int64 v67; // [rsp+D8h] [rbp+20h] BYREF

  v2 = 0;
  v4 = a1;
  LODWORD(v67) = 0;
  v5 = *(_QWORD *)(gptiCurrent + 424LL);
  CheckCurrentInjectionConfiguration();
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput
    && (unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 888LL), 0x20u) )
  {
    if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
      return 1LL;
    if ( !(unsigned int)IsGpqForegroundAccessible(1u, v10) )
    {
      MSGLUA_GPQFOREGROUND();
      return 1LL;
    }
    v12 = *(_QWORD *)(v5 + 896);
    if ( v12 )
    {
      InputTraceLogging::RIM::InjectInput(*(_QWORD *)(v12 + 16));
      gppiInputProvider = v5;
      v13 = *(_QWORD *)(v5 + 896);
      v14 = *(unsigned int *)(v13 + 28);
      if ( (unsigned int)v4 > (unsigned int)v14 )
        goto LABEL_55;
      v66 = *((_DWORD *)a2 + 16);
      v57 = *(_DWORD *)(v13 + 40);
      v59 = *(_QWORD *)(v13 + 64);
      v58 = *((_QWORD *)a2 + 10);
      if ( !(unsigned int)SortTouchContacts(a2, v4) )
        goto LABEL_55;
      v8 = 0LL;
      if ( (_DWORD)v4 )
      {
        v15 = (char *)a2 + 12;
        while ( *((_DWORD *)v15 - 2) < (unsigned int)v14 && *((_DWORD *)v15 - 3) == 2 )
        {
          v16 = *(_DWORD *)v15 & 0xFFFF7FFF;
          if ( v16 != 0x40000 )
          {
            v6 = v16 - 0x20000;
            if ( (unsigned int)v6 > 6 || (v9 = 69LL, !_bittest((const int *)&v9, v6)) )
            {
              if ( v16 != 65542 && v16 != 262146 )
                break;
            }
          }
          v17 = *((_DWORD *)v15 + 22);
          if ( (v17 & 2) != 0 && *((_DWORD *)v15 + 31) >= 0x168u )
            break;
          if ( (v17 & 4) != 0 && *((_DWORD *)v15 + 32) > 0xFDE8u
            || *((_DWORD *)v15 + 21)
            || *((_DWORD *)v15 + 28)
            || *((_DWORD *)v15 + 30)
            || *((_DWORD *)v15 + 27)
            || *((_DWORD *)v15 + 29)
            || *((_DWORD *)v15 - 1)
            || *(_QWORD *)(v15 + 4)
            || *(_QWORD *)(v15 + 12)
            || *((_DWORD *)v15 + 7)
            || *((_DWORD *)v15 + 8)
            || *((_DWORD *)v15 + 9)
            || *((_DWORD *)v15 + 10)
            || *((_DWORD *)v15 + 11)
            || *((_DWORD *)v15 + 12)
            || *((_DWORD *)v15 + 14)
            || *((_DWORD *)v15 + 15)
            || *((_DWORD *)v15 + 16)
            || *((_DWORD *)v15 + 19) )
          {
            break;
          }
          v8 = (unsigned int)(v8 + 1);
          v15 += 144;
          if ( (unsigned int)v8 >= (unsigned int)v4 )
            goto LABEL_45;
        }
        goto LABEL_55;
      }
LABEL_45:
      v18 = *(_QWORD *)(v5 + 896);
      v19 = *(_QWORD *)(v18 + 16);
      v61 = v19;
      if ( !*(_DWORD *)(*(_QWORD *)(v19 + 480) + 944LL) )
      {
        *(_DWORD *)(v18 + 32) = 0;
        *(_DWORD *)(*(_QWORD *)(v5 + 896) + 36LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v5 + 896) + 40LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v5 + 896) + 48LL) = 0;
        *(_QWORD *)(*(_QWORD *)(v5 + 896) + 56LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)(v5 + 896) + 64LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v5 + 896) + 72LL) = 0;
        v18 = *(_QWORD *)(v5 + 896);
      }
      v20 = *(struct tagINJECTED_CONTACT **)(v18 + 80);
      if ( v66 && v58 || *(_DWORD *)(v18 + 32) && v58 || (v21 = *(_QWORD *)(v18 + 56)) != 0 && v66 )
      {
        LODWORD(v22) = *(_DWORD *)(v18 + 36);
LABEL_54:
        xxxSendLastFrameTouchUp(v20, (struct DEVICEINFO *)v19, (unsigned int)v14, v22);
LABEL_55:
        v7 = 87LL;
        goto LABEL_56;
      }
      if ( v58 || (v23 = 1, v21) )
        v23 = 0;
      v24 = *(_QWORD *)(v19 + 480);
      v56 = v23;
      if ( !*(_DWORD *)(v24 + 944) && (_DWORD)v14 )
      {
        v25 = (_DWORD *)((char *)v20 + 8);
        v26 = v14;
        do
        {
          if ( ((*v25 - 0x20000) & 0xFFFDFFFF) != 0 )
          {
            *v25 = 0x40000;
            LODWORD(v67) = 1;
          }
          v25 += 3;
          --v26;
        }
        while ( v26 );
        v24 = *(_QWORD *)(v19 + 480);
      }
      v27 = *(_DWORD *)(v24 + 944);
      v28 = v23 == 0;
      v29 = *(_QWORD *)(v5 + 896);
      v30 = 0;
      if ( v28 )
      {
        LOBYTE(v30) = v27 == 0;
        if ( !_ValidateInjectionQpcCount(v58, v59, *(_QWORD *)(v24 + 744), v30, *(_DWORD *)(v29 + 72)) )
        {
          v22 = (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v5 + 896) + 56LL)) / gliQpcFreq;
          goto LABEL_54;
        }
      }
      else
      {
        LOBYTE(v30) = v27 == 0;
        if ( !_ValidateInjectionTime(v66, v57, *(_DWORD *)(v24 + 736), v30, *(_DWORD *)(v29 + 48)) )
        {
          LODWORD(v22) = *(_DWORD *)(*(_QWORD *)(v5 + 896) + 36LL);
          goto LABEL_54;
        }
      }
      ScreenRect = (struct tagRECT *)GetScreenRect((__m128i *)&v63, v31);
      v33 = *(_QWORD *)(v5 + 896);
      v60 = v33;
      v63 = *ScreenRect;
      if ( !(unsigned int)ValidateInjectedTouchFrame(v4, a2, v20, &v63, v14) )
      {
        xxxSendLastFrameTouchUp(v20, (struct DEVICEINFO *)v19, (unsigned int)v14, *(_DWORD *)(v33 + 36));
        v34 = (_DWORD)v67 != 0;
        LODWORD(v67) = -(int)v67;
        v7 = v34 ? 1460 : 87;
        goto LABEL_56;
      }
      v35 = v56;
      if ( v56 )
      {
        v36 = 10 * (v66 - *(_DWORD *)(v33 + 32));
        QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
        v38 = *(_QWORD *)(v19 + 480);
        if ( !*(_DWORD *)(v38 + 944) )
        {
          v38 = v66;
          *(_DWORD *)(v33 + 32) = v66;
          *(_DWORD *)(v33 + 36) = QpcBasedTouchStackTime;
LABEL_102:
          v36 = 0;
          goto LABEL_81;
        }
        if ( v36 )
          goto LABEL_81;
        v38 = *(unsigned int *)(v33 + 44);
        v36 = QpcBasedTouchStackTime - *(_DWORD *)(v33 + 36);
        if ( v36 > (unsigned int)v38 )
          goto LABEL_81;
        if ( (unsigned int)v38 - v36 < 5 )
        {
          v36 = v38 + 1;
LABEL_81:
          if ( (_DWORD)v14 )
          {
            v38 = 0LL;
            v6 = v14;
            do
            {
              v38 += 12LL;
              *(_DWORD *)(v38 + *(_QWORD *)(v33 + 80) - 4) = 0x40000;
              --v6;
            }
            while ( v6 );
          }
          if ( (_DWORD)v4 )
          {
            v39 = (unsigned int *)((char *)a2 + 4);
            v40 = v4;
            do
            {
              v41 = *v39;
              v42 = v39[2];
              v39 += 36;
              *(_DWORD *)(*(_QWORD *)(v33 + 80) + 12 * v41 + 8) = v42 & 0xFFFF7FFF;
              v6 = 3 * v41;
              v38 = *(_QWORD *)(v33 + 80);
              *(_QWORD *)(v38 + 12 * v41) = *(_QWORD *)(v39 - 29);
              --v40;
            }
            while ( v40 );
          }
          if ( (W32GetCurrentThreadDpiAwarenessContext(v38, v6) & 0xF) != 2 && (_DWORD)v4 )
          {
            v45 = (INT *)((char *)a2 + 116);
            v46 = (char *)a2 + 32;
            do
            {
              v67 = 0LL;
              CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v44, v43);
              LogicalToPhysicalDPIPoint(v46, v46, CurrentThreadDpiAwarenessContext, &v67);
              DpiForSystem = GetDpiForSystem();
              v49 = *(unsigned __int16 *)(*(_QWORD *)(v67 + 40) + 64LL);
              v50 = EngMulDiv(*(v45 - 1) - *(v45 - 3), v49, DpiForSystem);
              v51 = *v45 - *(v45 - 2);
              *(v45 - 1) = v50;
              v52 = EngMulDiv(v51, v49, DpiForSystem);
              v46 += 144;
              *(_QWORD *)(v45 - 3) = 0LL;
              *v45 = v52;
              v45 += 36;
              --v4;
            }
            while ( v4 );
            v33 = v60;
            v19 = v61;
            LODWORD(v4) = a1;
            v35 = v56;
          }
          v62 = *(_OWORD *)(*(_QWORD *)(v19 + 480) + 160LL);
          if ( (_DWORD)v4 )
          {
            v53 = (_DWORD *)((char *)a2 + 36);
            v54 = (unsigned int)v4;
            do
            {
              *(v53 - 1) -= v62;
              *v53 -= DWORD1(v62);
              v53 += 36;
              --v54;
            }
            while ( v54 );
          }
          *(_DWORD *)(v33 + 44) = v36;
          if ( v35 )
          {
            if ( v57 )
            {
              if ( !v66 )
                v2 = 1;
            }
            *(_DWORD *)(v33 + 48) = v2;
            *(_DWORD *)(v33 + 40) = v66;
          }
          else
          {
            if ( v59 && !v58 )
              v2 = 1;
            *(_DWORD *)(v33 + 72) = v2;
            *(_QWORD *)(v33 + 64) = v58;
          }
          xxxSendToTouchStack((struct DEVICEINFO *)v19, v4, a2, v36);
          return 1LL;
        }
      }
      else
      {
        v8 = v58;
        v55 = 10000 * (v58 - *(_QWORD *)(v33 + 56)) / gliQpcFreq;
        v6 = 10000 * (v58 - *(_QWORD *)(v33 + 56)) % gliQpcFreq;
        v38 = *(_QWORD *)(v19 + 480);
        v36 = v55;
        if ( !*(_DWORD *)(v38 + 944) )
        {
          *(_QWORD *)(v33 + 56) = v58;
          goto LABEL_102;
        }
        if ( (_DWORD)v55 != *(_DWORD *)(v33 + 44) )
          goto LABEL_81;
      }
      v7 = 21LL;
      goto LABEL_56;
    }
  }
  v7 = RtlNtStatusToDosError(-1073741790);
LABEL_56:
  UserSetLastError(v7, v6, v8, v9);
  return 0LL;
}
