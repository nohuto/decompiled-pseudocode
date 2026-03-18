/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     DecomposeWindowIfNeeded @ 0x1C000D61C (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C000E0AC (DeleteOrSetRedirectionBitmap.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C000FAD4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     PWInsertAfter @ 0x1C000FC68 (PWInsertAfter.c)
 *     RecreateRedirectionBitmap @ 0x1C00107D4 (RecreateRedirectionBitmap.c)
 *     zzzCalcStartCursorHide @ 0x1C0017CF0 (zzzCalcStartCursorHide.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     UnlinkWindow @ 0x1C001B6E4 (UnlinkWindow.c)
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0038368 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0038F90 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     GreClientRgnUpdated @ 0x1C003DCB4 (GreClientRgnUpdated.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C0041300 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C0041428 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GetNewMonitor @ 0x1C004259C (GetNewMonitor.c)
 *     LinkWindow @ 0x1C0043240 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     OffsetChildren @ 0x1C006F050 (OffsetChildren.c)
 *     UpdateSprite @ 0x1C007622C (UpdateSprite.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     ComposeWindowIfNeeded @ 0x1C007A504 (ComposeWindowIfNeeded.c)
 *     IsChildWindowDpiBoundary @ 0x1C007A5D8 (IsChildWindowDpiBoundary.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C01051A8 (UpdateMonitorForWindowAndChildren.c)
 *     SelectWindowRgn @ 0x1C010A774 (SelectWindowRgn.c)
 *     ?ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z @ 0x1C010F388 (-ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z.c)
 *     ?ReValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C01125F0 (-ReValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C011A70C (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     SetOldRedirectionBitmap @ 0x1C0129084 (SetOldRedirectionBitmap.c)
 *     CreateSpb @ 0x1C0157150 (CreateSpb.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     InvalidateGDIWindows @ 0x1C01D48E4 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  struct tagWND *v2; // r14
  unsigned int v3; // r12d
  struct tagSMWP *v4; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rsi
  int v13; // r13d
  float *v14; // rbx
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // r13d
  __int64 DesktopWindow; // rax
  int v20; // r8d
  int v21; // r9d
  int v22; // r11d
  int v23; // ebx
  _DWORD *v24; // rdx
  int v25; // r15d
  int v26; // ecx
  unsigned int v27; // r15d
  int v28; // r12d
  unsigned int v29; // r12d
  _DWORD *v30; // rax
  _DWORD *v31; // rdx
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // r8
  int v35; // r9d
  int v36; // r10d
  int v37; // r11d
  __int128 v38; // xmm0
  __int64 v39; // rcx
  int v40; // eax
  int v41; // r11d
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // ebx
  BOOL v45; // r14d
  __int64 v46; // rcx
  char v47; // bl
  int v48; // r8d
  int v49; // edx
  char v50; // bl
  int v51; // eax
  HSURF v52; // rbx
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  int v56; // eax
  int v57; // r15d
  int v58; // r12d
  int v59; // ecx
  _DWORD *v60; // rdx
  __int64 v61; // rax
  struct tagCVR *v62; // rcx
  int v63; // r8d
  __int64 v64; // rdx
  __int64 v65; // rax
  int v66; // ecx
  __int64 v67; // rbx
  int v68; // eax
  struct tagRECT *v69; // rdx
  __int64 NewMonitor; // rax
  struct _KTHREAD *v71; // r14
  __int64 v72; // rbx
  __int64 *v73; // rax
  int v74; // eax
  __int64 v75; // rcx
  int v76; // eax
  unsigned int v77; // edx
  int v78; // ebx
  int v79; // eax
  __int64 v80; // rcx
  char v81; // r8
  _QWORD *v82; // rbx
  __int64 v83; // rcx
  __int64 v84; // rcx
  int v85; // edx
  __int64 v86; // rdx
  int v88; // eax
  unsigned int v89; // ecx
  int updated; // [rsp+60h] [rbp-A0h]
  int v91; // [rsp+64h] [rbp-9Ch]
  int v92; // [rsp+68h] [rbp-98h]
  unsigned int v93; // [rsp+6Ch] [rbp-94h]
  int v94; // [rsp+70h] [rbp-90h]
  int v97; // [rsp+88h] [rbp-78h]
  int v98; // [rsp+8Ch] [rbp-74h]
  HSURF v99; // [rsp+98h] [rbp-68h] BYREF
  struct tagSIZE v100; // [rsp+A0h] [rbp-60h] BYREF
  struct tagPOINT v101; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v102; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v103; // [rsp+C0h] [rbp-40h] BYREF
  int v104; // [rsp+C8h] [rbp-38h]
  int v105; // [rsp+CCh] [rbp-34h]
  char v106[8]; // [rsp+D0h] [rbp-30h] BYREF
  char v107[8]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v108[3]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v109[3]; // [rsp+F8h] [rbp-8h] BYREF
  int v110[4]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v111; // [rsp+120h] [rbp+20h] BYREF
  __int64 v112; // [rsp+128h] [rbp+28h]
  struct tagRECT v113; // [rsp+130h] [rbp+30h] BYREF
  __int128 v114; // [rsp+140h] [rbp+40h] BYREF
  __int128 v115; // [rsp+150h] [rbp+50h]

  v2 = a1;
  updated = 0;
  v94 = 0;
  v3 = 0;
  v97 = 0;
  v4 = a2;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v107);
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v108[0] = *(_QWORD *)(v6 + 416);
  *(_QWORD *)(v6 + 416) = v108;
  v108[1] = v2;
  _InterlockedAdd((volatile signed __int32 *)v2 + 2, 1u);
  v12 = *((_QWORD *)v4 + 5);
  v13 = *((_DWORD *)v4 + 7) - 1;
  v91 = v13;
  if ( v13 >= 0 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v10 = *(_QWORD *)v12;
      v92 = 0;
      v93 = 0;
      if ( *(_QWORD *)v12 )
      {
        LOBYTE(v9) = 1;
        v15 = (_QWORD *)HMValidateHandleNoSecure(v10, v9);
        if ( !v15 || !IsStillWindowC(*(_QWORD *)(v12 + 8), v9) )
        {
          *(_DWORD *)(v12 + 32) = 6159;
          *(_QWORD *)v12 = 0LL;
        }
        v10 = *(_DWORD *)(v12 + 32) & 0x18E7;
        if ( (_DWORD)v10 == 6151 )
        {
          *(_DWORD *)(v12 + 32) |= 8u;
        }
        else
        {
          if ( (_DWORD)v10 != 6147
            || (*(_BYTE *)(v15[5] + 19LL) & 4) != 0
            || !(unsigned int)ValidateZorder((struct tagCVR *)v12) )
          {
            v16 = 6147LL;
            if ( (*(_DWORD *)(v12 + 32) & 0x1803) != 0x1803 )
            {
              v17 = v15[5];
              if ( ((*(_BYTE *)(v17 + 27) & 0x20) != 0 || (*(_BYTE *)(v17 + 26) & 8) != 0)
                && ((v18 = *(_DWORD *)(v17 + 100) - *(_DWORD *)(v17 + 92),
                     v98 = *(_DWORD *)(v17 + 96) - *(_DWORD *)(v17 + 88),
                     v98 != *(_DWORD *)(v12 + 24))
                 || v18 != *(_DWORD *)(v12 + 28)) )
              {
                v92 = 1;
              }
              else
              {
                v18 = 0;
                v98 = 0;
              }
              if ( *(_DWORD *)(v17 + 88) != *(_DWORD *)(v12 + 16) || *(_DWORD *)(v17 + 92) != *(_DWORD *)(v12 + 20) )
                v93 = 1;
              v102 = *(_OWORD *)(*((_QWORD *)v2 + 5) + 104LL);
              if ( (unsigned int)IsChildWindowDpiBoundary((struct tagWND *)v15) )
              {
                if ( (*(_DWORD *)(v12 + 156) & 0x100) == 0 )
                {
                  v14 = (float *)(v15 + 26);
                  *((_DWORD *)v15 + 52) = 0;
                  *((_DWORD *)v15 + 53) = 0;
                }
                LogicalToPhysicalInPlaceRectWithSubpixel(v2, (int *)&v102, v14);
                PhysicalToLogicalInPlaceRectWithSubpixel((struct tagWND *)v15, (int *)&v102, v14);
                v97 = 1;
              }
              *(_DWORD *)(v15[5] + 88LL) = *(_DWORD *)(v12 + 16);
              *(_DWORD *)(v15[5] + 92LL) = *(_DWORD *)(v12 + 20);
              DesktopWindow = GetDesktopWindow(v15);
              v22 = DWORD1(v102);
              v23 = v102;
              if ( v2 != (struct tagWND *)DesktopWindow )
              {
                *(_DWORD *)(v15[5] + 88LL) += v102;
                *(_DWORD *)(v15[5] + 92LL) += v22;
              }
              v24 = (_DWORD *)v15[5];
              v25 = v24[22];
              v26 = *(_DWORD *)(v12 + 24) + v25;
              v27 = v25 - v20;
              v28 = v24[23];
              v24[24] = v26;
              v29 = v28 - v21;
              *(_DWORD *)(v15[5] + 100LL) = *(_DWORD *)(v12 + 28) + *(_DWORD *)(v15[5] + 92LL);
              v30 = (_DWORD *)v15[5];
              v31 = v30;
              v32 = v30[22];
              if ( v30[24] < v32 )
              {
                v30[24] = v32;
                v30 = (_DWORD *)v15[5];
                v31 = v30;
              }
              v33 = v30[23];
              if ( v30[25] < v33 )
              {
                v30[25] = v33;
                v31 = (_DWORD *)v15[5];
              }
              if ( v15 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 296LL) )
              {
                if ( v2 != (struct tagWND *)GetDesktopWindow(v15) )
                {
                  v35 -= v23;
                  v36 -= v37;
                }
                if ( v35 | v36 )
                {
                  *(_DWORD *)(v34 + 316) += v35;
                  *(_DWORD *)(v34 + 320) += v36;
                  v31 = (_DWORD *)v15[5];
                }
              }
              v38 = *(_OWORD *)(v31 + 26);
              v31[26] = *(_DWORD *)(v12 + 40);
              v39 = v15[5];
              v40 = *(_DWORD *)(v12 + 44);
              v115 = v38;
              *(_DWORD *)(v39 + 108) = v40;
              if ( v2 != (struct tagWND *)GetDesktopWindow(v15) )
              {
                *(_DWORD *)(v15[5] + 104LL) += v23;
                *(_DWORD *)(v15[5] + 108LL) += v41;
              }
              *(_DWORD *)(v15[5] + 112LL) = *(_DWORD *)(v12 + 48) + *(_DWORD *)(v15[5] + 104LL);
              *(_DWORD *)(v15[5] + 116LL) = *(_DWORD *)(v12 + 52) + *(_DWORD *)(v15[5] + 108LL);
              v42 = v15[5];
              v43 = v115 - *(_QWORD *)(v42 + 104);
              if ( (_QWORD)v115 == *(_QWORD *)(v42 + 104) )
                v43 = *((_QWORD *)&v115 + 1) - *(_QWORD *)(v42 + 112);
              v44 = 0;
              v45 = v43 == 0;
              if ( (unsigned int)ShouldRemoveMonitorRgn((struct tagWND *)v15) )
                SelectWindowRgn((struct tagWND *)v15);
              if ( v92 )
              {
                *(_DWORD *)(v12 + 156) |= 1u;
                v46 = v15[5];
                if ( (*(_BYTE *)(v46 + 27) & 0x20) != 0 )
                {
                  v47 = *(_BYTE *)(v46 + 26);
                  if ( (v47 & 0x20) == 0 )
                  {
                    v48 = *(_DWORD *)(v46 + 92);
                    v49 = *(_DWORD *)(v46 + 88);
                    v50 = v47 & 8;
                    v99 = 0LL;
                    v51 = RecreateRedirectionBitmap(
                            (struct tagWND *)v15,
                            v49 - *(_DWORD *)(v12 + 80),
                            v48 - *(_DWORD *)(v12 + 84),
                            0,
                            0,
                            (HSURF *)((unsigned __int64)&v99 & -(__int64)(v50 != 0)));
                    updated = v51;
                    if ( v50 && v51 >= 0 )
                    {
                      v52 = v99;
                      if ( v99 )
                      {
                        if ( (unsigned int)SetOldRedirectionBitmap(v15, v99) )
                        {
                          v52 = 0LL;
                          v99 = 0LL;
                        }
                      }
                      else
                      {
                        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v106);
                        xxxInternalInvalidate((struct tagWND *)v15, (HRGN)1, 0x401u);
                        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v106);
                      }
                    }
                    else
                    {
                      v52 = v99;
                    }
                    if ( v52 )
                      DeleteOrSetRedirectionBitmap((__int64)v15, v52, 1);
                    v44 = 0;
                    goto LABEL_61;
                  }
                  v44 = 0;
                }
                if ( (unsigned int)IsWindowDesktopComposed(v15) )
                {
                  v60 = (_DWORD *)v15[5];
                  v100.cx = v60[24] - v60[22];
                  v100.cy = v60[25] - v60[23];
                  updated = UpdateSprite(
                              *(HDEV *)(gpDispInfo + 40LL),
                              (struct tagWND *)v15,
                              0LL,
                              &v100,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0,
                              0LL);
                }
              }
LABEL_61:
              if ( v27 || v29 )
              {
                v53 = v15[5];
                v54 = *(_QWORD *)(v53 + 168);
                if ( v54 > 1 && (*(_BYTE *)(v53 + 21) & 8) == 0 )
                  GreOffsetRgn(v54, v27, v29);
              }
              v9 = *(unsigned int *)(v12 + 72);
              if ( *(_QWORD *)(v12 + 72) || v97 )
              {
                v55 = *(_QWORD *)(v15[5] + 136LL);
                if ( v55 > 1 )
                  GreOffsetRgn(v55, v9, *(unsigned int *)(v12 + 76));
                OffsetChildren((struct tagWND *)v15, 0);
              }
              v16 = v93;
              if ( v93 || !v45 || v27 || v29 )
              {
                v9 = v15[5];
                v101 = *(struct tagPOINT *)(v9 + 88);
                v111 = 0LL;
                v112 = 0LL;
                if ( v93 )
                {
                  v56 = *(_DWORD *)(v9 + 232);
                  if ( (v56 & 0x8000) != 0 )
                  {
                    *(_DWORD *)(v9 + 232) = v56 & 0xFFFF7FFF;
                    PostShellHookMessages(54LL, *v15);
                    v9 = v15[5];
                  }
                  if ( (*(_BYTE *)(v9 + 26) & 8) != 0 )
                  {
                    if ( v92 )
                    {
                      v57 = -v27;
                      v58 = -v29;
                      v104 = *(_DWORD *)(v9 + 96) - *(_DWORD *)(v9 + 88);
                      v59 = *(_DWORD *)(v9 + 100) - *(_DWORD *)(v9 + 92);
                      LODWORD(v112) = v57 + v98;
                      v105 = v59;
                      HIDWORD(v112) = v58 + v18;
                      v103 = 0LL;
                      v111 = __PAIR64__(v58, v57);
                      IntersectRect(&v111, (int *)&v111, (int *)&v103);
                    }
                    if ( gcountPWO )
                    {
                      InvalidateGDIWindows(v15);
                      GreClientRgnUpdated(1);
                    }
                    if ( !v92 || (v44 = 1, (unsigned int)IsWindowDesktopComposed(v15)) )
                      v44 = 0;
                  }
                }
                if ( (*(_BYTE *)(v15[5] + 26LL) & 8) != 0 )
                  updated = UpdateSprite(
                              *(HDEV *)(gpDispInfo + 40LL),
                              (struct tagWND *)v15,
                              &v101,
                              0LL,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0,
                              (struct tagRECT *)((unsigned __int64)&v111 & -(__int64)(v44 != 0)));
                if ( v93 )
                  goto LABEL_93;
              }
              if ( v92 )
              {
LABEL_93:
                v16 = v15[5];
                if ( (*(_BYTE *)(v16 + 27) & 0x20) != 0 && (*(_BYTE *)(v16 + 26) & 0x20) == 0 )
                {
                  v16 = gptiCurrent;
                  v61 = *(_QWORD *)(gptiCurrent + 672LL);
                  if ( (!v61 || (*(_DWORD *)(v61 + 196) & 0x100000) == 0)
                    && !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter(v15) )
                  {
                    *(_DWORD *)(v15[5] + 232LL) &= ~0x80000u;
                    RecreateRedirectionBitmap((struct tagWND *)v15, 0, 0, 0, 0, 0LL);
                  }
                }
              }
              v13 = v91;
              v3 = updated;
              v2 = a1;
              v4 = a2;
            }
            if ( (*(_DWORD *)(v12 + 32) & 4) == 0 )
            {
              if ( (unsigned int)ReValidateZorder((struct tagCVR *)v12) )
              {
                if ( ValidateWindowPos(v62, v2) )
                {
                  UnlinkWindow((struct tagTERMINAL *)v15, (__int64)v2);
                  PWInsertAfter(*(_QWORD *)(v12 + 8), v64);
                  LinkWindow((struct tagWND *)v15);
                  v9 = 1LL;
                  ++v94;
                  if ( (*(_BYTE *)(v15[5] + 19LL) & 4) != 0 )
                  {
                    SetOrClrWF(0, (__int64)v15, 0x304u, 1);
                    *(_BYTE *)(v15[5] + 24LL) ^= 8u;
                  }
                  goto LABEL_107;
                }
                v63 = *(_DWORD *)(v12 + 32);
              }
              *(_DWORD *)(v12 + 32) = v63 | 4;
              SetOrClrWF(0, (__int64)v15, 0x304u, 1);
            }
LABEL_107:
            if ( (*(_DWORD *)(v12 + 156) & 0x20) != 0 )
            {
              v65 = ValidateHmonitor(*(_QWORD *)(v12 + 128));
              v66 = *(_DWORD *)(v12 + 156);
              v67 = v65;
              *(_QWORD *)&v113.left = 0LL;
              *(_QWORD *)&v113.right = 0LL;
              if ( (v66 & 0x80u) != 0 )
                v113 = *(struct tagRECT *)(v12 + 136);
              v68 = IsRectEmptyInl(&v113);
              v69 = &v113;
              if ( v68 )
                v69 = 0LL;
              NewMonitor = GetNewMonitor((struct tagWND *)v15, v69);
              if ( NewMonitor && v67 != NewMonitor )
                *(_DWORD *)(v12 + 156) ^= (*(_DWORD *)(v12 + 156) ^ ((unsigned int)UpdateMonitorForWindowAndChildren(
                                                                                     v15,
                                                                                     NewMonitor,
                                                                                     v12 + 160,
                                                                                     0LL) << 6)) & 0x40;
            }
            v71 = KeGetCurrentThread();
            v72 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v9) )
            {
              v73 = (__int64 *)PsGetThreadWin32Thread(v71);
              if ( v73 )
                v72 = *v73;
            }
            v109[0] = *(_QWORD *)(v72 + 416);
            *(_QWORD *)(v72 + 416) = v109;
            v109[1] = v15;
            _InterlockedAdd((volatile signed __int32 *)v15 + 2, 1u);
            v74 = *(_DWORD *)(v12 + 32);
            if ( (v74 & 0x40) != 0 )
            {
              v75 = *(_QWORD *)(v15[2] + 424LL);
              if ( (*(_DWORD *)(v75 + 12) & 0x40) != 0 )
                zzzCalcStartCursorHide(v75, 5000LL);
              v76 = SetVisible((struct tagWND *)v15);
              v77 = 3;
              v78 = v76;
              if ( !gdwDeferWinEvent )
                v77 = 1;
              xxxWindowEvent(0x8002u, (__int64)v15, 0, 0, v77);
              if ( v78 )
              {
                *(_DWORD *)(v12 + 156) |= 2u;
                if ( (*(_BYTE *)(v15[5] + 26LL) & 8) == 0 )
                {
                  v3 = ComposeWindowIfNeeded(v15, 0LL);
                  updated = v3;
                }
              }
              v79 = IsTrayWindow(v15);
              v80 = v15[5];
              v81 = *(_BYTE *)(v80 + 16);
              if ( (*(_WORD *)(v80 + 42) & 0x2FFF) == 0x2AA )
              {
                if ( (v81 & 0x40) != 0 )
                {
                  *((_DWORD *)v4 + 6) |= 1u;
                  *(_DWORD *)(v12 + 32) |= 0x40000000u;
                }
                v14 = 0LL;
LABEL_130:
                if ( !v79 )
                {
                  if ( !v15[12] )
                    goto LABEL_132;
LABEL_134:
                  if ( (*(_BYTE *)(v15[5] + 20LL) & 0x40) != 0 )
                  {
                    *((_DWORD *)v4 + 6) |= 1u;
                    *(_DWORD *)(v12 + 32) |= 0x80000000;
                  }
                }
              }
              else
              {
                if ( (v81 & 0x40) != 0 )
                {
                  *((_DWORD *)v4 + 6) |= 1u;
                  *(_DWORD *)(v12 + 32) |= 0x40000000u;
                }
                v14 = 0LL;
                if ( !v79 && !v15[12] )
                {
LABEL_132:
                  if ( (*(_DWORD *)(v12 + 32) & 0x40000000) != 0 )
                    *(_DWORD *)(v12 + 156) |= 0x10u;
                  goto LABEL_134;
                }
                *((_DWORD *)v4 + 6) |= 1u;
                *(_DWORD *)(v12 + 32) |= 0x10000000u;
                if ( !v79 )
                {
                  *(_DWORD *)(v12 + 156) |= 8u;
                  goto LABEL_130;
                }
              }
              if ( (*(_DWORD *)(v12 + 32) & 0x4008) != 8
                && (*(_BYTE *)(*(_QWORD *)(v15[14] + 8LL) + 9LL) & 8) != 0
                && v15[3] == grpdeskRitInput )
              {
                v82 = *(_QWORD **)(v15[10] + 88LL);
                if ( v82 )
                {
                  while ( 1 )
                  {
                    if ( v82 == v15 )
                    {
                      CreateSpb((struct tagWND *)v15);
                      goto LABEL_144;
                    }
                    v83 = v82[5];
                    if ( (*(_BYTE *)(v83 + 31) & 0x10) != 0 )
                    {
                      v114 = *(_OWORD *)(v83 + 88);
                      TransformRectBetweenCoordinateSpaces(&v114, &v114, v15, v82);
                      if ( (unsigned int)IntersectRect(v110, (int *)(v15[5] + 88LL), (int *)&v114) )
                        break;
                    }
                    v82 = (_QWORD *)v82[8];
                    if ( !v82 )
                      goto LABEL_144;
                  }
                  v14 = 0LL;
                  goto LABEL_145;
                }
LABEL_144:
                v14 = 0LL;
              }
            }
            else
            {
              if ( (v74 & 0x80u) == 0 )
                goto LABEL_144;
              v88 = IsTrayWindow(v15);
              v14 = 0LL;
              if ( (*(_BYTE *)(v12 + 32) & 0x1F) != 0x1F && v88 && (*(_WORD *)(v15[5] + 42LL) & 0x2FFF) != 0x2AA )
              {
                *((_DWORD *)v4 + 6) |= 1u;
                *(_DWORD *)(v12 + 32) |= 0x20000000u;
              }
              if ( (unsigned int)SetVisible((struct tagWND *)v15) )
                DecomposeWindowIfNeeded((struct tagWND *)v15);
              v89 = 3;
              if ( !gdwDeferWinEvent )
                v89 = 1;
              xxxWindowEvent(0x8003u, (__int64)v15, 0, 0, v89);
            }
LABEL_145:
            v84 = v15[5];
            if ( (*(_BYTE *)(v84 + 31) & 0x10) != 0 )
            {
              v85 = *(_DWORD *)(v12 + 32);
              if ( (v85 & 0x8000) != 0 || (*(_BYTE *)(v84 + 21) & 1) == 0 && (v85 & 8) != 0 )
                SetOrClrWF(1, (__int64)v15, 0x108u, 1);
            }
            v86 = *(_QWORD *)(v12 + 112);
            if ( v86 )
              SelectWindowRgn((struct tagWND *)v15);
            ThreadUnlock1(v84, v86);
            v2 = a1;
            goto LABEL_153;
          }
          *(_DWORD *)(v12 + 32) |= 0xCu;
          v10 = *(_QWORD *)(v12 + 96);
          if ( v10 )
          {
            GreDeleteObject(v10);
            *(_QWORD *)(v12 + 96) = 0LL;
          }
        }
      }
LABEL_153:
      v12 += 168LL;
      v91 = --v13;
      if ( v13 < 0 )
      {
        if ( v94 )
          xxxWindowEvent(0x8004u, (__int64)v2, -4, 0, gdwDeferWinEvent != 0 ? 2 : 0);
        break;
      }
    }
  }
  ThreadUnlock1(v10, v9);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v107);
  return v3;
}
