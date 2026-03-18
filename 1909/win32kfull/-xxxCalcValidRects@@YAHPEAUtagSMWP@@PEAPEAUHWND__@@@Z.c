/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006F578
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0019C98 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C001A430 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C001B078 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     _FChildVisible @ 0x1C0024018 (_FChildVisible.c)
 *     xxxCheckFullScreen @ 0x1C0037A28 (xxxCheckFullScreen.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     GetNewMonitor @ 0x1C006B820 (GetNewMonitor.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006C520 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     GetRect @ 0x1C006CABC (GetRect.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C006F4DC (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0070208 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00CC148 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00CC188 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C00EDC84 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C00F4FD8 (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 *     GetAppCompatFlags @ 0x1C00F6E70 (GetAppCompatFlags.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0109094 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01D32D8 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E796C (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1, HWND *a2)
{
  HWND v3; // r12
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 result; // rax
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 *v17; // rdi
  int v18; // esi
  unsigned __int64 v19; // r14
  struct _KTHREAD *v20; // rbx
  __int64 v21; // rbx
  __int64 *v22; // rsi
  __int64 v23; // rsi
  struct _KTHREAD *v24; // r15
  __int64 v25; // rbx
  __int64 *v26; // rax
  int v27; // ebx
  unsigned __int64 v28; // r13
  int v29; // r12d
  int v30; // r15d
  int v31; // ebx
  unsigned int v32; // eax
  __int64 v33; // rdx
  int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // eax
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // edx
  int v43; // ebx
  int v44; // r10d
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // r14d
  int v48; // r13d
  int v49; // edx
  __int64 v50; // rcx
  _DWORD *v51; // rcx
  int v52; // r9d
  int v53; // r8d
  int v54; // edx
  int v55; // r15d
  int v56; // edx
  LONG *v57; // r12
  int v58; // eax
  __int64 Prop; // rax
  int v60; // r8d
  int v61; // ecx
  unsigned int v62; // edx
  unsigned int v63; // edx
  __int64 v64; // rdx
  int v65; // edx
  unsigned int v66; // r9d
  __int64 v67; // r8
  int v68; // r15d
  __int64 v69; // rax
  __int64 v70; // rbx
  __int16 v71; // r14
  LONG v72; // edx
  int v73; // ecx
  __int64 NewMonitor; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int128 v78; // xmm1
  unsigned __int64 v79; // xmm0_8
  unsigned int v80; // r14d
  int v81; // r12d
  unsigned int v82; // ebx
  int v83; // r13d
  unsigned int v84; // r15d
  __int64 v85; // rdx
  int v86; // eax
  __int64 v87; // rdx
  unsigned int v88; // eax
  __int64 v89; // r14
  int v90; // r10d
  int v91; // ebx
  int v92; // r11d
  __int64 v93; // r15
  LONG v94; // edx
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 v97; // rax
  LONG v98; // ecx
  int v99; // edx
  int v100; // eax
  __int64 v101; // rdx
  int v102; // r9d
  int v103; // r11d
  int v104; // edx
  int v105; // r11d
  int v106; // r9d
  int v107; // r8d
  int v108; // r10d
  int v109; // ebx
  char v110; // r14
  int v111; // eax
  int v112; // eax
  int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  int v117; // [rsp+50h] [rbp-B0h]
  int v118; // [rsp+54h] [rbp-ACh]
  int v119; // [rsp+58h] [rbp-A8h]
  int v120; // [rsp+5Ch] [rbp-A4h]
  int v121; // [rsp+60h] [rbp-A0h]
  int v122; // [rsp+64h] [rbp-9Ch]
  int v123; // [rsp+68h] [rbp-98h]
  int v124; // [rsp+6Ch] [rbp-94h]
  __int64 v125; // [rsp+70h] [rbp-90h]
  __int128 v126; // [rsp+78h] [rbp-88h] BYREF
  int v127; // [rsp+88h] [rbp-78h]
  __int64 v128; // [rsp+90h] [rbp-70h]
  struct tagRECT v129; // [rsp+98h] [rbp-68h] BYREF
  HWND *v130; // [rsp+A8h] [rbp-58h]
  __int64 v131; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v132; // [rsp+B8h] [rbp-48h]
  __int64 v133; // [rsp+C0h] [rbp-40h]
  __int64 v134; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v135; // [rsp+D0h] [rbp-30h]
  __int64 v136; // [rsp+D8h] [rbp-28h]
  __int64 BugCheckParameter3; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v138[40]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v139[56]; // [rsp+110h] [rbp+10h] BYREF

  v130 = a2;
  v128 = 0LL;
  v3 = 0LL;
  memset(v139, 0, sizeof(v139));
  v122 = 0;
  v131 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v118 = 0;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v6 = _HMObjectFromHandle(*(_QWORD *)ValidWindowPos);
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = *(_QWORD *)(v6 + 104);
  v125 = v9;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v10, v12) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  v131 = *(_QWORD *)(v8 + 408);
  *(_QWORD *)(v8 + 408) = &v131;
  v132 = v9;
  if ( v9 )
    HMLockObject(v9);
  v17 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
  v18 = *((_DWORD *)a1 + 7);
  v121 = 1;
  while ( 1 )
  {
    v117 = --v18;
    if ( v18 < 0 )
      break;
    v19 = *v17;
    if ( !*v17 )
      goto LABEL_191;
    v20 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13, v15) )
      PsGetThreadWin32Thread(v20);
    v13 = (unsigned __int16)v19;
    v14 = gpsi;
    if ( (unsigned __int64)(unsigned __int16)v19 < *(_QWORD *)(gpsi + 8LL) )
    {
      v21 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v19 * LODWORD(gSharedInfo[2]);
      v22 = (__int64 *)HMPkheFromPhe(v21);
      v14 = v19 >> 16;
      if ( (WORD1(v19) == *(_WORD *)(v21 + 26)
         || WORD1(v19) == 0xFFFF
         || !WORD1(v19) && PsGetCurrentProcessWow64Process(v14))
        && (*(_BYTE *)(v21 + 25) & 1) == 0
        && *(_BYTE *)(v21 + 24) == 1 )
      {
        v23 = *v22;
        if ( v23 )
        {
          v14 = v17[1];
          if ( v14 - 2 > 0xFFFFFFFFFFFFFFFBuLL || (LOBYTE(v13) = 1, HMValidateHandleNoSecure(v14, v13)) )
          {
            v24 = KeGetCurrentThread();
            v25 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13, v15) )
            {
              v26 = (__int64 *)PsGetThreadWin32Thread(v24);
              if ( v26 )
                v25 = *v26;
            }
            v134 = *(_QWORD *)(v25 + 408);
            *(_QWORD *)(v25 + 408) = &v134;
            v135 = v23;
            HMLockObject(v23);
            v119 = 0;
            if ( !v3 && (v17[4] & 0x10) == 0 )
              v128 = *(_QWORD *)v23;
            v27 = *((_DWORD *)v17 + 8);
            if ( (v27 & 0x400) == 0 )
            {
              v28 = v17[1];
              v29 = v17[4] & 4;
              v30 = v27 & 0x750000;
              v31 = v17[4] & 0x40;
              if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) == 0 || gptiCurrent == *(_QWORD *)(v23 + 16) )
              {
                _InterlockedAdd(&glSendMessage, 1u);
                xxxSendTransformableMessageTimeout(
                  (__int64 *)v23,
                  0x46u,
                  0LL,
                  (struct _LARGE_STRING *)v17,
                  0,
                  0,
                  0LL,
                  1u,
                  0);
              }
              else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 400LL) != 1 )
              {
                xxxSendTransformableMessageTimeout(
                  (__int64 *)v23,
                  0x46u,
                  0LL,
                  (struct _LARGE_STRING *)v17,
                  2u,
                  0x32u,
                  &BugCheckParameter3,
                  1u,
                  0);
              }
              v32 = v30 | *((_DWORD *)v17 + 8);
              *((_DWORD *)v17 + 8) = v32;
              v33 = v32;
              if ( v31 && (v32 & 0x40) == 0 )
              {
                NotifyShell::CuratedWindowHidden((NotifyShell *)v23, (struct tagWND *)v32);
                v33 = *((unsigned int *)v17 + 8);
              }
              v34 = *((_DWORD *)v17 + 39);
              if ( (v34 & 0x20) == 0 && (v33 & 3) != 3 )
              {
                v17[16] = *(_QWORD *)(*(_QWORD *)(v23 + 40) + 256LL);
                *((_DWORD *)v17 + 39) = v34 | 0x20;
              }
              *v17 = v19;
              if ( (v33 & 4) == 0 && (v29 || *((_WORD *)v17 + 4) != (_WORD)v28) )
              {
                if ( !IsStillWindowC(v17[1], v33) )
                  goto LABEL_192;
                if ( *((_WORD *)v17 + 4) != (_WORD)v28 || v17[1] >= 0xFFFFFFFFFFFFFFFEuLL )
                {
                  v38 = CheckTopmost((struct tagWINDOWPOS *)v17);
                  if ( v38 )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)(v23 + 40) + 236LL) == 1 )
                      SetTopmostEnum((struct tagWND *)v23, v38 == 1, (*((_DWORD *)v17 + 8) >> 9) & 1);
                  }
                }
              }
            }
            v126 = *(_OWORD *)(*(_QWORD *)(v125 + 40) + 104LL);
            if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary((struct tagWND *)v23) )
            {
              WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi((struct tagWND *)v23);
              if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*(struct tagWND **)(v23 + 104)) )
              {
                LogicalToPhysicalInPlaceRectWithSubpixel(v125, &v126, 0LL);
                PhysicalToLogicalInPlaceRectWithSubpixel(v23, &v126, 0LL);
              }
            }
            v40 = *(_QWORD *)(v23 + 40);
            v41 = 0LL;
            v42 = *(_DWORD *)(v40 + 88);
            v43 = v42;
            v44 = *(_DWORD *)(v40 + 92);
            *((_DWORD *)v17 + 20) = v42;
            *((_DWORD *)v17 + 21) = v44;
            v45 = *(_QWORD *)(v23 + 24);
            v123 = v42;
            v120 = v44;
            if ( v45 )
            {
              v46 = *(_QWORD *)(v45 + 8);
              if ( v46 )
                v41 = *(_QWORD *)(v46 + 24);
            }
            v47 = DWORD2(v126);
            v48 = v126;
            v127 = DWORD1(v126);
            if ( v125 != v41 )
            {
              v44 -= DWORD1(v126);
              v49 = v42 - v126;
              v123 = v49;
              v120 = v44;
              if ( (*(_BYTE *)(*(_QWORD *)(v125 + 40) + 26LL) & 0x40) != 0
                && (v50 = *(_QWORD *)(v23 + 40), (*(_BYTE *)(v50 + 31) & 0xC0) == 0x40) )
              {
                v118 = 1;
                v43 = DWORD2(v126) - *(_DWORD *)(v50 + 96);
              }
              else
              {
                v118 = 0;
                v43 = v49;
              }
            }
            v51 = *(_DWORD **)(v23 + 40);
            v52 = *((_DWORD *)v17 + 8) | 0x1800;
            v53 = v52;
            v54 = v51[24] - v51[22];
            v55 = v51[25] - v51[23];
            *((_DWORD *)v17 + 8) = v52;
            v124 = v54;
            v56 = v52;
            if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 233LL) & 3) != 0 && (v52 & 0x100000) != 0 )
            {
              ExtendArrangedRectangleByFrameMargin((struct tagWND *)v23, (struct tagSIZERECT *)(v17 + 2));
              v53 = *((_DWORD *)v17 + 8);
              v56 = v53;
              v44 = v120;
            }
            v57 = (LONG *)(v17 + 2);
            if ( (v53 & 2) != 0 )
            {
              *((_DWORD *)v17 + 39) |= 0x100u;
              *v57 = v43;
              *((_DWORD *)v17 + 5) = v44;
            }
            else
            {
              if ( *v57 == v43 && *((_DWORD *)v17 + 5) == v44 )
              {
                v58 = v122;
                *((_DWORD *)v17 + 8) = v53 | 2;
                if ( v118 )
                  v58 = 1;
                v122 = v58;
              }
              if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 31LL) & 0x20) != 0 && (unsigned int)IsTrayWindow((_QWORD *)v23) )
              {
                *v57 = -32000;
                *((_DWORD *)v17 + 5) = -32000;
              }
              v53 = *((_DWORD *)v17 + 8);
              v56 = v53;
            }
            if ( (v53 & 1) != 0 )
            {
              v60 = v124;
              *((_DWORD *)v17 + 6) = v124;
              *((_DWORD *)v17 + 7) = v55;
            }
            else
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 31LL) & 0x20) != 0
                && (Prop = GetProp(v23, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL),
                    v56 = *((_DWORD *)v17 + 8),
                    Prop) )
              {
                v60 = *(_DWORD *)(gpsi + 2124LL);
                *((_DWORD *)v17 + 6) = v60;
                v61 = *(_DWORD *)(gpsi + 2128LL);
                *((_DWORD *)v17 + 7) = v61;
              }
              else
              {
                v60 = *((_DWORD *)v17 + 6);
                if ( v60 < 0 )
                {
                  *((_DWORD *)v17 + 6) = 0;
                  v60 = 0;
                }
                v61 = *((_DWORD *)v17 + 7);
                if ( v61 < 0 )
                {
                  *((_DWORD *)v17 + 7) = 0;
                  v61 = 0;
                }
              }
              if ( v60 == v124 && v61 == v55 )
              {
                v56 = *((_DWORD *)v17 + 8) | 1;
                *((_DWORD *)v17 + 8) = v56;
                if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 21LL) & 1) == 0 )
                  v119 = 1;
              }
            }
            if ( v118 )
              *v57 = v47 - *v57 - v60 - v48;
            if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 31LL) & 0x10) != 0 )
            {
              v62 = v56 & 0xFFFFFFBF;
              goto LABEL_94;
            }
            v63 = v56 & 0xFFFFFF7F;
            *((_DWORD *)v17 + 8) = v63;
            if ( (v63 & 0x40) == 0 )
            {
              v62 = v63 | 8;
LABEL_94:
              *((_DWORD *)v17 + 8) = v62;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 27LL) & 2) == 0 )
            {
              v64 = v23;
              do
              {
                if ( (*(_BYTE *)(*(_QWORD *)(v64 + 40) + 27LL) & 2) != 0 )
                  break;
                v64 = *(_QWORD *)(v64 + 104);
              }
              while ( v64 );
              if ( v64 )
                *((_DWORD *)v17 + 8) |= 0x100u;
            }
            v65 = *((_DWORD *)v17 + 8);
            if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 20LL) & 0x20) != 0 )
            {
              v65 &= ~4u;
              v17[1] = 1LL;
              *((_DWORD *)v17 + 8) = v65;
            }
            if ( v121 )
            {
              if ( (v65 & 4) == 0 )
              {
                v121 = 0;
                if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 19LL) & 4) == 0 )
                {
                  if ( (unsigned int)ValidateZorder((struct tagCVR *)v17) )
                  {
                    *((_DWORD *)v17 + 8) |= 4u;
                    v121 = 1;
                  }
                }
              }
            }
            v66 = *((_DWORD *)v17 + 8);
            v67 = v66;
            if ( (v66 & 8) == 0 && ((v17[4] & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible(v23)) )
            {
              v67 = v66 | 8;
              *((_DWORD *)v17 + 8) = v67;
            }
            if ( (v67 & 2) != 0 || (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 21LL) & 1) != 0 )
            {
              v68 = v119;
            }
            else
            {
              v68 = v119;
              if ( (GetAppCompatFlags(0LL) & 0x20000) != 0 )
                v68 = 1;
            }
            if ( (*((_DWORD *)v17 + 39) & 0x20) != 0 && (unsigned int)IsWindowBroadcastingDpiToChildrenX(v23) )
            {
              v69 = ValidateHmonitor(v17[16]);
              v70 = v69;
              v71 = v69 ? *(_WORD *)(*(_QWORD *)(v69 + 40) + 64LL) : 0;
              v72 = *((_DWORD *)v17 + 5);
              v129.left = *v57;
              v129.right = *((_DWORD *)v17 + 6) + v129.left;
              v73 = *((_DWORD *)v17 + 7);
              v129.top = v72;
              v129.bottom = v72 + v73;
              NewMonitor = GetNewMonitor((struct tagWND *)v23, &v129, 0LL);
              if ( NewMonitor )
              {
                if ( v70 != NewMonitor )
                {
                  v75 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 64LL);
                  if ( v71 != (_WORD)v75 )
                    *((_DWORD *)v17 + 39) ^= (*((_DWORD *)v17 + 39) ^ ((unsigned int)xxxAppAdjustDpiCandidateRect(
                                                                                       v23,
                                                                                       v75,
                                                                                       &v129,
                                                                                       v17 + 17) << 7)) & 0x80;
                }
              }
            }
            v76 = *((unsigned int *)v17 + 8);
            if ( (v17[4] & 0x21) == 1 && !v68 )
            {
              v90 = v123;
              v92 = v127;
              v91 = v120;
LABEL_151:
              if ( (v76 & 0x100) != 0 )
              {
                v93 = v125;
                v17[7] = 0LL;
                v17[8] = 0LL;
                v94 = *v57;
              }
              else
              {
                v94 = *v57;
                v95 = 0LL;
                v67 = *((unsigned int *)v17 + 5);
                *((_DWORD *)v17 + 14) = *v57;
                *((_DWORD *)v17 + 15) = v67;
                v96 = *(_QWORD *)(v23 + 24);
                if ( v96 )
                {
                  v97 = *(_QWORD *)(v96 + 8);
                  if ( v97 )
                    v95 = *(_QWORD *)(v97 + 24);
                }
                v93 = v125;
                v98 = v94;
                if ( v125 != v95 )
                {
                  v98 = v94 + v48;
                  v67 = (unsigned int)(v92 + v67);
                  *((_DWORD *)v17 + 14) = v94 + v48;
                  *((_DWORD *)v17 + 15) = v67;
                }
                *((_DWORD *)v17 + 16) = *((_DWORD *)v17 + 6) + v98;
                v76 = (unsigned int)(v67 + *((_DWORD *)v17 + 7));
                *((_DWORD *)v17 + 17) = v76;
              }
              if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 26LL) & 0x40) != 0 )
                v99 = *((_DWORD *)v17 + 6) + v94 - v124 - v90;
              else
                v99 = v94 - v90;
              *((_DWORD *)v17 + 18) = v99;
              v100 = *((_DWORD *)v17 + 8);
              v101 = (unsigned int)(*((_DWORD *)v17 + 5) - v91);
              *((_DWORD *)v17 + 19) = v101;
              if ( (v100 & 2) == 0 )
              {
                *((_DWORD *)v17 + 8) = v100 & 0xFFFFEFFF;
                *((_DWORD *)v17 + 10) = *((_DWORD *)v17 + 18) + *(_DWORD *)(*(_QWORD *)(v23 + 40) + 104LL);
                *((_DWORD *)v17 + 11) = v101 + *(_DWORD *)(*(_QWORD *)(v23 + 40) + 108LL);
                if ( v93 != GetDesktopWindow(v23) )
                {
                  v67 = (unsigned int)(v67 - v48);
                  *((_DWORD *)v17 + 10) = v67;
                  *((_DWORD *)v17 + 11) = v102 - v103;
                }
                *((_DWORD *)v17 + 12) = *(_DWORD *)(*(_QWORD *)(v23 + 40) + 112LL)
                                      - *(_DWORD *)(*(_QWORD *)(v23 + 40) + 104LL);
                v101 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v23 + 40) + 116LL)
                                    - *(_DWORD *)(*(_QWORD *)(v23 + 40) + 108LL));
                *((_DWORD *)v17 + 13) = v101;
              }
