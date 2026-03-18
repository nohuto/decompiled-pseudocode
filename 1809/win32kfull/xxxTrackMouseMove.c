/*
 * XREFs of xxxTrackMouseMove @ 0x1C00AE034
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006A180 (IsShellWndManagementBehaviorEnabled.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072608 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00B0BB8 (xxxCancelMouseMoveTracking.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     _SetSystemTimer @ 0x1C00DC7D4 (_SetSystemTimer.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00DE06C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxResetTooltip @ 0x1C00DE0BC (xxxResetTooltip.c)
 *     ThreadLockExchangeAlways @ 0x1C00DF0E4 (ThreadLockExchangeAlways.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0122E60 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0126510 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxHotTrack @ 0x1C0131988 (xxxHotTrack.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C01320C4 (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C01512FC (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C01573A4 (-WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01C2E20 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01CED34 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, __int64 a2, int a3)
{
  unsigned int v4; // r15d
  int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  int v10; // edx
  NotifyShell **v11; // r12
  __int64 v12; // r13
  __int64 v13; // r10
  NotifyShell *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  volatile signed __int32 *v21; // r15
  unsigned __int16 *v22; // rax
  __int64 v23; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int16 *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  struct tagWND *v32; // rdx
  NotifyShell *v33; // rcx
  int v34; // r8d
  __int64 ActiveTrackPwnd; // rax
  int v36; // ebx
  _DWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD v41[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v42; // [rsp+58h] [rbp-19h] BYREF
  NotifyShell *v43; // [rsp+60h] [rbp-11h]
  _QWORD v44[3]; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v45[32]; // [rsp+88h] [rbp+17h] BYREF

  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = *(_QWORD *)(gptiCurrent + 456LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v44[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v44;
  v44[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
  if ( v5 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
  {
    if ( (unsigned int)IsIndependentInputWindow(a1) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
      if ( CompositionInputWindowUIOwner )
      {
        a1 = CompositionInputWindowUIOwner;
        ThreadLockExchangeAlways(CompositionInputWindowUIOwner, v44);
      }
    }
  }
  v10 = *(_DWORD *)(v7 + 48);
  v11 = (NotifyShell **)(v7 + 184);
  v12 = *(_QWORD *)(v7 + 184);
  if ( (v10 & 0x5C0) != 0 && v12 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    if ( *(_QWORD *)(gptiCurrent + 432LL) == *(_QWORD *)(v13 + 432) )
    {
      v4 = 1024;
    }
    else if ( (v10 & 0x500) != 0 )
    {
      PostEventMessageEx((struct tagTHREADINFO *)v13, v10, *(int *)(v7 + 192), 1024LL, 0LL);
      *(_DWORD *)(v7 + 48) &= 0xFFFFFAFF;
    }
    if ( v6 == 1 || v5 != 512 )
      v4 |= 0x100u;
    if ( (struct tagWND *)v12 != a1 || (v6 == 1) != (*(_DWORD *)(v7 + 192) == 1) )
      v4 |= 0xC0u;
    PushW32ThreadLock(v7, v45, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v14 = *v11;
    v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
    v42 = *(_QWORD *)(v16 + 416);
    *(_QWORD *)(v16 + 416) = &v42;
    v43 = v14;
    _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
    xxxCancelMouseMoveTracking(*(unsigned int *)(v7 + 48), *v11, *(unsigned int *)(v7 + 192), v4);
    ThreadUnlock1(v18, v17);
    v5 = a3;
    *(_DWORD *)(v7 + 48) &= ~v4;
  }
  else
  {
    PushW32ThreadLock(v7, v45, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
  }
  if ( v6 != 1 && v5 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned int)xxxHotTrack(a1, v6, 1LL) )
      *(_DWORD *)(v7 + 48) |= 0x400u;
    v19 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v7 + 112));
    v20 = v19;
    if ( v19 )
    {
      v21 = (volatile signed __int32 *)*v19;
      if ( *v19 )
      {
        v22 = IsTooltipHittest(a1, (unsigned __int16)v6);
        CurrentThread = KeGetCurrentThread();
        v25 = v22;
        if ( v22 )
        {
          v26 = W32GetThreadWin32Thread((__int64)CurrentThread, v23);
          v42 = *(_QWORD *)(v26 + 416);
          *(_QWORD *)(v26 + 416) = &v42;
          v43 = (NotifyShell *)v21;
          _InterlockedIncrement(v21 + 2);
          v27 = *v20;
          v20[6] = v25;
          if ( (*(_BYTE *)(*(_QWORD *)(v27 + 40) + 31LL) & 0x10) != 0 )
          {
            xxxSetWindowPos((struct tagWND *)v27, 0LL, 0LL, 0LL, 0, 0, 1175);
            v28 = xxxShowTooltip((struct tagTOOLTIPWND *)v20);
          }
          else
          {
            SetTooltipTimer((struct tagTOOLTIPWND *)v20, 1u, *((_DWORD *)v20 + 2));
            v28 = 1;
          }
          if ( v28 )
            *(_DWORD *)(v7 + 48) |= 0x300u;
        }
        else
        {
          v31 = W32GetThreadWin32Thread((__int64)CurrentThread, v23);
          v42 = *(_QWORD *)(v31 + 416);
          *(_QWORD *)(v31 + 416) = &v42;
          v43 = (NotifyShell *)v21;
          _InterlockedIncrement(v21 + 2);
          xxxResetTooltip(v20);
        }
        ThreadUnlock1(v30, v29);
        v11 = (NotifyShell **)(v7 + 184);
      }
    }
  }
  if ( (unsigned int)IsShellWndManagementBehaviorEnabled(v7, 64) )
  {
    if ( (struct tagWND *)v12 == a1 )
    {
      if ( *(_DWORD *)(v7 + 192) == v6 )
        goto LABEL_45;
      v33 = a1;
    }
    else
    {
      v33 = *v11;
      if ( !*v11 )
      {
LABEL_42:
        if ( v6 - 10 <= 1 && !(unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 8) )
          NotifyShell::WindowBorderEnter(a1, (struct tagWND *)v6, v34);
        goto LABEL_45;
      }
    }
    NotifyShell::WindowBorderExitIfEntered(v33, v32);
    goto LABEL_42;
  }
LABEL_45:
  if ( (struct tagWND *)v12 != a1 )
  {
    v41[0] = v11;
    v41[1] = a1;
    HMAssignmentLock(v41);
    if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(a1);
        v36 = ActiveTrackPwnd;
        if ( ActiveTrackPwnd )
        {
          v37 = (_DWORD *)UPDWORDPointer(8194LL);
          SetSystemTimer(v36, 65527, *v37, (unsigned int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v7 + 192) = v6;
  PopAndFreeW32ThreadLock((__int64)v45, (__int64)v32);
  return ThreadUnlock1(v39, v38);
}
