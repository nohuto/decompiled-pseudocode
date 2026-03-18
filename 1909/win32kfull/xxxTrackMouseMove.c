/*
 * XREFs of xxxTrackMouseMove @ 0x1C00200FC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000B76C (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0023EEC (IsShellWndManagementBehaviorEnabled.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00E9B58 (xxxCancelMouseMoveTracking.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00E9C8C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     _SetSystemTimer @ 0x1C00EA334 (_SetSystemTimer.c)
 *     xxxResetTooltip @ 0x1C00EA428 (xxxResetTooltip.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00EA580 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ThreadLockExchangeAlways @ 0x1C00F9B60 (ThreadLockExchangeAlways.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C010831C (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     xxxHotTrack @ 0x1C01177B8 (xxxHotTrack.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C0117C7C (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D5F78 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01E3484 (GetActiveTrackPwnd.c)
 *     ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023A164 (-WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023F5C4 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, unsigned int a2, int a3)
{
  int v4; // ebx
  unsigned int v6; // r15d
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  int v9; // edx
  NotifyShell **v10; // r12
  __int64 v11; // r13
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagWND *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // r10
  NotifyShell *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  NotifyShell *v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  NotifyShell *v30; // r15
  unsigned __int16 *v31; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int16 *v33; // r12
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // eax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  int v44; // r8d
  __int64 ActiveTrackPwnd; // rbx
  _DWORD *v46; // rax
  __int128 v47; // [rsp+48h] [rbp-39h]
  __int128 v48; // [rsp+58h] [rbp-29h] BYREF
  __int64 v49; // [rsp+68h] [rbp-19h] BYREF
  NotifyShell *v50; // [rsp+70h] [rbp-11h]
  __int64 v51; // [rsp+78h] [rbp-9h]
  __int64 v52; // [rsp+80h] [rbp-1h] BYREF
  struct tagWND *v53; // [rsp+88h] [rbp+7h]
  __int64 v54; // [rsp+90h] [rbp+Fh]
  _QWORD v55[4]; // [rsp+98h] [rbp+17h] BYREF

  v49 = 0LL;
  v4 = a3;
  v50 = 0LL;
  v51 = 0LL;
  v6 = 0;
  memset(v55, 0, 24);
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 448LL);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v52 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v52;
  v53 = a1;
  HMLockObject(a1);
  if ( v4 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
  {
    if ( (unsigned int)IsIndependentInputWindow(a1) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
      if ( CompositionInputWindowUIOwner )
      {
        a1 = CompositionInputWindowUIOwner;
        ThreadLockExchangeAlways(CompositionInputWindowUIOwner, &v52);
      }
    }
  }
  v9 = *(_DWORD *)(v7 + 48);
  v10 = (NotifyShell **)(v7 + 184);
  v11 = *(_QWORD *)(v7 + 184);
  if ( (v9 & 0x5C0) != 0 && v11 )
  {
    v21 = *(_QWORD *)(v11 + 16);
    if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(v21 + 424) )
    {
      v6 = 1024;
    }
    else if ( (v9 & 0x500) != 0 )
    {
      PostEventMessageEx((struct tagTHREADINFO *)v21, v9, *(int *)(v7 + 192), 1024LL, 0LL);
      *(_DWORD *)(v7 + 48) &= 0xFFFFFAFF;
    }
    if ( a2 == 1 || v4 != 512 )
      v6 |= 0x100u;
    if ( (struct tagWND *)v11 != a1 || (a2 == 1) != (*(_DWORD *)(v7 + 192) == 1) )
      v6 |= 0xC0u;
    PushW32ThreadLock(v7, v55, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v22 = *v10;
    v23 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v49 = *(_QWORD *)(v23 + 408);
    *(_QWORD *)(v23 + 408) = &v49;
    v50 = v22;
    HMLockObject(v22);
    xxxCancelMouseMoveTracking(*(unsigned int *)(v7 + 48), *v10, *(unsigned int *)(v7 + 192), v6);
    ThreadUnlock1(v25, v24, v26);
    v4 = a3;
    *(_DWORD *)(v7 + 48) &= ~v6;
  }
  else
  {
    PushW32ThreadLock(v7, v55, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
  }
  if ( a2 != 1 && v4 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned int)xxxHotTrack(a1, a2, 1LL) )
      *(_DWORD *)(v7 + 48) |= 0x400u;
    v28 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v7 + 112));
    v29 = v28;
    if ( v28 )
    {
      v30 = (NotifyShell *)*v28;
      if ( *v28 )
      {
        v31 = IsTooltipHittest(a1, (unsigned __int16)a2);
        CurrentThread = KeGetCurrentThread();
        v33 = v31;
        if ( v31 )
        {
          v38 = W32GetThreadWin32Thread(CurrentThread);
          v49 = *(_QWORD *)(v38 + 408);
          *(_QWORD *)(v38 + 408) = &v49;
          v50 = v30;
          HMLockObject(v30);
          v39 = *v29;
          v29[6] = v33;
          if ( (*(_BYTE *)(*(_QWORD *)(v39 + 40) + 31LL) & 0x10) != 0 )
          {
            xxxSetWindowPos((struct tagWND *)v39, 0, 0, 1175);
            v40 = xxxShowTooltip((struct tagTOOLTIPWND *)v29);
          }
          else
          {
            SetTooltipTimer((struct tagTOOLTIPWND *)v29, 1u, *((_DWORD *)v29 + 2));
            v40 = 1;
          }
          if ( v40 )
            *(_DWORD *)(v7 + 48) |= 0x300u;
        }
        else
        {
          v34 = W32GetThreadWin32Thread(CurrentThread);
          v49 = *(_QWORD *)(v34 + 408);
          *(_QWORD *)(v34 + 408) = &v49;
          v50 = v30;
          HMLockObject(v30);
          xxxResetTooltip(v29);
        }
        ThreadUnlock1(v36, v35, v37);
        v10 = (NotifyShell **)(v7 + 184);
      }
    }
  }
  if ( (unsigned int)IsShellWndManagementBehaviorEnabled(v7, 64LL, v12, v13) )
  {
    if ( (struct tagWND *)v11 == a1 )
    {
      if ( *(_DWORD *)(v7 + 192) == a2 )
        goto LABEL_8;
      v27 = a1;
    }
    else
    {
      v27 = *v10;
      if ( !*v10 )
      {
LABEL_25:
        if ( a2 - 10 <= 1 && !(unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 8LL, v15, v16) )
          NotifyShell::WindowBorderEnter(a1, (struct tagWND *)a2, v44);
        goto LABEL_8;
      }
    }
    NotifyShell::WindowBorderExitIfEntered(v27, v14);
    goto LABEL_25;
  }
LABEL_8:
  if ( (struct tagWND *)v11 != a1 )
  {
    *(_QWORD *)&v47 = v10;
    *((_QWORD *)&v47 + 1) = a1;
    v48 = v47;
    HMAssignmentLock(&v48);
    if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(a1);
        if ( ActiveTrackPwnd )
        {
          v46 = (_DWORD *)UPDWORDPointer(8194LL);
          SetSystemTimer(ActiveTrackPwnd, 65527, *v46, (unsigned int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v7 + 192) = a2;
  PopAndFreeW32ThreadLock(v55);
  return ThreadUnlock1(v18, v17, v19);
}
