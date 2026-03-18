/*
 * XREFs of ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0005B60 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     xxxResetTooltip @ 0x1C0064938 (xxxResetTooltip.c)
 *     NtUserSetParent @ 0x1C00FEC80 (NtUserSetParent.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01BF488 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01BF73C (xxxSetBridgeWindowChild.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C01FF21C (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C00069CC (TraceChildWindowDpiTelemetry.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     LinkWindow @ 0x1C002E120 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     UnlinkWindow @ 0x1C002FDB0 (UnlinkWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00349AC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ValidateNewParent @ 0x1C00349D4 (ValidateNewParent.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     zzzAttachThreadInput @ 0x1C00581EC (zzzAttachThreadInput.c)
 *     CalcForegroundInsertAfter @ 0x1C006E5D8 (CalcForegroundInsertAfter.c)
 *     PostShellHookMessages @ 0x1C006E990 (PostShellHookMessages.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     CalcWindowFullScreen @ 0x1C007290C (CalcWindowFullScreen.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C00755E4 (ChangeRedirectionParentInDCEs.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 *     UnredirectDCEs @ 0x1C00760F4 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C00764B0 (RedirectDCEs.c)
 *     SelectNewFrameRgn @ 0x1C00C0B70 (SelectNewFrameRgn.c)
 *     ResetWindowTransform @ 0x1C00C0BAC (ResetWindowTransform.c)
 *     IsWindowShellCloaked @ 0x1C00C1194 (IsWindowShellCloaked.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00C1874 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C00C1910 (SetWindowSubtreeCoreWindowStatus.c)
 *     _ScreenToClient @ 0x1C00C1998 (_ScreenToClient.c)
 *     IsImmersiveAppIORestricted @ 0x1C00C19D4 (IsImmersiveAppIORestricted.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C3AB8 (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C00F79E8 (IsChildWindowDpiIsolationEnabled.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C01AE634 (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01B022C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01B03C8 (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     xxxTurnOffCompositing @ 0x1C01B1ECC (xxxTurnOffCompositing.c)
 *     HasMessageRootWindow @ 0x1C01BF600 (HasMessageRootWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagWND *__fastcall xxxSetParentWorker(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3, int a4)
{
  _QWORD *v6; // r12
  struct tagWND *DesktopWindow; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  struct tagWND *v11; // r15
  struct tagWND *v12; // r9
  __int64 v13; // rdi
  struct tagWND *v14; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  int v20; // r14d
  int v21; // eax
  __int64 StyleWindow; // rax
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rax
  _DWORD *v26; // r9
  unsigned int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  struct tagWND *v37; // r13
  int v38; // edx
  unsigned int v39; // r9d
  unsigned __int16 v40; // r10
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  _QWORD *v54; // rcx
  int v55; // [rsp+48h] [rbp-79h] BYREF
  struct tagWND *v56; // [rsp+50h] [rbp-71h]
  unsigned int v57; // [rsp+58h] [rbp-69h] BYREF
  unsigned int v58; // [rsp+5Ch] [rbp-65h]
  int v59; // [rsp+60h] [rbp-61h]
  _DWORD v60[6]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v61; // [rsp+80h] [rbp-41h]
  _BYTE v62[16]; // [rsp+88h] [rbp-39h] BYREF
  __int128 v63; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v64[3]; // [rsp+A8h] [rbp-19h] BYREF
  _QWORD v65[3]; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v66[8]; // [rsp+D8h] [rbp+17h] BYREF
  int v67; // [rsp+128h] [rbp+67h]

  v55 = 0;
  v67 = 5;
  v6 = 0LL;
  DesktopWindow = (struct tagWND *)GetDesktopWindow((__int64)a1);
  v10 = *((_QWORD *)a1 + 3);
  v11 = DesktopWindow;
  v56 = 0LL;
  v12 = 0LL;
  if ( v10 )
  {
    v12 = *(struct tagWND **)(v10 + 104);
    v56 = v12;
  }
  if ( a1 == DesktopWindow || a1 == v12 )
    goto LABEL_118;
  v13 = (__int64)DesktopWindow;
  if ( v9 )
    v13 = v9;
  if ( a3 && (*((_QWORD *)a3 + 10) != v13 || a3 == a1) )
    return 0LL;
  if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 416LL)) )
  {
    if ( !(unsigned int)HasMessageRootWindow(a1) || (unsigned int)HasMessageRootWindow(v13) )
    {
      v14 = v56;
      goto LABEL_9;
    }
LABEL_118:
    v53 = 5LL;
    goto LABEL_119;
  }
LABEL_9:
  if ( (struct tagWND *)v13 != v11
    && (struct tagWND *)v13 != v14
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) == *(_QWORD *)(*(_QWORD *)(v13 + 16) + 416LL) )
  {
    v8 = *(_QWORD *)(v13 + 40);
    if ( (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(v8 + 288)) & 0xF) != 0
      && !(unsigned int)IsChildWindowDpiIsolationEnabled(a1, v13) )
    {
      TraceChildWindowDpiTelemetry((__int64)a1, v13, 1);
      v53 = 5023LL;
LABEL_119:
      UserSetLastError(v53, v8);
      return 0LL;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
  v64[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v64;
  v64[1] = v13;
  if ( v13 )
    _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
  if ( !(unsigned int)ValidateNewParent(a1, (_QWORD *)v13)
    || (v19 = xxxShowWindowEx(a1, 0, 0),
        v16 = *((_QWORD *)a1 + 5),
        v20 = v19,
        v59 = v19,
        (*(_BYTE *)(v16 + 31) & 0x10) != 0) )
  {
LABEL_98:
    ThreadUnlock1(v17, v16, v18);
    return 0LL;
  }
  if ( (*(_DWORD *)(v16 + 232) & 0x20) != 0 )
    DecomposeWindowIfNeeded(a1);
  v21 = ValidateNewParent(a1, (_QWORD *)v13);
  v17 = 0LL;
  if ( !v21 )
  {
    if ( v20 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      xxxShowWindowEx(a1, 1u, 0);
    goto LABEL_98;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v62);
  StyleWindow = GetStyleWindow((__int64)a1, 2848);
  v23 = *((_QWORD *)a1 + 10);
  v61 = StyleWindow;
  v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24);
  v65[0] = *(_QWORD *)(v25 + 408);
  *(_QWORD *)(v25 + 408) = v65;
  v65[1] = v23;
  if ( v23 )
    _InterlockedAdd((volatile signed __int32 *)(v23 + 8), 1u);
  v26 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 26LL) & 0x40) != 0 )
    v27 = v26[24];
  else
    v27 = v26[22];
  v57 = v27;
  v58 = v26[23];
  ScreenToClient(v23, &v57);
  if ( *(_DWORD *)(v28 + 236) != 1 && ((struct tagWND *)v13 == v11 || (struct tagWND *)v13 == v56) )
    SetOrClrWF(1LL, a1, 2056LL, 1LL);
  if ( (struct tagWND *)v13 == v11 )
  {
    if ( (struct tagWND *)v23 != v11 )
    {
      if ( (unsigned int)IsWindowShellCloaked((struct tagWND *)v23, 0) )
      {
        v60[0] = 1;
        zzzSetWindowCompositionCloak((__int64)a1, v60, 2u);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 812) & 0x30) == 0x10
        && (GetWindowCloakState(a1) & 1) != 0 )
      {
        v60[0] = 0;
        zzzSetWindowCompositionCloak((__int64)a1, v60, 1u);
      }
      v51 = *((_QWORD *)a1 + 5);
      v52 = *(_DWORD *)(v51 + 232);
      if ( (v52 & 0x8000) != 0 )
      {
        *(_DWORD *)(v51 + 232) = v52 & 0xFFFF7FFF;
        PostShellHookMessages(0x36uLL, *(_QWORD *)a1);
      }
    }
  }
  else if ( (struct tagWND *)v23 == v11 )
  {
    if ( (unsigned int)IsWindowShellCloaked(a1, 1) )
    {
      v60[0] = 0;
      zzzSetWindowCompositionCloak((__int64)a1, v60, 2u);
    }
    SelectNewFrameRgn((__int64)a1, 0LL);
    ResetWindowTransform((__int64)a1);
  }
  UnlinkWindow(a1, v23);
  v63 = *(_OWORD *)LockPointer(v66, (__int64)a1 + 80, v13);
  HMAssignmentLock(&v63);
  if ( v13 )
    v29 = (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(v13 + 40) + 232LL), 25);
  else
    v29 = 0LL;
  SetWindowSubtreeCoreWindowStatus(a1, v29);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    v30 = *((_QWORD *)a1 + 12);
    if ( v30 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v30 + 40) + 24LL) & 8) != 0 )
        SetOrClrWF(1LL, a1, 2056LL, 1LL);
    }
  }
  if ( v13 == GetDesktopWindow((__int64)a1) && (*(_BYTE *)(v31 + 24) & 8) == 0 )
  {
    CalcWindowFullScreen(a1);
    a3 = CalcForegroundInsertAfter((__int64)a1);
  }
  LinkWindow(a1, a3, (__int64 *)v13);
  if ( a2 == (struct tagWND *)-3LL && !(unsigned int)IsWindowShellCloaked(a1, 1) )
  {
    v60[0] = 1;
    zzzSetWindowCompositionCloak((__int64)a1, v60, 2u);
  }
  v32 = GetStyleWindow((__int64)a1, 2848);
  if ( v61 )
  {
    if ( v32 )
    {
      if ( v61 != v32 )
        ChangeRedirectionParentInDCEs(a1, 1u);
    }
    else
    {
      UnredirectDCEs(a1);
    }
  }
  else if ( v32 )
  {
    RedirectDCEs(a1);
  }
  if ( v13 == GetDesktopWindow((__int64)a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4) == 0 )
  {
    SetOrClrWF(1LL, a1, 3844LL, 1LL);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    if ( *((_QWORD *)a1 + 10) != GetDesktopWindow((__int64)a1) )
    {
      v33 = *((_QWORD *)a1 + 2);
      v34 = *(_QWORD *)(v23 + 16);
      if ( v33 != v34 )
        zzzAttachThreadInput(v33, v34, 0);
    }
    if ( v13 != GetDesktopWindow((__int64)a1) )
    {
      v35 = *((_QWORD *)a1 + 2);
      v36 = *(_QWORD *)(v13 + 16);
      if ( v35 != v36 )
        zzzAttachThreadInput(v35, v36, a4 != 0 ? -32767 : 1);
    }
  }
  v37 = v56;
  if ( (struct tagWND *)v13 == v56 || (struct tagWND *)v23 == v56 )
  {
    v38 = 21;
    v67 = 21;
  }
  else
  {
    v38 = 5;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v23 + 40) + 232LL) & 0x10000000) != 0
    || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x10000000) != 0 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x10000000u;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x20000000u;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x8000000u;
    v67 = v38 | 0x20;
  }
  if ( !(unsigned int)IsTopLevelWindow((__int64)a1) && v13 )
    LOBYTE(v39) = *(_WORD *)(*(_QWORD *)(v13 + 40) + 286LL) != v40;
  SetDeferredDpiStateForWindowAndChildren(a1, v39);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v62);
  zzzEndDeferWinEventNotify();
  if ( GetStyleWindow(*((_QWORD *)a1 + 10), 2818) )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(0x800Fu, (__int64)a1, 0, 0, 1);
  if ( !v13
    || (struct tagWND *)v13 == v11
    || (struct tagWND *)v23 == v11
    || *(_QWORD *)(*(_QWORD *)(v23 + 40) + 256LL) == *(_QWORD *)(*(_QWORD *)(v13 + 40) + 256LL)
    || (v6 = (_QWORD *)BuildWindowListWithDpiBoundaryInfo(a1, v23, &v55), !v55) )
  {
    xxxSetWindowPos(a1, 0LL, v57, v58, 0, 0, v67);
  }
  v41 = *((_QWORD *)a1 + 10);
  if ( !v41
    || (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(*(_QWORD *)(v41 + 40) + 288LL)) & 0xF) == 0
    || (struct tagWND *)v41 == v11
    || (struct tagWND *)v41 == v37
    || (unsigned int)IsChildWindowDpiIsolationEnabled(a1, v41) )
  {
    xxxInheritWindowMonitor(a1, 0LL, 0);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext(a1, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 40LL) + 288LL));
  }
  if ( v6 )
  {
    xxxUpdateWindowPositionsForDpiBoundaryChange(v6);
    do
    {
      v54 = v6;
      v6 = (_QWORD *)*v6;
      Win32FreePool(v54);
    }
    while ( v6 );
  }
  if ( v59 )
    xxxShowWindowEx(a1, 1u, 0);
  v45 = ThreadUnlock1(v43, v42, v44);
  ThreadUnlock1(v47, v46, v48);
  return (struct tagWND *)v45;
}
