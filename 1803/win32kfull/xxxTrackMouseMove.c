/*
 * XREFs of xxxTrackMouseMove @ 0x1C005CF1C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00052E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D3C (IsShellWndManagementBehaviorEnabled.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxCancelMouseMoveTracking @ 0x1C005E57C (xxxCancelMouseMoveTracking.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C005FFF8 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     _SetSystemTimer @ 0x1C00647F0 (_SetSystemTimer.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00648E8 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxResetTooltip @ 0x1C0064938 (xxxResetTooltip.c)
 *     ThreadLockExchangeAlways @ 0x1C00DACD0 (ThreadLockExchangeAlways.c)
 *     IsMessageOnlyWindow @ 0x1C00F1F50 (IsMessageOnlyWindow.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0104A3C (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxHotTrack @ 0x1C010F2FC (xxxHotTrack.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C010F848 (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01A5A24 (xxxNotifyShellWindowBorderEnter.c)
 *     GetActiveTrackPwnd @ 0x1C01ABB44 (GetActiveTrackPwnd.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C01FEF44 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, __int64 a2, int a3)
{
  unsigned int v4; // r15d
  int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  unsigned int v10; // edx
  struct tagWND **v11; // r12
  __int64 v12; // r13
  __int64 v13; // r10
  __int64 v14; // r11
  struct tagWND *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  __int64 v23; // r15
  unsigned __int16 *v24; // rax
  __int64 v25; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int16 *v27; // r12
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  struct tagWND *v38; // rcx
  __int64 ActiveTrackPwnd; // rax
  int v40; // ebx
  _DWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int128 v46; // [rsp+48h] [rbp-39h]
  __int128 v47; // [rsp+58h] [rbp-29h] BYREF
  __int64 v48; // [rsp+68h] [rbp-19h] BYREF
  struct tagWND *v49; // [rsp+70h] [rbp-11h]
  _QWORD v50[3]; // [rsp+80h] [rbp-1h] BYREF
  _BYTE v51[32]; // [rsp+98h] [rbp+17h] BYREF

  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = *(_QWORD *)(gptiCurrent + 448LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v50[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v50;
  v50[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
  if ( v5 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
  {
    if ( (unsigned int)IsCompositionInputWindow(a1) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 235LL) & 2) == 0 )
      {
        if ( (unsigned int)IsMessageOnlyWindow(a1) )
        {
          CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
          if ( CompositionInputWindowUIOwner )
          {
            a1 = CompositionInputWindowUIOwner;
            ThreadLockExchangeAlways(CompositionInputWindowUIOwner, v50);
          }
        }
      }
    }
  }
  v10 = *(_DWORD *)(v7 + 48);
  v11 = (struct tagWND **)(v7 + 184);
  v12 = *(_QWORD *)(v7 + 184);
  if ( (v10 & 0x5C0) != 0 && v12 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    v14 = *(_QWORD *)(v13 + 424);
    if ( *(_QWORD *)(gptiCurrent + 424LL) == v14 )
    {
      v4 = 1024;
    }
    else if ( (v10 & 0x500) != 0 )
    {
      PostEventMessageEx((struct tagTHREADINFO *)v13, v14, 0xBu, v12, v10, *(int *)(v7 + 192), 1024LL, 0LL);
      *(_DWORD *)(v7 + 48) &= 0xFFFFFAFF;
    }
    if ( v6 == 1 || v5 != 512 )
      v4 |= 0x100u;
    if ( (struct tagWND *)v12 != a1 || (v6 == 1) != (*(_DWORD *)(v7 + 192) == 1) )
      v4 |= 0xC0u;
    PushW32ThreadLock(v7, v51, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v15 = *v11;
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
    v48 = *(_QWORD *)(v17 + 408);
    *(_QWORD *)(v17 + 408) = &v48;
    v49 = v15;
    _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    xxxCancelMouseMoveTracking(*(unsigned int *)(v7 + 48), *v11, *(unsigned int *)(v7 + 192), v4);
    ThreadUnlock1(v19, v18, v20);
    v5 = a3;
    *(_DWORD *)(v7 + 48) &= ~v4;
  }
  else
  {
    PushW32ThreadLock(v7, v51, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
  }
  if ( v6 != 1 && v5 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned int)xxxHotTrack(a1, v6, 1LL) )
      *(_DWORD *)(v7 + 48) |= 0x400u;
    v21 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v7 + 112));
    v22 = v21;
    if ( v21 )
    {
      v23 = *v21;
      if ( *v21 )
      {
        v24 = IsTooltipHittest(a1, (unsigned __int16)v6);
        CurrentThread = KeGetCurrentThread();
        v27 = v24;
        if ( v24 )
        {
          v28 = W32GetThreadWin32Thread((__int64)CurrentThread, v25);
          v48 = *(_QWORD *)(v28 + 408);
          *(_QWORD *)(v28 + 408) = &v48;
          v49 = (struct tagWND *)v23;
          _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
          v29 = *v22;
          v22[6] = v27;
          if ( (*(_BYTE *)(*(_QWORD *)(v29 + 40) + 31LL) & 0x10) != 0 )
          {
            xxxSetWindowPos((struct tagWND *)v29, 0LL, 0LL, 0LL, 0, 0, 1175);
            v30 = xxxShowTooltip((struct tagTOOLTIPWND *)v22);
          }
          else
          {
            SetTooltipTimer((struct tagTOOLTIPWND *)v22, 1u, *((_DWORD *)v22 + 2));
            v30 = 1;
          }
          if ( v30 )
            *(_DWORD *)(v7 + 48) |= 0x300u;
        }
        else
        {
          v34 = W32GetThreadWin32Thread((__int64)CurrentThread, v25);
          v48 = *(_QWORD *)(v34 + 408);
          *(_QWORD *)(v34 + 408) = &v48;
          v49 = (struct tagWND *)v23;
          _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
          xxxResetTooltip(v22);
        }
        ThreadUnlock1(v32, v31, v33);
        v11 = (struct tagWND **)(v7 + 184);
      }
    }
  }
  if ( (unsigned int)IsShellWndManagementBehaviorEnabled(v7, 64) )
  {
    if ( (struct tagWND *)v12 == a1 )
    {
      if ( *(_DWORD *)(v7 + 192) == v6 )
        goto LABEL_47;
      v38 = a1;
    }
    else
    {
      v38 = *v11;
      if ( !*v11 )
      {
LABEL_44:
        if ( v6 - 10 <= 1 && !(unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 8) )
          xxxNotifyShellWindowBorderEnter(a1);
        goto LABEL_47;
      }
    }
    xxxNotifyShellWindowBorderExitIfEntered(v38, v35, v36, v37);
    goto LABEL_44;
  }
LABEL_47:
  if ( (struct tagWND *)v12 != a1 )
  {
    *(_QWORD *)&v46 = v11;
    *((_QWORD *)&v46 + 1) = a1;
    v47 = v46;
    HMAssignmentLock(&v47);
    if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(a1, 0LL);
        v40 = ActiveTrackPwnd;
        if ( ActiveTrackPwnd )
        {
          v41 = (_DWORD *)UPDWORDPointer(8194LL);
          SetSystemTimer(v40, 65527, *v41, (unsigned int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v7 + 192) = v6;
  PopAndFreeW32ThreadLock(v51);
  return ThreadUnlock1(v43, v42, v44);
}
