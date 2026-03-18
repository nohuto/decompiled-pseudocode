/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C00CEBD0
 * Callers:
 *     NtUserEndDeferWindowPosEx @ 0x1C002C7E0 (NtUserEndDeferWindowPosEx.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C008FAC0 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C00CB2A0 (xxxSetWindowPosAndBand.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0110508 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     xxxSetWindowRgn @ 0x1C011181C (xxxSetWindowRgn.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C012E07C (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C0159B10 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01DAD10 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     xxxSetTrayWindow @ 0x1C0017B08 (xxxSetTrayWindow.c)
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0089838 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     SetWindowGroupBand @ 0x1C0089E90 (SetWindowGroupBand.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxDoSyncPaint @ 0x1C00B051C (xxxDoSyncPaint.c)
 *     GreClientRgnUpdatedStable @ 0x1C00C32BC (GreClientRgnUpdatedStable.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00CD9E0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00CDEA8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00CF38C (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     DestroySMWP @ 0x1C00CF5F0 (DestroySMWP.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C01181D8 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C01183FC (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, __int64 a2)
{
  int v2; // r12d
  struct tagSMWP *v3; // rdi
  int v4; // r13d
  __int64 v5; // rax
  __int64 v6; // r15
  int v7; // eax
  struct tagCVR *v8; // rbx
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // r13
  int v19; // r15d
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rbx
  struct tagWND *v24; // rax
  struct tagWND *v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 result; // rax
  __int64 v30; // rcx
  struct tagCVR *v31; // rbx
  int v32; // r14d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r9
  struct _KTHREAD *CurrentThread; // r14
  __int64 v39; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  struct _KTHREAD *v45; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r14
  unsigned __int64 v50; // rbx
  __int64 v51; // rcx
  struct tagWND **v52; // r12
  int v53; // ebx
  unsigned int valid; // eax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rcx
  int v58; // r12d
  __int64 v59; // r14
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  int v67; // eax
  unsigned int v68; // edx
  int v69; // ebx
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rdx
  struct _KTHREAD *v76; // rsi
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 *v81; // rax
  __int64 v82; // rax
  __int64 v83; // [rsp+30h] [rbp-49h] BYREF
  struct tagSMWP *v84; // [rsp+38h] [rbp-41h]
  __int64 (__fastcall *v85)(_QWORD); // [rsp+40h] [rbp-39h]
  __int64 v86; // [rsp+48h] [rbp-31h]
  __int64 v87; // [rsp+50h] [rbp-29h]
  __int64 v88; // [rsp+58h] [rbp-21h] BYREF
  __int64 v89; // [rsp+60h] [rbp-19h]
  __int64 v90; // [rsp+68h] [rbp-11h]
  __int64 v91; // [rsp+70h] [rbp-9h] BYREF
  struct tagWND *v92; // [rsp+78h] [rbp-1h]
  __int64 v93; // [rsp+80h] [rbp+7h]
  _QWORD v94[9]; // [rsp+88h] [rbp+Fh] BYREF
  int v95; // [rsp+E0h] [rbp+67h]
  int v96; // [rsp+F0h] [rbp+77h]
  HWND v97; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = a2;
  v96 = 0;
  v3 = a1;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  if ( !*((_DWORD *)a1 + 7) )
    goto LABEL_37;
  v4 = 1;
  LOBYTE(a2) = 1;
  v95 = 1;
  v5 = HMValidateHandleNoSecure(**((_QWORD **)a1 + 5), a2);
  if ( !v5 )
    goto LABEL_37;
  v6 = *(_QWORD *)(v5 + 104);
  v7 = *((_DWORD *)v3 + 7);
  v8 = (struct tagCVR *)*((_QWORD *)v3 + 5);
  v9 = v7 - 1;
  if ( v7 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( (unsigned int)ValidateWindowPos(v8, 0LL) )
      {
        if ( *(_QWORD *)(_HMObjectFromHandle(*(_QWORD *)v8) + 104) != v6 )
        {
          UserSetLastError(1441LL, v10, v11, v12);
          goto LABEL_37;
        }
        if ( (*((_DWORD *)v8 + 8) & 0x2000) != 0 )
          v4 = 0;
        v95 = v4;
      }
      else
      {
        *(_QWORD *)v8 = 0LL;
      }
      v8 = (struct tagCVR *)((char *)v8 + 168);
      if ( --v9 < 0 )
      {
        v7 = *((_DWORD *)v3 + 7);
        break;
      }
    }
  }
  v13 = 0;
  if ( v7 <= 0 )
  {
LABEL_16:
    v17 = 0LL;
  }
  else
  {
    v14 = 0LL;
    v15 = v7;
    v16 = (_QWORD *)*((_QWORD *)v3 + 5);
    while ( !*v16 )
    {
      ++v13;
      ++v14;
      v16 += 21;
      if ( v14 >= v15 )
        goto LABEL_16;
    }
    v17 = (_QWORD *)(*((_QWORD *)v3 + 5) + 168LL * v13);
  }
  if ( !v17 )
    goto LABEL_37;
  v18 = *(_QWORD *)(_HMObjectFromHandle(*v17) + 104);
  v86 = v18;
  if ( !v18 || !*(_QWORD *)(v18 + 24) )
    goto LABEL_37;
  v19 = 0;
  if ( *((int *)v3 + 7) > 0 )
  {
    v20 = 0LL;
    do
    {
      v21 = *((_QWORD *)v3 + 5);
      v22 = *(_QWORD *)(v20 + v21);
      if ( v22 && *(_DWORD *)(v20 + v21 + 152) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(_HMObjectFromHandle(v22) + 40) + 236LL) != *(_DWORD *)(v20 + v21 + 152) )
        {
          v23 = *((_QWORD *)v3 + 5);
          v24 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v20 + v23));
          SetWindowGroupBand(v24, *(_DWORD *)(v20 + v23 + 152), 0);
        }
        *(_DWORD *)(v20 + *((_QWORD *)v3 + 5) + 152) = 0;
      }
      ++v19;
      v20 += 168LL;
    }
    while ( v19 < *((_DWORD *)v3 + 7) );
  }
  v25 = 0LL;
  if ( v2 )
    AsyncWindowPos(v3);
  v26 = *(_QWORD *)(v18 + 24);
  v27 = 0LL;
  if ( v26 )
  {
    v28 = *(_QWORD *)(v26 + 8);
    if ( v28 )
      v27 = *(_QWORD *)(v28 + 24);
  }
  if ( v18 != v27 )
  {
LABEL_49:
    v88 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v88;
    v89 = v18;
    HMLockObject(v18);
    if ( (*((_DWORD *)v3 + 6) & 2) != 0 )
    {
      HMLockObject(v3);
      PushW32ThreadLock((__int64)v3, &v83, (__int64)UnrefAndDestroySMWP, v37);
      v96 = 1;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v39 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v33, v35, v36) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v39 = *ThreadWin32Thread;
      }
      v83 = *(_QWORD *)(v39 + 16);
      *(_QWORD *)(v39 + 16) = &v83;
      v85 = DestroySMWP;
      v84 = v3;
    }
    ++*(_DWORD *)(gptiCurrent + 1200LL);
    *((_DWORD *)v3 + 6) |= 4u;
    if ( (unsigned int)xxxCalcValidRects(v3, &v97) )
    {
      v45 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v42, v41, v43, v44) )
        PsGetThreadWin32Thread(v45);
      v48 = (unsigned __int16)v97;
      if ( (unsigned __int64)(unsigned __int16)v97 < *(_QWORD *)(gpsi + 8LL) )
      {
        v49 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v97 * LODWORD(gSharedInfo[2]);
        v50 = (unsigned __int64)v97 >> 16;
        v52 = (struct tagWND **)HMPkheFromPhe(v49);
        if ( ((_WORD)v50 == *(_WORD *)(v49 + 26)
           || (_WORD)v50 == 0xFFFF
           || !(_WORD)v50 && PsGetCurrentProcessWow64Process(v51))
          && (*(_BYTE *)(v49 + 25) & 1) == 0
          && *(_BYTE *)(v49 + 24) == 1 )
        {
          v25 = *v52;
        }
      }
      v91 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v91;
      v92 = v25;
      if ( v25 )
        HMLockObject(v25);
      v53 = *(_DWORD *)(gptiCurrent + 896LL);
      LODWORD(v97) = v53;
      v87 = gptiForeground;
      valid = zzzBltValidBits((__int64)v3, v48, v46, v47);
      v57 = valid;
      v58 = (valid & 1) != 0 ? v95 : 0;
      if ( (valid & 2) != 0 )
        GenerateMouseMove(0LL);
      if ( (*((_DWORD *)v3 + 6) & 1) != 0 )
      {
        v59 = *((int *)v3 + 7);
        if ( *((_DWORD *)v3 + 7) )
        {
          v60 = 168 * v59;
          do
          {
            v61 = *((_QWORD *)v3 + 5);
            v60 -= 168LL;
            --v59;
            v57 = *(_QWORD *)(v60 + v61);
            if ( v57 )
            {
              if ( (*(_DWORD *)(v60 + v61 + 32) & 0xF0000000) != 0 )
              {
                LOBYTE(v55) = 1;
                v62 = HMValidateHandleNoSecure(v57, v55);
                v63 = v62;
                if ( v62 )
                {
                  v94[0] = *(_QWORD *)(gptiCurrent + 408LL);
                  *(_QWORD *)(gptiCurrent + 408LL) = v94;
                  v94[2] = 0LL;
                  v94[1] = v62;
                  HMLockObject(v62);
                  v65 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v60 + v65 + 32) & 0x10000000) != 0 )
                  {
                    if ( (*(_DWORD *)(v60 + v65 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x15u, *(_QWORD *)(v60 + v65));
                    }
                    else
                    {
                      PostShellHookMessages(1uLL, *(_QWORD *)(v60 + v65));
                      xxxCallHook(1, *(_QWORD *)(v60 + *((_QWORD *)v3 + 5)), 0LL, 10);
                    }
                  }
                  v66 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v60 + v66 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessages(2uLL, *(_QWORD *)(v60 + v66));
                    xxxCallHook(2, *(_QWORD *)(v60 + *((_QWORD *)v3 + 5)), 0LL, 10);
                    v66 = *((_QWORD *)v3 + 5);
                  }
                  if ( (*(_DWORD *)(v60 + v66 + 32) & 0x40000000) != 0 )
                  {
                    v67 = *(_DWORD *)(v60 + v66 + 156);
                    if ( (v67 & 8) != 0 )
                    {
                      v68 = 23;
                    }
                    else
                    {
                      if ( (v67 & 0x10) == 0 )
                      {
                        xxxSetTrayWindow(*(_QWORD *)(v63 + 24), (unsigned __int64 *)v63);
                        v66 = *((_QWORD *)v3 + 5);
                      }
                      v68 = 19;
                    }
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v68, *(_QWORD *)(v60 + v66));
                  }
                  if ( *(int *)(v60 + *((_QWORD *)v3 + 5) + 32) < 0 )
                    xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 448LL), (unsigned __int64 *)1);
                  ThreadUnlock1(v65, v64, v66);
                }
              }
            }
          }
          while ( v59 );
          v18 = v86;
          v53 = (int)v97;
        }
      }
      if ( gptiCurrent == v87 )
      {
        if ( v53 )
        {
          if ( !*(_DWORD *)(gptiCurrent + 896LL)
            && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 416LL)) )
          {
            *(_DWORD *)(gptiCurrent + 480LL) |= 0x20u;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                v57,
                v55,
                2u,
                0xAu,
                (__int64)&WPP_6c0b2c86f1873cb2cea130fd13a3e914_Traceguids,
                gptiCurrent);
          }
        }
      }
      v69 = 0;
      if ( v25 )
        v69 = xxxSwpActivate(v25);
      if ( v58 )
        xxxDoSyncPaint(v18, 4u);
      ThreadUnlock1(v57, v55, v56);
      if ( v69 )
      {
        v73 = *(_QWORD *)(gptiCurrent + 424LL);
        v74 = *(_QWORD *)(v73 + 128);
        if ( v74 )
        {
          SetOrClrWF(0, v74, 0x101u, 1);
          v73 = *(_QWORD *)(gptiCurrent + 424LL);
        }
        v70 = *(_QWORD *)(v73 + 136);
        if ( v70 )
          SetOrClrWF(0, v70, 0x101u, 1);
      }
      xxxSendChangedMsgs(v3, v70, v71, v72);
    }
    if ( (*(_DWORD *)(gptiCurrent + 1200LL))-- == 1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v41, v43, v44);
      GreClientRgnUpdatedStable();
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v76 = KeGetCurrentThread();
    v77 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v42, v41, v43, v44) )
    {
      v81 = (__int64 *)PsGetThreadWin32Thread(v76);
      if ( v81 )
        v77 = *v81;
    }
    *(_QWORD *)(v77 + 16) = v83;
    ThreadUnlock1(v79, v78, v80);
    if ( v96 )
    {
      v82 = HMUnlockObject(v3);
      if ( !v82 )
        return 1LL;
      v30 = v82;
LABEL_38:
      DestroySMWP(v30);
      return 1LL;
    }
LABEL_37:
    v30 = (__int64)v3;
    goto LABEL_38;
  }
  result = (__int64)ZOrderByOwner(v3);
  v3 = (struct tagSMWP *)result;
  if ( result )
  {
    if ( v2 )
    {
      v31 = *(struct tagCVR **)(result + 40);
      v32 = *(_DWORD *)(result + 28);
      while ( --v32 >= 0 )
      {
        if ( *(_QWORD *)v31 && !(unsigned int)ValidateWindowPos(v31, 0LL) )
          *(_QWORD *)v31 = 0LL;
        v31 = (struct tagCVR *)((char *)v31 + 168);
      }
      AsyncWindowPos(v3);
    }
    goto LABEL_49;
  }
  return result;
}
