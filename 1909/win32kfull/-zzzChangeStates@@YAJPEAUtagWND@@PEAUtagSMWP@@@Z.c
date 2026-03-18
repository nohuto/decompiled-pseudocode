/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     PostShellHookMessages @ 0x1C0017B0C (PostShellHookMessages.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C001A430 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     PWInsertAfter @ 0x1C001A5B4 (PWInsertAfter.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     ComposeWindowIfNeeded @ 0x1C00287CC (ComposeWindowIfNeeded.c)
 *     OffsetChildren @ 0x1C002C01C (OffsetChildren.c)
 *     UpdateSprite @ 0x1C00311F0 (UpdateSprite.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     zzzCalcStartCursorHide @ 0x1C004CA60 (zzzCalcStartCursorHide.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     GreClientRgnUpdated @ 0x1C0067A38 (GreClientRgnUpdated.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     UnlinkWindow @ 0x1C006A598 (UnlinkWindow.c)
 *     GetNewMonitor @ 0x1C006B820 (GetNewMonitor.c)
 *     LinkWindow @ 0x1C006BF20 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006C520 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F520 (IsChildWindowDpiBoundary.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0070A5C (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     SetOldRedirectionBitmap @ 0x1C0085C08 (SetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C0089084 (DeleteOrSetRedirectionBitmap.c)
 *     DecomposeWindowIfNeeded @ 0x1C0089628 (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00CBF4C (UpdateMonitorForWindowAndChildren.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00CC148 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00CC188 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     RecreateRedirectionBitmap @ 0x1C00CC328 (RecreateRedirectionBitmap.c)
 *     SelectWindowRgn @ 0x1C00EE40C (SelectWindowRgn.c)
 *     ?ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z @ 0x1C00F1DF4 (-ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z.c)
 *     ?ReValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00F5804 (-ReValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C00FD4A0 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     CreateSpb @ 0x1C015E86C (CreateSpb.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     InvalidateGDIWindows @ 0x1C01E9F70 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  __int64 *v2; // r14
  unsigned int v3; // r12d
  struct tagSMWP *v4; // r15
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rdi
  int v15; // r13d
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // r13d
  __int64 DesktopWindow; // rax
  int v22; // r8d
  int v23; // r9d
  int v24; // r11d
  int v25; // ebx
  _DWORD *v26; // rdx
  int v27; // r15d
  int v28; // ecx
  unsigned int v29; // r15d
  int v30; // r12d
  int v31; // r12d
  _DWORD *v32; // rax
  _DWORD *v33; // rdx
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // r8
  int v37; // r9d
  int v38; // r10d
  int v39; // r11d
  __int128 v40; // xmm0
  __int64 v41; // rcx
  int v42; // eax
  int v43; // r11d
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // ebx
  BOOL v47; // r14d
  __int64 v48; // rcx
  char v49; // bl
  char v50; // bl
  int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  int v57; // eax
  int v58; // r15d
  int v59; // r12d
  int v60; // ecx
  __int64 v61; // r8
  _DWORD *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // r8
  struct tagCVR *v65; // rcx
  int v66; // r8d
  __int64 v67; // rdx
  __int64 v68; // rax
  int v69; // ecx
  __int64 v70; // rbx
  BOOL v71; // eax
  struct tagRECT *v72; // rdx
  __int64 NewMonitor; // rax
  struct _KTHREAD *v74; // r14
  __int64 v75; // rbx
  __int64 *v76; // rax
  __int64 v77; // r8
  int v78; // eax
  __int64 v79; // rcx
  int v80; // eax
  int v81; // edx
  int v82; // ebx
  unsigned int v83; // eax
  __int64 v84; // rdx
  int v85; // edx
  int v86; // eax
  __int64 i; // rbx
  __int64 v88; // rcx
  __int64 v89; // rcx
  int v90; // edx
  __int64 v91; // rdx
  int v93; // eax
  int v94; // ecx
  unsigned int updated; // [rsp+60h] [rbp-A0h]
  int v96; // [rsp+64h] [rbp-9Ch]
  int v97; // [rsp+68h] [rbp-98h]
  unsigned int v98; // [rsp+6Ch] [rbp-94h]
  int v99; // [rsp+70h] [rbp-90h]
  __int64 v102; // [rsp+88h] [rbp-78h] BYREF
  int v103; // [rsp+90h] [rbp-70h]
  int v104; // [rsp+94h] [rbp-6Ch]
  struct tagSIZE v105; // [rsp+98h] [rbp-68h] BYREF
  struct tagPOINT v106; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v107; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v108; // [rsp+B8h] [rbp-48h] BYREF
  int v109; // [rsp+C0h] [rbp-40h]
  int v110; // [rsp+C4h] [rbp-3Ch]
  _BYTE v111[8]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v112[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v113; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v114; // [rsp+E0h] [rbp-20h]
  __int64 v115; // [rsp+E8h] [rbp-18h]
  __int64 v116; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v117; // [rsp+F8h] [rbp-8h]
  __int64 v118; // [rsp+100h] [rbp+0h]
  _QWORD v119[2]; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v120; // [rsp+118h] [rbp+18h] BYREF
  __int64 v121; // [rsp+120h] [rbp+20h]
  struct tagRECT v122; // [rsp+128h] [rbp+28h] BYREF
  __int128 v123; // [rsp+138h] [rbp+38h] BYREF
  __int128 v124; // [rsp+148h] [rbp+48h]

  v116 = 0LL;
  v2 = (__int64 *)a1;
  updated = 0;
  v117 = 0LL;
  v3 = 0;
  v118 = 0LL;
  v113 = 0LL;
  v4 = a2;
  v114 = 0LL;
  v115 = 0LL;
  v99 = 0;
  v103 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v112);
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7, v9) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v113 = *(_QWORD *)(v6 + 408);
  *(_QWORD *)(v6 + 408) = &v113;
  v114 = v2;
  HMLockObject(v2);
  v14 = (__int64 *)*((_QWORD *)v4 + 5);
  v15 = *((_DWORD *)v4 + 7) - 1;
  v96 = v15;
  if ( v15 >= 0 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      v12 = *v14;
      v97 = 0;
      v98 = 0;
      v102 = 0LL;
      if ( v12 )
      {
        LOBYTE(v11) = 1;
        v17 = HMValidateHandleNoSecure(v12, v11);
        if ( !v17 || !(unsigned int)IsStillWindowC((HWND)v14[1]) )
        {
          *((_DWORD *)v14 + 8) = 6159;
          *v14 = 0LL;
        }
        v12 = v14[4] & 0x18E7;
        if ( (_DWORD)v12 == 6151 )
        {
          *((_DWORD *)v14 + 8) |= 8u;
        }
        else
        {
          if ( (_DWORD)v12 != 6147
            || (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 19LL) & 4) != 0
            || !(unsigned int)ValidateZorder((struct tagCVR *)v14) )
          {
            v18 = 6147LL;
            if ( (v14[4] & 0x1803) != 0x1803 )
            {
              v19 = *(_QWORD *)(v17 + 40);
              if ( ((*(_BYTE *)(v19 + 27) & 0x20) != 0 || (*(_BYTE *)(v19 + 26) & 8) != 0)
                && ((v20 = *(_DWORD *)(v19 + 100) - *(_DWORD *)(v19 + 92),
                     v104 = *(_DWORD *)(v19 + 96) - *(_DWORD *)(v19 + 88),
                     v104 != *((_DWORD *)v14 + 6))
                 || v20 != *((_DWORD *)v14 + 7)) )
              {
                v97 = 1;
              }
              else
              {
                v20 = HIDWORD(v102);
                v104 = v102;
              }
              if ( *(_DWORD *)(v19 + 88) != *((_DWORD *)v14 + 4) || *(_DWORD *)(v19 + 92) != *((_DWORD *)v14 + 5) )
                v98 = 1;
              v107 = *(_OWORD *)(v2[5] + 104);
              if ( (unsigned int)IsChildWindowDpiBoundary((struct tagWND *)v17) )
              {
                if ( (*((_DWORD *)v14 + 39) & 0x100) == 0 )
                {
                  v16 = v17 + 224;
                  *(_DWORD *)(v17 + 224) = 0;
                  *(_DWORD *)(v17 + 228) = 0;
                }
                LogicalToPhysicalInPlaceRectWithSubpixel(v2, &v107, v16);
                PhysicalToLogicalInPlaceRectWithSubpixel(v17, &v107, v16);
                v103 = 1;
              }
              *(_DWORD *)(*(_QWORD *)(v17 + 40) + 88LL) = *((_DWORD *)v14 + 4);
              *(_DWORD *)(*(_QWORD *)(v17 + 40) + 92LL) = *((_DWORD *)v14 + 5);
              DesktopWindow = GetDesktopWindow(v17);
              v24 = DWORD1(v107);
              v25 = v107;
              if ( v2 != (__int64 *)DesktopWindow )
              {
                *(_DWORD *)(*(_QWORD *)(v17 + 40) + 88LL) += v107;
                *(_DWORD *)(*(_QWORD *)(v17 + 40) + 92LL) += v24;
              }
              v26 = *(_DWORD **)(v17 + 40);
              v27 = v26[22];
              v28 = *((_DWORD *)v14 + 6) + v27;
              v29 = v27 - v22;
              v30 = v26[23];
              v26[24] = v28;
              v31 = v30 - v23;
              *(_DWORD *)(*(_QWORD *)(v17 + 40) + 100LL) = *((_DWORD *)v14 + 7)
                                                         + *(_DWORD *)(*(_QWORD *)(v17 + 40) + 92LL);
              v32 = *(_DWORD **)(v17 + 40);
              v33 = v32;
              v34 = v32[22];
              if ( v32[24] < v34 )
              {
                v32[24] = v34;
                v32 = *(_DWORD **)(v17 + 40);
                v33 = v32;
              }
              v35 = v32[23];
              if ( v32[25] < v35 )
              {
                v32[25] = v35;
                v33 = *(_DWORD **)(v17 + 40);
              }
              if ( v17 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 304LL) )
              {
                if ( v2 != (__int64 *)GetDesktopWindow(v17) )
                {
                  v37 -= v25;
                  v38 -= v39;
                }
                if ( v37 | v38 )
                {
                  *(_DWORD *)(v36 + 324) += v37;
                  *(_DWORD *)(v36 + 328) += v38;
                  v33 = *(_DWORD **)(v17 + 40);
                }
              }
              v40 = *(_OWORD *)(v33 + 26);
              v33[26] = *((_DWORD *)v14 + 10);
              v41 = *(_QWORD *)(v17 + 40);
              v42 = *((_DWORD *)v14 + 11);
              v124 = v40;
              *(_DWORD *)(v41 + 108) = v42;
              if ( v2 != (__int64 *)GetDesktopWindow(v17) )
              {
                *(_DWORD *)(*(_QWORD *)(v17 + 40) + 104LL) += v25;
                *(_DWORD *)(*(_QWORD *)(v17 + 40) + 108LL) += v43;
              }
              *(_DWORD *)(*(_QWORD *)(v17 + 40) + 112LL) = *((_DWORD *)v14 + 12)
                                                         + *(_DWORD *)(*(_QWORD *)(v17 + 40) + 104LL);
              *(_DWORD *)(*(_QWORD *)(v17 + 40) + 116LL) = *((_DWORD *)v14 + 13)
                                                         + *(_DWORD *)(*(_QWORD *)(v17 + 40) + 108LL);
              v44 = *(_QWORD *)(v17 + 40);
              v45 = v124 - *(_QWORD *)(v44 + 104);
              if ( (_QWORD)v124 == *(_QWORD *)(v44 + 104) )
                v45 = *((_QWORD *)&v124 + 1) - *(_QWORD *)(v44 + 112);
              v46 = 0;
              v47 = v45 == 0;
              if ( (unsigned int)ShouldRemoveMonitorRgn((struct tagWND *)v17) )
                SelectWindowRgn((struct tagWND *)v17);
              if ( v97 )
              {
                *((_DWORD *)v14 + 39) |= 1u;
                v48 = *(_QWORD *)(v17 + 40);
                if ( (*(_BYTE *)(v48 + 27) & 0x20) != 0 )
                {
                  v49 = *(_BYTE *)(v48 + 26);
                  if ( (v49 & 0x20) == 0 )
                  {
                    v50 = v49 & 8;
                    v102 = 0LL;
                    v51 = RecreateRedirectionBitmap(
                            (struct tagWND *)v17,
                            0,
                            (unsigned __int64)&v102 & -(__int64)(v50 != 0));
                    updated = v51;
                    if ( v50 && v51 >= 0 )
                    {
                      v52 = v102;
                      if ( v102 )
                      {
                        if ( (unsigned int)SetOldRedirectionBitmap(v17, v102) )
                          v52 = 0LL;
                      }
                      else
                      {
                        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v111);
                        xxxInternalInvalidate((struct tagWND *)v17, (HRGN)1, 0x401u);
                        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v111);
                      }
                    }
                    else
                    {
                      v52 = v102;
                    }
                    if ( v52 )
                      DeleteOrSetRedirectionBitmap(v17, v52, 1LL);
                    v46 = 0;
                    goto LABEL_61;
                  }
                  v46 = 0;
                }
                if ( (unsigned int)IsWindowDesktopComposed(v17) )
                {
                  v62 = *(_DWORD **)(v17 + 40);
                  v105 = 0LL;
                  v105.cx = v62[24] - v62[22];
                  v105.cy = v62[25] - v62[23];
                  updated = UpdateSprite(
                              *(HDEV *)(gpDispInfo + 40LL),
                              (struct tagWND *)v17,
                              v61,
                              0LL,
                              0LL,
                              &v105,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0,
                              0LL);
                }
              }
LABEL_61:
              if ( v29 || v31 )
              {
                v53 = *(_QWORD *)(v17 + 40);
                v54 = 1LL;
                v55 = *(_QWORD *)(v53 + 168);
                if ( v55 > 1 && (*(_BYTE *)(v53 + 21) & 8) == 0 )
                {
                  GreOffsetRgn(v55, v29);
                  goto LABEL_66;
                }
              }
              else
              {
LABEL_66:
                v54 = 1LL;
              }
              v11 = *((unsigned int *)v14 + 18);
              if ( v14[9] || v103 )
              {
                v56 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 136LL);
                if ( v56 > 1 )
                {
                  GreOffsetRgn(v56, v11);
                  LODWORD(v11) = *((_DWORD *)v14 + 18);
                }
                OffsetChildren((struct tagWND *)v17, v11, *((_DWORD *)v14 + 19), 0LL, 0);
              }
              v18 = v98;
              if ( v98 || !v47 || v29 || v31 )
              {
                v11 = *(_QWORD *)(v17 + 40);
                v106 = *(struct tagPOINT *)(v11 + 88);
                v120 = 0LL;
                v121 = 0LL;
                if ( v98 )
                {
                  v57 = *(_DWORD *)(v11 + 232);
                  if ( (v57 & 0x8000) != 0 )
                  {
                    *(_DWORD *)(v11 + 232) = v57 & 0xFFFF7FFF;
                    PostShellHookMessages(0x36uLL, *(_QWORD *)v17);
                    v11 = *(_QWORD *)(v17 + 40);
                  }
                  if ( (*(_BYTE *)(v11 + 26) & 8) != 0 )
                  {
                    if ( v97 )
                    {
                      v58 = -v29;
                      v59 = -v31;
                      v109 = *(_DWORD *)(v11 + 96) - *(_DWORD *)(v11 + 88);
                      v60 = *(_DWORD *)(v11 + 100) - *(_DWORD *)(v11 + 92);
                      LODWORD(v121) = v58 + v104;
                      v110 = v60;
                      HIDWORD(v121) = v59 + v20;
                      v108 = 0LL;
                      v120 = __PAIR64__(v59, v58);
                      IntersectRect(&v120, (int *)&v120, (int *)&v108);
                    }
                    if ( gcountPWO )
                    {
                      InvalidateGDIWindows(v17);
                      GreClientRgnUpdated(1);
                    }
                    if ( !v97 || (v46 = 1, (unsigned int)IsWindowDesktopComposed(v17)) )
                      v46 = 0;
                  }
                }
                if ( (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 26LL) & 8) != 0 )
                  updated = UpdateSprite(
                              *(HDEV *)(gpDispInfo + 40LL),
                              (struct tagWND *)v17,
                              v54,
                              0LL,
                              &v106,
                              0LL,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0,
                              (struct tagRECT *)((unsigned __int64)&v120 & -(__int64)(v46 != 0)));
                if ( v98 )
                  goto LABEL_94;
              }
              if ( v97 )
              {
LABEL_94:
                v18 = *(_QWORD *)(v17 + 40);
                if ( (*(_BYTE *)(v18 + 27) & 0x20) != 0 && (*(_BYTE *)(v18 + 26) & 0x20) == 0 )
                {
                  v18 = gptiCurrent;
                  v63 = *(_QWORD *)(gptiCurrent + 664LL);
                  if ( (!v63 || (*(_DWORD *)(v63 + 196) & 0x100000) == 0)
                    && !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter(v17) )
                  {
                    *(_DWORD *)(*(_QWORD *)(v17 + 40) + 232LL) &= ~0x80000u;
                    RecreateRedirectionBitmap((struct tagWND *)v17, 0, 0LL);
                  }
                }
              }
              v15 = v96;
              v3 = updated;
              v2 = (__int64 *)a1;
              v4 = a2;
            }
            v64 = *((unsigned int *)v14 + 8);
            if ( (v64 & 4) == 0 )
            {
              if ( (unsigned int)ReValidateZorder((struct tagCVR *)v14) )
              {
                if ( (unsigned int)ValidateWindowPos(v65, (struct tagWND *)v2) )
                {
                  UnlinkWindow((__int64 *)v17, v2);
                  PWInsertAfter(v14[1], v67);
                  LinkWindow((struct tagWND *)v17);
                  v11 = 1LL;
                  ++v99;
                  if ( (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 19LL) & 4) != 0 )
                  {
                    SetOrClrWF(0LL, v17, 772LL, 1LL);
                    *(_BYTE *)(*(_QWORD *)(v17 + 40) + 24LL) ^= 8u;
                  }
                  goto LABEL_108;
                }
                v66 = *((_DWORD *)v14 + 8);
              }
              *((_DWORD *)v14 + 8) = v66 | 4;
              SetOrClrWF(0LL, v17, 772LL, 1LL);
            }
LABEL_108:
            if ( (*((_DWORD *)v14 + 39) & 0x20) != 0 )
            {
              v68 = ValidateHmonitor(v14[16]);
              v69 = *((_DWORD *)v14 + 39);
              v70 = v68;
              *(_QWORD *)&v122.left = 0LL;
              *(_QWORD *)&v122.right = 0LL;
              if ( (v69 & 0x80u) != 0 )
                v122 = *(struct tagRECT *)(v14 + 17);
              v71 = IsRectEmptyInl(&v122);
              v72 = &v122;
              if ( v71 )
                v72 = 0LL;
              NewMonitor = GetNewMonitor((struct tagWND *)v17, v72);
              if ( NewMonitor && v70 != NewMonitor )
                *((_DWORD *)v14 + 39) ^= (*((_DWORD *)v14 + 39) ^ ((unsigned int)UpdateMonitorForWindowAndChildren(
                                                                                   v17,
                                                                                   NewMonitor,
                                                                                   v14 + 20,
                                                                                   0LL) << 6)) & 0x40;
            }
            v74 = KeGetCurrentThread();
            v75 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v11, v64) )
            {
              v76 = (__int64 *)PsGetThreadWin32Thread(v74);
              if ( v76 )
                v75 = *v76;
            }
            v116 = *(_QWORD *)(v75 + 408);
            *(_QWORD *)(v75 + 408) = &v116;
            v117 = v17;
            HMLockObject(v17);
            v78 = *((_DWORD *)v14 + 8);
            if ( (v78 & 0x40) != 0 )
            {
              v79 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 416LL);
              if ( (*(_DWORD *)(v79 + 12) & 0x40) != 0 )
                zzzCalcStartCursorHide(v79, 5000LL);
              v80 = SetVisible((struct tagWND *)v17, 9u);
              v81 = 3;
              v82 = v80;
              if ( !gdwDeferWinEvent )
                v81 = 1;
              xxxWindowEvent(0x8002u, (struct tagWND *)v17, 0LL, 0, v81);
              if ( v82 )
              {
                *((_DWORD *)v14 + 39) |= 2u;
                if ( (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 26LL) & 8) == 0 )
                {
                  v3 = ComposeWindowIfNeeded((struct tagWND *)v17);
                  updated = v3;
                }
              }
              v83 = IsTrayWindow((_QWORD *)v17);
              v84 = *(_QWORD *)(v17 + 40);
              v77 = v83;
              if ( (*(_WORD *)(v84 + 42) & 0x3FFF) == 0x2AA )
              {
                if ( (*(_BYTE *)(v84 + 16) & 0x40) != 0 )
                {
                  *((_DWORD *)v4 + 6) |= 1u;
                  *((_DWORD *)v14 + 8) |= 0x40000000u;
                }
                v85 = *((_DWORD *)v14 + 8);
                v16 = 0LL;
                v86 = v85;
LABEL_137:
                if ( !(_DWORD)v77 )
                {
                  if ( !*(_QWORD *)(v17 + 120) )
                    goto LABEL_139;
LABEL_141:
                  if ( (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 20LL) & 0x40) != 0 )
                  {
                    *((_DWORD *)v4 + 6) |= 1u;
                    *((_DWORD *)v14 + 8) |= 0x80000000;
                    v85 = *((_DWORD *)v14 + 8);
                  }
                }
              }
              else
              {
                if ( (*(_BYTE *)(v84 + 16) & 0x40) != 0 )
                {
                  *((_DWORD *)v4 + 6) |= 1u;
                  *((_DWORD *)v14 + 8) |= 0x40000000u;
                }
                v16 = 0LL;
                v86 = *((_DWORD *)v14 + 8);
                if ( !(_DWORD)v77 && !*(_QWORD *)(v17 + 120) )
                {
LABEL_139:
                  LOWORD(v85) = v86;
                  if ( (v86 & 0x40000000) != 0 )
                    *((_DWORD *)v14 + 39) |= 0x10u;
                  goto LABEL_141;
                }
                *((_DWORD *)v4 + 6) |= 1u;
                v85 = *((_DWORD *)v14 + 8) | 0x10000000;
                *((_DWORD *)v14 + 8) = v85;
                v86 = v85;
                if ( !(_DWORD)v77 )
                {
                  *((_DWORD *)v14 + 39) |= 8u;
                  goto LABEL_137;
                }
              }
              if ( (v85 & 0x4008) != 8
                && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 136) + 8LL) + 9LL) & 8) != 0
                && *(_QWORD *)(v17 + 24) == grpdeskRitInput )
              {
                v119[0] = 0LL;
                v119[1] = 0LL;
                for ( i = *(_QWORD *)(*(_QWORD *)(v17 + 104) + 112LL); i; i = *(_QWORD *)(i + 88) )
                {
                  if ( i == v17 )
                  {
                    CreateSpb((struct tagWND *)v17);
                    break;
                  }
                  v88 = *(_QWORD *)(i + 40);
                  if ( (*(_BYTE *)(v88 + 31) & 0x10) != 0 )
                  {
                    v123 = *(_OWORD *)(v88 + 88);
                    TransformRectBetweenCoordinateSpaces(&v123, &v123, v17, i);
                    if ( (unsigned int)IntersectRect(v119, (int *)(*(_QWORD *)(v17 + 40) + 88LL), (int *)&v123) )
                      break;
                  }
                }
LABEL_152:
                v16 = 0LL;
              }
            }
            else
            {
              if ( (v78 & 0x80u) == 0 )
                goto LABEL_152;
              v93 = IsTrayWindow((_QWORD *)v17);
              v16 = 0LL;
              if ( (v14[4] & 0x1F) != 0x1F && v93 && (*(_WORD *)(*(_QWORD *)(v17 + 40) + 42LL) & 0x3FFF) != 0x2AA )
              {
                *((_DWORD *)v4 + 6) |= 1u;
                *((_DWORD *)v14 + 8) |= 0x20000000u;
              }
              if ( (unsigned int)SetVisible((struct tagWND *)v17, 0xAu) )
                DecomposeWindowIfNeeded((struct tagWND *)v17);
              v94 = 3;
              if ( !gdwDeferWinEvent )
                v94 = 1;
              xxxWindowEvent(0x8003u, (struct tagWND *)v17, 0LL, 0, v94);
            }
            v89 = *(_QWORD *)(v17 + 40);
            if ( (*(_BYTE *)(v89 + 31) & 0x10) != 0 )
            {
              v90 = *((_DWORD *)v14 + 8);
              if ( (v90 & 0x8000) != 0 || (*(_BYTE *)(v89 + 21) & 1) == 0 && (v90 & 8) != 0 )
                SetOrClrWF(1LL, v17, 264LL, 1LL);
            }
            v91 = v14[14];
            if ( v91 )
              SelectWindowRgn((struct tagWND *)v17);
            ThreadUnlock1(v89, v91, v77);
            v2 = (__int64 *)a1;
            goto LABEL_161;
          }
          *((_DWORD *)v14 + 8) |= 0xCu;
          v12 = v14[12];
          if ( v12 )
          {
            GreDeleteObject(v12);
            v14[12] = 0LL;
          }
        }
      }
LABEL_161:
      v14 += 21;
      v96 = --v15;
      if ( v15 < 0 )
      {
        if ( v99 )
          xxxWindowEvent(0x8004u, (struct tagWND *)v2, 4294967292LL, 0, gdwDeferWinEvent != 0 ? 2 : 0);
        break;
      }
    }
  }
  ThreadUnlock1(v12, v11, v13);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v112);
  return v3;
}