LABEL_166:
              ThreadUnlock1(v76, v101, v67);
            }
            else
            {
              memset(v138, 0, sizeof(v138));
              *((_DWORD *)v17 + 39) |= 4u;
              v77 = *(_QWORD *)(v23 + 40);
              if ( (*(_BYTE *)(v77 + 31) & 0x40) == 0 && *(char *)(v77 + 24) >= 0 )
                xxxCheckFullScreen((struct tagWND *)v23, (struct tagSIZERECT *)(v17 + 2));
              v78 = *((_OWORD *)v17 + 1);
              *(_OWORD *)v138 = *(_OWORD *)v17;
              v79 = v17[4];
              *(_QWORD *)&v139[48] = v138;
              *(_DWORD *)v139 = *v57;
              *(_DWORD *)&v139[8] = *((_DWORD *)v17 + 6) + *(_DWORD *)v139;
              *(_DWORD *)&v139[4] = *((_DWORD *)v17 + 5);
              *(_DWORD *)&v139[12] = *((_DWORD *)v17 + 7) + *(_DWORD *)&v139[4];
              *(_OWORD *)&v138[16] = v78;
              *(_QWORD *)&v138[32] = v79;
              GetRect(v23, (__int64)&v139[16], 66);
              GetRect(v23, (__int64)&v139[32], 65);
              v80 = *(_DWORD *)&v139[32];
              v81 = *(_DWORD *)&v139[40] - *(_DWORD *)&v139[32];
              v82 = *(_DWORD *)&v139[36];
              v83 = *(_DWORD *)&v139[44] - *(_DWORD *)&v139[36];
              _InterlockedAdd(&glSendMessage, 1u);
              v84 = xxxSendTransformableMessageTimeout(
                      (__int64 *)v23,
                      0x83u,
                      1uLL,
                      (struct _LARGE_STRING *)v139,
                      0,
                      0,
                      0LL,
                      1u,
                      0);
              if ( !IsStillWindowC(v17[1], v85) )
              {
LABEL_192:
                ThreadUnlock1(v36, v35, v37);
                ThreadUnlock1(v115, v114, v116);
                return 0LL;
              }
              if ( v84 - 16 > 0x3F0 )
              {
                v84 = 48;
                *(_OWORD *)&v139[16] = *(_OWORD *)v139;
              }
              if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 26LL) & 0x40) != 0 )
                v86 = *(_DWORD *)&v139[24] - *(_DWORD *)&v139[40];
              else
                v86 = *(_DWORD *)&v139[16] - *(_DWORD *)&v139[32];
              *((_DWORD *)v17 + 18) = v86;
              *((_DWORD *)v17 + 19) = *(_DWORD *)&v139[20] - *(_DWORD *)&v139[36];
              v17[5] = *(_QWORD *)v139;
              v87 = (unsigned int)(*(_DWORD *)&v139[8] - *(_DWORD *)v139);
              *((_DWORD *)v17 + 12) = v87;
              v67 = (unsigned int)(*(_DWORD *)&v139[12] - *(_DWORD *)&v139[4]);
              *((_DWORD *)v17 + 13) = v67;
              if ( __PAIR64__(v82, v80) != *(_QWORD *)v139 )
                *((_DWORD *)v17 + 8) &= ~0x1000u;
              v76 = *((unsigned int *)v17 + 8);
              v88 = *((_DWORD *)v17 + 8);
              if ( v81 != (_DWORD)v87 || v83 != (_DWORD)v67 )
              {
                v76 = v88;
                LODWORD(v76) = v88 & 0xFFFFF7FF;
                *((_DWORD *)v17 + 8) = v88 & 0xFFFFF7FF;
              }
              if ( (v76 & 0x100) == 0 && !v122 )
              {
                v89 = *(_QWORD *)(v23 + 40);
                if ( (*(_BYTE *)(v89 + 24) & 0x20) == 0 )
                {
                  if ( (v76 & 0x821) == 0x801 )
                  {
                    v90 = v123;
                    if ( *((_DWORD *)v17 + 18) == *((_DWORD *)v17 + 4) - v123 )
                    {
                      v91 = v120;
                      if ( *((_DWORD *)v17 + 19) == *((_DWORD *)v17 + 5) - v120 )
                      {
                        v92 = DWORD1(v126);
                        v57 = (LONG *)(v17 + 2);
                        v48 = v126;
                        goto LABEL_151;
                      }
                    }
                  }
                  if ( v81 == (_DWORD)v87
                    || (v84 & 0x100) == 0
                    && (v76 = *(_QWORD *)(*(_QWORD *)(v23 + 136) + 8LL), (*(_BYTE *)(v76 + 8) & 2) == 0) )
                  {
                    if ( v83 == (_DWORD)v67
                      || (v84 & 0x200) == 0
                      && (v76 = 1LL, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 136) + 8LL) + 8LL) & 1) == 0) )
                    {
                      v104 = *(_DWORD *)&v139[40] - *(_DWORD *)&v139[32];
                      v105 = *(_DWORD *)&v139[44] - *(_DWORD *)&v139[36];
                      v106 = *(_DWORD *)&v139[16];
                      v107 = *(_DWORD *)&v139[24] - *(_DWORD *)&v139[16];
                      v108 = *(_DWORD *)&v139[20];
                      v109 = *(_DWORD *)&v139[28] - *(_DWORD *)&v139[20];
                      v110 = *(_BYTE *)(v89 + 26) & 0x40;
                      if ( (v110 != 0) != ((v84 >> 7) & 1) )
                      {
                        if ( v110 && v104 > v107 )
                          v111 = v104 - v107;
                        else
                          v111 = v107 - v104;
                        v106 = v111 + *(_DWORD *)&v139[16];
                        *(_DWORD *)&v139[16] += v111;
                      }
                      if ( (v84 & 0x40) != 0 )
                      {
                        v108 = *(_DWORD *)&v139[28] - v105;
                        *(_DWORD *)&v139[20] = *(_DWORD *)&v139[28] - v105;
                      }
                      if ( v104 < v107 )
                        *(_DWORD *)&v139[24] = v106 + v104;
                      if ( v105 < v109 )
                        *(_DWORD *)&v139[28] = v108 + v105;
                      *(_OWORD *)(v17 + 7) = *(_OWORD *)&v139[16];
                      if ( v125 != GetDesktopWindow(v23) )
                      {
                        v112 = v126;
                        *((_DWORD *)v17 + 14) += v126;
                        *((_DWORD *)v17 + 16) += v112;
                        v113 = DWORD1(v126);
                        *((_DWORD *)v17 + 17) += DWORD1(v126);
                        *((_DWORD *)v17 + 15) += v113;
                      }
                      goto LABEL_166;
                    }
                  }
                }
              }
              v17[7] = 0LL;
              v17[8] = 0LL;
              ThreadUnlock1(v76, v87, v67);
            }
            v3 = (HWND)v128;
            v18 = v117;
            goto LABEL_191;
          }
        }
      }
      v18 = v117;
    }
    *v17 = 0LL;
    *((_DWORD *)v17 + 8) = 6159;
LABEL_191:
    v17 += 21;
  }
  ThreadUnlock1(v14, v13, v15);
  result = 1LL;
  *v130 = v3;
  return result;
}
