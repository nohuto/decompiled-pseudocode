/*
 * XREFs of ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4
 * Callers:
 *     xxxSetWindowData @ 0x1C00ABB50 (xxxSetWindowData.c)
 *     xxxResetTooltip @ 0x1C00EA428 (xxxResetTooltip.c)
 *     NtUserSetParent @ 0x1C00FCBD0 (NtUserSetParent.c)
 *     xxxSetModernAppWindow @ 0x1C0138F10 (xxxSetModernAppWindow.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F80CC (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F8234 (xxxSetBridgeWindowChild.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C023F8E0 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C000995C (TraceChildWindowDpiTelemetry.c)
 *     ResetWindowTransform @ 0x1C0015020 (ResetWindowTransform.c)
 *     IsWindowShellCloaked @ 0x1C0017094 (IsWindowShellCloaked.c)
 *     PostShellHookMessages @ 0x1C0017B0C (PostShellHookMessages.c)
 *     IsImmersiveAppIORestricted @ 0x1C00183B4 (IsImmersiveAppIORestricted.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0018C6C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C0018DDC (SetWindowSubtreeCoreWindowStatus.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     CalcForegroundInsertAfter @ 0x1C001AD5C (CalcForegroundInsertAfter.c)
 *     _ScreenToClient @ 0x1C001B03C (_ScreenToClient.c)
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     RedirectDCEs @ 0x1C002AB10 (RedirectDCEs.c)
 *     GetStyleWindow @ 0x1C002B990 (GetStyleWindow.c)
 *     UnredirectDCEs @ 0x1C002D49C (UnredirectDCEs.c)
 *     CalcWindowFullScreen @ 0x1C0032BBC (CalcWindowFullScreen.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ValidateNewParent @ 0x1C0061294 (ValidateNewParent.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00614E8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0064CD4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C0068D34 (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 *     GetWindowCloakState @ 0x1C006A29C (GetWindowCloakState.c)
 *     UnlinkWindow @ 0x1C006A598 (UnlinkWindow.c)
 *     LinkWindow @ 0x1C006BF20 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     DecomposeWindowIfNeeded @ 0x1C0089628 (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00CC060 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C00CC5E8 (ChangeRedirectionParentInDCEs.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C00F2158 (IsChildWindowDpiIsolationEnabled.c)
 *     zzzAttachThreadInput @ 0x1C0135A64 (zzzAttachThreadInput.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7AC0 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E7E30 (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     xxxTurnOffCompositing @ 0x1C01E9B1C (xxxTurnOffCompositing.c)
 *     HasMessageRootWindow @ 0x1C01F81A4 (HasMessageRootWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagWND *__fastcall xxxSetParentWorker(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3, int a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  struct tagWND *DesktopWindow; // r15
  struct tagWND *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 ThreadWin32Thread; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // esi
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
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // r9
  int v43; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v44[2]; // [rsp+50h] [rbp-71h] BYREF
  struct tagFREELIST *v45; // [rsp+58h] [rbp-69h]
  int v46; // [rsp+60h] [rbp-61h]
  _QWORD v47[3]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v48; // [rsp+80h] [rbp-41h]
  _BYTE v49[8]; // [rsp+88h] [rbp-39h] BYREF
  __int64 v50; // [rsp+90h] [rbp-31h] BYREF
  __int64 v51; // [rsp+98h] [rbp-29h]
  __int64 v52; // [rsp+A0h] [rbp-21h]
  __int64 v53; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-11h]
  __int64 v55; // [rsp+B8h] [rbp-9h]
  __int128 v56; // [rsp+C8h] [rbp+7h] BYREF
  _BYTE v57[64]; // [rsp+D8h] [rbp+17h] BYREF
  int v58; // [rsp+128h] [rbp+67h]

  v45 = 0LL;
  v43 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  memset(v47, 0, sizeof(v47));
  v58 = 5;
  DesktopWindow = (struct tagWND *)GetDesktopWindow(a1);
  v8 = 0LL;
  v9 = *((_QWORD *)a1 + 3);
  if ( v9 )
    v8 = *(struct tagWND **)(v9 + 104);
  if ( a1 == DesktopWindow || a1 == v8 )
    goto LABEL_101;
  v10 = (__int64)DesktopWindow;
  if ( v5 )
    v10 = v5;
  if ( v6 && (*(_QWORD *)(v6 + 104) != v10 || (struct tagWND *)v6 == a1) )
    return 0LL;
  if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 416LL))
    && (unsigned int)HasMessageRootWindow(a1)
    && !(unsigned int)HasMessageRootWindow(v10) )
  {
LABEL_101:
    v41 = 5LL;
LABEL_102:
    UserSetLastError(v41);
    return 0LL;
  }
  if ( (struct tagWND *)v10 != DesktopWindow
    && (struct tagWND *)v10 != v8
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 416LL)
    && (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(*(_QWORD *)(v10 + 40) + 288LL)) & 0xF) != 0
    && !(unsigned int)IsChildWindowDpiIsolationEnabled(a1, v10) )
  {
    TraceChildWindowDpiTelemetry((__int64)a1, v10, 1);
    v41 = 5023LL;
    goto LABEL_102;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v50 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v50;
  v51 = v10;
  if ( v10 )
    HMLockObject(v10);
  if ( !(unsigned int)ValidateNewParent(a1, v10)
    || (v12 = xxxShowWindowEx(a1), v13 = *((_QWORD *)a1 + 5), v14 = v12, v46 = v12, (*(_BYTE *)(v13 + 31) & 0x10) != 0) )
  {
LABEL_94:
    ThreadUnlock1();
    return 0LL;
  }
  if ( (*(_DWORD *)(v13 + 232) & 0x20) != 0 )
    DecomposeWindowIfNeeded(a1);
  if ( !(unsigned int)ValidateNewParent(a1, v10) )
  {
    if ( v14 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      xxxShowWindowEx(a1);
    goto LABEL_94;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v49);
  StyleWindow = GetStyleWindow(a1, 2848LL);
  v16 = *((_QWORD *)a1 + 13);
  v48 = StyleWindow;
  v17 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v53 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v53;
  v54 = v16;
  if ( v16 )
    HMLockObject(v16);
  v18 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 26LL) & 0x40) != 0 )
    v19 = v18[24];
  else
    v19 = v18[22];
  v44[0] = v19;
  v44[1] = v18[23];
  ScreenToClient(v16, v44);
  if ( *(_DWORD *)(v20 + 236) != 1 && ((struct tagWND *)v10 == DesktopWindow || (struct tagWND *)v10 == v8) )
    SetOrClrWF(1LL, a1, 2056LL, 1LL);
  if ( (struct tagWND *)v10 == DesktopWindow )
  {
    if ( (struct tagWND *)v16 != DesktopWindow )
    {
      if ( (unsigned int)IsWindowShellCloaked((struct tagWND *)v16, 0) )
      {
        LODWORD(v47[0]) = 1;
        zzzSetWindowCompositionCloak(a1, v47, 2LL);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35, v34) + 812) & 0x30) == 0x10
        && (GetWindowCloakState(a1) & 1) != 0 )
      {
        LODWORD(v47[0]) = 0;
        zzzSetWindowCompositionCloak(a1, v47, 1LL);
      }
      v36 = *((_QWORD *)a1 + 5);
      v37 = *(_DWORD *)(v36 + 232);
      if ( (v37 & 0x8000) != 0 )
      {
        *(_DWORD *)(v36 + 232) = v37 & 0xFFFF7FFF;
        PostShellHookMessages(0x36uLL, *(_QWORD *)a1);
      }
    }
  }
  else if ( (struct tagWND *)v16 == DesktopWindow )
  {
    if ( (unsigned int)IsWindowShellCloaked(a1, 1) )
      zzzSetWindowCompositionCloak(a1, v47, 2LL);
    ResetWindowTransform((__int64)a1);
  }
  UnlinkWindow(a1, v16);
  v56 = *(_OWORD *)LockPointer(v57, (char *)a1 + 104, v10);
  HMAssignmentLock(&v56);
  if ( v10 )
    v21 = (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(v10 + 40) + 232LL), 25);
  else
    v21 = 0LL;
  SetWindowSubtreeCoreWindowStatus(a1, v21);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    v22 = *((_QWORD *)a1 + 15);
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
  if ( a2 == (struct tagWND *)-3LL && !(unsigned int)IsWindowShellCloaked(a1, 1) )
  {
    LODWORD(v47[0]) = 1;
    zzzSetWindowCompositionCloak(a1, v47, 2LL);
  }
  v23 = GetStyleWindow(a1, 2848LL);
  if ( v48 )
  {
    if ( v23 )
    {
      if ( v48 != v23 )
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
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    v24 = (_QWORD *)((char *)a1 + 104);
    if ( *((_QWORD *)a1 + 13) != GetDesktopWindow(a1) )
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
          && (unsigned int)IsDesktopApp(*(_QWORD *)(v42 + 416)) )
        {
          *(_DWORD *)(v10 + 324) |= 8u;
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
    v24 = (_QWORD *)((char *)a1 + 104);
  }
  if ( (struct tagWND *)v10 == v8 || (struct tagWND *)v16 == v8 )
  {
    v29 = 21;
    v58 = 21;
  }
  else
  {
    v29 = 5;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 232LL) & 0x10000000) != 0
    || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x10000000) != 0 )
  {
    v38 = *((_QWORD *)a1 + 5);
    v39 = v38;
    v40 = *(_DWORD *)(v38 + 288);
    if ( (v40 & 0xF) == 2 && (v40 & 0xF0) == 0x10 )
    {
      *(_DWORD *)(v38 + 232) &= ~0x10000000u;
      v39 = *((_QWORD *)a1 + 5);
    }
    *(_DWORD *)(v39 + 232) &= ~0x8000000u;
    v58 = v29 | 0x20;
  }
  IsTopLevelWindow(a1);
  SetDeferredDpiStateForWindowAndChildren(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v49);
  zzzEndDeferWinEventNotify();
  if ( GetStyleWindow(*v24, 2818LL) )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(0x800Fu, 1);
  if ( !v10 || (struct tagWND *)v10 == DesktopWindow || (struct tagWND *)v16 == DesktopWindow )
  {
    v30 = 0LL;
    goto LABEL_57;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v16 + 40) + 256LL) == *(_QWORD *)(*(_QWORD *)(v10 + 40) + 256LL) )
  {
    v30 = v45;
LABEL_57:
    xxxSetWindowPos(a1, 0, 0, v58);
    goto LABEL_58;
  }
  v30 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(a1, v16, 0LL, &v43);
  if ( !v43 )
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
  if ( v46 )
    xxxShowWindowEx(a1);
  v32 = ThreadUnlock1();
  ThreadUnlock1();
  return (struct tagWND *)v32;
}
