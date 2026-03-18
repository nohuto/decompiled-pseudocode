/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     ComposeWindowIfNeeded @ 0x1C0022350 (ComposeWindowIfNeeded.c)
 *     OffsetChildren @ 0x1C0025BAC (OffsetChildren.c)
 *     UpdateSprite @ 0x1C002AD80 (UpdateSprite.c)
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     SetOldRedirectionBitmap @ 0x1C0041B78 (SetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00446B4 (DeleteOrSetRedirectionBitmap.c)
 *     DecomposeWindowIfNeeded @ 0x1C0044C58 (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C008BC10 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     PWInsertAfter @ 0x1C008BD94 (PWInsertAfter.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     zzzCalcStartCursorHide @ 0x1C00ABC40 (zzzCalcStartCursorHide.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     GreClientRgnUpdated @ 0x1C00C6368 (GreClientRgnUpdated.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     UnlinkWindow @ 0x1C00C8EC8 (UnlinkWindow.c)
 *     GetNewMonitor @ 0x1C00CA150 (GetNewMonitor.c)
 *     LinkWindow @ 0x1C00CA850 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C00CAE50 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     IsChildWindowDpiBoundary @ 0x1C00CDE50 (IsChildWindowDpiBoundary.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00CF38C (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00ED36C (UpdateMonitorForWindowAndChildren.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00ED568 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00ED5A8 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 *     SelectWindowRgn @ 0x1C0114004 (SelectWindowRgn.c)
 *     ?ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z @ 0x1C0117E34 (-ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z.c)
 *     ?ReValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C011B814 (-ReValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C01224A0 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     CreateSpb @ 0x1C015D8BC (CreateSpb.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     InvalidateGDIWindows @ 0x1C01EA0F0 (InvalidateGDIWindows.c)
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
  __int64 v10; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // rdi
  int v16; // r13d
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r13d
  __int64 DesktopWindow; // rax
  int v24; // r8d
  int v25; // r9d
  int v26; // r11d
  int v27; // ebx
  _DWORD *v28; // rdx
  int v29; // r15d
  int v30; // ecx
  unsigned int v31; // r15d
  int v32; // r12d
  int v33; // r12d
  _DWORD *v34; // rax
  _DWORD *v35; // rdx
  int v36; // ecx
  int v37; // ecx
  __int64 v38; // r8
  int v39; // r9d
  int v40; // r10d
  int v41; // r11d
  __int128 v42; // xmm0
  __int64 v43; // rcx
  int v44; // eax
  int v45; // r11d
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // ebx
  BOOL v49; // r14d
  __int64 v50; // rcx
  char v51; // bl
  char v52; // bl
  int v53; // eax
  HSURF v54; // rbx
  __int64 v55; // rax
  __int64 v56; // r8
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  int v59; // eax
  int v60; // r15d
  int v61; // r12d
  int v62; // ecx
  __int64 v63; // r8
  _DWORD *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r8
  struct tagCVR *v67; // rcx
  int v68; // r8d
  __int64 v69; // rdx
  __int64 v70; // rax
  int v71; // ecx
  __int64 v72; // rbx
  BOOL v73; // eax
  struct tagRECT *v74; // rdx
  __int64 NewMonitor; // rax
  struct _KTHREAD *v76; // r14
  __int64 v77; // rbx
  __int64 *v78; // rax
  __int64 v79; // r8
  int v80; // eax
  __int64 v81; // rcx
  int v82; // eax
  int v83; // edx
  int v84; // ebx
  unsigned int v85; // eax
  __int64 v86; // rdx
  int v87; // edx
  int v88; // eax
  __int64 i; // rbx
  __int64 v90; // rcx
  __int64 v91; // rcx
  int v92; // edx
  __int64 v93; // rdx
  int v95; // eax
  int v96; // ecx
  unsigned int updated; // [rsp+60h] [rbp-A0h]
  int v98; // [rsp+64h] [rbp-9Ch]
  int v99; // [rsp+68h] [rbp-98h]
  unsigned int v100; // [rsp+6Ch] [rbp-94h]
  int v101; // [rsp+70h] [rbp-90h]
  __int64 v104; // [rsp+88h] [rbp-78h] BYREF
  int v105; // [rsp+90h] [rbp-70h]
  int v106; // [rsp+94h] [rbp-6Ch]
  struct tagSIZE v107; // [rsp+98h] [rbp-68h] BYREF
  struct tagPOINT v108; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v109; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v110; // [rsp+B8h] [rbp-48h] BYREF
  int v111; // [rsp+C0h] [rbp-40h]
  int v112; // [rsp+C4h] [rbp-3Ch]
  _BYTE v113[8]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v114[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v115; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v116; // [rsp+E0h] [rbp-20h]
  __int64 v117; // [rsp+E8h] [rbp-18h]
  __int64 v118; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v119; // [rsp+F8h] [rbp-8h]
  __int64 v120; // [rsp+100h] [rbp+0h]
  _QWORD v121[2]; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v122; // [rsp+118h] [rbp+18h] BYREF
  __int64 v123; // [rsp+120h] [rbp+20h]
  struct tagRECT v124; // [rsp+128h] [rbp+28h] BYREF
  __int128 v125; // [rsp+138h] [rbp+38h] BYREF
  __int128 v126; // [rsp+148h] [rbp+48h]

  v118 = 0LL;
  v2 = (__int64 *)a1;
  updated = 0;
  v119 = 0LL;
  v3 = 0;
  v120 = 0LL;
  v115 = 0LL;
  v4 = a2;
  v116 = 0LL;
  v117 = 0LL;
  v101 = 0;
  v105 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v114);
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7, v9, v10) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v115 = *(_QWORD *)(v6 + 408);
  *(_QWORD *)(v6 + 408) = &v115;
  v116 = v2;
  HMLockObject(v2);
  v15 = (__int64 *)*((_QWORD *)v4 + 5);
  v16 = *((_DWORD *)v4 + 7) - 1;
  v98 = v16;
  if ( v16 >= 0 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      v13 = *v15;
      v99 = 0;
      v100 = 0;
      v104 = 0LL;
      if ( v13 )
      {
        LOBYTE(v12) = 1;
        v18 = HMValidateHandleNoSecure(v13, v12);
        if ( !v18 || !(unsigned int)IsStillWindowC((HWND)v15[1]) )
        {
          *((_DWORD *)v15 + 8) = 6159;
          *v15 = 0LL;
        }
        v13 = v15[4] & 0x18E7;
        if ( (_DWORD)v13 == 6151 )
        {
          *((_DWORD *)v15 + 8) |= 8u;
        }
        else
        {
          if ( (_DWORD)v13 != 6147
            || (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 19LL) & 4) != 0
            || !(unsigned int)ValidateZorder((struct tagCVR *)v15) )
          {
            v20 = 6147LL;
            if ( (v15[4] & 0x1803) != 0x1803 )
            {
              v21 = *(_QWORD *)(v18 + 40);
              if ( ((*(_BYTE *)(v21 + 27) & 0x20) != 0 || (*(_BYTE *)(v21 + 26) & 8) != 0)
                && ((v22 = *(_DWORD *)(v21 + 100) - *(_DWORD *)(v21 + 92),
                     v106 = *(_DWORD *)(v21 + 96) - *(_DWORD *)(v21 + 88),
                     v106 != *((_DWORD *)v15 + 6))
                 || v22 != *((_DWORD *)v15 + 7)) )
              {
                v99 = 1;
              }
              else
              {
                v22 = HIDWORD(v104);
                v106 = v104;
              }
              if ( *(_DWORD *)(v21 + 88) != *((_DWORD *)v15 + 4) || *(_DWORD *)(v21 + 92) != *((_DWORD *)v15 + 5) )
                v100 = 1;
              v109 = *(_OWORD *)(v2[5] + 104);
              if ( (unsigned int)IsChildWindowDpiBoundary((struct tagWND *)v18) )
              {
                if ( (*((_DWORD *)v15 + 39) & 0x100) == 0 )
                {
                  v17 = v18 + 224;
                  *(_DWORD *)(v18 + 224) = 0;
                  *(_DWORD *)(v18 + 228) = 0;
                }
                LogicalToPhysicalInPlaceRectWithSubpixel(v2, &v109, v17);
                PhysicalToLogicalInPlaceRectWithSubpixel(v18, &v109, v17);
                v105 = 1;
              }
              *(_DWORD *)(*(_QWORD *)(v18 + 40) + 88LL) = *((_DWORD *)v15 + 4);
              *(_DWORD *)(*(_QWORD *)(v18 + 40) + 92LL) = *((_DWORD *)v15 + 5);
              DesktopWindow = GetDesktopWindow(v18);
              v26 = DWORD1(v109);
              v27 = v109;
              if ( v2 != (__int64 *)DesktopWindow )
              {
                *(_DWORD *)(*(_QWORD *)(v18 + 40) + 88LL) += v109;
                *(_DWORD *)(*(_QWORD *)(v18 + 40) + 92LL) += v26;
              }
              v28 = *(_DWORD **)(v18 + 40);
              v29 = v28[22];
              v30 = *((_DWORD *)v15 + 6) + v29;
              v31 = v29 - v24;
              v32 = v28[23];
              v28[24] = v30;
              v33 = v32 - v25;
              *(_DWORD *)(*(_QWORD *)(v18 + 40) + 100LL) = *((_DWORD *)v15 + 7)
                                                         + *(_DWORD *)(*(_QWORD *)(v18 + 40) + 92LL);
              v34 = *(_DWORD **)(v18 + 40);
              v35 = v34;
              v36 = v34[22];
              if ( v34[24] < v36 )
              {
                v34[24] = v36;
                v34 = *(_DWORD **)(v18 + 40);
                v35 = v34;
              }
              v37 = v34[23];
              if ( v34[25] < v37 )
              {
                v34[25] = v37;
                v35 = *(_DWORD **)(v18 + 40);
              }
              if ( v18 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 304LL) )
              {
                if ( v2 != (__int64 *)GetDesktopWindow(v18) )
                {
                  v39 -= v27;
                  v40 -= v41;
                }
                if ( v39 | v40 )
                {
                  *(_DWORD *)(v38 + 324) += v39;
                  *(_DWORD *)(v38 + 328) += v40;
                  v35 = *(_DWORD **)(v18 + 40);
                }
              }
              v42 = *(_OWORD *)(v35 + 26);
              v35[26] = *((_DWORD *)v15 + 10);
              v43 = *(_QWORD *)(v18 + 40);
              v44 = *((_DWORD *)v15 + 11);
              v126 = v42;
              *(_DWORD *)(v43 + 108) = v44;
              if ( v2 != (__int64 *)GetDesktopWindow(v18) )
              {
                *(_DWORD *)(*(_QWORD *)(v18 + 40) + 104LL) += v27;
                *(_DWORD *)(*(_QWORD *)(v18 + 40) + 108LL) += v45;
              }
              *(_DWORD *)(*(_QWORD *)(v18 + 40) + 112LL) = *((_DWORD *)v15 + 12)
                                                         + *(_DWORD *)(*(_QWORD *)(v18 + 40) + 104LL);
              *(_DWORD *)(*(_QWORD *)(v18 + 40) + 116LL) = *((_DWORD *)v15 + 13)
                                                         + *(_DWORD *)(*(_QWORD *)(v18 + 40) + 108LL);
              v46 = *(_QWORD *)(v18 + 40);
              v47 = v126 - *(_QWORD *)(v46 + 104);
              if ( (_QWORD)v126 == *(_QWORD *)(v46 + 104) )
                v47 = *((_QWORD *)&v126 + 1) - *(_QWORD *)(v46 + 112);
              v48 = 0;
              v49 = v47 == 0;
              if ( (unsigned int)ShouldRemoveMonitorRgn((struct tagWND *)v18) )
                SelectWindowRgn((struct tagWND *)v18);
              if ( v99 )
              {
                *((_DWORD *)v15 + 39) |= 1u;
                v50 = *(_QWORD *)(v18 + 40);
                if ( (*(_BYTE *)(v50 + 27) & 0x20) != 0 )
                {
                  v51 = *(_BYTE *)(v50 + 26);
                  if ( (v51 & 0x20) == 0 )
                  {
                    v52 = v51 & 8;
                    v104 = 0LL;
                    v53 = RecreateRedirectionBitmap(
                            (struct tagWND *)v18,
                            0,
                            (unsigned __int64)&v104 & -(__int64)(v52 != 0));
                    updated = v53;
                    if ( v52 && v53 >= 0 )
                    {
                      v54 = (HSURF)v104;
                      if ( v104 )
                      {
                        if ( (unsigned int)SetOldRedirectionBitmap(v18, v104) )
                          v54 = 0LL;
                      }
                      else
                      {
                        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v113);
                        xxxInternalInvalidate((struct tagWND *)v18, (HRGN)1, 0x401u);
                        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v113);
                      }
                    }
                    else
                    {
                      v54 = (HSURF)v104;
                    }
                    if ( v54 )
                      DeleteOrSetRedirectionBitmap(v18, v54, 1);
                    v48 = 0;
                    goto LABEL_61;
                  }
                  v48 = 0;
                }
                if ( (unsigned int)IsWindowDesktopComposed(v18) )
                {
                  v64 = *(_DWORD **)(v18 + 40);
                  v107 = 0LL;
                  v107.cx = v64[24] - v64[22];
                  v107.cy = v64[25] - v64[23];
                  updated = UpdateSprite(
                              *(HDEV *)(gpDispInfo + 40LL),
                              (struct tagWND *)v18,
                              v63,
                              0LL,
                              0LL,
                              &v107,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0,
                              0LL);
                }
              }
LABEL_61:
              if ( v31 || v33 )
              {
                v55 = *(_QWORD *)(v18 + 40);
                v56 = 1LL;
                v57 = *(_QWORD *)(v55 + 168);
                if ( v57 > 1 && (*(_BYTE *)(v55 + 21) & 8) == 0 )
                {
                  GreOffsetRgn(v57, v31);
                  goto LABEL_66;
                }
              }
              else
              {
LABEL_66:
                v56 = 1LL;
              }
              v12 = *((unsigned int *)v15 + 18);
              if ( v15[9] || v105 )
              {
                v58 = *(_QWORD *)(*(_QWORD *)(v18 + 40) + 136LL);
                if ( v58 > 1 )
                {
                  GreOffsetRgn(v58, v12);
                  LODWORD(v12) = *((_DWORD *)v15 + 18);
                }
                OffsetChildren((struct tagWND *)v18, v12, *((_DWORD *)v15 + 19), 0LL, 0);
              }
              v20 = v100;
              if ( v100 || !v49 || v31 || v33 )
              {
                v12 = *(_QWORD *)(v18 + 40);
                v108 = *(struct tagPOINT *)(v12 + 88);
                v122 = 0LL;
                v123 = 0LL;
                if ( v100 )
                {
                  v59 = *(_DWORD *)(v12 + 232);
                  if ( (v59 & 0x8000) != 0 )
                  {
                    *(_DWORD *)(v12 + 232) = v59 & 0xFFFF7FFF;
                    PostShellHookMessages(0x36uLL, *(_QWORD *)v18);
                    v12 = *(_QWORD *)(v18 + 40);
                  }
                  if ( (*(_BYTE *)(v12 + 26) & 8) != 0 )
                  {
                    if ( v99 )
                    {
                      v60 = -v31;
                      v61 = -v33;
                      v111 = *(_DWORD *)(v12 + 96) - *(_DWORD *)(v12 + 88);
                      v62 = *(_DWORD *)(v12 + 100) - *(_DWORD *)(v12 + 92);
                      LODWORD(v123) = v60 + v106;
                      v112 = v62;
                      HIDWORD(v123) = v61 + v22;
                      v110 = 0LL;
                      v122 = __PAIR64__(v61, v60);
                      IntersectRect(&v122, (int *)&v122, (int *)&v110);
                    }
                    if ( gcountPWO )
                    {
                      InvalidateGDIWindows(v18);
                      GreClientRgnUpdated(1);
                    }
                    if ( !v99 || (v48 = 1, (unsigned int)IsWindowDesktopComposed(v18)) )
                      v48 = 0;
                  }
                }
                if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 26LL) & 8) != 0 )
                  updated = UpdateSprite(
                              *(HDEV *)(gpDispInfo + 40LL),
                              (struct tagWND *)v18,
                              v56,
                              0LL,
                              &v108,
                              0LL,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0,
                              (struct tagRECT *)((unsigned __int64)&v122 & -(__int64)(v48 != 0)));
                if ( v100 )
                  goto LABEL_94;
              }
              if ( v99 )
              {
LABEL_94:
                v20 = *(_QWORD *)(v18 + 40);
                if ( (*(_BYTE *)(v20 + 27) & 0x20) != 0 && (*(_BYTE *)(v20 + 26) & 0x20) == 0 )
                {
                  v20 = gptiCurrent;
                  v65 = *(_QWORD *)(gptiCurrent + 664LL);
                  if ( (!v65 || (*(_DWORD *)(v65 + 196) & 0x100000) == 0)
                    && !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter(v18) )
                  {
                    *(_DWORD *)(*(_QWORD *)(v18 + 40) + 232LL) &= ~0x80000u;
                    RecreateRedirectionBitmap((struct tagWND *)v18, 0, 0LL);
                  }
                }
              }
              v16 = v98;
              v3 = updated;
              v2 = (__int64 *)a1;
              v4 = a2;
            }
            v66 = *((unsigned int *)v15 + 8);
            if ( (v66 & 4) == 0 )
            {
              if ( (unsigned int)ReValidateZorder((struct tagCVR *)v15) )
              {
                if ( (unsigned int)ValidateWindowPos(v67, (struct tagWND *)v2) )
                {
                  UnlinkWindow((__int64 *)v18, v2);
                  PWInsertAfter(v15[1], v69);
                  LinkWindow((struct tagWND *)v18);
                  v12 = 1LL;
                  ++v101;
                  if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 19LL) & 4) != 0 )
                  {
                    SetOrClrWF(0, v18, 0x304u, 1);
                    *(_BYTE *)(*(_QWORD *)(v18 + 40) + 24LL) ^= 8u;
                  }
                  goto LABEL_108;
                }
                v68 = *((_DWORD *)v15 + 8);
              }
              *((_DWORD *)v15 + 8) = v68 | 4;
              SetOrClrWF(0, v18, 0x304u, 1);
            }
LABEL_108:
            if ( (*((_DWORD *)v15 + 39) & 0x20) != 0 )
            {
              v70 = ValidateHmonitor(v15[16]);
              v71 = *((_DWORD *)v15 + 39);
              v72 = v70;
              *(_QWORD *)&v124.left = 0LL;
              *(_QWORD *)&v124.right = 0LL;
              if ( (v71 & 0x80u) != 0 )
                v124 = *(struct tagRECT *)(v15 + 17);
              v73 = IsRectEmptyInl(&v124);
              v74 = &v124;
              if ( v73 )
                v74 = 0LL;
              NewMonitor = GetNewMonitor((struct tagWND *)v18, v74);
              if ( NewMonitor && v72 != NewMonitor )
                *((_DWORD *)v15 + 39) ^= (*((_DWORD *)v15 + 39) ^ ((unsigned int)UpdateMonitorForWindowAndChildren(
                                                                                   v18,
                                                                                   NewMonitor,
                                                                                   v15 + 20,
                                                                                   0LL) << 6)) & 0x40;
            }
            v76 = KeGetCurrentThread();
            v77 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v12, v66, v19) )
            {
              v78 = (__int64 *)PsGetThreadWin32Thread(v76);
              if ( v78 )
                v77 = *v78;
            }
            v118 = *(_QWORD *)(v77 + 408);
            *(_QWORD *)(v77 + 408) = &v118;
            v119 = v18;
            HMLockObject(v18);
            v80 = *((_DWORD *)v15 + 8);
            if ( (v80 & 0x40) != 0 )
            {
              v81 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 416LL);
              if ( (*(_DWORD *)(v81 + 12) & 0x40) != 0 )
                zzzCalcStartCursorHide(v81, 5000LL);
              v82 = SetVisible((struct tagWND *)v18, 9u);
              v83 = 3;
              v84 = v82;
              if ( !gdwDeferWinEvent )
                v83 = 1;
              xxxWindowEvent(0x8002u, (struct tagWND *)v18, 0LL, 0LL, v83);
              if ( v84 )
              {
                *((_DWORD *)v15 + 39) |= 2u;
                if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 26LL) & 8) == 0 )
                {
                  v3 = ComposeWindowIfNeeded((struct tagWND *)v18);
                  updated = v3;
                }
              }
              v85 = IsTrayWindow((_QWORD *)v18);
              v86 = *(_QWORD *)(v18 + 40);
              v79 = v85;
              if ( (*(_WORD *)(v86 + 42) & 0x3FFF) == 0x2AA )
              {
                if ( (*(_BYTE *)(v86 + 16) & 0x40) != 0 )
                {
                  *((_DWORD *)v4 + 6) |= 1u;
                  *((_DWORD *)v15 + 8) |= 0x40000000u;
                }
                v87 = *((_DWORD *)v15 + 8);
                v17 = 0LL;
                v88 = v87;
LABEL_137:
                if ( !(_DWORD)v79 )
                {
                  if ( !*(_QWORD *)(v18 + 120) )
                    goto LABEL_139;
LABEL_141:
                  if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 20LL) & 0x40) != 0 )
                  {
                    *((_DWORD *)v4 + 6) |= 1u;
                    *((_DWORD *)v15 + 8) |= 0x80000000;
                    v87 = *((_DWORD *)v15 + 8);
                  }
                }
              }
              else
              {
                if ( (*(_BYTE *)(v86 + 16) & 0x40) != 0 )
                {
                  *((_DWORD *)v4 + 6) |= 1u;
                  *((_DWORD *)v15 + 8) |= 0x40000000u;
                }
                v17 = 0LL;
                v88 = *((_DWORD *)v15 + 8);
                if ( !(_DWORD)v79 && !*(_QWORD *)(v18 + 120) )
                {
LABEL_139:
                  LOWORD(v87) = v88;
                  if ( (v88 & 0x40000000) != 0 )
                    *((_DWORD *)v15 + 39) |= 0x10u;
                  goto LABEL_141;
                }
                *((_DWORD *)v4 + 6) |= 1u;
                v87 = *((_DWORD *)v15 + 8) | 0x10000000;
                *((_DWORD *)v15 + 8) = v87;
                v88 = v87;
                if ( !(_DWORD)v79 )
                {
                  *((_DWORD *)v15 + 39) |= 8u;
                  goto LABEL_137;
                }
              }
              if ( (v87 & 0x4008) != 8
                && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 136) + 8LL) + 9LL) & 8) != 0
                && *(_QWORD *)(v18 + 24) == grpdeskRitInput )
              {
                v121[0] = 0LL;
                v121[1] = 0LL;
                for ( i = *(_QWORD *)(*(_QWORD *)(v18 + 104) + 112LL); i; i = *(_QWORD *)(i + 88) )
                {
                  if ( i == v18 )
                  {
                    CreateSpb((struct tagWND *)v18);
                    break;
                  }
                  v90 = *(_QWORD *)(i + 40);
                  if ( (*(_BYTE *)(v90 + 31) & 0x10) != 0 )
                  {
                    v125 = *(_OWORD *)(v90 + 88);
                    TransformRectBetweenCoordinateSpaces(&v125, &v125, v18, i);
                    if ( (unsigned int)IntersectRect(v121, (int *)(*(_QWORD *)(v18 + 40) + 88LL), (int *)&v125) )
                      break;
                  }
                }
LABEL_152:
                v17 = 0LL;
              }
            }
            else
            {
              if ( (v80 & 0x80u) == 0 )
                goto LABEL_152;
              v95 = IsTrayWindow((_QWORD *)v18);
              v17 = 0LL;
              if ( (v15[4] & 0x1F) != 0x1F && v95 && (*(_WORD *)(*(_QWORD *)(v18 + 40) + 42LL) & 0x3FFF) != 0x2AA )
              {
                *((_DWORD *)v4 + 6) |= 1u;
                *((_DWORD *)v15 + 8) |= 0x20000000u;
              }
              if ( (unsigned int)SetVisible((struct tagWND *)v18, 0xAu) )
                DecomposeWindowIfNeeded((struct tagWND *)v18);
              v96 = 3;
              if ( !gdwDeferWinEvent )
                v96 = 1;
              xxxWindowEvent(0x8003u, (struct tagWND *)v18, 0LL, 0LL, v96);
            }
            v91 = *(_QWORD *)(v18 + 40);
            if ( (*(_BYTE *)(v91 + 31) & 0x10) != 0 )
            {
              v92 = *((_DWORD *)v15 + 8);
              if ( (v92 & 0x8000) != 0 || (*(_BYTE *)(v91 + 21) & 1) == 0 && (v92 & 8) != 0 )
                SetOrClrWF(1, v18, 0x108u, 1);
            }
            v93 = v15[14];
            if ( v93 )
              SelectWindowRgn((struct tagWND *)v18);
            ThreadUnlock1(v91, v93, v79);
            v2 = (__int64 *)a1;
            goto LABEL_161;
          }
          *((_DWORD *)v15 + 8) |= 0xCu;
          v13 = v15[12];
          if ( v13 )
          {
            GreDeleteObject(v13);
            v15[12] = 0LL;
          }
        }
      }
LABEL_161:
      v15 += 21;
      v98 = --v16;
      if ( v16 < 0 )
      {
        if ( v101 )
          xxxWindowEvent(0x8004u, (struct tagWND *)v2, 4294967292LL, 0LL, gdwDeferWinEvent != 0 ? 2 : 0);
        break;
      }
    }
  }
  ThreadUnlock1(v13, v12, v14);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v114);
  return v3;
}
