/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00274E8
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0027084 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C002718C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0028118 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     GetNewMonitor @ 0x1C002D640 (GetNewMonitor.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxCheckFullScreen @ 0x1C0035620 (xxxCheckFullScreen.c)
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C006DFF0 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C006F7A8 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C006FEBC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     _FChildVisible @ 0x1C0075BA0 (_FChildVisible.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C00F069C (IsWindowBroadcastingDpiToChildrenX.c)
 *     GetAppCompatFlags @ 0x1C00F8F30 (GetAppCompatFlags.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C00FAA00 (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C019E220 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C01AF81C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C01AF920 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01B0038 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1, HWND *a2)
{
  HWND v3; // r12
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 result; // rax
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // r13
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 *v12; // rdi
  int v13; // r15d
  __int64 v14; // r14
  struct _KTHREAD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdx
  ULONG_PTR v20; // rsi
  struct _KTHREAD *v21; // r15
  __int64 v22; // rbx
  __int64 *v23; // rax
  int v24; // ebx
  __int64 v25; // r12
  int v26; // r15d
  int v27; // ebx
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // edx
  int v38; // r14d
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r15d
  int v43; // edx
  __int64 v44; // rcx
  _DWORD *v45; // rcx
  int v46; // r8d
  int v47; // ebx
  int v48; // edx
  int v49; // r12d
  int v50; // edx
  LONG *v51; // r13
  int v52; // eax
  __int64 Prop; // rax
  __int64 v54; // rdx
  int v55; // ecx
  unsigned int v56; // ebx
  __int64 v57; // r15
  int v58; // r14d
  unsigned int v59; // r9d
  __int64 v60; // r8
  int v61; // r15d
  __int64 v62; // rax
  __int64 v63; // rbx
  __int16 v64; // r14
  LONG v65; // edx
  int v66; // ecx
  __int64 NewMonitor; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int128 v71; // xmm1
  __int64 v72; // xmm0_8
  unsigned int v73; // r14d
  int v74; // r12d
  unsigned int v75; // ebx
  int v76; // r13d
  unsigned int v77; // r15d
  __int64 v78; // rdx
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // r14
  int v82; // r11d
  int v83; // ebx
  int v84; // r10d
  LONG v85; // edx
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rax
  LONG v89; // ecx
  int v90; // edx
  __int64 v91; // rdx
  int v92; // eax
  int v93; // r9d
  int v94; // r10d
  int v95; // edx
  int v96; // r11d
  int v97; // r9d
  int v98; // r8d
  int v99; // r10d
  int v100; // ebx
  char v101; // r14
  int v102; // eax
  int v103; // eax
  int v104; // eax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  int v108; // [rsp+50h] [rbp-B0h]
  int v109; // [rsp+54h] [rbp-ACh]
  int v110; // [rsp+58h] [rbp-A8h]
  int v111; // [rsp+5Ch] [rbp-A4h]
  int v112; // [rsp+60h] [rbp-A0h]
  int v113; // [rsp+64h] [rbp-9Ch]
  int v114; // [rsp+68h] [rbp-98h]
  unsigned int v115; // [rsp+6Ch] [rbp-94h]
  int v116; // [rsp+70h] [rbp-90h]
  __int64 v117; // [rsp+78h] [rbp-88h]
  __int128 v118; // [rsp+80h] [rbp-80h] BYREF
  int v119; // [rsp+90h] [rbp-70h]
  HWND v120; // [rsp+98h] [rbp-68h]
  struct tagRECT v121; // [rsp+A0h] [rbp-60h] BYREF
  HWND *v122; // [rsp+B0h] [rbp-50h]
  char BugCheckParameter3[8]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v124[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v125[3]; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD v126[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v127; // [rsp+110h] [rbp+10h]
  _BYTE v128[56]; // [rsp+118h] [rbp+18h] BYREF

  v122 = a2;
  v120 = 0LL;
  v3 = 0LL;
  memset(v128, 0, sizeof(v128));
  v113 = 0;
  v109 = 0;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)ValidWindowPos) + 80LL);
  v117 = v8;
  if ( !(unsigned int)IsThreadCrossSessionAttached(
                        gpKernelHandleTable,
                        3LL * (unsigned __int16)*(_DWORD *)ValidWindowPos) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v124[0] = *(_QWORD *)(v6 + 408);
  *(_QWORD *)(v6 + 408) = v124;
  v124[1] = v8;
  if ( v8 )
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
  v12 = (__int64 *)*((_QWORD *)a1 + 5);
  v13 = *((_DWORD *)a1 + 7) - 1;
  v108 = v13;
  v112 = 1;
  if ( v13 >= 0 )
  {
    while ( 1 )
    {
      v14 = *v12;
      if ( *v12 )
        break;
LABEL_184:
      v12 += 21;
      v108 = --v13;
      if ( v13 < 0 )
        goto LABEL_185;
    }
    v15 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v9, 1LL) )
      PsGetThreadWin32Thread(v15);
    v10 = (unsigned __int16)v14;
    v9 = gpsi;
    if ( (unsigned __int64)(unsigned __int16)v14 >= *(_QWORD *)(gpsi + 8LL) )
      goto LABEL_183;
    v16 = gSharedInfo[1];
    v17 = v16 + (unsigned int)(unsigned __int16)v14 * LODWORD(gSharedInfo[2]);
    v18 = 3 * ((__int64)((unsigned int)(unsigned __int16)v14 * LODWORD(gSharedInfo[2])) >> 5);
    if ( WORD1(v14) != *(_WORD *)(v17 + 26) )
    {
      v9 = 0xFFFFLL;
      if ( WORD1(v14) != 0xFFFF
        && (WORD1(v14) || !PsGetCurrentProcessWow64Process(0xFFFFLL, v16, (unsigned __int16)v14, 0LL)) )
      {
LABEL_182:
        v13 = v108;
LABEL_183:
        *v12 = 0LL;
        *((_DWORD *)v12 + 8) = 6159;
        goto LABEL_184;
      }
    }
    v19 = 1LL;
    if ( (*(_BYTE *)(v17 + 25) & 1) != 0
      || *(_BYTE *)(v17 + 24) != 1
      || (v20 = *(_QWORD *)(gpKernelHandleTable + 8 * v18)) == 0 )
    {
      v13 = v108;
      goto LABEL_183;
    }
    v9 = v12[1];
    if ( v9 - 2 <= 0xFFFFFFFFFFFFFFFBuLL && !HMValidateHandleNoSecure(v9, 1LL) )
      goto LABEL_182;
    v21 = KeGetCurrentThread();
    v22 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v19) )
    {
      v23 = (__int64 *)PsGetThreadWin32Thread(v21);
      if ( v23 )
        v22 = *v23;
    }
    v125[0] = *(_QWORD *)(v22 + 408);
    *(_QWORD *)(v22 + 408) = v125;
    v125[1] = v20;
    _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
    v110 = 0;
    if ( !v3 && (v12[4] & 0x10) == 0 )
      v120 = *(HWND *)v20;
    v24 = *((_DWORD *)v12 + 8);
    if ( (v24 & 0x400) == 0 )
    {
      v25 = v12[1];
      v26 = v12[4] & 4;
      v27 = v24 & 0x750000;
      if ( (*(_DWORD *)(gptiCurrent + 1200LL) & 0x40000) == 0 || gptiCurrent == *(_QWORD *)(v20 + 16) )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v20, 0, 0, 0LL, 1, 0);
      }
      else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 392LL) != 1 )
      {
        xxxSendTransformableMessageTimeout(v20, 2, 50, (ULONG_PTR)BugCheckParameter3, 1, 0);
      }
      v28 = *((_DWORD *)v12 + 39);
      v29 = (unsigned int)v27 | *((_DWORD *)v12 + 8);
      *((_DWORD *)v12 + 8) = v29;
      if ( (v28 & 0x20) == 0 && (v29 & 3) != 3 )
      {
        v12[16] = *(_QWORD *)(*(_QWORD *)(v20 + 40) + 256LL);
        *((_DWORD *)v12 + 39) = v28 | 0x20;
      }
      *v12 = v14;
      if ( (v29 & 4) == 0 && (v26 || *((_WORD *)v12 + 4) != (_WORD)v25) )
      {
        if ( !IsStillWindowC(v12[1], v29) )
          goto LABEL_187;
        if ( *((_WORD *)v12 + 4) != (_WORD)v25 || (unsigned __int64)v12[1] >= 0xFFFFFFFFFFFFFFFEuLL )
        {
          v33 = CheckTopmost((struct tagWINDOWPOS *)v12);
          if ( v33 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v20 + 40) + 236LL) == 1 )
              SetTopmostEnum((struct tagWND *)v20, v33 == 1, (*((_DWORD *)v12 + 8) >> 9) & 1);
          }
        }
      }
    }
    v118 = *(_OWORD *)(*(_QWORD *)(v8 + 40) + 104LL);
    if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary((struct tagWND *)v20) )
    {
      WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi((struct tagWND *)v20);
      if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*(struct tagWND **)(v20 + 80)) )
      {
        LogicalToPhysicalInPlaceRectWithSubpixel(v8, &v118, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v20, &v118, 0LL);
      }
    }
    v35 = *(_QWORD *)(v20 + 40);
    v36 = 0LL;
    v37 = *(_DWORD *)(v35 + 88);
    v38 = v37;
    v39 = *(_DWORD *)(v35 + 92);
    *((_DWORD *)v12 + 20) = v37;
    *((_DWORD *)v12 + 21) = v39;
    v40 = *(_QWORD *)(v20 + 24);
    v114 = v37;
    v111 = v39;
    if ( v40 )
    {
      v41 = *(_QWORD *)(v40 + 8);
      if ( v41 )
        v36 = *(_QWORD *)(v41 + 24);
    }
    v42 = DWORD2(v118);
    v119 = DWORD1(v118);
    v116 = v118;
    if ( v8 != v36 )
    {
      v43 = v37 - v118;
      v39 -= DWORD1(v118);
      v114 = v43;
      v111 = v39;
      if ( (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 26LL) & 0x40) != 0
        && (v44 = *(_QWORD *)(v20 + 40), (*(_BYTE *)(v44 + 31) & 0xC0) == 0x40) )
      {
        v109 = 1;
        v38 = DWORD2(v118) - *(_DWORD *)(v44 + 96);
      }
      else
      {
        v109 = 0;
        v38 = v43;
      }
    }
    v45 = *(_DWORD **)(v20 + 40);
    v46 = *((_DWORD *)v12 + 8) | 0x1800;
    v47 = v46;
    v48 = v45[24] - v45[22];
    v49 = v45[25] - v45[23];
    *((_DWORD *)v12 + 8) = v46;
    v115 = v48;
    v50 = v46;
    if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 233LL) & 3) != 0 && (v46 & 0x100000) != 0 )
    {
      ExtendArrangedRectangleByFrameMargin((struct tagWND *)v20, (struct tagSIZERECT *)(v12 + 2));
      v50 = *((_DWORD *)v12 + 8);
      v39 = v111;
      v47 = v50;
    }
    v51 = (LONG *)(v12 + 2);
    if ( (v50 & 2) != 0 )
    {
      *v51 = v38;
      *((_DWORD *)v12 + 5) = v39;
    }
    else
    {
      if ( *v51 == v38 && *((_DWORD *)v12 + 5) == v39 )
      {
        v52 = v113;
        *((_DWORD *)v12 + 8) = v50 | 2;
        if ( v109 )
          v52 = 1;
        v113 = v52;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 31LL) & 0x20) != 0 && (unsigned int)IsTrayWindow(v20) )
      {
        *v51 = -32000;
        *((_DWORD *)v12 + 5) = -32000;
      }
      v50 = *((_DWORD *)v12 + 8);
      v47 = v50;
    }
    if ( (v50 & 1) != 0 )
    {
      v54 = v115;
      *((_DWORD *)v12 + 6) = v115;
      *((_DWORD *)v12 + 7) = v49;
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 31LL) & 0x20) != 0
        && (Prop = RealGetProp(*(_QWORD *)(v20 + 120), (unsigned __int16)atomCheckpointProp, 1LL),
            v47 = *((_DWORD *)v12 + 8),
            Prop) )
      {
        v54 = *(unsigned int *)(gpsi + 2124LL);
        *((_DWORD *)v12 + 6) = v54;
        v55 = *(_DWORD *)(gpsi + 2128LL);
        *((_DWORD *)v12 + 7) = v55;
      }
      else
      {
        v54 = *((unsigned int *)v12 + 6);
        if ( (int)v54 < 0 )
        {
          *((_DWORD *)v12 + 6) = 0;
          v54 = 0LL;
        }
        v55 = *((_DWORD *)v12 + 7);
        if ( v55 < 0 )
        {
          *((_DWORD *)v12 + 7) = 0;
          v55 = 0;
        }
      }
      if ( (_DWORD)v54 == v115 && v55 == v49 )
      {
        v47 = *((_DWORD *)v12 + 8) | 1;
        *((_DWORD *)v12 + 8) = v47;
        if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 21LL) & 1) == 0 )
          v110 = 1;
      }
    }
    if ( v109 )
      *v51 = v42 - *v51 - v54 - v116;
    if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 31LL) & 0x10) != 0 )
    {
      v56 = v47 & 0xFFFFFFBF;
    }
    else
    {
      v56 = v47 & 0xFFFFFF7F;
      *((_DWORD *)v12 + 8) = v56;
      if ( (v56 & 0x40) != 0 )
      {
LABEL_91:
        v57 = *(_QWORD *)(v20 + 40);
        v58 = v56;
        if ( (*(_BYTE *)(v57 + 27) & 2) == 0 && GetStyleWindow(v20, 2818LL) )
        {
          v58 = v56 | 0x100;
          *((_DWORD *)v12 + 8) = v56 | 0x100;
          v57 = *(_QWORD *)(v20 + 40);
        }
        if ( (*(_BYTE *)(v57 + 20) & 0x20) != 0 )
        {
          v58 &= ~4u;
          v12[1] = 1LL;
          *((_DWORD *)v12 + 8) = v58;
        }
        if ( v112 )
        {
          if ( (v58 & 4) == 0 )
          {
            v112 = 0;
            if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 19LL) & 4) == 0 )
            {
              if ( (unsigned int)ValidateZorder((struct tagCVR *)v12) )
              {
                *((_DWORD *)v12 + 8) |= 4u;
                v112 = 1;
              }
            }
          }
        }
        v59 = *((_DWORD *)v12 + 8);
        v60 = v59;
        if ( (v59 & 8) == 0 && ((v12[4] & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible(v20, v54, v59)) )
        {
          v60 = v59 | 8;
          *((_DWORD *)v12 + 8) = v60;
        }
        if ( (v60 & 2) != 0 || (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 21LL) & 1) != 0 )
        {
          v61 = v110;
        }
        else
        {
          v61 = v110;
          if ( (GetAppCompatFlags(0LL, v54) & 0x20000) != 0 )
            v61 = 1;
        }
        if ( (*((_DWORD *)v12 + 39) & 0x20) != 0 && (unsigned int)IsWindowBroadcastingDpiToChildrenX(v20) )
        {
          v62 = ValidateHmonitor(v12[16]);
          v63 = v62;
          v64 = v62 ? *(_WORD *)(*(_QWORD *)(v62 + 40) + 64LL) : 0;
          v65 = *((_DWORD *)v12 + 5);
          v121.left = *v51;
          v121.right = *((_DWORD *)v12 + 6) + v121.left;
          v66 = *((_DWORD *)v12 + 7);
          v121.top = v65;
          v121.bottom = v65 + v66;
          NewMonitor = GetNewMonitor((struct tagWND *)v20, &v121);
          if ( NewMonitor )
          {
            if ( v63 != NewMonitor )
            {
              v68 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 64LL);
              if ( v64 != (_WORD)v68 )
                *((_DWORD *)v12 + 39) ^= (*((_DWORD *)v12 + 39) ^ ((unsigned int)xxxAppAdjustDpiCandidateRect(
                                                                                   v20,
                                                                                   v68,
                                                                                   &v121,
                                                                                   v12 + 17) << 7)) & 0x80;
            }
          }
        }
        v69 = *((unsigned int *)v12 + 8);
        if ( (v12[4] & 0x21) != 1 || v61 )
        {
          *((_DWORD *)v12 + 39) |= 4u;
          v70 = *(_QWORD *)(v20 + 40);
          if ( (*(_BYTE *)(v70 + 31) & 0x40) == 0 && *(char *)(v70 + 24) >= 0 )
            xxxCheckFullScreen((struct tagWND *)v20, (struct tagSIZERECT *)(v12 + 2));
          v71 = *((_OWORD *)v12 + 1);
          v126[0] = *(_OWORD *)v12;
          v72 = v12[4];
          *(_QWORD *)&v128[48] = v126;
          *(_DWORD *)v128 = *v51;
          *(_DWORD *)&v128[8] = *((_DWORD *)v12 + 6) + *(_DWORD *)v128;
          *(_DWORD *)&v128[4] = *((_DWORD *)v12 + 5);
          *(_DWORD *)&v128[12] = *((_DWORD *)v12 + 7) + *(_DWORD *)&v128[4];
          v126[1] = v71;
          v127 = v72;
          GetRect(v20, &v128[16], 66LL);
          GetRect(v20, &v128[32], 65LL);
          v73 = *(_DWORD *)&v128[32];
          v74 = *(_DWORD *)&v128[40] - *(_DWORD *)&v128[32];
          v75 = *(_DWORD *)&v128[36];
          v76 = *(_DWORD *)&v128[44] - *(_DWORD *)&v128[36];
          _InterlockedAdd(&glSendMessage, 1u);
          v77 = xxxSendTransformableMessageTimeout(v20, 0, 0, 0LL, 1, 0);
          if ( !IsStillWindowC(v12[1], v78) )
          {
LABEL_187:
            ThreadUnlock1(v31, v30, v32);
            ThreadUnlock1(v106, v105, v107);
            return 0LL;
          }
          if ( v77 - 16 > 0x3F0 )
          {
            v77 = 48;
            *(_OWORD *)&v128[16] = *(_OWORD *)v128;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 26LL) & 0x40) != 0 )
            v79 = *(_DWORD *)&v128[24] - *(_DWORD *)&v128[40];
          else
            v79 = *(_DWORD *)&v128[16] - *(_DWORD *)&v128[32];
          *((_DWORD *)v12 + 18) = v79;
          *((_DWORD *)v12 + 19) = *(_DWORD *)&v128[20] - *(_DWORD *)&v128[36];
          v12[5] = *(_QWORD *)v128;
          v80 = (unsigned int)(*(_DWORD *)&v128[8] - *(_DWORD *)v128);
          *((_DWORD *)v12 + 12) = v80;
          v60 = (unsigned int)(*(_DWORD *)&v128[12] - *(_DWORD *)&v128[4]);
          *((_DWORD *)v12 + 13) = v60;
          if ( __PAIR64__(v75, v73) != *(_QWORD *)v128 )
            *((_DWORD *)v12 + 8) &= ~0x1000u;
          v69 = *((unsigned int *)v12 + 8);
          if ( v74 != (_DWORD)v80 || v76 != (_DWORD)v60 )
          {
            LODWORD(v69) = v69 & 0xFFFFF7FF;
            *((_DWORD *)v12 + 8) = v69;
          }
          if ( (v69 & 0x100) == 0 && !v113 )
          {
            v81 = *(_QWORD *)(v20 + 40);
            if ( (*(_BYTE *)(v81 + 24) & 0x20) == 0 )
            {
              if ( (v69 & 0x821) == 0x801 )
              {
                v82 = v114;
                if ( *((_DWORD *)v12 + 18) == *((_DWORD *)v12 + 4) - v114
                  && *((_DWORD *)v12 + 19) == *((_DWORD *)v12 + 5) - v111 )
                {
                  v83 = DWORD1(v118);
                  v51 = (LONG *)(v12 + 2);
                  v84 = v118;
LABEL_144:
                  if ( (v69 & 0x100) != 0 )
                  {
                    v12[7] = 0LL;
                    v12[8] = 0LL;
                    v85 = *v51;
                    v8 = v117;
                  }
                  else
                  {
                    v85 = *v51;
                    v86 = 0LL;
                    v60 = *((unsigned int *)v12 + 5);
                    *((_DWORD *)v12 + 14) = *v51;
                    *((_DWORD *)v12 + 15) = v60;
                    v87 = *(_QWORD *)(v20 + 24);
                    if ( v87 )
                    {
                      v88 = *(_QWORD *)(v87 + 8);
                      if ( v88 )
                        v86 = *(_QWORD *)(v88 + 24);
                    }
                    v8 = v117;
                    v89 = v85;
                    if ( v117 != v86 )
                    {
                      v89 = v85 + v84;
                      v60 = (unsigned int)(v83 + v60);
                      *((_DWORD *)v12 + 14) = v85 + v84;
                      *((_DWORD *)v12 + 15) = v60;
                    }
                    *((_DWORD *)v12 + 16) = *((_DWORD *)v12 + 6) + v89;
                    v69 = (unsigned int)(v60 + *((_DWORD *)v12 + 7));
                    *((_DWORD *)v12 + 17) = v69;
                  }
                  if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 26LL) & 0x40) != 0 )
                    v90 = *((_DWORD *)v12 + 6) + v85 - v115 - v82;
                  else
                    v90 = v85 - v82;
                  *((_DWORD *)v12 + 18) = v90;
                  v91 = (unsigned int)(*((_DWORD *)v12 + 5) - v111);
                  v92 = *((_DWORD *)v12 + 8);
                  *((_DWORD *)v12 + 19) = v91;
                  if ( (v92 & 2) == 0 )
                  {
                    *((_DWORD *)v12 + 8) = v92 & 0xFFFFEFFF;
                    *((_DWORD *)v12 + 10) = *((_DWORD *)v12 + 18) + *(_DWORD *)(*(_QWORD *)(v20 + 40) + 104LL);
                    *((_DWORD *)v12 + 11) = v91 + *(_DWORD *)(*(_QWORD *)(v20 + 40) + 108LL);
                    if ( v8 != GetDesktopWindow(v20) )
                    {
                      v60 = (unsigned int)(v60 - v94);
                      *((_DWORD *)v12 + 10) = v60;
                      *((_DWORD *)v12 + 11) = v93 - v83;
                    }
                    *((_DWORD *)v12 + 12) = *(_DWORD *)(*(_QWORD *)(v20 + 40) + 112LL)
                                          - *(_DWORD *)(*(_QWORD *)(v20 + 40) + 104LL);
                    v91 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v20 + 40) + 116LL)
                                       - *(_DWORD *)(*(_QWORD *)(v20 + 40) + 108LL));
                    *((_DWORD *)v12 + 13) = v91;
                  }
