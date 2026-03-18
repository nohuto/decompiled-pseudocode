/*
 * XREFs of xxxInjectTouchInput @ 0x1C01A9474
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C01F17E0 (NtUserInjectTouchInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsGpqForegroundAccessible @ 0x1C005DF64 (IsGpqForegroundAccessible.c)
 *     CheckGrantedAccess @ 0x1C005E558 (CheckGrantedAccess.c)
 *     MSGLUA_GPQFOREGROUND @ 0x1C0135EDC (MSGLUA_GPQFOREGROUND.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01A8428 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01A8840 (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01A8AA0 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01A8C18 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01A8C9C (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01A8D14 (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01A8D84 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01A8ED4 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     GetScreenRect @ 0x1C022B0B4 (GetScreenRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInjectTouchInput(unsigned int a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  int v2; // esi
  __int64 v4; // r12
  __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned int v13; // r8d
  char *v14; // rax
  unsigned int v15; // ecx
  int v16; // r9d
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
  int v31; // eax
  struct tagRECT *ScreenRect; // rax
  __int64 v33; // rbp
  bool v34; // cf
  int v35; // edi
  ULONG v36; // r14d
  int QpcBasedTouchStackTime; // eax
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned int *v40; // r9
  __int64 v41; // r10
  __int64 v42; // r8
  unsigned int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // rcx
  INT *v46; // r13
  char *v47; // rbp
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  INT DpiForSystem; // edi
  INT v50; // ebx
  INT v51; // eax
  INT v52; // ecx
  INT v53; // eax
  _DWORD *v54; // rax
  __int64 v55; // rcx
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
  v5 = *(_QWORD *)(gptiCurrent + 416LL);
  CheckCurrentInjectionConfiguration();
  if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput
    || !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 880LL), 0x20u) )
  {
    goto LABEL_2;
  }
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
    return 1LL;
  if ( (unsigned int)IsGpqForegroundAccessible(1u, v9) )
  {
    if ( *(_QWORD *)(v5 + 888) )
    {
      gppiInputProvider = v5;
      v11 = *(_QWORD *)(v5 + 888);
      v12 = *(unsigned int *)(v11 + 28);
      if ( (unsigned int)v4 > (unsigned int)v12 )
        goto LABEL_12;
      v66 = *((_DWORD *)a2 + 16);
      v57 = *(_DWORD *)(v11 + 40);
      v59 = *(_QWORD *)(v11 + 64);
      v58 = *((_QWORD *)a2 + 10);
      if ( !(unsigned int)SortTouchContacts(a2, v4) )
        goto LABEL_12;
      v13 = 0;
      if ( (_DWORD)v4 )
      {
        v14 = (char *)a2 + 12;
        while ( *((_DWORD *)v14 - 2) < (unsigned int)v12 && *((_DWORD *)v14 - 3) == 2 )
        {
          v15 = *(_DWORD *)v14 & 0xFFFF7FFF;
          if ( v15 != 0x40000 )
          {
            v6 = v15 - 0x20000;
            if ( (unsigned int)v6 > 6 || (v16 = 69, !_bittest(&v16, v6)) )
            {
              if ( v15 != 65542 && v15 != 262146 )
                break;
            }
          }
          v17 = *((_DWORD *)v14 + 22);
          if ( (v17 & 2) != 0 && *((_DWORD *)v14 + 31) >= 0x168u )
            break;
          if ( (v17 & 4) != 0 && *((_DWORD *)v14 + 32) > 0xFDE8u
            || *((_DWORD *)v14 + 21)
            || *((_DWORD *)v14 + 28)
            || *((_DWORD *)v14 + 30)
            || *((_DWORD *)v14 + 27)
            || *((_DWORD *)v14 + 29)
            || *((_DWORD *)v14 - 1)
            || *(_QWORD *)(v14 + 4)
            || *(_QWORD *)(v14 + 12)
            || *((_DWORD *)v14 + 7)
            || *((_DWORD *)v14 + 8)
            || *((_DWORD *)v14 + 9)
            || *((_DWORD *)v14 + 10)
            || *((_DWORD *)v14 + 11)
            || *((_DWORD *)v14 + 12)
            || *((_DWORD *)v14 + 14)
            || *((_DWORD *)v14 + 15)
            || *((_DWORD *)v14 + 16)
            || *((_DWORD *)v14 + 19) )
          {
            break;
          }
          ++v13;
          v14 += 144;
          if ( v13 >= (unsigned int)v4 )
            goto LABEL_46;
        }
        goto LABEL_12;
      }
LABEL_46:
      v18 = *(_QWORD *)(v5 + 888);
      v19 = *(_QWORD *)(v18 + 16);
      v61 = v19;
      if ( !*(_DWORD *)(*(_QWORD *)(v19 + 480) + 912LL) )
      {
        *(_DWORD *)(v18 + 32) = 0;
        *(_DWORD *)(*(_QWORD *)(v5 + 888) + 36LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v5 + 888) + 40LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v5 + 888) + 48LL) = 0;
        *(_QWORD *)(*(_QWORD *)(v5 + 888) + 56LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)(v5 + 888) + 64LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v5 + 888) + 72LL) = 0;
        v18 = *(_QWORD *)(v5 + 888);
      }
      v20 = *(struct tagINJECTED_CONTACT **)(v18 + 80);
      if ( v66 && v58 || *(_DWORD *)(v18 + 32) && v58 || (v21 = *(_QWORD *)(v18 + 56)) != 0 && v66 )
      {
        LODWORD(v22) = *(_DWORD *)(v18 + 36);
LABEL_55:
        xxxSendLastFrameTouchUp(v20, (struct DEVICEINFO *)v19, (unsigned int)v12, v22);
LABEL_12:
        v7 = 87LL;
        goto LABEL_3;
      }
      if ( v58 || (v23 = 1, v21) )
        v23 = 0;
      v24 = *(_QWORD *)(v19 + 480);
      v56 = v23;
      if ( !*(_DWORD *)(v24 + 912) && (_DWORD)v12 )
      {
        v25 = (_DWORD *)((char *)v20 + 8);
        v26 = v12;
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
      v27 = *(_DWORD *)(v24 + 912);
      v28 = v23 == 0;
      v29 = *(_QWORD *)(v5 + 888);
      v30 = 0;
      if ( v28 )
      {
        LOBYTE(v30) = v27 == 0;
        if ( !(unsigned int)_ValidateInjectionQpcCount(v58, v59, *(_QWORD *)(v24 + 712), v30, *(_DWORD *)(v29 + 72)) )
        {
          v22 = (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v5 + 888) + 56LL)) / gliQpcFreq;
          goto LABEL_55;
        }
      }
      else
      {
        LOBYTE(v30) = v27 == 0;
        LOBYTE(v31) = _ValidateInjectionTime(v66, v57, *(_DWORD *)(v24 + 704), v30, *(_DWORD *)(v29 + 48));
        if ( !v31 )
        {
          LODWORD(v22) = *(_DWORD *)(*(_QWORD *)(v5 + 888) + 36LL);
          goto LABEL_55;
        }
      }
      ScreenRect = (struct tagRECT *)GetScreenRect(&v63);
      v33 = *(_QWORD *)(v5 + 888);
      v60 = v33;
      v63 = *ScreenRect;
      if ( !(unsigned int)ValidateInjectedTouchFrame(v4, a2, v20, &v63, v12) )
      {
        xxxSendLastFrameTouchUp(v20, (struct DEVICEINFO *)v19, (unsigned int)v12, *(_DWORD *)(v33 + 36));
        v34 = (_DWORD)v67 != 0;
        LODWORD(v67) = -(int)v67;
        v7 = v34 ? 1460 : 87;
        goto LABEL_3;
      }
      v35 = v56;
      if ( v56 )
      {
        v36 = 10 * (v66 - *(_DWORD *)(v33 + 32));
        QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
        v38 = *(_QWORD *)(v19 + 480);
        if ( !*(_DWORD *)(v38 + 912) )
        {
          v38 = v66;
          *(_DWORD *)(v33 + 32) = v66;
          *(_DWORD *)(v33 + 36) = QpcBasedTouchStackTime;
LABEL_83:
          v36 = 0;
          goto LABEL_85;
        }
        if ( v36 )
          goto LABEL_85;
        v38 = *(unsigned int *)(v33 + 44);
        v36 = QpcBasedTouchStackTime - *(_DWORD *)(v33 + 36);
        if ( v36 > (unsigned int)v38 )
          goto LABEL_85;
        if ( (unsigned int)v38 - v36 < 5 )
        {
          v36 = v38 + 1;
LABEL_85:
          if ( (_DWORD)v12 )
          {
            v38 = 0LL;
            v6 = v12;
            do
            {
              v38 += 12LL;
              *(_DWORD *)(*(_QWORD *)(v33 + 80) + v38 - 4) = 0x40000;
              --v6;
            }
            while ( v6 );
          }
          if ( (_DWORD)v4 )
          {
            v40 = (unsigned int *)((char *)a2 + 4);
            v41 = v4;
            do
            {
              v42 = *v40;
              v43 = v40[2];
              v40 += 36;
              *(_DWORD *)(*(_QWORD *)(v33 + 80) + 12 * v42 + 8) = v43 & 0xFFFF7FFF;
              v6 = 3 * v42;
              v38 = *(_QWORD *)(v33 + 80);
              *(_QWORD *)(v38 + 12 * v42) = *(_QWORD *)(v40 - 29);
              --v41;
            }
            while ( v41 );
          }
          if ( (W32GetCurrentThreadDpiAwarenessContext(v38, v6) & 0xF) != 2 && (_DWORD)v4 )
          {
            v46 = (INT *)((char *)a2 + 116);
            v47 = (char *)a2 + 32;
            do
            {
              v67 = 0LL;
              CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v45, v44);
              LogicalToPhysicalDPIPoint(v47, v47, CurrentThreadDpiAwarenessContext, &v67);
              DpiForSystem = GetDpiForSystem();
              v50 = *(unsigned __int16 *)(*(_QWORD *)(v67 + 40) + 64LL);
              v51 = EngMulDiv(*(v46 - 1) - *(v46 - 3), v50, DpiForSystem);
              v52 = *v46 - *(v46 - 2);
              *(v46 - 1) = v51;
              v53 = EngMulDiv(v52, v50, DpiForSystem);
              v47 += 144;
              *(_QWORD *)(v46 - 3) = 0LL;
              *v46 = v53;
              v46 += 36;
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
            v54 = (_DWORD *)((char *)a2 + 36);
            v55 = (unsigned int)v4;
            do
            {
              *(v54 - 1) -= v62;
              *v54 -= DWORD1(v62);
              v54 += 36;
              --v55;
            }
            while ( v55 );
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
        v39 = 10000 * (v58 - *(_QWORD *)(v33 + 56)) / gliQpcFreq;
        v6 = 10000 * (v58 - *(_QWORD *)(v33 + 56)) % gliQpcFreq;
        v38 = *(_QWORD *)(v19 + 480);
        v36 = v39;
        if ( !*(_DWORD *)(v38 + 912) )
        {
          *(_QWORD *)(v33 + 56) = v58;
          goto LABEL_83;
        }
        if ( (_DWORD)v39 != *(_DWORD *)(v33 + 44) )
          goto LABEL_85;
      }
      v7 = 21LL;
      goto LABEL_3;
    }
LABEL_2:
    v7 = RtlNtStatusToDosError(-1073741790);
LABEL_3:
    UserSetLastError(v7, v6);
    return 0LL;
  }
  MSGLUA_GPQFOREGROUND(v10, v6);
  return 1LL;
}
