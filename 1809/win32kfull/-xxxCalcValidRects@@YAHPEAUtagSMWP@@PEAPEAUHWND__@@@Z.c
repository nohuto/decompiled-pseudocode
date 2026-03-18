/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C000F8E0 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C000FA90 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C000FAD4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C000FEFC (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     xxxCheckFullScreen @ 0x1C001CD74 (xxxCheckFullScreen.c)
 *     GetRect @ 0x1C0021568 (GetRect.c)
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0038368 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0039E54 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C0041300 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C0041428 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     GetNewMonitor @ 0x1C004259C (GetNewMonitor.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     _FChildVisible @ 0x1C0102B1C (_FChildVisible.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0108034 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0109E14 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C011190C (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 *     GetAppCompatFlags @ 0x1C0115390 (GetAppCompatFlags.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01BF748 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01D2EAC (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1, HWND *a2)
{
  HWND v3; // r12
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 result; // rax
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rdi
  int v12; // esi
  __int64 v13; // r15
  struct _KTHREAD *v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  struct _KTHREAD *v19; // r14
  __int64 v20; // rbx
  __int64 *v21; // rax
  int v22; // ebx
  __int64 v23; // r13
  int v24; // r12d
  int v25; // r14d
  int v26; // ebx
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // edx
  int v37; // r14d
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // r15d
  int v42; // edx
  __int64 v43; // rcx
  _DWORD *v44; // rcx
  int v45; // r8d
  int v46; // ebx
  int v47; // edx
  int v48; // r12d
  int v49; // edx
  LONG *v50; // r13
  int v51; // eax
  __int64 Prop; // rax
  __int64 v53; // rdx
  int v54; // ecx
  unsigned int v55; // ebx
  __int64 v56; // r15
  int v57; // r14d
  unsigned int v58; // r9d
  char v59; // r8
  int v60; // r15d
  __int64 v61; // rax
  __int64 v62; // rbx
  __int16 v63; // r14
  LONG v64; // edx
  int v65; // ecx
  __int64 NewMonitor; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int128 v70; // xmm1
  __int64 v71; // xmm0_8
  unsigned int v72; // r14d
  int v73; // r12d
  unsigned int v74; // ebx
  int v75; // r13d
  unsigned int v76; // r15d
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rdx
  int v80; // r8d
  unsigned int v81; // eax
  __int64 v82; // r14
  int v83; // r11d
  int v84; // ebx
  int v85; // r10d
  __int64 v86; // r14
  LONG v87; // edx
  int v88; // r8d
  __int64 v89; // r9
  __int64 v90; // rax
  __int64 v91; // rax
  LONG v92; // ecx
  int v93; // eax
  __int64 v94; // rdx
  int v95; // eax
  int v96; // r8d
  int v97; // r9d
  int v98; // r10d
  int v99; // edx
  int v100; // r11d
  int v101; // r9d
  int v102; // r8d
  int v103; // r10d
  int v104; // ebx
  char v105; // r14
  int v106; // eax
  int v107; // eax
  int v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rcx
  int v111; // [rsp+50h] [rbp-B0h]
  int v112; // [rsp+54h] [rbp-ACh]
  int v113; // [rsp+58h] [rbp-A8h]
  int v114; // [rsp+5Ch] [rbp-A4h]
  int v115; // [rsp+60h] [rbp-A0h]
  int v116; // [rsp+64h] [rbp-9Ch]
  int v117; // [rsp+68h] [rbp-98h]
  unsigned int v118; // [rsp+6Ch] [rbp-94h]
  int v119; // [rsp+70h] [rbp-90h]
  __int64 v120; // [rsp+78h] [rbp-88h]
  __int128 v121; // [rsp+80h] [rbp-80h] BYREF
  int v122; // [rsp+90h] [rbp-70h]
  __int64 v123; // [rsp+98h] [rbp-68h]
  struct tagRECT v124; // [rsp+A0h] [rbp-60h] BYREF
  HWND *v125; // [rsp+B0h] [rbp-50h]
  __int64 BugCheckParameter3; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v127[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v128[3]; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD v129[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v130; // [rsp+110h] [rbp+10h]
  _BYTE v131[56]; // [rsp+118h] [rbp+18h] BYREF

  v125 = a2;
  v123 = 0LL;
  v3 = 0LL;
  memset(v131, 0, sizeof(v131));
  v116 = 0;
  v112 = 0;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)ValidWindowPos) + 80LL);
  v120 = v8;
  if ( !(unsigned int)IsThreadCrossSessionAttached(
                        gpKernelHandleTable,
                        3LL * (unsigned __int16)*(_DWORD *)ValidWindowPos) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v127[0] = *(_QWORD *)(v6 + 416);
  *(_QWORD *)(v6 + 416) = v127;
  v127[1] = v8;
  if ( v8 )
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
  v11 = *((_QWORD *)a1 + 5);
  v12 = *((_DWORD *)a1 + 7);
  v115 = 1;
  while ( 1 )
  {
    v111 = --v12;
    if ( v12 < 0 )
      break;
    v13 = *(_QWORD *)v11;
    if ( !*(_QWORD *)v11 )
      goto LABEL_188;
    v14 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v9, 1LL) )
      PsGetThreadWin32Thread(v14);
    v9 = gpsi;
    if ( (unsigned __int64)(unsigned __int16)v13 >= *(_QWORD *)(gpsi + 8LL) )
      goto LABEL_187;
    v15 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v13 * *((_DWORD *)&gSharedInfo + 4);
    v16 = 3 * ((__int64)((unsigned int)(unsigned __int16)v13 * *((_DWORD *)&gSharedInfo + 4)) >> 5);
    if ( WORD1(v13) == *(_WORD *)(v15 + 26)
      || (v9 = 0xFFFFLL, WORD1(v13) == 0xFFFF)
      || !WORD1(v13) && PsGetCurrentProcessWow64Process(0xFFFFLL) )
    {
      v17 = 1LL;
      if ( (*(_BYTE *)(v15 + 25) & 1) != 0
        || *(_BYTE *)(v15 + 24) != 1
        || (v18 = *(_QWORD *)(gpKernelHandleTable + 8 * v16)) == 0 )
      {
        v12 = v111;
        goto LABEL_187;
      }
      v9 = *(_QWORD *)(v11 + 8);
      if ( v9 - 2 > 0xFFFFFFFFFFFFFFFBuLL || HMValidateHandleNoSecure(v9, 1LL) )
      {
        v19 = KeGetCurrentThread();
        v20 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v17) )
        {
          v21 = (__int64 *)PsGetThreadWin32Thread(v19);
          if ( v21 )
            v20 = *v21;
        }
        v128[0] = *(_QWORD *)(v20 + 416);
        *(_QWORD *)(v20 + 416) = v128;
        v128[1] = v18;
        _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
        v113 = 0;
        if ( !v3 && (*(_DWORD *)(v11 + 32) & 0x10) == 0 )
          v123 = *(_QWORD *)v18;
        v22 = *(_DWORD *)(v11 + 32);
        if ( (v22 & 0x400) == 0 )
        {
          v23 = *(_QWORD *)(v11 + 8);
          v24 = *(_DWORD *)(v11 + 32) & 4;
          v25 = v22 & 0x750000;
          v26 = *(_DWORD *)(v11 + 32) & 0x40;
          if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x40000) == 0 || gptiCurrent == *(_QWORD *)(v18 + 16) )
          {
            _InterlockedAdd(&glSendMessage, 1u);
            xxxSendTransformableMessageTimeout((__int64 *)v18, 0x46u, 0LL, v11, 0, 0, 0LL, 1, 0);
          }
          else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 392LL) != 1 )
          {
            xxxSendTransformableMessageTimeout((__int64 *)v18, 0x46u, 0LL, v11, 2, 50, &BugCheckParameter3, 1, 0);
          }
          v27 = v25 | *(_DWORD *)(v11 + 32);
          *(_DWORD *)(v11 + 32) = v27;
          v28 = v27;
          if ( v26 && (v27 & 0x40) == 0 )
          {
            NotifyShell::CuratedWindowHidden((NotifyShell *)v18, (struct tagWND *)v27);
            v28 = *(unsigned int *)(v11 + 32);
          }
          v29 = *(_DWORD *)(v11 + 156);
          if ( (v29 & 0x20) == 0 && (v28 & 3) != 3 )
          {
            *(_QWORD *)(v11 + 128) = *(_QWORD *)(*(_QWORD *)(v18 + 40) + 256LL);
            *(_DWORD *)(v11 + 156) = v29 | 0x20;
          }
          *(_QWORD *)v11 = v13;
          if ( (v28 & 4) == 0 && (v24 || *(_WORD *)(v11 + 8) != (_WORD)v23) )
          {
            if ( !IsStillWindowC(*(_QWORD *)(v11 + 8), v28) )
              goto LABEL_190;
            if ( *(_WORD *)(v11 + 8) != (_WORD)v23 || *(_QWORD *)(v11 + 8) >= 0xFFFFFFFFFFFFFFFEuLL )
            {
              v32 = CheckTopmost((struct tagWINDOWPOS *)v11);
              if ( v32 )
              {
                if ( *(_DWORD *)(*(_QWORD *)(v18 + 40) + 236LL) == 1 )
                  SetTopmostEnum((struct tagWND *)v18, v32 == 1, (*(_DWORD *)(v11 + 32) >> 9) & 1);
              }
            }
          }
        }
        v121 = *(_OWORD *)(*(_QWORD *)(v120 + 40) + 104LL);
        if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary((struct tagWND *)v18) )
        {
          WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi((struct tagWND *)v18);
          if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*(struct tagWND **)(v18 + 80)) )
          {
            LogicalToPhysicalInPlaceRectWithSubpixel(v120, &v121, 0LL);
            PhysicalToLogicalInPlaceRectWithSubpixel(v18, &v121, 0LL);
          }
        }
        v34 = *(_QWORD *)(v18 + 40);
        v35 = 0LL;
        v36 = *(_DWORD *)(v34 + 88);
        v37 = v36;
        v38 = *(_DWORD *)(v34 + 92);
        *(_DWORD *)(v11 + 80) = v36;
        *(_DWORD *)(v11 + 84) = v38;
        v39 = *(_QWORD *)(v18 + 24);
        v117 = v36;
        v114 = v38;
        if ( v39 )
        {
          v40 = *(_QWORD *)(v39 + 8);
          if ( v40 )
            v35 = *(_QWORD *)(v40 + 24);
        }
        v41 = DWORD2(v121);
        v122 = DWORD1(v121);
        v119 = v121;
        if ( v120 != v35 )
        {
          v42 = v36 - v121;
          v38 -= DWORD1(v121);
          v117 = v42;
          v114 = v38;
          if ( (*(_BYTE *)(*(_QWORD *)(v120 + 40) + 26LL) & 0x40) != 0
            && (v43 = *(_QWORD *)(v18 + 40), (*(_BYTE *)(v43 + 31) & 0xC0) == 0x40) )
          {
            v112 = 1;
            v37 = DWORD2(v121) - *(_DWORD *)(v43 + 96);
          }
          else
          {
            v112 = 0;
            v37 = v42;
          }
        }
        v44 = *(_DWORD **)(v18 + 40);
        v45 = *(_DWORD *)(v11 + 32) | 0x1800;
        v46 = v45;
        v47 = v44[24] - v44[22];
        v48 = v44[25] - v44[23];
        *(_DWORD *)(v11 + 32) = v45;
        v118 = v47;
        v49 = v45;
        if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 233LL) & 3) != 0 && (v45 & 0x100000) != 0 )
        {
          ExtendArrangedRectangleByFrameMargin((struct tagWND *)v18, (struct tagSIZERECT *)(v11 + 16));
          v49 = *(_DWORD *)(v11 + 32);
          v46 = v49;
          v38 = v114;
        }
        v50 = (LONG *)(v11 + 16);
        if ( (v49 & 2) != 0 )
        {
          *(_DWORD *)(v11 + 156) |= 0x100u;
          *v50 = v37;
          *(_DWORD *)(v11 + 20) = v38;
        }
        else
        {
          if ( *v50 == v37 && *(_DWORD *)(v11 + 20) == v38 )
          {
            v51 = v116;
            *(_DWORD *)(v11 + 32) = v49 | 2;
            if ( v112 )
              v51 = 1;
            v116 = v51;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 31LL) & 0x20) != 0 && (unsigned int)IsTrayWindow((_QWORD *)v18) )
          {
            *v50 = -32000;
            *(_DWORD *)(v11 + 20) = -32000;
          }
          v49 = *(_DWORD *)(v11 + 32);
          v46 = v49;
        }
        if ( (v49 & 1) != 0 )
        {
          v53 = v118;
          *(_DWORD *)(v11 + 24) = v118;
          *(_DWORD *)(v11 + 28) = v48;
        }
        else
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 31LL) & 0x20) != 0
            && (Prop = GetProp(v18, (unsigned __int16)atomCheckpointProp, 1LL), v46 = *(_DWORD *)(v11 + 32), Prop) )
          {
            v53 = *(unsigned int *)(gpsi + 2124LL);
            *(_DWORD *)(v11 + 24) = v53;
            v54 = *(_DWORD *)(gpsi + 2128LL);
            *(_DWORD *)(v11 + 28) = v54;
          }
          else
          {
            v53 = *(unsigned int *)(v11 + 24);
            if ( (int)v53 < 0 )
            {
              *(_DWORD *)(v11 + 24) = 0;
              v53 = 0LL;
            }
            v54 = *(_DWORD *)(v11 + 28);
            if ( v54 < 0 )
            {
              *(_DWORD *)(v11 + 28) = 0;
              v54 = 0;
            }
          }
          if ( (_DWORD)v53 == v118 && v54 == v48 )
          {
            v46 = *(_DWORD *)(v11 + 32) | 1;
            *(_DWORD *)(v11 + 32) = v46;
            if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 21LL) & 1) == 0 )
              v113 = 1;
          }
        }
        if ( v112 )
          *v50 = v41 - v53 - v119 - *v50;
        if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 31LL) & 0x10) != 0 )
        {
          v55 = v46 & 0xFFFFFFBF;
          goto LABEL_94;
        }
        v55 = v46 & 0xFFFFFF7F;
        *(_DWORD *)(v11 + 32) = v55;
        if ( (v55 & 0x40) == 0 )
        {
          v55 |= 8u;
LABEL_94:
          *(_DWORD *)(v11 + 32) = v55;
        }
        v56 = *(_QWORD *)(v18 + 40);
        v57 = v55;
        if ( (*(_BYTE *)(v56 + 27) & 2) == 0 && GetStyleWindow(v18, 2818LL) )
        {
          v57 = v55 | 0x100;
          *(_DWORD *)(v11 + 32) = v55 | 0x100;
          v56 = *(_QWORD *)(v18 + 40);
        }
        if ( (*(_BYTE *)(v56 + 20) & 0x20) != 0 )
        {
          v57 &= ~4u;
          *(_QWORD *)(v11 + 8) = 1LL;
          *(_DWORD *)(v11 + 32) = v57;
        }
        if ( v115 )
        {
          if ( (v57 & 4) == 0 )
          {
            v115 = 0;
            if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 19LL) & 4) == 0 )
            {
              if ( (unsigned int)ValidateZorder((struct tagCVR *)v11) )
              {
                *(_DWORD *)(v11 + 32) |= 4u;
                v115 = 1;
              }
            }
          }
        }
        v58 = *(_DWORD *)(v11 + 32);
        v59 = v58;
        if ( (v58 & 8) == 0
          && ((*(_DWORD *)(v11 + 32) & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible(v18, v53, v58)) )
        {
          v59 = v58 | 8;
          *(_DWORD *)(v11 + 32) = v58 | 8;
        }
        if ( (v59 & 2) != 0 || (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 21LL) & 1) != 0 )
        {
          v60 = v113;
        }
        else
        {
          v60 = v113;
          if ( (GetAppCompatFlags(0LL, v53) & 0x20000) != 0 )
            v60 = 1;
        }
        if ( (*(_DWORD *)(v11 + 156) & 0x20) != 0 && (unsigned int)IsWindowBroadcastingDpiToChildrenX(v18) )
        {
          v61 = ValidateHmonitor(*(_QWORD *)(v11 + 128));
          v62 = v61;
          v63 = v61 ? *(_WORD *)(*(_QWORD *)(v61 + 40) + 64LL) : 0;
          v64 = *(_DWORD *)(v11 + 20);
          v124.left = *v50;
          v124.right = *(_DWORD *)(v11 + 24) + v124.left;
          v65 = *(_DWORD *)(v11 + 28);
          v124.top = v64;
          v124.bottom = v64 + v65;
          NewMonitor = GetNewMonitor((struct tagWND *)v18, &v124);
          if ( NewMonitor )
          {
            if ( v62 != NewMonitor )
            {
              v67 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 64LL);
              if ( v63 != (_WORD)v67 )
                *(_DWORD *)(v11 + 156) ^= (*(_DWORD *)(v11 + 156) ^ ((unsigned int)xxxAppAdjustDpiCandidateRect(
                                                                                     v18,
                                                                                     v67,
                                                                                     &v124,
                                                                                     v11 + 136) << 7)) & 0x80;
            }
          }
        }
        v68 = *(unsigned int *)(v11 + 32);
        if ( (*(_DWORD *)(v11 + 32) & 0x21) == 1 && !v60 )
        {
          v85 = v119;
          v83 = v117;
          v84 = v122;
LABEL_148:
          if ( (v68 & 0x100) != 0 )
          {
            v86 = v120;
            *(_QWORD *)(v11 + 56) = 0LL;
            *(_QWORD *)(v11 + 64) = 0LL;
            v87 = *v50;
          }
          else
          {
            v87 = *v50;
            v88 = *(_DWORD *)(v11 + 20);
            v89 = 0LL;
            *(_DWORD *)(v11 + 56) = *v50;
            *(_DWORD *)(v11 + 60) = v88;
            v90 = *(_QWORD *)(v18 + 24);
            if ( v90 )
            {
              v91 = *(_QWORD *)(v90 + 8);
              if ( v91 )
                v89 = *(_QWORD *)(v91 + 24);
            }
            v86 = v120;
            v92 = v87;
            if ( v120 != v89 )
            {
              v92 = v87 + v85;
              v88 += v84;
              *(_DWORD *)(v11 + 56) = v87 + v85;
              *(_DWORD *)(v11 + 60) = v88;
            }
            *(_DWORD *)(v11 + 64) = *(_DWORD *)(v11 + 24) + v92;
            v68 = (unsigned int)(v88 + *(_DWORD *)(v11 + 28));
            *(_DWORD *)(v11 + 68) = v68;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 26LL) & 0x40) != 0 )
            v93 = v87 + *(_DWORD *)(v11 + 24) - v118 - v83;
          else
            v93 = v87 - v83;
          *(_DWORD *)(v11 + 72) = v93;
          v94 = (unsigned int)(*(_DWORD *)(v11 + 20) - v114);
          v95 = *(_DWORD *)(v11 + 32);
          *(_DWORD *)(v11 + 76) = v94;
          if ( (v95 & 2) == 0 )
          {
            *(_DWORD *)(v11 + 32) = v95 & 0xFFFFEFFF;
            *(_DWORD *)(v11 + 40) = *(_DWORD *)(v11 + 72) + *(_DWORD *)(*(_QWORD *)(v18 + 40) + 104LL);
            *(_DWORD *)(v11 + 44) = v94 + *(_DWORD *)(*(_QWORD *)(v18 + 40) + 108LL);
            if ( v86 != GetDesktopWindow(v18) )
            {
              *(_DWORD *)(v11 + 40) = v96 - v98;
              *(_DWORD *)(v11 + 44) = v97 - v84;
            }
            *(_DWORD *)(v11 + 48) = *(_DWORD *)(*(_QWORD *)(v18 + 40) + 112LL)
                                  - *(_DWORD *)(*(_QWORD *)(v18 + 40) + 104LL);
            v94 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v18 + 40) + 116LL) - *(_DWORD *)(*(_QWORD *)(v18 + 40) + 108LL));
            *(_DWORD *)(v11 + 52) = v94;
          }
