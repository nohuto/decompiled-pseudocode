/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00CDEA8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     _FChildVisible @ 0x1C002E8F8 (_FChildVisible.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0088804 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C008A204 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C008BC10 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     xxxCheckFullScreen @ 0x1C0096CF8 (xxxCheckFullScreen.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     GetNewMonitor @ 0x1C00CA150 (GetNewMonitor.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C00CAE50 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     GetRect @ 0x1C00CB3EC (GetRect.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C00CDE0C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C00CEB38 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00ED568 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00ED5A8 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0113934 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C011AFC8 (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 *     GetAppCompatFlags @ 0x1C011D3E0 (GetAppCompatFlags.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C012E158 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01D3468 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E7AEC (xxxAppAdjustDpiCandidateRect.c)
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
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 *v19; // rdi
  int v20; // esi
  unsigned __int64 v21; // r14
  struct _KTHREAD *v22; // rbx
  __int64 v23; // rbx
  __int64 *v24; // rsi
  __int64 v25; // rsi
  struct _KTHREAD *v26; // r15
  __int64 v27; // rbx
  __int64 *v28; // rax
  int v29; // ebx
  unsigned __int64 v30; // r13
  int v31; // r12d
  int v32; // r15d
  int v33; // ebx
  unsigned int v34; // eax
  __int64 v35; // rdx
  int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // eax
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // edx
  int v45; // ebx
  int v46; // r10d
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // r14d
  int v50; // r13d
  int v51; // edx
  __int64 v52; // rcx
  _DWORD *v53; // rcx
  int v54; // r9d
  int v55; // r8d
  int v56; // edx
  int v57; // r15d
  int v58; // edx
  LONG *v59; // r12
  int v60; // eax
  __int64 Prop; // rax
  int v62; // r8d
  int v63; // ecx
  unsigned int v64; // edx
  unsigned int v65; // edx
  __int64 v66; // rdx
  int v67; // edx
  unsigned int v68; // r9d
  __int64 v69; // r8
  int v70; // r15d
  __int64 v71; // rax
  __int64 v72; // rbx
  __int16 v73; // r14
  LONG v74; // edx
  int v75; // ecx
  __int64 NewMonitor; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int128 v80; // xmm1
  unsigned __int64 v81; // xmm0_8
  unsigned int v82; // r14d
  int v83; // r12d
  unsigned int v84; // ebx
  int v85; // r13d
  unsigned int v86; // r15d
  __int64 v87; // rdx
  int v88; // eax
  __int64 v89; // rdx
  unsigned int v90; // eax
  __int64 v91; // r14
  int v92; // r10d
  int v93; // ebx
  int v94; // r11d
  __int64 v95; // r15
  LONG v96; // edx
  __int64 v97; // r9
  __int64 v98; // rax
  __int64 v99; // rax
  LONG v100; // ecx
  int v101; // edx
  int v102; // eax
  __int64 v103; // rdx
  int v104; // r9d
  int v105; // r11d
  int v106; // edx
  int v107; // r11d
  int v108; // r9d
  int v109; // r8d
  int v110; // r10d
  int v111; // ebx
  char v112; // r14
  int v113; // eax
  int v114; // eax
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  int v119; // [rsp+50h] [rbp-B0h]
  int v120; // [rsp+54h] [rbp-ACh]
  int v121; // [rsp+58h] [rbp-A8h]
  int v122; // [rsp+5Ch] [rbp-A4h]
  int v123; // [rsp+60h] [rbp-A0h]
  int v124; // [rsp+64h] [rbp-9Ch]
  int v125; // [rsp+68h] [rbp-98h]
  int v126; // [rsp+6Ch] [rbp-94h]
  __int64 v127; // [rsp+70h] [rbp-90h]
  __int128 v128; // [rsp+78h] [rbp-88h] BYREF
  int v129; // [rsp+88h] [rbp-78h]
  __int64 v130; // [rsp+90h] [rbp-70h]
  struct tagRECT v131; // [rsp+98h] [rbp-68h] BYREF
  HWND *v132; // [rsp+A8h] [rbp-58h]
  __int64 v133; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v134; // [rsp+B8h] [rbp-48h]
  __int64 v135; // [rsp+C0h] [rbp-40h]
  __int64 v136; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v137; // [rsp+D0h] [rbp-30h]
  __int64 v138; // [rsp+D8h] [rbp-28h]
  __int64 BugCheckParameter3; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v140[40]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v141[56]; // [rsp+110h] [rbp+10h] BYREF

  v132 = a2;
  v130 = 0LL;
  v3 = 0LL;
  memset(v141, 0, sizeof(v141));
  v124 = 0;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v120 = 0;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v6 = _HMObjectFromHandle(*(_QWORD *)ValidWindowPos);
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = *(_QWORD *)(v6 + 104);
  v127 = v9;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v10, v12, v13) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  v133 = *(_QWORD *)(v8 + 408);
  *(_QWORD *)(v8 + 408) = &v133;
  v134 = v9;
  if ( v9 )
    HMLockObject(v9);
  v19 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
  v20 = *((_DWORD *)a1 + 7);
  v123 = 1;
  while ( 1 )
  {
    v119 = --v20;
    if ( v20 < 0 )
      break;
    v21 = *v19;
    if ( !*v19 )
      goto LABEL_191;
    v22 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14, v16, v17) )
      PsGetThreadWin32Thread(v22);
    v14 = (unsigned __int16)v21;
    v15 = gpsi;
    if ( (unsigned __int64)(unsigned __int16)v21 < *(_QWORD *)(gpsi + 8LL) )
    {
      v23 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v21 * LODWORD(gSharedInfo[2]);
      v24 = (__int64 *)HMPkheFromPhe(v23);
      v15 = v21 >> 16;
      if ( (WORD1(v21) == *(_WORD *)(v23 + 26)
         || WORD1(v21) == 0xFFFF
         || !WORD1(v21) && PsGetCurrentProcessWow64Process(v15))
        && (*(_BYTE *)(v23 + 25) & 1) == 0
        && *(_BYTE *)(v23 + 24) == 1 )
      {
        v25 = *v24;
        if ( v25 )
        {
          v15 = v19[1];
          if ( v15 - 2 > 0xFFFFFFFFFFFFFFFBuLL || (LOBYTE(v14) = 1, HMValidateHandleNoSecure(v15, v14)) )
          {
            v26 = KeGetCurrentThread();
            v27 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14, v16, v17) )
            {
              v28 = (__int64 *)PsGetThreadWin32Thread(v26);
              if ( v28 )
                v27 = *v28;
            }
            v136 = *(_QWORD *)(v27 + 408);
            *(_QWORD *)(v27 + 408) = &v136;
            v137 = v25;
            HMLockObject(v25);
            v121 = 0;
            if ( !v3 && (v19[4] & 0x10) == 0 )
              v130 = *(_QWORD *)v25;
            v29 = *((_DWORD *)v19 + 8);
            if ( (v29 & 0x400) == 0 )
            {
              v30 = v19[1];
              v31 = v19[4] & 4;
              v32 = v29 & 0x750000;
              v33 = v19[4] & 0x40;
              if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) == 0 || gptiCurrent == *(_QWORD *)(v25 + 16) )
              {
                _InterlockedAdd(&glSendMessage, 1u);
                xxxSendTransformableMessageTimeout(
                  (__int64 *)v25,
                  0x46u,
                  0LL,
                  (struct _LARGE_STRING *)v19,
                  0,
                  0,
                  0LL,
                  1u,
                  0);
              }
              else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 400LL) != 1 )
              {
                xxxSendTransformableMessageTimeout(
                  (__int64 *)v25,
                  0x46u,
                  0LL,
                  (struct _LARGE_STRING *)v19,
                  2u,
                  0x32u,
                  &BugCheckParameter3,
                  1u,
                  0);
              }
              v34 = v32 | *((_DWORD *)v19 + 8);
              *((_DWORD *)v19 + 8) = v34;
              v35 = v34;
              if ( v33 && (v34 & 0x40) == 0 )
              {
                NotifyShell::CuratedWindowHidden((NotifyShell *)v25, (struct tagWND *)v34);
                v35 = *((unsigned int *)v19 + 8);
              }
              v36 = *((_DWORD *)v19 + 39);
              if ( (v36 & 0x20) == 0 && (v35 & 3) != 3 )
              {
                v19[16] = *(_QWORD *)(*(_QWORD *)(v25 + 40) + 256LL);
                *((_DWORD *)v19 + 39) = v36 | 0x20;
              }
              *v19 = v21;
              if ( (v35 & 4) == 0 && (v31 || *((_WORD *)v19 + 4) != (_WORD)v30) )
              {
                if ( !IsStillWindowC(v19[1], v35) )
                  goto LABEL_192;
                if ( *((_WORD *)v19 + 4) != (_WORD)v30 || v19[1] >= 0xFFFFFFFFFFFFFFFEuLL )
                {
                  v40 = CheckTopmost((struct tagWINDOWPOS *)v19);
                  if ( v40 )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)(v25 + 40) + 236LL) == 1 )
                      SetTopmostEnum((struct tagWND *)v25, v40 == 1, (*((_DWORD *)v19 + 8) >> 9) & 1);
                  }
                }
              }
            }
            v128 = *(_OWORD *)(*(_QWORD *)(v127 + 40) + 104LL);
            if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary((struct tagWND *)v25) )
            {
              WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi((struct tagWND *)v25);
              if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*(struct tagWND **)(v25 + 104)) )
              {
                LogicalToPhysicalInPlaceRectWithSubpixel(v127, &v128, 0LL);
                PhysicalToLogicalInPlaceRectWithSubpixel(v25, &v128, 0LL);
              }
            }
            v42 = *(_QWORD *)(v25 + 40);
            v43 = 0LL;
            v44 = *(_DWORD *)(v42 + 88);
            v45 = v44;
            v46 = *(_DWORD *)(v42 + 92);
            *((_DWORD *)v19 + 20) = v44;
            *((_DWORD *)v19 + 21) = v46;
            v47 = *(_QWORD *)(v25 + 24);
            v125 = v44;
            v122 = v46;
            if ( v47 )
            {
              v48 = *(_QWORD *)(v47 + 8);
              if ( v48 )
                v43 = *(_QWORD *)(v48 + 24);
            }
            v49 = DWORD2(v128);
            v50 = v128;
            v129 = DWORD1(v128);
            if ( v127 != v43 )
            {
              v46 -= DWORD1(v128);
              v51 = v44 - v128;
              v125 = v51;
              v122 = v46;
              if ( (*(_BYTE *)(*(_QWORD *)(v127 + 40) + 26LL) & 0x40) != 0
                && (v52 = *(_QWORD *)(v25 + 40), (*(_BYTE *)(v52 + 31) & 0xC0) == 0x40) )
              {
                v120 = 1;
                v45 = DWORD2(v128) - *(_DWORD *)(v52 + 96);
              }
              else
              {
                v120 = 0;
                v45 = v51;
              }
            }
            v53 = *(_DWORD **)(v25 + 40);
            v54 = *((_DWORD *)v19 + 8) | 0x1800;
            v55 = v54;
            v56 = v53[24] - v53[22];
            v57 = v53[25] - v53[23];
            *((_DWORD *)v19 + 8) = v54;
            v126 = v56;
            v58 = v54;
            if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 233LL) & 3) != 0 && (v54 & 0x100000) != 0 )
            {
              ExtendArrangedRectangleByFrameMargin((struct tagWND *)v25, (struct tagSIZERECT *)(v19 + 2));
              v55 = *((_DWORD *)v19 + 8);
              v58 = v55;
              v46 = v122;
            }
            v59 = (LONG *)(v19 + 2);
            if ( (v55 & 2) != 0 )
            {
              *((_DWORD *)v19 + 39) |= 0x100u;
              *v59 = v45;
              *((_DWORD *)v19 + 5) = v46;
            }
            else
            {
              if ( *v59 == v45 && *((_DWORD *)v19 + 5) == v46 )
              {
                v60 = v124;
                *((_DWORD *)v19 + 8) = v55 | 2;
                if ( v120 )
                  v60 = 1;
                v124 = v60;
              }
              if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 31LL) & 0x20) != 0 && (unsigned int)IsTrayWindow((_QWORD *)v25) )
              {
                *v59 = -32000;
                *((_DWORD *)v19 + 5) = -32000;
              }
              v55 = *((_DWORD *)v19 + 8);
              v58 = v55;
            }
            if ( (v55 & 1) != 0 )
            {
              v62 = v126;
              *((_DWORD *)v19 + 6) = v126;
              *((_DWORD *)v19 + 7) = v57;
            }
            else
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 31LL) & 0x20) != 0
                && (Prop = GetProp(v25, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL),
                    v58 = *((_DWORD *)v19 + 8),
                    Prop) )
              {
                v62 = *(_DWORD *)(gpsi + 2124LL);
                *((_DWORD *)v19 + 6) = v62;
                v63 = *(_DWORD *)(gpsi + 2128LL);
                *((_DWORD *)v19 + 7) = v63;
              }
              else
              {
                v62 = *((_DWORD *)v19 + 6);
                if ( v62 < 0 )
                {
                  *((_DWORD *)v19 + 6) = 0;
                  v62 = 0;
                }
                v63 = *((_DWORD *)v19 + 7);
                if ( v63 < 0 )
                {
                  *((_DWORD *)v19 + 7) = 0;
                  v63 = 0;
                }
              }
              if ( v62 == v126 && v63 == v57 )
              {
                v58 = *((_DWORD *)v19 + 8) | 1;
                *((_DWORD *)v19 + 8) = v58;
                if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 21LL) & 1) == 0 )
                  v121 = 1;
              }
            }
            if ( v120 )
              *v59 = v49 - *v59 - v62 - v50;
            if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 31LL) & 0x10) != 0 )
            {
              v64 = v58 & 0xFFFFFFBF;
              goto LABEL_94;
            }
            v65 = v58 & 0xFFFFFF7F;
            *((_DWORD *)v19 + 8) = v65;
            if ( (v65 & 0x40) == 0 )
            {
              v64 = v65 | 8;
LABEL_94:
              *((_DWORD *)v19 + 8) = v64;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 27LL) & 2) == 0 )
            {
              v66 = v25;
              do
              {
                if ( (*(_BYTE *)(*(_QWORD *)(v66 + 40) + 27LL) & 2) != 0 )
                  break;
                v66 = *(_QWORD *)(v66 + 104);
              }
              while ( v66 );
              if ( v66 )
                *((_DWORD *)v19 + 8) |= 0x100u;
            }
            v67 = *((_DWORD *)v19 + 8);
            if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 20LL) & 0x20) != 0 )
            {
              v67 &= ~4u;
              v19[1] = 1LL;
              *((_DWORD *)v19 + 8) = v67;
            }
            if ( v123 )
            {
              if ( (v67 & 4) == 0 )
              {
                v123 = 0;
                if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 19LL) & 4) == 0 )
                {
                  if ( (unsigned int)ValidateZorder((struct tagCVR *)v19) )
                  {
                    *((_DWORD *)v19 + 8) |= 4u;
                    v123 = 1;
                  }
                }
              }
            }
            v68 = *((_DWORD *)v19 + 8);
            v69 = v68;
            if ( (v68 & 8) == 0 && ((v19[4] & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible(v25)) )
            {
              v69 = v68 | 8;
              *((_DWORD *)v19 + 8) = v69;
            }
            if ( (v69 & 2) != 0 || (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 21LL) & 1) != 0 )
            {
              v70 = v121;
            }
            else
            {
              v70 = v121;
              if ( (GetAppCompatFlags(0LL) & 0x20000) != 0 )
                v70 = 1;
            }
            if ( (*((_DWORD *)v19 + 39) & 0x20) != 0 && (unsigned int)IsWindowBroadcastingDpiToChildrenX(v25) )
            {
              v71 = ValidateHmonitor(v19[16]);
              v72 = v71;
              v73 = v71 ? *(_WORD *)(*(_QWORD *)(v71 + 40) + 64LL) : 0;
              v74 = *((_DWORD *)v19 + 5);
              v131.left = *v59;
              v131.right = *((_DWORD *)v19 + 6) + v131.left;
              v75 = *((_DWORD *)v19 + 7);
              v131.top = v74;
              v131.bottom = v74 + v75;
              NewMonitor = GetNewMonitor((struct tagWND *)v25, &v131, 0LL);
              if ( NewMonitor )
              {
                if ( v72 != NewMonitor )
                {
                  v77 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 64LL);
                  if ( v73 != (_WORD)v77 )
                    *((_DWORD *)v19 + 39) ^= (*((_DWORD *)v19 + 39) ^ ((unsigned int)xxxAppAdjustDpiCandidateRect(
                                                                                       v25,
                                                                                       v77,
                                                                                       &v131,
                                                                                       v19 + 17) << 7)) & 0x80;
                }
              }
            }
            v78 = *((unsigned int *)v19 + 8);
            if ( (v19[4] & 0x21) == 1 && !v70 )
            {
              v92 = v125;
              v94 = v129;
              v93 = v122;
LABEL_151:
              if ( (v78 & 0x100) != 0 )
              {
                v95 = v127;
                v19[7] = 0LL;
                v19[8] = 0LL;
                v96 = *v59;
              }
              else
              {
                v96 = *v59;
                v97 = 0LL;
                v69 = *((unsigned int *)v19 + 5);
                *((_DWORD *)v19 + 14) = *v59;
                *((_DWORD *)v19 + 15) = v69;
                v98 = *(_QWORD *)(v25 + 24);
                if ( v98 )
                {
                  v99 = *(_QWORD *)(v98 + 8);
                  if ( v99 )
                    v97 = *(_QWORD *)(v99 + 24);
                }
                v95 = v127;
                v100 = v96;
                if ( v127 != v97 )
                {
                  v100 = v96 + v50;
                  v69 = (unsigned int)(v94 + v69);
                  *((_DWORD *)v19 + 14) = v96 + v50;
                  *((_DWORD *)v19 + 15) = v69;
                }
                *((_DWORD *)v19 + 16) = *((_DWORD *)v19 + 6) + v100;
                v78 = (unsigned int)(v69 + *((_DWORD *)v19 + 7));
                *((_DWORD *)v19 + 17) = v78;
              }
              if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 26LL) & 0x40) != 0 )
                v101 = *((_DWORD *)v19 + 6) + v96 - v126 - v92;
              else
                v101 = v96 - v92;
              *((_DWORD *)v19 + 18) = v101;
              v102 = *((_DWORD *)v19 + 8);
              v103 = (unsigned int)(*((_DWORD *)v19 + 5) - v93);
              *((_DWORD *)v19 + 19) = v103;
              if ( (v102 & 2) == 0 )
              {
                *((_DWORD *)v19 + 8) = v102 & 0xFFFFEFFF;
                *((_DWORD *)v19 + 10) = *((_DWORD *)v19 + 18) + *(_DWORD *)(*(_QWORD *)(v25 + 40) + 104LL);
                *((_DWORD *)v19 + 11) = v103 + *(_DWORD *)(*(_QWORD *)(v25 + 40) + 108LL);
                if ( v95 != GetDesktopWindow(v25) )
                {
                  v69 = (unsigned int)(v69 - v50);
                  *((_DWORD *)v19 + 10) = v69;
                  *((_DWORD *)v19 + 11) = v104 - v105;
                }
                *((_DWORD *)v19 + 12) = *(_DWORD *)(*(_QWORD *)(v25 + 40) + 112LL)
                                      - *(_DWORD *)(*(_QWORD *)(v25 + 40) + 104LL);
                v103 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v25 + 40) + 116LL)
                                    - *(_DWORD *)(*(_QWORD *)(v25 + 40) + 108LL));
                *((_DWORD *)v19 + 13) = v103;
              }
