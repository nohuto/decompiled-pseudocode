/*
 * XREFs of ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004D50 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 *     xxxResetTooltip @ 0x1C00DE0BC (xxxResetTooltip.c)
 *     NtUserSetParent @ 0x1C011C5D0 (NtUserSetParent.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0151258 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01E205C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01E21C4 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C0006400 (TraceChildWindowDpiTelemetry.c)
 *     SelectNewFrameRgn @ 0x1C000B700 (SelectNewFrameRgn.c)
 *     ResetWindowTransform @ 0x1C000B73C (ResetWindowTransform.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C000C9AC (SetWindowSubtreeCoreWindowStatus.c)
 *     _ScreenToClient @ 0x1C000CE40 (_ScreenToClient.c)
 *     IsImmersiveAppIORestricted @ 0x1C000CE7C (IsImmersiveAppIORestricted.c)
 *     DecomposeWindowIfNeeded @ 0x1C000D61C (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     UnredirectDCEs @ 0x1C000E880 (UnredirectDCEs.c)
 *     IsWindowShellCloaked @ 0x1C000ED34 (IsWindowShellCloaked.c)
 *     CalcForegroundInsertAfter @ 0x1C000FD34 (CalcForegroundInsertAfter.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0010724 (ChangeRedirectionParentInDCEs.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     UnlinkWindow @ 0x1C001B6E4 (UnlinkWindow.c)
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C003AB88 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C004108C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ValidateNewParent @ 0x1C00410B4 (ValidateNewParent.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     RedirectDCEs @ 0x1C0042500 (RedirectDCEs.c)
 *     LinkWindow @ 0x1C0043240 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006F6AC (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00732C0 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CalcWindowFullScreen @ 0x1C0079A8C (CalcWindowFullScreen.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     zzzAttachThreadInput @ 0x1C00D7444 (zzzAttachThreadInput.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01052C0 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0110FE0 (IsChildWindowDpiIsolationEnabled.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01D3000 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01D3384 (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     xxxTurnOffCompositing @ 0x1C01D4704 (xxxTurnOffCompositing.c)
 *     HasMessageRootWindow @ 0x1C01E2134 (HasMessageRootWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagWND *__fastcall xxxSetParentWorker(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3, int a4)
{
  __int64 v6; // r8
  struct tagWND *DesktopWindow; // r15
  struct tagWND *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 ThreadWin32Thread; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r14d
  __int64 StyleWindow; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  _DWORD *v18; // r9
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  int v29; // r9d
  struct tagFREELIST *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // r9
  int v42; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v43[2]; // [rsp+50h] [rbp-71h] BYREF
  struct tagFREELIST *v44; // [rsp+58h] [rbp-69h]
  int v45; // [rsp+60h] [rbp-61h]
  _DWORD v46[6]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v47; // [rsp+80h] [rbp-41h]
  _BYTE v48[16]; // [rsp+88h] [rbp-39h] BYREF
  __int128 v49; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v50[3]; // [rsp+A8h] [rbp-19h] BYREF
  _QWORD v51[3]; // [rsp+C0h] [rbp-1h] BYREF
  _BYTE v52[64]; // [rsp+D8h] [rbp+17h] BYREF
  int v53; // [rsp+128h] [rbp+67h]

  v44 = 0LL;
  v42 = 0;
  v53 = 5;
  DesktopWindow = (struct tagWND *)GetDesktopWindow(a1);
  v8 = 0LL;
  v9 = *((_QWORD *)a1 + 3);
  if ( v9 )
    v8 = *(struct tagWND **)(v9 + 104);
  if ( a1 == DesktopWindow || a1 == v8 )
    goto LABEL_101;
  v10 = (__int64)DesktopWindow;
  if ( v6 )
    v10 = v6;
  if ( a3 && (*((_QWORD *)a3 + 10) != v10 || a3 == a1) )
    return 0LL;
  if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 424LL))
    && (unsigned int)HasMessageRootWindow(a1)
    && !(unsigned int)HasMessageRootWindow(v10) )
  {
LABEL_101:
    v40 = 5LL;
LABEL_102:
    UserSetLastError(v40);
    return 0LL;
  }
  if ( (struct tagWND *)v10 != DesktopWindow
    && (struct tagWND *)v10 != v8
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL)
    && (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(*(_QWORD *)(v10 + 40) + 288LL)) & 0xF) != 0
    && !(unsigned int)IsChildWindowDpiIsolationEnabled(a1, v10) )
  {
    TraceChildWindowDpiTelemetry((__int64)a1, v10, 1);
    v40 = 5023LL;
    goto LABEL_102;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v50[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v50;
  v50[1] = v10;
  if ( v10 )
    _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
  if ( !(unsigned int)ValidateNewParent(a1, v10)
    || (v12 = xxxShowWindowEx((ULONG_PTR)a1),
        v13 = *((_QWORD *)a1 + 5),
        v14 = v12,
        v45 = v12,
        (*(_BYTE *)(v13 + 31) & 0x10) != 0) )
  {
LABEL_109:
    ThreadUnlock1();
    return 0LL;
  }
  if ( (*(_DWORD *)(v13 + 232) & 0x20) != 0 )
    DecomposeWindowIfNeeded(a1);
  if ( !(unsigned int)ValidateNewParent(a1, v10) )
  {
    if ( v14 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      xxxShowWindowEx((ULONG_PTR)a1);
    goto LABEL_109;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v48);
  StyleWindow = GetStyleWindow(a1, 2848LL);
  v16 = *((_QWORD *)a1 + 10);
  v47 = StyleWindow;
  v17 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v51[0] = *(_QWORD *)(v17 + 416);
  *(_QWORD *)(v17 + 416) = v51;
  v51[1] = v16;
  if ( v16 )
    _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
  v18 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 26LL) & 0x40) != 0 )
    v19 = v18[24];
  else
    v19 = v18[22];
  v43[0] = v19;
  v43[1] = v18[23];
  ScreenToClient(v16, v43);
  if ( *(_DWORD *)(v20 + 236) != 1 && ((struct tagWND *)v10 == DesktopWindow || (struct tagWND *)v10 == v8) )
    SetOrClrWF(1LL, a1, 2056LL, 1LL);
  if ( (struct tagWND *)v10 == DesktopWindow )
  {
    if ( (struct tagWND *)v16 != DesktopWindow )
    {
      if ( (unsigned int)IsWindowShellCloaked((struct tagWND *)v16) )
      {
        v46[0] = 1;
        zzzSetWindowCompositionCloak(a1, v46, 2LL);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 820) & 0x30) == 0x10
        && (GetWindowCloakState(a1) & 1) != 0 )
      {
        v46[0] = 0;
        zzzSetWindowCompositionCloak(a1, v46, 1LL);
      }
      v35 = *((_QWORD *)a1 + 5);
      v36 = *(_DWORD *)(v35 + 232);
      if ( (v36 & 0x8000) != 0 )
      {
        *(_DWORD *)(v35 + 232) = v36 & 0xFFFF7FFF;
        PostShellHookMessages(54LL, *(_QWORD *)a1);
      }
    }
  }
  else if ( (struct tagWND *)v16 == DesktopWindow )
  {
    if ( (unsigned int)IsWindowShellCloaked(a1) )
    {
      v46[0] = 0;
      zzzSetWindowCompositionCloak(a1, v46, 2LL);
    }
    SelectNewFrameRgn((__int64)a1, 0LL);
    ResetWindowTransform((__int64)a1);
  }
  UnlinkWindow(a1, v16);
  v49 = *(_OWORD *)LockPointer(v52, (char *)a1 + 80, v10);
  HMAssignmentLock(&v49);
  if ( v10 )
    v21 = (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(v10 + 40) + 232LL), 25);
  else
    v21 = 0LL;
  SetWindowSubtreeCoreWindowStatus(a1, v21);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    v22 = *((_QWORD *)a1 + 12);
    if ( v22 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v22 + 40) + 24LL) & 8) != 0 )
        SetOrClrWF(1LL, a1, 2056LL, 1LL);
    }
  }
  if ( v10 == GetDesktopWindow(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) == 0 )
  {
    CalcWindowFullScreen(a1);
    CalcForegroundInsertAfter(a1);
  }
  LinkWindow(a1);
  if ( a2 == (struct tagWND *)-3LL && !(unsigned int)IsWindowShellCloaked(a1) )
  {
    v46[0] = 1;
    zzzSetWindowCompositionCloak(a1, v46, 2LL);
  }
  v23 = GetStyleWindow(a1, 2848LL);
  if ( v47 )
  {
    if ( v23 )
    {
      if ( v47 != v23 )
        ChangeRedirectionParentInDCEs(a1);
    }
    else
    {
      UnredirectDCEs(a1);
    }
  }
  else if ( v23 )
  {
    RedirectDCEs(a1);
  }
  if ( v10 == GetDesktopWindow(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4) == 0 )
  {
    SetOrClrWF(1LL, a1, 3844LL, 1LL);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    v24 = (_QWORD *)((char *)a1 + 80);
    if ( *((_QWORD *)a1 + 10) != GetDesktopWindow(a1) )
    {
      v25 = *((_QWORD *)a1 + 2);
      v26 = *(_QWORD *)(v16 + 16);
      if ( v25 != v26 )
        zzzAttachThreadInput(v25, v26, 0LL);
    }
    if ( v10 != GetDesktopWindow(a1) )
    {
      v27 = *((_QWORD *)a1 + 2);
      v28 = *(_QWORD *)(v10 + 16);
      if ( v27 == v28 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 235LL) & 1) != 0
          && (unsigned int)IsTopLevelWindow(v10)
          && (unsigned int)IsDesktopApp(*(_QWORD *)(v41 + 424)) )
        {
          *(_DWORD *)(v10 + 308) |= 8u;
        }
      }
      else
      {
        zzzAttachThreadInput(v27, v28, a4 != 0 ? 32769 : 1);
      }
    }
  }
  else
  {
    v24 = (_QWORD *)((char *)a1 + 80);
  }
  if ( (struct tagWND *)v10 == v8 || (struct tagWND *)v16 == v8 )
  {
    v29 = 21;
    v53 = 21;
  }
  else
  {
    v29 = 5;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 232LL) & 0x10000000) != 0
    || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x10000000) != 0 )
  {
    v37 = *((_QWORD *)a1 + 5);
    v38 = v37;
    v39 = *(_DWORD *)(v37 + 288);
    if ( (v39 & 0xF) == 2 && (v39 & 0xF0) == 0x10 )
    {
      *(_DWORD *)(v37 + 232) &= ~0x10000000u;
      v38 = *((_QWORD *)a1 + 5);
    }
    *(_DWORD *)(v38 + 232) &= ~0x8000000u;
    v53 = v29 | 0x20;
  }
  IsTopLevelWindow(a1);
  SetDeferredDpiStateForWindowAndChildren(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v48);
  zzzEndDeferWinEventNotify();
  if ( GetStyleWindow(*v24, 2818LL) )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(0x800Fu, 1u);
  if ( !v10 || (struct tagWND *)v10 == DesktopWindow || (struct tagWND *)v16 == DesktopWindow )
  {
    v30 = 0LL;
    goto LABEL_57;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v16 + 40) + 256LL) == *(_QWORD *)(*(_QWORD *)(v10 + 40) + 256LL) )
  {
    v30 = v44;
LABEL_57:
    xxxSetWindowPos(a1, 0, 0, v53);
    goto LABEL_58;
  }
  v30 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(a1, v16, 0LL, &v42);
  if ( !v42 )
    goto LABEL_57;
LABEL_58:
  v31 = *v24;
  if ( !*v24
    || (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(*(_QWORD *)(v31 + 40) + 288LL)) & 0xF) == 0
    || (struct tagWND *)v31 == DesktopWindow
    || (struct tagWND *)v31 == v8
    || (unsigned int)IsChildWindowDpiIsolationEnabled(a1, v31) )
  {
    xxxInheritWindowMonitor(a1);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext(a1, *(_DWORD *)(*(_QWORD *)(*v24 + 40LL) + 288LL));
  }
  if ( v30 )
  {
    xxxUpdateWindowPositionsForDpiBoundaryChange(v30);
    FreeListFree(v30);
  }
  if ( v45 )
    xxxShowWindowEx((ULONG_PTR)a1);
  v32 = ThreadUnlock1();
  ThreadUnlock1();
  return (struct tagWND *)v32;
}