LABEL_179:
                  ThreadUnlock1(v69, v91, v60);
LABEL_181:
                  v13 = v108;
                  v3 = v120;
                  goto LABEL_184;
                }
              }
              if ( v74 == (_DWORD)v80
                || (v77 & 0x100) == 0
                && (v69 = *(_QWORD *)(*(_QWORD *)(v20 + 112) + 8LL), (*(_BYTE *)(v69 + 8) & 2) == 0) )
              {
                if ( v76 == (_DWORD)v60
                  || (v77 & 0x200) == 0
                  && (v69 = 1LL, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 112) + 8LL) + 8LL) & 1) == 0) )
                {
                  v95 = *(_DWORD *)&v128[40] - *(_DWORD *)&v128[32];
                  v96 = *(_DWORD *)&v128[44] - *(_DWORD *)&v128[36];
                  v97 = *(_DWORD *)&v128[16];
                  v98 = *(_DWORD *)&v128[24] - *(_DWORD *)&v128[16];
                  v99 = *(_DWORD *)&v128[20];
                  v100 = *(_DWORD *)&v128[28] - *(_DWORD *)&v128[20];
                  v101 = *(_BYTE *)(v81 + 26) & 0x40;
                  if ( (v101 != 0) != ((v77 >> 7) & 1) )
                  {
                    if ( v101 && v95 > v98 )
                      v102 = v95 - v98;
                    else
                      v102 = v98 - v95;
                    v97 = v102 + *(_DWORD *)&v128[16];
                    *(_DWORD *)&v128[16] += v102;
                  }
                  if ( (v77 & 0x40) != 0 )
                  {
                    v99 = *(_DWORD *)&v128[28] - v96;
                    *(_DWORD *)&v128[20] = *(_DWORD *)&v128[28] - v96;
                  }
                  if ( v95 < v98 )
                    *(_DWORD *)&v128[24] = v97 + v95;
                  if ( v96 < v100 )
                    *(_DWORD *)&v128[28] = v99 + v96;
                  *(_OWORD *)(v12 + 7) = *(_OWORD *)&v128[16];
                  v8 = v117;
                  if ( v117 != GetDesktopWindow(v20) )
                  {
                    v103 = v118;
                    *((_DWORD *)v12 + 14) += v118;
                    *((_DWORD *)v12 + 16) += v103;
                    v104 = DWORD1(v118);
                    *((_DWORD *)v12 + 17) += DWORD1(v118);
                    *((_DWORD *)v12 + 15) += v104;
                  }
                  goto LABEL_179;
                }
              }
            }
          }
          v12[7] = 0LL;
          v12[8] = 0LL;
          ThreadUnlock1(v69, v80, v60);
          v8 = v117;
          goto LABEL_181;
        }
        v84 = v116;
        v82 = v114;
        v83 = v119;
        goto LABEL_144;
      }
      v56 |= 8u;
    }
    *((_DWORD *)v12 + 8) = v56;
    goto LABEL_91;
  }
LABEL_185:
  ThreadUnlock1(v9, 1LL, v10);
  result = 1LL;
  *v122 = v3;
  return result;
}