LABEL_166:
              ThreadUnlock1(v78, v103, v69);
            }
            else
            {
              memset(v140, 0, sizeof(v140));
              *((_DWORD *)v19 + 39) |= 4u;
              v79 = *(_QWORD *)(v25 + 40);
              if ( (*(_BYTE *)(v79 + 31) & 0x40) == 0 && *(char *)(v79 + 24) >= 0 )
                xxxCheckFullScreen((struct tagWND *)v25, (struct tagSIZERECT *)(v19 + 2));
              v80 = *((_OWORD *)v19 + 1);
              *(_OWORD *)v140 = *(_OWORD *)v19;
              v81 = v19[4];
              *(_QWORD *)&v141[48] = v140;
              *(_DWORD *)v141 = *v59;
              *(_DWORD *)&v141[8] = *((_DWORD *)v19 + 6) + *(_DWORD *)v141;
              *(_DWORD *)&v141[4] = *((_DWORD *)v19 + 5);
              *(_DWORD *)&v141[12] = *((_DWORD *)v19 + 7) + *(_DWORD *)&v141[4];
              *(_OWORD *)&v140[16] = v80;
              *(_QWORD *)&v140[32] = v81;
              GetRect(v25, (__int64)&v141[16], 66);
              GetRect(v25, (__int64)&v141[32], 65);
              v82 = *(_DWORD *)&v141[32];
              v83 = *(_DWORD *)&v141[40] - *(_DWORD *)&v141[32];
              v84 = *(_DWORD *)&v141[36];
              v85 = *(_DWORD *)&v141[44] - *(_DWORD *)&v141[36];
              _InterlockedAdd(&glSendMessage, 1u);
              v86 = xxxSendTransformableMessageTimeout(
                      (__int64 *)v25,
                      0x83u,
                      (HWND)1,
                      (struct _LARGE_STRING *)v141,
                      0,
                      0,
                      0LL,
                      1u,
                      0);
              if ( !IsStillWindowC(v19[1], v87) )
              {
LABEL_192:
                ThreadUnlock1(v38, v37, v39);
                ThreadUnlock1(v117, v116, v118);
                return 0LL;
              }
              if ( v86 - 16 > 0x3F0 )
              {
                v86 = 48;
                *(_OWORD *)&v141[16] = *(_OWORD *)v141;
              }
              if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 26LL) & 0x40) != 0 )
                v88 = *(_DWORD *)&v141[24] - *(_DWORD *)&v141[40];
              else
                v88 = *(_DWORD *)&v141[16] - *(_DWORD *)&v141[32];
              *((_DWORD *)v19 + 18) = v88;
              *((_DWORD *)v19 + 19) = *(_DWORD *)&v141[20] - *(_DWORD *)&v141[36];
              v19[5] = *(_QWORD *)v141;
              v89 = (unsigned int)(*(_DWORD *)&v141[8] - *(_DWORD *)v141);
              *((_DWORD *)v19 + 12) = v89;
              v69 = (unsigned int)(*(_DWORD *)&v141[12] - *(_DWORD *)&v141[4]);
              *((_DWORD *)v19 + 13) = v69;
              if ( __PAIR64__(v84, v82) != *(_QWORD *)v141 )
                *((_DWORD *)v19 + 8) &= ~0x1000u;
              v78 = *((unsigned int *)v19 + 8);
              v90 = *((_DWORD *)v19 + 8);
              if ( v83 != (_DWORD)v89 || v85 != (_DWORD)v69 )
              {
                v78 = v90;
                LODWORD(v78) = v90 & 0xFFFFF7FF;
                *((_DWORD *)v19 + 8) = v90 & 0xFFFFF7FF;
              }
              if ( (v78 & 0x100) == 0 && !v124 )
              {
                v91 = *(_QWORD *)(v25 + 40);
                if ( (*(_BYTE *)(v91 + 24) & 0x20) == 0 )
                {
                  if ( (v78 & 0x821) == 0x801 )
                  {
                    v92 = v125;
                    if ( *((_DWORD *)v19 + 18) == *((_DWORD *)v19 + 4) - v125 )
                    {
                      v93 = v122;
                      if ( *((_DWORD *)v19 + 19) == *((_DWORD *)v19 + 5) - v122 )
                      {
                        v94 = DWORD1(v128);
                        v59 = (LONG *)(v19 + 2);
                        v50 = v128;
                        goto LABEL_151;
                      }
                    }
                  }
                  if ( v83 == (_DWORD)v89
                    || (v86 & 0x100) == 0
                    && (v78 = *(_QWORD *)(*(_QWORD *)(v25 + 136) + 8LL), (*(_BYTE *)(v78 + 8) & 2) == 0) )
                  {
                    if ( v85 == (_DWORD)v69
                      || (v86 & 0x200) == 0
                      && (v78 = 1LL, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 136) + 8LL) + 8LL) & 1) == 0) )
                    {
                      v106 = *(_DWORD *)&v141[40] - *(_DWORD *)&v141[32];
                      v107 = *(_DWORD *)&v141[44] - *(_DWORD *)&v141[36];
                      v108 = *(_DWORD *)&v141[16];
                      v109 = *(_DWORD *)&v141[24] - *(_DWORD *)&v141[16];
                      v110 = *(_DWORD *)&v141[20];
                      v111 = *(_DWORD *)&v141[28] - *(_DWORD *)&v141[20];
                      v112 = *(_BYTE *)(v91 + 26) & 0x40;
                      if ( (v112 != 0) != ((v86 >> 7) & 1) )
                      {
                        if ( v112 && v106 > v109 )
                          v113 = v106 - v109;
                        else
                          v113 = v109 - v106;
                        v108 = v113 + *(_DWORD *)&v141[16];
                        *(_DWORD *)&v141[16] += v113;
                      }
                      if ( (v86 & 0x40) != 0 )
                      {
                        v110 = *(_DWORD *)&v141[28] - v107;
                        *(_DWORD *)&v141[20] = *(_DWORD *)&v141[28] - v107;
                      }
                      if ( v106 < v109 )
                        *(_DWORD *)&v141[24] = v108 + v106;
                      if ( v107 < v111 )
                        *(_DWORD *)&v141[28] = v110 + v107;
                      *(_OWORD *)(v19 + 7) = *(_OWORD *)&v141[16];
                      if ( v127 != GetDesktopWindow(v25) )
                      {
                        v114 = v128;
                        *((_DWORD *)v19 + 14) += v128;
                        *((_DWORD *)v19 + 16) += v114;
                        v115 = DWORD1(v128);
                        *((_DWORD *)v19 + 17) += DWORD1(v128);
                        *((_DWORD *)v19 + 15) += v115;
                      }
                      goto LABEL_166;
                    }
                  }
                }
              }
              v19[7] = 0LL;
              v19[8] = 0LL;
              ThreadUnlock1(v78, v89, v69);
            }
            v3 = (HWND)v130;
            v20 = v119;
            goto LABEL_191;
          }
        }
      }
      v20 = v119;
    }
    *v19 = 0LL;
    *((_DWORD *)v19 + 8) = 6159;
LABEL_191:
    v19 += 21;
  }
  ThreadUnlock1(v15, v14, v16);
  result = 1LL;
  *v132 = v3;
  return result;
}
