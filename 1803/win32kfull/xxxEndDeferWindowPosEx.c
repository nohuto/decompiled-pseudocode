/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C0026608
 * Callers:
 *     NtUserEndDeferWindowPosEx @ 0x1C00140D0 (NtUserEndDeferWindowPosEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C0034E48 (xxxSetWindowPosAndBand.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C005AEEC (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00EEE58 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     xxxSetWindowRgn @ 0x1C00F5D44 (xxxSetWindowRgn.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C0101650 (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C0135280 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01A5AEC (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     DestroySMWP @ 0x1C0026B90 (DestroySMWP.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0026C8C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C002718C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C00271D0 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0027284 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00274E8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C0034634 (GreClientRgnUpdatedStable.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxDoSyncPaint @ 0x1C0064E98 (xxxDoSyncPaint.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C006B6AC (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     xxxSetTrayWindow @ 0x1C006E028 (xxxSetTrayWindow.c)
 *     PostShellHookMessages @ 0x1C006E990 (PostShellHookMessages.c)
 *     SetWindowGroupBand @ 0x1C006EDD0 (SetWindowGroupBand.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C006EF3C (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     HMUnlockObject @ 0x1C00DAD2C (HMUnlockObject.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00F4738 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, int a2)
{
  struct tagSMWP *v3; // rbx
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  int v7; // r14d
  __int64 v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  struct tagCVR *v15; // rsi
  int v16; // r14d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v18; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r15
  int v23; // esi
  char valid; // al
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // r14d
  __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  int v38; // esi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  struct _KTHREAD *v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  HWND v51; // [rsp+20h] [rbp-49h] BYREF
  __int64 v52; // [rsp+28h] [rbp-41h]
  _QWORD v53[3]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v54[3]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v55[3]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v56[9]; // [rsp+78h] [rbp+Fh] BYREF
  int v57; // [rsp+D0h] [rbp+67h] BYREF
  int v58; // [rsp+E0h] [rbp+77h]
  int v59; // [rsp+E8h] [rbp+7Fh]

  v3 = a1;
  v58 = 0;
  if ( !*((_DWORD *)a1 + 7) )
    goto LABEL_87;
  if ( !(unsigned int)ValidateSmwp(a1, &v57) )
    goto LABEL_87;
  ValidWindowPos = FindValidWindowPos(v3);
  if ( !ValidWindowPos )
    goto LABEL_87;
  v5 = 3LL * (unsigned __int16)*(_DWORD *)ValidWindowPos;
  v6 = *(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)ValidWindowPos) + 80LL);
  if ( !v6 || !*(_QWORD *)(v6 + 24) )
    goto LABEL_87;
  v7 = 0;
  if ( *((int *)v3 + 7) > 0 )
  {
    v8 = 0LL;
    do
    {
      v9 = *((_QWORD *)v3 + 5);
      v10 = *(_QWORD *)(v9 + v8);
      if ( v10 )
      {
        v5 = *(unsigned int *)(v9 + v8 + 152);
        if ( (_DWORD)v5 )
        {
          v11 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v10);
          if ( *(_DWORD *)(*(_QWORD *)(v11 + 40) + 236LL) != (_DWORD)v5 )
          {
            SetWindowGroupBand((struct tagWND *)v11);
            v9 = *((_QWORD *)v3 + 5);
          }
          *(_DWORD *)(v8 + v9 + 152) = 0;
        }
      }
      ++v7;
      v8 += 168LL;
    }
    while ( v7 < *((_DWORD *)v3 + 7) );
  }
  if ( a2 )
    AsyncWindowPos(v3);
  v12 = *(_QWORD *)(v6 + 24);
  v13 = 0LL;
  if ( v12 )
  {
    v12 = *(_QWORD *)(v12 + 8);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 24);
  }
  if ( v6 == v13 )
  {
    result = (__int64)ZOrderByOwner(v3);
    v3 = (struct tagSMWP *)result;
    if ( !result )
      return result;
    if ( a2 )
    {
      v15 = *(struct tagCVR **)(result + 40);
      v16 = *(_DWORD *)(result + 28);
      while ( --v16 >= 0 )
      {
        if ( *(_QWORD *)v15 && !(unsigned int)ValidateWindowPos(v15, 0LL) )
          *(_QWORD *)v15 = 0LL;
        v15 = (struct tagCVR *)((char *)v15 + 168);
      }
      AsyncWindowPos(v3);
    }
  }
  v54[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v54;
  v54[1] = v6;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  if ( (*((_DWORD *)v3 + 6) & 2) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
    PushW32ThreadLock(v3, v53, UnrefAndDestroySMWP);
    v58 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v18 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v5) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
    }
    v53[0] = *(_QWORD *)(v18 + 16);
    *(_QWORD *)(v18 + 16) = v53;
    v53[2] = DestroySMWP;
    v53[1] = v3;
  }
  ++*(_DWORD *)(gptiCurrent + 1176LL);
  *((_DWORD *)v3 + 6) |= 4u;
  if ( (unsigned int)xxxCalcValidRects(v3, &v51) )
  {
    LOBYTE(v20) = 1;
    v22 = HMValidateHandleNoSecure(v51, v20);
    v55[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v55;
    v55[1] = v22;
    if ( v22 )
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    v23 = *(_DWORD *)(gptiCurrent + 888LL);
    v59 = v23;
    v52 = gptiForeground;
    valid = zzzBltValidBits(v3);
    LOBYTE(v27) = -(valid & 1);
    v28 = (valid & 1) != 0 ? v57 : 0;
    v57 = v28;
    if ( (valid & 2) != 0 )
      GenerateMouseMove(0LL);
    if ( (*((_DWORD *)v3 + 6) & 1) != 0 )
    {
      v29 = *((int *)v3 + 7);
      if ( *((_DWORD *)v3 + 7) )
      {
        v30 = 168 * v29;
        do
        {
          v31 = *((_QWORD *)v3 + 5);
          v30 -= 168LL;
          --v29;
          v27 = *(_QWORD *)(v30 + v31);
          if ( v27 )
          {
            if ( (*(_DWORD *)(v30 + v31 + 32) & 0xF0000000) != 0 )
            {
              LOBYTE(v25) = 1;
              v32 = HMValidateHandleNoSecure(v27, v25);
              if ( v32 )
              {
                v33 = *(_QWORD *)(gptiCurrent + 408LL);
                v56[0] = v33;
                *(_QWORD *)(gptiCurrent + 408LL) = v56;
                v56[1] = v32;
                _InterlockedIncrement((volatile signed __int32 *)(v32 + 8));
                v34 = *((_QWORD *)v3 + 5);
                if ( (*(_DWORD *)(v30 + v34 + 32) & 0x10000000) != 0 )
                {
                  if ( (*(_DWORD *)(v30 + v34 + 156) & 8) != 0 )
                  {
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 21LL, *(_QWORD *)(v30 + v34));
                  }
                  else
                  {
                    PostShellHookMessages(1LL, *(_QWORD *)(v30 + v34));
                    xxxCallHook(1, *(_QWORD *)(v30 + *((_QWORD *)v3 + 5)), 0LL, 10);
                  }
                }
                v35 = *((_QWORD *)v3 + 5);
                if ( (*(_DWORD *)(v30 + v35 + 32) & 0x20000000) != 0 )
                {
                  PostShellHookMessages(2LL, *(_QWORD *)(v30 + v35));
                  xxxCallHook(2, *(_QWORD *)(v30 + *((_QWORD *)v3 + 5)), 0LL, 10);
                  v35 = *((_QWORD *)v3 + 5);
                }
                if ( (*(_DWORD *)(v30 + v35 + 32) & 0x40000000) != 0 )
                {
                  v36 = *(_DWORD *)(v30 + v35 + 156);
                  if ( (v36 & 8) != 0 )
                  {
                    v37 = 23LL;
                  }
                  else
                  {
                    if ( (v36 & 0x10) == 0 )
                    {
                      xxxSetTrayWindow(*(_QWORD *)(v32 + 24), v32);
                      v35 = *((_QWORD *)v3 + 5);
                    }
                    v37 = 19LL;
                  }
                  PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), v37, *(_QWORD *)(v30 + v35));
                }
                if ( *(int *)(v30 + *((_QWORD *)v3 + 5) + 32) < 0 )
                  xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 448LL), 1LL);
                ThreadUnlock1(v33, v25, v35);
              }
            }
          }
        }
        while ( v29 );
        v28 = v57;
        v23 = v59;
      }
    }
    if ( gptiCurrent == v52
      && v23
      && !*(_DWORD *)(gptiCurrent + 888LL)
      && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 416LL)) )
    {
      *(_DWORD *)(gptiCurrent + 480LL) |= 0x20u;
    }
    v38 = 0;
    if ( v22 )
      v38 = xxxSwpActivate((struct tagWND *)v22);
    if ( v28 )
      xxxDoSyncPaint(v6, 4LL);
    ThreadUnlock1(v27, v25, v26);
    if ( v38 )
    {
      v39 = *(_QWORD *)(gptiCurrent + 424LL);
      v40 = *(_QWORD *)(v39 + 120);
      if ( v40 )
      {
        SetOrClrWF(0LL, v40, 257LL, 1LL);
        v39 = *(_QWORD *)(gptiCurrent + 424LL);
      }
      v41 = *(_QWORD *)(v39 + 128);
      if ( v41 )
        SetOrClrWF(0LL, v41, 257LL, 1LL);
    }
    xxxSendChangedMsgs(v3);
  }
  if ( (*(_DWORD *)(gptiCurrent + 1176LL))-- == 1 )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreClientRgnUpdatedStable();
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
  v43 = KeGetCurrentThread();
  v44 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v21, v20) )
  {
    v48 = (__int64 *)PsGetThreadWin32Thread(v43);
    if ( v48 )
      v44 = *v48;
  }
  *(_QWORD *)(v44 + 16) = v53[0];
  ThreadUnlock1(v46, v45, v47);
  if ( !v58 )
  {
LABEL_87:
    v50 = (__int64)v3;
    goto LABEL_88;
  }
  v49 = HMUnlockObject(v3);
  if ( v49 )
  {
    v50 = v49;
LABEL_88:
    DestroySMWP(v50);
  }
  return 1LL;
}
