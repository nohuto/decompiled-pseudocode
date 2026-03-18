/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C0038714
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0071DE8 (xxxSetWindowPosAndBand.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     xxxSetWindowRgn @ 0x1C00C782C (xxxSetWindowRgn.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00CD908 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0108ED4 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C0111960 (NtUserEndDeferWindowPosEx.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C0123578 (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C0153AD0 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01C7928 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     SetWindowGroupBand @ 0x1C000EF18 (SetWindowGroupBand.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C000F030 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C003839C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     DestroySMWP @ 0x1C0038DB0 (DestroySMWP.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0038EDC (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0038F90 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C003AAF8 (GreClientRgnUpdatedStable.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxDoSyncPaint @ 0x1C006E41C (xxxDoSyncPaint.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxSetTrayWindow @ 0x1C00B376C (xxxSetTrayWindow.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00D8C48 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 *     HMUnlockObject @ 0x1C00DF140 (HMUnlockObject.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C010F3C0 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, int a2)
{
  struct tagSMWP *v3; // rbx
  int v4; // eax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct tagSMWP *v17; // rax
  struct tagCVR *v19; // rsi
  int v20; // r14d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v22; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KTHREAD *v26; // rsi
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 v29; // r14
  int v30; // esi
  char valid; // al
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  int v34; // r14d
  __int64 v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r8
  int v42; // eax
  __int64 v43; // rdx
  int v44; // esi
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  struct _KTHREAD *v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  HWND v56; // [rsp+20h] [rbp-49h] BYREF
  __int64 v57; // [rsp+28h] [rbp-41h]
  _QWORD v58[3]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v59[3]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v60[3]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v61[9]; // [rsp+78h] [rbp+Fh] BYREF
  int v62; // [rsp+D0h] [rbp+67h] BYREF
  int v63; // [rsp+E0h] [rbp+77h]
  int v64; // [rsp+E8h] [rbp+7Fh]

  v3 = a1;
  v63 = 0;
  if ( !*((_DWORD *)a1 + 7) || !(unsigned int)ValidateSmwp(a1, &v62) )
    goto LABEL_104;
  v4 = 0;
  if ( *((int *)v3 + 7) <= 0 )
  {
LABEL_7:
    v7 = 0LL;
  }
  else
  {
    v5 = (_QWORD *)*((_QWORD *)v3 + 5);
    v6 = 0LL;
    while ( !*v5 )
    {
      ++v4;
      ++v6;
      v5 += 21;
      if ( v6 >= *((int *)v3 + 7) )
        goto LABEL_7;
    }
    v7 = (_DWORD *)(*((_QWORD *)v3 + 5) + 168LL * v4);
  }
  if ( !v7 )
    goto LABEL_104;
  v8 = 3LL * (unsigned __int16)*v7;
  v9 = *(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*v7) + 80LL);
  if ( !v9 || !*(_QWORD *)(v9 + 24) )
    goto LABEL_104;
  v59[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v59;
  v59[1] = v9;
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  v10 = 0;
  if ( *((int *)v3 + 7) > 0 )
  {
    v11 = 0LL;
    do
    {
      v12 = *((_QWORD *)v3 + 5);
      v13 = *(_QWORD *)(v11 + v12);
      if ( v13 )
      {
        v8 = *(unsigned int *)(v11 + v12 + 152);
        if ( (_DWORD)v8 )
        {
          v14 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v13);
          if ( *(_DWORD *)(*(_QWORD *)(v14 + 40) + 236LL) != (_DWORD)v8 )
          {
            SetWindowGroupBand((struct tagWND *)v14, v8, 0);
            v12 = *((_QWORD *)v3 + 5);
          }
          *(_DWORD *)(v11 + v12 + 152) = 0;
        }
      }
      ++v10;
      v11 += 168LL;
    }
    while ( v10 < *((_DWORD *)v3 + 7) );
  }
  if ( a2 )
    AsyncWindowPos(v3);
  v15 = *(_QWORD *)(v9 + 24);
  v16 = 0LL;
  if ( v15 )
  {
    v15 = *(_QWORD *)(v15 + 8);
    if ( v15 )
      v16 = *(_QWORD *)(v15 + 24);
  }
  if ( v9 == v16 )
  {
    v17 = ZOrderByOwner(v3);
    v3 = v17;
    if ( !v17 )
    {
      ThreadUnlock1(v15, v8);
      return 0LL;
    }
    if ( a2 )
    {
      v19 = (struct tagCVR *)*((_QWORD *)v17 + 5);
      v20 = *((_DWORD *)v17 + 7);
      while ( --v20 >= 0 )
      {
        if ( *(_QWORD *)v19 && !(unsigned int)ValidateWindowPos(v19, 0LL) )
          *(_QWORD *)v19 = 0LL;
        v19 = (struct tagCVR *)((char *)v19 + 168);
      }
      AsyncWindowPos(v3);
    }
  }
  if ( (*((_DWORD *)v3 + 6) & 2) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
    PushW32ThreadLock(v3, v58, UnrefAndDestroySMWP);
    v63 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v22 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v8) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v22 = *ThreadWin32Thread;
    }
    v58[0] = *(_QWORD *)(v22 + 16);
    *(_QWORD *)(v22 + 16) = v58;
    v58[2] = DestroySMWP;
    v58[1] = v3;
  }
  ++*(_DWORD *)(gptiCurrent + 1184LL);
  *((_DWORD *)v3 + 6) |= 4u;
  if ( (unsigned int)xxxCalcValidRects(v3, &v56) )
  {
    v26 = KeGetCurrentThread();
    v27 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v25, v24) )
      PsGetThreadWin32Thread(v26);
    if ( (unsigned __int64)(unsigned __int16)v56 < *(_QWORD *)(gpsi + 8LL) )
    {
      v28 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v56 * *((_DWORD *)&gSharedInfo + 4);
      v29 = 3 * ((__int64)((unsigned int)(unsigned __int16)v56 * *((_DWORD *)&gSharedInfo + 4)) >> 5);
      if ( (WORD1(v56) == *(_WORD *)(v28 + 26)
         || WORD1(v56) == 0xFFFF
         || !WORD1(v56) && PsGetCurrentProcessWow64Process(gpsi))
        && (*(_BYTE *)(v28 + 25) & 1) == 0
        && *(_BYTE *)(v28 + 24) == 1 )
      {
        v27 = *(_QWORD *)(gpKernelHandleTable + 8 * v29);
      }
    }
    v60[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v60;
    v60[1] = v27;
    if ( v27 )
      _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
    v30 = *(_DWORD *)(gptiCurrent + 896LL);
    v64 = v30;
    v57 = gptiForeground;
    valid = zzzBltValidBits(v3);
    LOBYTE(v33) = -(valid & 1);
    v34 = (valid & 1) != 0 ? v62 : 0;
    v62 = v34;
    if ( (valid & 2) != 0 )
      GenerateMouseMove(0LL);
    if ( (*((_DWORD *)v3 + 6) & 1) != 0 )
    {
      v35 = *((int *)v3 + 7);
      if ( *((_DWORD *)v3 + 7) )
      {
        v36 = 168 * v35;
        do
        {
          v37 = *((_QWORD *)v3 + 5);
          v36 -= 168LL;
          --v35;
          v33 = *(_QWORD *)(v36 + v37);
          if ( v33 )
          {
            if ( (*(_DWORD *)(v36 + v37 + 32) & 0xF0000000) != 0 )
            {
              LOBYTE(v32) = 1;
              v38 = HMValidateHandleNoSecure(v33, v32);
              if ( v38 )
              {
                v39 = *(_QWORD *)(gptiCurrent + 416LL);
                v61[0] = v39;
                *(_QWORD *)(gptiCurrent + 416LL) = v61;
                v61[1] = v38;
                _InterlockedIncrement((volatile signed __int32 *)(v38 + 8));
                v40 = *((_QWORD *)v3 + 5);
                if ( (*(_DWORD *)(v36 + v40 + 32) & 0x10000000) != 0 )
                {
                  if ( (*(_DWORD *)(v36 + v40 + 156) & 8) != 0 )
                  {
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 21LL, *(_QWORD *)(v36 + v40));
                  }
                  else
                  {
                    PostShellHookMessages(1LL, *(_QWORD *)(v36 + v40));
                    xxxCallHook(1, *(_QWORD *)(v36 + *((_QWORD *)v3 + 5)), 0LL, 10);
                  }
                }
                v41 = *((_QWORD *)v3 + 5);
                if ( (*(_DWORD *)(v36 + v41 + 32) & 0x20000000) != 0 )
                {
                  PostShellHookMessages(2LL, *(_QWORD *)(v36 + v41));
                  xxxCallHook(2, *(_QWORD *)(v36 + *((_QWORD *)v3 + 5)), 0LL, 10);
                  v41 = *((_QWORD *)v3 + 5);
                }
                if ( (*(_DWORD *)(v36 + v41 + 32) & 0x40000000) != 0 )
                {
                  v42 = *(_DWORD *)(v36 + v41 + 156);
                  if ( (v42 & 8) != 0 )
                  {
                    v43 = 23LL;
                  }
                  else
                  {
                    if ( (v42 & 0x10) == 0 )
                    {
                      xxxSetTrayWindow(*(_QWORD *)(v38 + 24), v38);
                      v41 = *((_QWORD *)v3 + 5);
                    }
                    v43 = 19LL;
                  }
                  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v43, *(_QWORD *)(v36 + v41));
                }
                if ( *(int *)(v36 + *((_QWORD *)v3 + 5) + 32) < 0 )
                  xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 456LL), 1LL);
                ThreadUnlock1(v39, v32);
              }
            }
          }
        }
        while ( v35 );
        v34 = v62;
        v30 = v64;
      }
    }
    if ( gptiCurrent == v57
      && v30
      && !*(_DWORD *)(gptiCurrent + 896LL)
      && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 424LL)) )
    {
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x20u;
    }
    v44 = 0;
    if ( v27 )
      v44 = xxxSwpActivate((struct tagWND *)v27);
    if ( v34 )
      xxxDoSyncPaint(v9, 4LL);
    ThreadUnlock1(v33, v32);
    if ( v44 )
    {
      v46 = *(_QWORD *)(gptiCurrent + 432LL);
      v47 = *(_QWORD *)(v46 + 120);
      if ( v47 )
      {
        SetOrClrWF(0, v47, 0x101u, 1);
        v46 = *(_QWORD *)(gptiCurrent + 432LL);
      }
      v45 = *(_QWORD *)(v46 + 128);
      if ( v45 )
        SetOrClrWF(0, v45, 0x101u, 1);
    }
    xxxSendChangedMsgs(v3, v45);
  }
  if ( (*(_DWORD *)(gptiCurrent + 1184LL))-- == 1 )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreClientRgnUpdatedStable();
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
  v49 = KeGetCurrentThread();
  v50 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v25, v24) )
  {
    v53 = (__int64 *)PsGetThreadWin32Thread(v49);
    if ( v53 )
      v50 = *v53;
  }
  *(_QWORD *)(v50 + 16) = v58[0];
  ThreadUnlock1(v52, v51);
  if ( !v63 )
  {
LABEL_104:
    v55 = (__int64)v3;
    goto LABEL_105;
  }
  v54 = HMUnlockObject(v3);
  if ( v54 )
  {
    v55 = v54;
LABEL_105:
    DestroySMWP(v55);
  }
  return 1LL;
}
