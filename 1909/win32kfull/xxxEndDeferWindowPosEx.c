/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C00702A0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00177A8 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00224F0 (NtUserEndDeferWindowPosEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C006C970 (xxxSetWindowPosAndBand.c)
 *     xxxSetWindowRgn @ 0x1C00EC6CC (xxxSetWindowRgn.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C0108FB8 (xxxProcessSetWindowPosEvent.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C012E644 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C015AAC0 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01DAB90 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     xxxSetTrayWindow @ 0x1C0017964 (xxxSetTrayWindow.c)
 *     PostShellHookMessages @ 0x1C0017B0C (PostShellHookMessages.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00192CC (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     SetWindowGroupBand @ 0x1C0019924 (SetWindowGroupBand.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxDoSyncPaint @ 0x1C005137C (xxxDoSyncPaint.c)
 *     GreClientRgnUpdatedStable @ 0x1C006498C (GreClientRgnUpdatedStable.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006F578 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0070A5C (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     DestroySMWP @ 0x1C0070CC0 (DestroySMWP.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00F2198 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C01311C0 (PostIAMShellHookMessageEx.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0136D84 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
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
  struct _KTHREAD *CurrentThread; // r14
  __int64 v37; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct _KTHREAD *v42; // rbx
  __int64 v43; // r14
  unsigned __int64 v44; // rbx
  __int64 v45; // rcx
  struct tagWND **v46; // r12
  int v47; // ebx
  unsigned int valid; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rcx
  int v52; // r12d
  __int64 v53; // r14
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r13
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // eax
  __int64 v62; // rdx
  int v63; // ebx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rdx
  struct _KTHREAD *v69; // rsi
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 *v74; // rax
  __int64 v75; // rax
  __int64 v76; // [rsp+30h] [rbp-49h] BYREF
  struct tagSMWP *v77; // [rsp+38h] [rbp-41h]
  __int64 (__fastcall *v78)(_QWORD); // [rsp+40h] [rbp-39h]
  __int64 v79; // [rsp+48h] [rbp-31h]
  __int64 v80; // [rsp+50h] [rbp-29h]
  __int64 v81; // [rsp+58h] [rbp-21h] BYREF
  __int64 v82; // [rsp+60h] [rbp-19h]
  __int64 v83; // [rsp+68h] [rbp-11h]
  __int64 v84; // [rsp+70h] [rbp-9h] BYREF
  struct tagWND *v85; // [rsp+78h] [rbp-1h]
  __int64 v86; // [rsp+80h] [rbp+7h]
  _QWORD v87[9]; // [rsp+88h] [rbp+Fh] BYREF
  int v88; // [rsp+E0h] [rbp+67h]
  int v89; // [rsp+F0h] [rbp+77h]
  HWND v90; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = a2;
  v89 = 0;
  v3 = a1;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  if ( !*((_DWORD *)a1 + 7) )
    goto LABEL_37;
  v4 = 1;
  LOBYTE(a2) = 1;
  v88 = 1;
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
        v88 = v4;
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
  v79 = v18;
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
    v81 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v81;
    v82 = v18;
    HMLockObject(v18);
    if ( (*((_DWORD *)v3 + 6) & 2) != 0 )
    {
      HMLockObject(v3);
      PushW32ThreadLock((__int64)v3, &v76, (__int64)UnrefAndDestroySMWP);
      v89 = 1;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v37 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v33, v35) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v37 = *ThreadWin32Thread;
      }
      v76 = *(_QWORD *)(v37 + 16);
      *(_QWORD *)(v37 + 16) = &v76;
      v78 = DestroySMWP;
      v77 = v3;
    }
    ++*(_DWORD *)(gptiCurrent + 1200LL);
    *((_DWORD *)v3 + 6) |= 4u;
    if ( (unsigned int)xxxCalcValidRects(v3, &v90) )
    {
      v42 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v40, v39, v41) )
        PsGetThreadWin32Thread(v42);
      if ( (unsigned __int64)(unsigned __int16)v90 < *(_QWORD *)(gpsi + 8LL) )
      {
        v43 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v90 * LODWORD(gSharedInfo[2]);
        v44 = (unsigned __int64)v90 >> 16;
        v46 = (struct tagWND **)HMPkheFromPhe(v43);
        if ( ((_WORD)v44 == *(_WORD *)(v43 + 26)
           || (_WORD)v44 == 0xFFFF
           || !(_WORD)v44 && PsGetCurrentProcessWow64Process(v45))
          && (*(_BYTE *)(v43 + 25) & 1) == 0
          && *(_BYTE *)(v43 + 24) == 1 )
        {
          v25 = *v46;
        }
      }
      v84 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v84;
      v85 = v25;
      if ( v25 )
        HMLockObject(v25);
      v47 = *(_DWORD *)(gptiCurrent + 896LL);
      LODWORD(v90) = v47;
      v80 = gptiForeground;
      valid = zzzBltValidBits((__int64)v3);
      v51 = valid;
      v52 = (valid & 1) != 0 ? v88 : 0;
      if ( (valid & 2) != 0 )
        GenerateMouseMove(0LL);
      if ( (*((_DWORD *)v3 + 6) & 1) != 0 )
      {
        v53 = *((int *)v3 + 7);
        if ( *((_DWORD *)v3 + 7) )
        {
          v54 = 168 * v53;
          do
          {
            v55 = *((_QWORD *)v3 + 5);
            v54 -= 168LL;
            --v53;
            v51 = *(_QWORD *)(v54 + v55);
            if ( v51 )
            {
              if ( (*(_DWORD *)(v54 + v55 + 32) & 0xF0000000) != 0 )
              {
                LOBYTE(v49) = 1;
                v56 = HMValidateHandleNoSecure(v51, v49);
                v57 = v56;
                if ( v56 )
                {
                  v87[0] = *(_QWORD *)(gptiCurrent + 408LL);
                  *(_QWORD *)(gptiCurrent + 408LL) = v87;
                  v87[2] = 0LL;
                  v87[1] = v56;
                  HMLockObject(v56);
                  v59 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v54 + v59 + 32) & 0x10000000) != 0 )
                  {
                    if ( (*(_DWORD *)(v54 + v59 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 21LL, *(_QWORD *)(v54 + v59));
                    }
                    else
                    {
                      PostShellHookMessages(1uLL, *(_QWORD *)(v54 + v59));
                      xxxCallHook(1, *(_QWORD *)(v54 + *((_QWORD *)v3 + 5)), 0LL, 10);
                    }
                  }
                  v60 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v54 + v60 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessages(2uLL, *(_QWORD *)(v54 + v60));
                    xxxCallHook(2, *(_QWORD *)(v54 + *((_QWORD *)v3 + 5)), 0LL, 10);
                    v60 = *((_QWORD *)v3 + 5);
                  }
                  if ( (*(_DWORD *)(v54 + v60 + 32) & 0x40000000) != 0 )
                  {
                    v61 = *(_DWORD *)(v54 + v60 + 156);
                    if ( (v61 & 8) != 0 )
                    {
                      v62 = 23LL;
                    }
                    else
                    {
                      if ( (v61 & 0x10) == 0 )
                      {
                        xxxSetTrayWindow(*(_QWORD *)(v57 + 24), (unsigned __int64 *)v57);
                        v60 = *((_QWORD *)v3 + 5);
                      }
                      v62 = 19LL;
                    }
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v62, *(_QWORD *)(v54 + v60));
                  }
                  if ( *(int *)(v54 + *((_QWORD *)v3 + 5) + 32) < 0 )
                    xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 448LL), (unsigned __int64 *)1);
                  ThreadUnlock1(v59, v58, v60);
                }
              }
            }
          }
          while ( v53 );
          v18 = v79;
          v47 = (int)v90;
        }
      }
      if ( gptiCurrent == v80 )
      {
        if ( v47 )
        {
          if ( !*(_DWORD *)(gptiCurrent + 896LL)
            && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 416LL)) )
          {
            *(_DWORD *)(gptiCurrent + 480LL) |= 0x20u;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(v51, v49, 2, 10, (__int64)&WPP_6c0b2c86f1873cb2cea130fd13a3e914_Traceguids, gptiCurrent);
          }
        }
      }
      v63 = 0;
      if ( v25 )
        v63 = xxxSwpActivate(v25);
      if ( v52 )
        xxxDoSyncPaint(v18, 4u);
      ThreadUnlock1(v51, v49, v50);
      if ( v63 )
      {
        v66 = *(_QWORD *)(gptiCurrent + 424LL);
        v67 = *(_QWORD *)(v66 + 128);
        if ( v67 )
        {
          SetOrClrWF(0LL, v67, 257LL, 1LL);
          v66 = *(_QWORD *)(gptiCurrent + 424LL);
        }
        v64 = *(_QWORD *)(v66 + 136);
        if ( v64 )
          SetOrClrWF(0LL, v64, 257LL, 1LL);
      }
      xxxSendChangedMsgs(v3, v64, v65);
    }
    if ( (*(_DWORD *)(gptiCurrent + 1200LL))-- == 1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreClientRgnUpdatedStable();
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v69 = KeGetCurrentThread();
    v70 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v40, v39, v41) )
    {
      v74 = (__int64 *)PsGetThreadWin32Thread(v69);
      if ( v74 )
        v70 = *v74;
    }
    *(_QWORD *)(v70 + 16) = v76;
    ThreadUnlock1(v72, v71, v73);
    if ( v89 )
    {
      v75 = HMUnlockObject(v3);
      if ( !v75 )
        return 1LL;
      v30 = v75;
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