LABEL_183:
          ThreadUnlock1(v68, v94);
        }
        else
        {
          *(_DWORD *)(v11 + 156) |= 4u;
          v69 = *(_QWORD *)(v18 + 40);
          if ( (*(_BYTE *)(v69 + 31) & 0x40) == 0 && *(char *)(v69 + 24) >= 0 )
            xxxCheckFullScreen((struct tagWND *)v18, (struct tagSIZERECT *)(v11 + 16));
          v70 = *(_OWORD *)(v11 + 16);
          v129[0] = *(_OWORD *)v11;
          v71 = *(_QWORD *)(v11 + 32);
          *(_QWORD *)&v131[48] = v129;
          *(_DWORD *)v131 = *v50;
          *(_DWORD *)&v131[8] = *(_DWORD *)(v11 + 24) + *(_DWORD *)v131;
          *(_DWORD *)&v131[4] = *(_DWORD *)(v11 + 20);
          *(_DWORD *)&v131[12] = *(_DWORD *)(v11 + 28) + *(_DWORD *)&v131[4];
          v129[1] = v70;
          v130 = v71;
          GetRect(v18, (__int64)&v131[16], 66);
          GetRect(v18, (__int64)&v131[32], 65);
          v72 = *(_DWORD *)&v131[32];
          v73 = *(_DWORD *)&v131[40] - *(_DWORD *)&v131[32];
          v74 = *(_DWORD *)&v131[36];
          v75 = *(_DWORD *)&v131[44] - *(_DWORD *)&v131[36];
          _InterlockedAdd(&glSendMessage, 1u);
          v76 = xxxSendTransformableMessageTimeout((__int64 *)v18, 0x83u, 1uLL, (__int64)v131, 0, 0, 0LL, 1, 0);
          if ( !IsStillWindowC(*(_QWORD *)(v11 + 8), v77) )
          {
LABEL_190:
            ThreadUnlock1(v31, v30);
            ThreadUnlock1(v110, v109);
            return 0LL;
          }
          if ( v76 - 16 > 0x3F0 )
          {
            v76 = 48;
            *(_OWORD *)&v131[16] = *(_OWORD *)v131;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 26LL) & 0x40) != 0 )
            v78 = *(_DWORD *)&v131[24] - *(_DWORD *)&v131[40];
          else
            v78 = *(_DWORD *)&v131[16] - *(_DWORD *)&v131[32];
          *(_DWORD *)(v11 + 72) = v78;
          *(_DWORD *)(v11 + 76) = *(_DWORD *)&v131[20] - *(_DWORD *)&v131[36];
          *(_QWORD *)(v11 + 40) = *(_QWORD *)v131;
          v79 = (unsigned int)(*(_DWORD *)&v131[8] - *(_DWORD *)v131);
          *(_DWORD *)(v11 + 48) = v79;
          v80 = *(_DWORD *)&v131[12] - *(_DWORD *)&v131[4];
          *(_DWORD *)(v11 + 52) = *(_DWORD *)&v131[12] - *(_DWORD *)&v131[4];
          if ( __PAIR64__(v74, v72) != *(_QWORD *)v131 )
            *(_DWORD *)(v11 + 32) &= ~0x1000u;
          v68 = *(unsigned int *)(v11 + 32);
          v81 = *(_DWORD *)(v11 + 32);
          if ( v73 != (_DWORD)v79 || v75 != v80 )
          {
            v68 = v81;
            LODWORD(v68) = v81 & 0xFFFFF7FF;
            *(_DWORD *)(v11 + 32) = v81 & 0xFFFFF7FF;
          }
          if ( (v68 & 0x100) == 0 && !v116 )
          {
            v82 = *(_QWORD *)(v18 + 40);
            if ( (*(_BYTE *)(v82 + 24) & 0x20) == 0 )
            {
              if ( (v68 & 0x821) == 0x801 )
              {
                v83 = v117;
                if ( *(_DWORD *)(v11 + 72) == *(_DWORD *)(v11 + 16) - v117
                  && *(_DWORD *)(v11 + 76) == *(_DWORD *)(v11 + 20) - v114 )
                {
                  v84 = DWORD1(v121);
                  v50 = (LONG *)(v11 + 16);
                  v85 = v121;
                  goto LABEL_148;
                }
              }
              if ( v73 == (_DWORD)v79
                || (v76 & 0x100) == 0
                && (v68 = *(_QWORD *)(*(_QWORD *)(v18 + 112) + 8LL), (*(_BYTE *)(v68 + 8) & 2) == 0) )
              {
                if ( v75 == v80
                  || (v76 & 0x200) == 0
                  && (v68 = 1LL, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 112) + 8LL) + 8LL) & 1) == 0) )
                {
                  v99 = *(_DWORD *)&v131[40] - *(_DWORD *)&v131[32];
                  v100 = *(_DWORD *)&v131[44] - *(_DWORD *)&v131[36];
                  v101 = *(_DWORD *)&v131[16];
                  v102 = *(_DWORD *)&v131[24] - *(_DWORD *)&v131[16];
                  v103 = *(_DWORD *)&v131[20];
                  v104 = *(_DWORD *)&v131[28] - *(_DWORD *)&v131[20];
                  v105 = *(_BYTE *)(v82 + 26) & 0x40;
                  if ( (v105 != 0) != ((v76 >> 7) & 1) )
                  {
                    if ( v105 && v99 > v102 )
                      v106 = v99 - v102;
                    else
                      v106 = v102 - v99;
                    v101 = v106 + *(_DWORD *)&v131[16];
                    *(_DWORD *)&v131[16] += v106;
                  }
                  if ( (v76 & 0x40) != 0 )
                  {
                    v103 = *(_DWORD *)&v131[28] - v100;
                    *(_DWORD *)&v131[20] = *(_DWORD *)&v131[28] - v100;
                  }
                  if ( v99 < v102 )
                    *(_DWORD *)&v131[24] = v101 + v99;
                  if ( v100 < v104 )
                    *(_DWORD *)&v131[28] = v103 + v100;
                  *(_OWORD *)(v11 + 56) = *(_OWORD *)&v131[16];
                  if ( v120 != GetDesktopWindow(v18) )
                  {
                    v107 = v121;
                    *(_DWORD *)(v11 + 56) += v121;
                    *(_DWORD *)(v11 + 64) += v107;
                    v108 = DWORD1(v121);
                    *(_DWORD *)(v11 + 68) += DWORD1(v121);
                    *(_DWORD *)(v11 + 60) += v108;
                  }
                  goto LABEL_183;
                }
              }
            }
          }
          *(_QWORD *)(v11 + 56) = 0LL;
          *(_QWORD *)(v11 + 64) = 0LL;
          ThreadUnlock1(v68, v79);
        }
        v3 = (HWND)v123;
        v12 = v111;
        goto LABEL_188;
      }
    }
    v12 = v111;
LABEL_187:
    *(_QWORD *)v11 = 0LL;
    *(_DWORD *)(v11 + 32) = 6159;
LABEL_188:
    v11 += 168LL;
  }
  ThreadUnlock1(v9, 1LL);
  result = 1LL;
  *v125 = v3;
  return result;
}
