/*
 * XREFs of ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0010F40 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     NtUserSetParent @ 0x1C0121C40 (NtUserSetParent.c)
 *     xxxResetTooltip @ 0x1C01369EC (xxxResetTooltip.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F837C (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F84E4 (xxxSetBridgeWindowChild.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C023FF00 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C000995C (TraceChildWindowDpiTelemetry.c)
 *     zzzAttachThreadInput @ 0x1C00123D8 (zzzAttachThreadInput.c)
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     RedirectDCEs @ 0x1C00246A0 (RedirectDCEs.c)
 *     GetStyleWindow @ 0x1C0025520 (GetStyleWindow.c)
 *     UnredirectDCEs @ 0x1C002702C (UnredirectDCEs.c)
 *     CalcWindowFullScreen @ 0x1C002C8AC (CalcWindowFullScreen.c)
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     DecomposeWindowIfNeeded @ 0x1C0044C58 (DecomposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     IsWindowShellCloaked @ 0x1C0088160 (IsWindowShellCloaked.c)
 *     CalcForegroundInsertAfter @ 0x1C0089474 (CalcForegroundInsertAfter.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 *     IsImmersiveAppIORestricted @ 0x1C008ED88 (IsImmersiveAppIORestricted.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C008F63C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C008F7AC (SetWindowSubtreeCoreWindowStatus.c)
 *     _ScreenToClient @ 0x1C008F834 (_ScreenToClient.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ValidateNewParent @ 0x1C00BFBB4 (ValidateNewParent.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00BFE08 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C00C7664 (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     GetWindowCloakState @ 0x1C00C8BCC (GetWindowCloakState.c)
 *     UnlinkWindow @ 0x1C00C8EC8 (UnlinkWindow.c)
 *     LinkWindow @ 0x1C00CA850 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00ED480 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C00EDA08 (ChangeRedirectionParentInDCEs.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0118198 (IsChildWindowDpiIsolationEnabled.c)
 *     ResetWindowTransform @ 0x1C013E02C (ResetWindowTransform.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7C40 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E7FB0 (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     xxxTurnOffCompositing @ 0x1C01E9C9C (xxxTurnOffCompositing.c)
 *     HasMessageRootWindow @ 0x1C01F8454 (HasMessageRootWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagWND *__fastcall xxxSetParentWorker(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3, int a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagWND *DesktopWindow; // r15
  struct tagWND *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 ThreadWin32Thread; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  int v17; // esi
  int v18; // eax
  __int64 StyleWindow; // rax
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _DWORD *v25; // r9
  int v26; // eax
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // r12
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r9
  int v39; // r9d
  struct tagFREELIST *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rdx
  int v58; // r8d
  __int64 v59; // rcx
  __int64 v60; // r9
  int v61; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v62[2]; // [rsp+50h] [rbp-71h] BYREF
  struct tagFREELIST *v63; // [rsp+58h] [rbp-69h]
  int v64; // [rsp+60h] [rbp-61h]
  _QWORD v65[3]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v66; // [rsp+80h] [rbp-41h]
  _BYTE v67[8]; // [rsp+88h] [rbp-39h] BYREF
  __int64 v68; // [rsp+90h] [rbp-31h] BYREF
  __int64 v69; // [rsp+98h] [rbp-29h]
  __int64 v70; // [rsp+A0h] [rbp-21h]
  __int64 v71; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-11h]
  __int64 v73; // [rsp+B8h] [rbp-9h]
  __int128 v74; // [rsp+C8h] [rbp+7h] BYREF
  _BYTE v75[64]; // [rsp+D8h] [rbp+17h] BYREF
  int v76; // [rsp+128h] [rbp+67h]

  v63 = 0LL;
  v61 = 0;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  memset(v65, 0, sizeof(v65));
  v76 = 5;
  DesktopWindow = (struct tagWND *)GetDesktopWindow(a1);
  v9 = 0LL;
  v10 = *((_QWORD *)a1 + 3);
  if ( v10 )
    v9 = *(struct tagWND **)(v10 + 104);
  if ( a1 == DesktopWindow || a1 == v9 )
    goto LABEL_101;
  v11 = (__int64)DesktopWindow;
  if ( v5 )
    v11 = v5;
  if ( v6 && (*(_QWORD *)(v6 + 104) != v11 || (struct tagWND *)v6 == a1) )
    return 0LL;
  if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 416LL))
    && (unsigned int)HasMessageRootWindow(a1)
    && !(unsigned int)HasMessageRootWindow(v11) )
  {
LABEL_101:
    v59 = 5LL;
LABEL_102:
    UserSetLastError(v59, v5, v6, v7);
    return 0LL;
  }
  if ( (struct tagWND *)v11 != DesktopWindow
    && (struct tagWND *)v11 != v9
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) == *(_QWORD *)(*(_QWORD *)(v11 + 16) + 416LL) )
  {
    v5 = *(_QWORD *)(v11 + 40);
    if ( (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(v5 + 288)) & 0xF) != 0
      && !(unsigned int)IsChildWindowDpiIsolationEnabled(a1, v11) )
    {
      TraceChildWindowDpiTelemetry((__int64)a1, v11, 1);
      v59 = 5023LL;
      goto LABEL_102;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
  v68 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v68;
  v69 = v11;
  if ( v11 )
    HMLockObject(v11);
  if ( !(unsigned int)ValidateNewParent(a1, v11)
    || (v16 = xxxShowWindowEx(a1, 0, 0),
        v14 = *((_QWORD *)a1 + 5),
        v17 = v16,
        v64 = v16,
        (*(_BYTE *)(v14 + 31) & 0x10) != 0) )
  {
LABEL_94:
    ThreadUnlock1(v14, v13, v15);
    return 0LL;
  }
  if ( (*(_DWORD *)(v14 + 232) & 0x20) != 0 )
    DecomposeWindowIfNeeded(a1);
  v18 = ValidateNewParent(a1, v11);
  v14 = 0LL;
  if ( !v18 )
  {
    if ( v17 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      xxxShowWindowEx(a1, 1u, 0);
    goto LABEL_94;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v67);
  StyleWindow = GetStyleWindow((__int64)a1, 2848);
  v20 = *((_QWORD *)a1 + 13);
  v66 = StyleWindow;
  v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23);
  v71 = *(_QWORD *)(v24 + 408);
  *(_QWORD *)(v24 + 408) = &v71;
  v72 = v20;
  if ( v20 )
    HMLockObject(v20);
  v25 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 26LL) & 0x40) != 0 )
    v26 = v25[24];
  else
    v26 = v25[22];
  v62[0] = v26;
  v62[1] = v25[23];
  ScreenToClient(v20, v62);
  if ( *(_DWORD *)(v27 + 236) != 1 && ((struct tagWND *)v11 == DesktopWindow || (struct tagWND *)v11 == v9) )
    SetOrClrWF(1, (__int64)a1, 0x808u, 1);
  if ( (struct tagWND *)v11 == DesktopWindow )
  {
    if ( (struct tagWND *)v20 != DesktopWindow )
    {
      if ( (unsigned int)IsWindowShellCloaked((struct tagWND *)v20, 0) )
      {
        LODWORD(v65[0]) = 1;
        zzzSetWindowCompositionCloak((__int64)a1, v65, 2u);
      }
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51, v50) + 812) & 0x30) == 0x10
        && (GetWindowCloakState(a1, v52, v53) & 1) != 0 )
      {
        LODWORD(v65[0]) = 0;
        zzzSetWindowCompositionCloak((__int64)a1, v65, 1u);
      }
      v54 = *((_QWORD *)a1 + 5);
      v55 = *(_DWORD *)(v54 + 232);
      if ( (v55 & 0x8000) != 0 )
      {
        *(_DWORD *)(v54 + 232) = v55 & 0xFFFF7FFF;
        PostShellHookMessages(0x36uLL, *(_QWORD *)a1);
      }
    }
  }
  else if ( (struct tagWND *)v20 == DesktopWindow )
  {
    if ( (unsigned int)IsWindowShellCloaked(a1, 1) )
      zzzSetWindowCompositionCloak((__int64)a1, v65, 2u);
    ResetWindowTransform(a1);
  }
  UnlinkWindow(a1, v20);
  v74 = *(_OWORD *)LockPointer(v75, (char *)a1 + 104, v11);
  HMAssignmentLock(&v74);
  if ( v11 )
    v28 = (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(v11 + 40) + 232LL), 25);
  else
    v28 = 0LL;
  SetWindowSubtreeCoreWindowStatus(a1, v28);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    v29 = *((_QWORD *)a1 + 15);
    if ( v29 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v29 + 40) + 24LL) & 8) != 0 )
        SetOrClrWF(1, (__int64)a1, 0x808u, 1);
    }
  }
  if ( v11 == GetDesktopWindow(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) == 0 )
  {
    CalcWindowFullScreen(a1);
    CalcForegroundInsertAfter((__int64)a1);
  }
  LinkWindow(a1);
  if ( a2 == (struct tagWND *)-3LL && !(unsigned int)IsWindowShellCloaked(a1, 1) )
  {
    LODWORD(v65[0]) = 1;
    zzzSetWindowCompositionCloak((__int64)a1, v65, 2u);
  }
  v30 = GetStyleWindow((__int64)a1, 2848);
  if ( v66 )
  {
    if ( v30 )
    {
      if ( v66 != v30 )
        ChangeRedirectionParentInDCEs(a1);
    }
    else
    {
      UnredirectDCEs(a1);
    }
  }
  else if ( v30 )
  {
    RedirectDCEs(a1, v31, v32, v33);
  }
  if ( v11 == GetDesktopWindow(a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4) == 0 )
  {
    SetOrClrWF(1, (__int64)a1, 0xF04u, 1);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    v34 = (__int64 *)((char *)a1 + 104);
    if ( *((_QWORD *)a1 + 13) != GetDesktopWindow(a1) )
    {
      v35 = *((_QWORD *)a1 + 2);
      v36 = *(_QWORD *)(v20 + 16);
      if ( v35 != v36 )
        zzzAttachThreadInput(v35, v36, 0);
    }
    if ( v11 != GetDesktopWindow(a1) )
    {
      v37 = *((_QWORD *)a1 + 2);
      v38 = *(_QWORD *)(v11 + 16);
      if ( v37 == v38 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 235LL) & 1) != 0
          && (unsigned int)IsTopLevelWindow(v11)
          && (unsigned int)IsDesktopApp(*(_QWORD *)(v60 + 416)) )
        {
          *(_DWORD *)(v11 + 324) |= 8u;
        }
      }
      else
      {
        zzzAttachThreadInput(v37, v38, a4 != 0 ? -32767 : 1);
      }
    }
  }
  else
  {
    v34 = (__int64 *)((char *)a1 + 104);
  }
  if ( (struct tagWND *)v11 == v9 || (struct tagWND *)v20 == v9 )
  {
    v39 = 21;
    v76 = 21;
  }
  else
  {
    v39 = 5;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v20 + 40) + 232LL) & 0x10000000) != 0
    || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x10000000) != 0 )
  {
    v56 = *((_QWORD *)a1 + 5);
    v57 = v56;
    v58 = *(_DWORD *)(v56 + 288);
    if ( (v58 & 0xF) == 2 && (v58 & 0xF0) == 0x10 )
    {
      *(_DWORD *)(v56 + 232) &= ~0x10000000u;
      v57 = *((_QWORD *)a1 + 5);
    }
    *(_DWORD *)(v57 + 232) &= ~0x8000000u;
    v76 = v39 | 0x20;
  }
  IsTopLevelWindow(a1);
  SetDeferredDpiStateForWindowAndChildren(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v67);
  zzzEndDeferWinEventNotify();
  if ( GetStyleWindow(*v34, 2818) )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(0x800Fu, 1);
  if ( !v11 || (struct tagWND *)v11 == DesktopWindow || (struct tagWND *)v20 == DesktopWindow )
  {
    v40 = 0LL;
    goto LABEL_57;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v20 + 40) + 256LL) == *(_QWORD *)(*(_QWORD *)(v11 + 40) + 256LL) )
  {
    v40 = v63;
LABEL_57:
    xxxSetWindowPos(a1, 0, 0, v76);
    goto LABEL_58;
  }
  v40 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(a1, v20, 0LL, &v61);
  if ( !v61 )
    goto LABEL_57;
LABEL_58:
  v41 = *v34;
  if ( !*v34
    || (((unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) ^ *(_BYTE *)(*(_QWORD *)(v41 + 40) + 288LL)) & 0xF) == 0
    || (struct tagWND *)v41 == DesktopWindow
    || (struct tagWND *)v41 == v9
    || (unsigned int)IsChildWindowDpiIsolationEnabled(a1, v41) )
  {
    xxxInheritWindowMonitor(a1);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext(a1, *(_DWORD *)(*(_QWORD *)(*v34 + 40) + 288LL));
  }
  if ( v40 )
  {
    xxxUpdateWindowPositionsForDpiBoundaryChange(v40);
    FreeListFree(v40);
  }
  if ( v64 )
    xxxShowWindowEx(a1, 1u, 0);
  v45 = ThreadUnlock1(v43, v42, v44);
  ThreadUnlock1(v47, v46, v48);
  return (struct tagWND *)v45;
}
