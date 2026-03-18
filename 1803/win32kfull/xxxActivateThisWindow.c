/*
 * XREFs of xxxActivateThisWindow @ 0x1C005BE64
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxSetFocus @ 0x1C005E8B0 (xxxSetFocus.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     xxxActiveWindowTracking @ 0x1C01AC4AC (xxxActiveWindowTracking.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01D54B0 (xxxMNEndMenuStateInternal.c)
 *     xxxMNCloseHierarchy @ 0x1C01E61D0 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C000EB34 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     IsVisible @ 0x1C002FD68 (IsVisible.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxInternalEnumWindow @ 0x1C005A814 (xxxInternalEnumWindow.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C005AAA4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     xxxUpdateTray @ 0x1C005AAD0 (xxxUpdateTray.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C005AC88 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C005AD04 (xxxMakeWindowForegroundWithState.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxSendNCActivateMessage @ 0x1C005E010 (xxxSendNCActivateMessage.c)
 *     xxxSendFocusMessages @ 0x1C005EBC0 (xxxSendFocusMessages.c)
 *     SetForegroundPriority @ 0x1C005FD30 (SetForegroundPriority.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006FE5C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     GetNonChildAncestor @ 0x1C0070A34 (GetNonChildAncestor.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z @ 0x1C01F9ED4 (-SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxActivateThisWindow(struct tagWND *a1, int a2, char a3, int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // r13d
  unsigned __int64 v8; // r10
  __int64 v9; // rdx
  struct tagWND *v10; // r15
  __int64 v11; // r8
  __int64 v12; // rcx
  __int128 *v13; // rcx
  __int64 v14; // rdx
  ULONG_PTR v15; // rbx
  struct tagWND *v16; // r8
  __int64 v17; // r15
  __int64 i; // r9
  int v19; // ebx
  int v20; // ecx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct tagWND *j; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  ULONG_PTR v32; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rbx
  struct _KTHREAD *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rcx
  __int128 v53; // [rsp+40h] [rbp-C0h] BYREF
  int v54; // [rsp+50h] [rbp-B0h]
  __int64 v55; // [rsp+58h] [rbp-A8h]
  __int64 v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h]
  __int128 v58; // [rsp+70h] [rbp-90h] BYREF
  __int64 v59; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v62; // [rsp+A0h] [rbp-60h]
  __int128 v63; // [rsp+B0h] [rbp-50h]
  __int128 v64; // [rsp+C0h] [rbp-40h]
  _QWORD v65[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v66; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v67; // [rsp+100h] [rbp+0h] BYREF
  __int128 v68; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v69[3]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v70[24]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v71[10]; // [rsp+150h] [rbp+50h] BYREF
  BOOL v73; // [rsp+1C0h] [rbp+C0h]

  v4 = 0;
  v5 = a3 & 1;
  v54 = a3 & 2;
  v73 = a4 > 0 && ((unsigned int)CoreWindowProp::IsHost(a1) || (unsigned int)CoreWindowProp::IsComponent(a1));
  if ( !a1 )
    return 0LL;
  v55 = *(_QWORD *)a1;
  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0LL;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v8 + gSharedInfo[1] + 25LL) & 1) != 0 )
    return 0LL;
  v9 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != v9 )
    return 0LL;
  v10 = *(struct tagWND **)(v9 + 120);
  if ( a1 == v10 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x10) != 0 )
  {
    *(_DWORD *)(v9 + 388) &= ~0x8000u;
    if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage((ULONG_PTR)a1) )
      xxxSendNotifyMessage(-1LL, 784LL, *(_QWORD *)a1, 0LL, 1);
    goto LABEL_63;
  }
  v56 = v5;
  v57 = 0LL;
  if ( v10 )
    v57 = *(_QWORD *)v10;
  else
    v57 = 0LL;
  if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5, v8, (__int64)&v56, 5) )
  {
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x8000u;
  v11 = *(_QWORD *)(gptiCurrent + 424LL);
  v12 = *(_QWORD *)(v11 + 120);
  if ( v12 && *(char *)(*(_QWORD *)(v12 + 40) + 19LL) < 0 )
  {
    v53 = (unsigned __int64)(v11 + 120);
    v13 = &v66;
    v66 = v53;
  }
  else
  {
    *((_QWORD *)&v63 + 1) = *(_QWORD *)(v11 + 120);
    *(_QWORD *)&v63 = v11 + 128;
    v13 = &v67;
    v67 = v63;
  }
  HMAssignmentLock(v13);
  v14 = *(_QWORD *)(gptiCurrent + 424LL);
  v15 = *(_QWORD *)(v14 + 120);
  if ( v15 )
  {
    if ( v14 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 424LL);
    v61 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v61;
    v62 = v15;
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    *(_QWORD *)&v58 = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 0x20) << 16;
    if ( !xxxSendNCActivateMessage((struct tagWND *)v15) )
    {
      ThreadUnlock1(v39, v38, v40);
      return 0LL;
    }
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v55, v65, ClearWFBeingActivated);
    xxxSendMessage(v15);
    SetOrClrWF(0LL, a1, 528LL, 1LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41);
    v43 = v65[0];
    *(_QWORD *)(ThreadWin32Thread + 16) = v65[0];
    ThreadUnlock1(v43, v44, v45);
    v14 = *(_QWORD *)(gptiCurrent + 424LL);
  }
  v16 = *(struct tagWND **)(v14 + 120);
  if ( *(struct tagWND **)(v14 + 128) == v16
    && v10 == v16
    && (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) == 0
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == v14 )
  {
    if ( !v16 )
    {
      *(_DWORD *)(v14 + 388) &= ~0x800u;
      v14 = *(_QWORD *)(gptiCurrent + 424LL);
    }
    *((_QWORD *)&v64 + 1) = a1;
    *(_QWORD *)&v64 = v14 + 120;
    v58 = v64;
    HMAssignmentLock(&v58);
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v55, v65, ClearWFBeingActivated);
    xxxWindowEvent(3u, (__int64)a1, 0, 0, 1);
    RemoveEventMessage(*(struct tagQ **)(gptiCurrent + 424LL), 6, 5);
    xxxMakeWindowForegroundWithState(0LL, 0);
    v17 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
    v69[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v69;
    v69[1] = v17;
    if ( v17 )
      _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
    if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage((ULONG_PTR)a1) )
      xxxSendNotifyMessage(-1LL, 784LL, *(_QWORD *)a1, 0LL, 1);
    if ( (a3 & 8) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
    {
      for ( i = *(_QWORD *)(GetDesktopWindow((__int64)a1) + 88);
            i && (*(_BYTE *)(*(_QWORD *)(i + 40) + 31LL) & 0x10) == 0;
            i = *(_QWORD *)(i + 64) )
      {
        ;
      }
      if ( (a1 != (struct tagWND *)i || v17 && !(unsigned int)IsVisible(v17))
        && ((a3 & 4) == 0 || gpqForeground == *(_QWORD *)(gptiCurrent + 424LL)) )
      {
        v19 = 19;
        if ( a1 != (struct tagWND *)i )
          v19 = 3;
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v19);
        if ( (v19 & 0x10) == 0 )
          TraceLoggingProcessUsageDataAggregationHelper(a1);
      }
    }
    v20 = *(_DWORD *)(gptiCurrent + 480LL);
    v21 = 0;
    if ( (v20 & 0x200) != 0 )
      goto LABEL_41;
    if ( v17 )
    {
      if ( *(_QWORD *)(v17 + 16) == *((_QWORD *)a1 + 2) )
      {
LABEL_41:
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
          SetOrClrWF(1LL, a1, 257LL, 1LL);
        if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) == 0 )
        {
          for ( j = a1; *((_QWORD *)j + 12); j = (struct tagWND *)*((_QWORD *)j + 12) )
            ;
          v68 = *(_OWORD *)LockPointer(v71, (__int64)j + 184, (__int64)a1);
          HMAssignmentLock(&v68);
        }
        xxxSendNCActivateMessage(a1);
        if ( v73 )
          CoreWindowProp::SetFocusDirection(a1, (unsigned int)a4);
        xxxSendMessage((ULONG_PTR)a1);
        if ( v73 )
          CoreWindowProp::SetFocusDirection(a1, 0LL);
        xxxUpdateTray(a1);
        ThreadUnlock1(v28, v27, v29);
        SetOrClrWF(0LL, a1, 257LL, 1LL);
        v32 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
        v61 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v61;
        v62 = v32;
        if ( v32 )
          _InterlockedAdd((volatile signed __int32 *)(v32 + 8), 1u);
        if ( v54 )
        {
          v32 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( (*(_DWORD *)(v32 + 388) & 0x800) == 0 )
          {
            NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v32 + 112));
            if ( v34 != NonChildAncestor )
            {
              if ( v34 && (*(_BYTE *)(*(_QWORD *)(v34 + 40) + 31LL) & 0x20) != 0 )
                v34 = 0LL;
              xxxSendFocusMessages(gptiCurrent, v34, (unsigned int)a4);
            }
          }
        }
        ThreadUnlock1(v32, v30, v31);
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) |= 0x40u;
        if ( gppiScreenSaver )
        {
          if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) != gppiScreenSaver )
          {
            CInputGlobals::UpdateLastInputTime(
              gpInputGlobals,
              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
              7LL);
            *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
            v52 = *(_QWORD *)(gppiScreenSaver + 328LL);
            if ( v52 )
              SetForegroundPriority(v52, 1LL);
          }
        }
        else if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput && !gbBlockSendInputResets )
        {
          CInputGlobals::UpdateLastInputTime(
            gpInputGlobals,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            7LL);
        }
        if ( v21 )
          *(_DWORD *)(gptiCurrent + 480LL) &= ~0x200u;
        SetOrClrWF(0LL, a1, 528LL, 1LL);
        v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35);
        *(_QWORD *)(v36 + 16) = v65[0];
LABEL_63:
        LOBYTE(v4) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) == (_QWORD)a1;
        return v4;
      }
      v46 = *(_QWORD *)(v17 + 16);
      *(_DWORD *)(v46 + 480) |= 0x200u;
      v47 = (struct _KTHREAD *)*gptiCurrent;
      *(_QWORD *)&v53 = v46;
      HIDWORD(v53) &= 0xFFFFFFFC;
      DWORD2(v53) = (unsigned int)PsGetThreadId(v47);
      LockW32Thread(v46, v70);
      v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 24) + 8LL) + 24LL) + 88LL);
      v59 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v59;
      v60 = v48;
      if ( v48 )
        _InterlockedIncrement((volatile signed __int32 *)(v48 + 8));
      xxxInternalEnumWindow(
        *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 24) + 8LL) + 24LL) + 88LL),
        xxxActivateApp,
        (__int64)&v53,
        2);
      ThreadUnlock1(v50, v49, v51);
      *(_DWORD *)(v46 + 480) &= ~0x200u;
      PopAndFreeW32ThreadLock(v70);
      v20 = *(_DWORD *)(gptiCurrent + 480LL);
    }
    *(_DWORD *)(gptiCurrent + 480LL) = v20 | 0x200;
    v21 = 1;
    *(_QWORD *)&v53 = *((_QWORD *)a1 + 2);
    DWORD2(v53) = a2;
    HIDWORD(v53) = HIDWORD(v53) & 0xFFFFFFFC | 1;
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL) + 88LL);
    v59 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v59;
    v60 = v22;
    if ( v22 )
      _InterlockedAdd((volatile signed __int32 *)(v22 + 8), 1u);
    xxxInternalEnumWindow(
      *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL) + 88LL),
      xxxActivateApp,
      (__int64)&v53,
      2);
    ThreadUnlock1(v24, v23, v25);
    goto LABEL_41;
  }
  return 0LL;
}
