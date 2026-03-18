/*
 * XREFs of xxxTrackMouseMove @ 0x1C001C4B4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0010BDC (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x1C001ADA8 (xxxCancelMouseMoveTracking.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C002E7CC (IsShellWndManagementBehaviorEnabled.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _SetSystemTimer @ 0x1C008C7D4 (_SetSystemTimer.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     ThreadLockExchangeAlways @ 0x1C011EE8C (ThreadLockExchangeAlways.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C012D138 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C012FBB0 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C013699C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxResetTooltip @ 0x1C01369EC (xxxResetTooltip.c)
 *     xxxHotTrack @ 0x1C013D878 (xxxHotTrack.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C013DD5C (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D6108 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01E3604 (GetActiveTrackPwnd.c)
 *     ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023A784 (-WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023FBE4 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, unsigned int a2, int a3)
{
  int v4; // ebx
  int v6; // r15d
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  int v9; // edx
  __int64 *v10; // r12
  __int64 v11; // r13
  struct tagWND *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // r10
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  NotifyShell *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // r15
  unsigned __int16 *v27; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int16 *v29; // r12
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  int v40; // r8d
  __int64 ActiveTrackPwnd; // rax
  int v42; // ebx
  _DWORD *v43; // rax
  __int128 v44; // [rsp+48h] [rbp-39h]
  __int128 v45; // [rsp+58h] [rbp-29h] BYREF
  __int64 v46; // [rsp+68h] [rbp-19h] BYREF
  __int64 v47; // [rsp+70h] [rbp-11h]
  __int64 v48; // [rsp+78h] [rbp-9h]
  __int64 v49; // [rsp+80h] [rbp-1h] BYREF
  struct tagWND *v50; // [rsp+88h] [rbp+7h]
  __int64 v51; // [rsp+90h] [rbp+Fh]
  _QWORD v52[4]; // [rsp+98h] [rbp+17h] BYREF

  v46 = 0LL;
  v4 = a3;
  v47 = 0LL;
  v48 = 0LL;
  v6 = 0;
  memset(v52, 0, 24);
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 448LL);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v49 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v49;
  v50 = a1;
  HMLockObject(a1);
  if ( v4 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
  {
    if ( (unsigned int)IsIndependentInputWindow(a1) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
      if ( CompositionInputWindowUIOwner )
      {
        a1 = CompositionInputWindowUIOwner;
        ThreadLockExchangeAlways(CompositionInputWindowUIOwner, &v49);
      }
    }
  }
  v9 = *(_DWORD *)(v7 + 48);
  v10 = (__int64 *)(v7 + 184);
  v11 = *(_QWORD *)(v7 + 184);
  if ( (v9 & 0x5C0) != 0 && v11 )
  {
    v17 = *(_QWORD *)(v11 + 16);
    if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(v17 + 424) )
    {
      v6 = 1024;
    }
    else if ( (v9 & 0x500) != 0 )
    {
      PostEventMessageEx((struct tagTHREADINFO *)v17, v9, *(int *)(v7 + 192), 1024LL, 0LL);
      *(_DWORD *)(v7 + 48) &= 0xFFFFFAFF;
    }
    if ( a2 == 1 || v4 != 512 )
      v6 |= 0x100u;
    if ( (struct tagWND *)v11 != a1 || (a2 == 1) != (*(_DWORD *)(v7 + 192) == 1) )
      v6 |= 0xC0u;
    PushW32ThreadLock(v7, v52, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v18 = *v10;
    v19 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v46 = *(_QWORD *)(v19 + 408);
    *(_QWORD *)(v19 + 408) = &v46;
    v47 = v18;
    HMLockObject(v18);
    xxxCancelMouseMoveTracking(*(_DWORD *)(v7 + 48), *v10, *(_DWORD *)(v7 + 192), v6);
    ThreadUnlock1(v21, v20, v22);
    v4 = a3;
    *(_DWORD *)(v7 + 48) &= ~v6;
  }
  else
  {
    PushW32ThreadLock(v7, v52, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
  }
  if ( a2 != 1 && v4 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned int)xxxHotTrack(a1, a2, 1LL) )
      *(_DWORD *)(v7 + 48) |= 0x400u;
    v24 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v7 + 112));
    v25 = v24;
    if ( v24 )
    {
      v26 = *v24;
      if ( *v24 )
      {
        v27 = IsTooltipHittest(a1, (unsigned __int16)a2);
        CurrentThread = KeGetCurrentThread();
        v29 = v27;
        if ( v27 )
        {
          v34 = W32GetThreadWin32Thread(CurrentThread);
          v46 = *(_QWORD *)(v34 + 408);
          *(_QWORD *)(v34 + 408) = &v46;
          v47 = v26;
          HMLockObject(v26);
          v35 = *v25;
          v25[6] = v29;
          if ( (*(_BYTE *)(*(_QWORD *)(v35 + 40) + 31LL) & 0x10) != 0 )
          {
            xxxSetWindowPos((struct tagWND *)v35, 0, 0, 1175);
            v36 = xxxShowTooltip((struct tagTOOLTIPWND *)v25);
          }
          else
          {
            SetTooltipTimer((struct tagTOOLTIPWND *)v25, 1u, *((_DWORD *)v25 + 2));
            v36 = 1;
          }
          if ( v36 )
            *(_DWORD *)(v7 + 48) |= 0x300u;
        }
        else
        {
          v30 = W32GetThreadWin32Thread(CurrentThread);
          v46 = *(_QWORD *)(v30 + 408);
          *(_QWORD *)(v30 + 408) = &v46;
          v47 = v26;
          HMLockObject(v26);
          xxxResetTooltip(v25);
        }
        ThreadUnlock1(v32, v31, v33);
        v10 = (__int64 *)(v7 + 184);
      }
    }
  }
  if ( (unsigned int)IsShellWndManagementBehaviorEnabled(v7, 64LL) )
  {
    if ( (struct tagWND *)v11 == a1 )
    {
      if ( *(_DWORD *)(v7 + 192) == a2 )
        goto LABEL_8;
      v23 = a1;
    }
    else
    {
      v23 = (NotifyShell *)*v10;
      if ( !*v10 )
      {
LABEL_25:
        if ( a2 - 10 <= 1 && !(unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 8LL) )
          NotifyShell::WindowBorderEnter(a1, (struct tagWND *)a2, v40);
        goto LABEL_8;
      }
    }
    NotifyShell::WindowBorderExitIfEntered(v23, v12);
    goto LABEL_25;
  }
LABEL_8:
  if ( (struct tagWND *)v11 != a1 )
  {
    *(_QWORD *)&v44 = v10;
    *((_QWORD *)&v44 + 1) = a1;
    v45 = v44;
    HMAssignmentLock(&v45);
    if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(a1);
        v42 = ActiveTrackPwnd;
        if ( ActiveTrackPwnd )
        {
          v43 = (_DWORD *)UPDWORDPointer(8194LL);
          SetSystemTimer(v42, 65527, *v43, (unsigned int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v7 + 192) = a2;
  PopAndFreeW32ThreadLock(v52);
  return ThreadUnlock1(v14, v13, v15);
}
