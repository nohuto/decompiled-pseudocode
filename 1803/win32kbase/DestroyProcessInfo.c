/*
 * XREFs of DestroyProcessInfo @ 0x1C003B604
 * Callers:
 *     xxxUserProcessCallout @ 0x1C00340E0 (xxxUserProcessCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     DelayedDestroyCacheDC @ 0x1C0033300 (DelayedDestroyCacheDC.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C0035960 (UnlockObjectAssignment.c)
 *     RIMOnProcessDestroy @ 0x1C003B520 (RIMOnProcessDestroy.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003B9F4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003BA28 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     CitProcessCallout @ 0x1C003BA50 (CitProcessCallout.c)
 *     CloseProtectedHandle @ 0x1C003C094 (CloseProtectedHandle.c)
 *     IsShellProcess @ 0x1C003C1D4 (IsShellProcess.c)
 *     ClearAppStarting @ 0x1C003CFA0 (ClearAppStarting.c)
 *     CleanupLogonProcess @ 0x1C00A1D90 (CleanupLogonProcess.c)
 *     PostWinlogonMessage @ 0x1C00A1E00 (PostWinlogonMessage.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00AC7A0 (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00E5724 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  int v3; // eax
  __int64 i; // rcx
  __int64 j; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 k; // rax
  HANDLE ProcessId; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 m; // rcx
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // ebp
  __int64 *n; // rcx
  void *v19; // rcx
  __int64 v20; // rbx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  NTSTATUS ProcessExitStatus; // eax
  NTSTATUS v25; // eax
  __int64 *v26; // rcx
  __int64 *v27; // rdx
  __int64 *v28; // [rsp+30h] [rbp+8h] BYREF

  CitProcessCallout(a1, 0LL);
  v2 = *(struct _KEVENT **)(a1 + 16);
  if ( v2 != (struct _KEVENT *)-1LL )
  {
    if ( !v2 )
      goto LABEL_3;
    KeSetEvent(v2, 1, 0);
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
  }
  *(_QWORD *)(a1 + 16) = 0LL;
LABEL_3:
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v28);
  ++gdwDeferWinEvent;
  v3 = *(_DWORD *)(a1 + 12);
  if ( (v3 & 4) != 0 )
  {
    *(_DWORD *)(a1 + 12) = v3 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
      zzzCalcStartCursorHide(0LL, 0LL);
  }
  --gdwDeferWinEvent;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v28);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v28, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      if ( *(_QWORD *)(j + 256) == a1 )
        *(_QWORD *)(j + 256) = 0LL;
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v28);
  if ( (*(_DWORD *)(a1 + 12) & 0x8000) == 0 )
    return 0LL;
  PsUpdateComponentPower(*(_QWORD *)a1, 6LL);
  v7 = *(_QWORD *)(a1 + 272);
  if ( v7 )
  {
    PsReleaseProcessWakeCounter(v7, 1LL);
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 824) && (int)IsDestroyProcessHidRequestsSupported() >= 0 )
    DestroyProcessHidRequests(a1);
  if ( *(_QWORD *)(a1 + 888) && (int)IsCleanupInjectedTouchProcessSupported() >= 0 )
    CleanupInjectedTouchProcess(a1);
  if ( *(_QWORD *)(a1 + 896) != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( *(_QWORD *)(a1 + 904) != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( (int)IsMSGSQMRemoveProcessSupported() >= 0 )
    MSGSQMRemoveProcess(a1);
  if ( (*(_DWORD *)(a1 + 12) & 0x40001) == 0x40000 )
  {
    v8 = *(_QWORD *)(a1 + 664);
    if ( (!v8 || (*(_DWORD *)(v8 + 32) & 2) == 0) && (int)IsPostPlaySoundMessageSupported() >= 0 )
      PostPlaySoundMessage(8LL);
  }
  if ( (unsigned int)IsShellProcess(a1) && *(_QWORD *)(a1 + 336) == grpdeskIODefault )
  {
    if ( (int)IsCleanupIAMAccessSupported() >= 0 )
      CleanupIAMAccess(*(_QWORD *)(a1 + 336));
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 664) + 32LL) & 2) == 0 )
    {
      ProcessExitStatus = PsGetProcessExitStatus(*(PEPROCESS *)a1);
      if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
      {
        v25 = PsGetProcessExitStatus(*(PEPROCESS *)a1);
        PostWinlogonMessage(1025LL, v25);
      }
    }
  }
  for ( k = grpWinStaList; k; k = *(_QWORD *)(k + 8) )
  {
    for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
    {
      v15 = *(_QWORD *)(m + 8);
      if ( *(_QWORD *)(v15 + 176) == a1 )
        *(_QWORD *)(v15 + 176) = 0LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x40) != 0 )
  {
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    v11 = `GiveForegroundActivateRight'::`2'::index;
    ghCanActivateForegroundPIDs[`GiveForegroundActivateRight'::`2'::index] = ProcessId;
    `GiveForegroundActivateRight'::`2'::index = v11 + 1;
    if ( v11 == 4 )
      `GiveForegroundActivateRight'::`2'::index = 0;
    ClearAppStarting(a1);
  }
  v12 = gppiList;
  v13 = &gppiList;
  while ( v12 )
  {
    if ( v12 == a1 )
    {
      *v13 = *(_QWORD *)(a1 + 376);
      break;
    }
    v13 = (__int64 *)(v12 + 376);
    v12 = *(_QWORD *)(v12 + 376);
  }
  v16 = *(_DWORD *)(a1 + 12);
  v17 = v16 & 0x4000;
  if ( (v16 & 0x4000) != 0 && (v16 & 0x200) != 0 )
    DelayedDestroyCacheDC(1);
  if ( (int)IsGetgpPublicObjectListSupported(v13) >= 0 )
  {
    GetgpPublicObjectList(&v28);
    for ( n = v28; n; n = (__int64 *)*n )
    {
      if ( *((_DWORD *)n + 5) == *(_DWORD *)(a1 + 56) )
        *((_DWORD *)n + 5) = 0;
    }
  }
  if ( gppiScreenSaver == a1 )
  {
    gppiScreenSaver = 0LL;
    EtwTraceScreenSaverProcessEvent(2LL);
  }
  if ( gppiForegroundOld == a1 )
    gppiForegroundOld = 0LL;
  if ( gppiUserApiHook == a1 && (int)Is_UnregisterUserApiHookSupported() >= 0 )
    _UnregisterUserApiHook();
  if ( gppiDManipHook == a1 && (int)Is_UnregisterDManipHookSupported() >= 0 )
    _UnregisterDManipHook();
  UnlockObjectAssignment((void **)(a1 + 664));
  UnlockObjectAssignment((void **)(a1 + 336));
  v19 = *(void **)(a1 + 392);
  if ( v19 )
  {
    CloseProtectedHandle(v19);
    *(_QWORD *)(a1 + 392) = 0LL;
  }
  *(_DWORD *)(a1 + 12) |= 0x1000u;
  v20 = *(_QWORD *)(a1 + 360);
  if ( v20 )
  {
    ObfDereferenceObject(*(PVOID *)(v20 + 32));
    v26 = (__int64 *)gpwpiFirstWow;
    v27 = &gpwpiFirstWow;
    if ( gpwpiFirstWow )
    {
      while ( v26 != (__int64 *)v20 )
      {
        v27 = v26;
        v26 = (__int64 *)*v26;
        if ( !v26 )
          goto LABEL_105;
      }
      *v27 = *(_QWORD *)v20;
    }
LABEL_105:
    Win32FreePool(v20);
    *(_QWORD *)(a1 + 360) = 0LL;
  }
  v21 = *(_QWORD **)(a1 + 696);
  if ( v21 )
  {
    do
    {
      v23 = (_QWORD *)*v21;
      Win32FreePool((__int64)v21);
      v21 = v23;
    }
    while ( v23 );
  }
  *(_QWORD *)(a1 + 696) = 0LL;
  if ( (int)IsFreeProcessMessageFilterSupported() >= 0 )
    FreeProcessMessageFilter(a1);
  if ( a1 == gppiInputProvider )
    gppiInputProvider = 0LL;
  if ( a1 == gppiLockSFW )
    gppiLockSFW = 0LL;
  if ( *(_DWORD *)(a1 + 56) == gpidLogonUI )
  {
    gpidLogonUI = 0LL;
    gbLockScreenActive = 0;
    if ( (*(_DWORD *)(a1 + 812) & 0x40000) != 0 && (int)IsTransitionCursorSuppressionStateSupported() >= 0 )
    {
      TransitionCursorSuppressionState(2LL);
      *(_DWORD *)(a1 + 812) &= ~0x40000u;
    }
  }
  if ( *(_DWORD *)(a1 + 56) == gpidLogon )
    CleanupLogonProcess();
  GreSetDCOwnerEx((unsigned int)qword_1C01A2268, 0, 0, 0);
  DestroyProcessInfoEditionRundown(a1);
  RIMOnProcessDestroy(*(struct _LIST_ENTRY **)a1);
  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0(v22, &CompleteGuiProcessExecution, &W32kControlGuid);
  return v17;
}
