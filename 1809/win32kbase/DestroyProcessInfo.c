/*
 * XREFs of DestroyProcessInfo @ 0x1C0032CF4
 * Callers:
 *     xxxUserProcessCallout @ 0x1C002AEF0 (xxxUserProcessCallout.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002E66C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002E6B8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C002E730 (UnlockObjectAssignment.c)
 *     RIMOnProcessDestroy @ 0x1C0032C00 (RIMOnProcessDestroy.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003323C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0033270 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     CitProcessCallout @ 0x1C00332B0 (CitProcessCallout.c)
 *     IsShellProcess @ 0x1C00339DC (IsShellProcess.c)
 *     CloseProtectedHandle @ 0x1C0033A08 (CloseProtectedHandle.c)
 *     ClearAppStarting @ 0x1C0033B80 (ClearAppStarting.c)
 *     CleanupLogonProcess @ 0x1C005FCD0 (CleanupLogonProcess.c)
 *     DelayedDestroyCacheDC @ 0x1C008CA40 (DelayedDestroyCacheDC.c)
 *     PostWinlogonMessage @ 0x1C0097ED0 (PostWinlogonMessage.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00ACBC0 (GreCleanDCAndSetOwnerEx.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00E7E8C (EtwTraceScreenSaverProcessEvent.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C010F79C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  int v3; // eax
  __int64 i; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 k; // rax
  __int64 j; // rax
  HANDLE ProcessId; // rax
  int v10; // edx
  __int64 v11; // rax
  __int64 *v12; // rcx
  int v13; // eax
  unsigned int v14; // ebp
  __int64 *n; // rcx
  void *v16; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // rcx
  struct _MCGEN_TRACE_CONTEXT *v19; // rcx
  __int64 m; // rcx
  __int64 v22; // rdx
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
  v5 = *(_QWORD *)(a1 + 272);
  if ( v5 )
  {
    PsReleaseProcessWakeCounter(v5, 1LL);
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 832) && (int)IsDestroyProcessHidRequestsSupported() >= 0 )
    DestroyProcessHidRequests(a1);
  if ( *(_QWORD *)(a1 + 896) && (int)IsCleanupInjectedTouchProcessSupported() >= 0 )
    CleanupInjectedTouchProcess(a1);
  if ( *(_QWORD *)(a1 + 904) != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( *(_QWORD *)(a1 + 912) != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( (int)IsMSGSQMRemoveProcessSupported() >= 0 )
    MSGSQMRemoveProcess(a1);
  if ( (*(_DWORD *)(a1 + 12) & 0x40001) == 0x40000 )
  {
    v6 = *(_QWORD *)(a1 + 672);
    if ( (!v6 || (*(_DWORD *)(v6 + 32) & 2) == 0) && (int)IsPostPlaySoundMessageSupported() >= 0 )
      PostPlaySoundMessage(8LL);
  }
  if ( (unsigned int)IsShellProcess(a1) && *(_QWORD *)(a1 + 344) == grpdeskIODefault )
  {
    if ( (int)IsCleanupIAMAccessSupported() >= 0 )
      CleanupIAMAccess(*(_QWORD *)(a1 + 344));
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 672) + 32LL) & 2) == 0 )
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
      v22 = *(_QWORD *)(m + 8);
      if ( *(_QWORD *)(v22 + 176) == a1 )
        *(_QWORD *)(v22 + 176) = 0LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x40) != 0 )
  {
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    v10 = *(_DWORD *)&WPP_MAIN_CB.SectorSize;
    ghCanActivateForegroundPIDs[*(int *)&WPP_MAIN_CB.SectorSize] = ProcessId;
    *(_DWORD *)&WPP_MAIN_CB.SectorSize = v10 + 1;
    if ( v10 == 4 )
      *(_DWORD *)&WPP_MAIN_CB.SectorSize = 0;
    ClearAppStarting(a1);
  }
  v11 = gppiList;
  v12 = &gppiList;
  while ( v11 )
  {
    if ( v11 == a1 )
    {
      *v12 = *(_QWORD *)(a1 + 384);
      break;
    }
    v12 = (__int64 *)(v11 + 384);
    v11 = *(_QWORD *)(v11 + 384);
  }
  v13 = *(_DWORD *)(a1 + 12);
  v14 = v13 & 0x4000;
  if ( (v13 & 0x4000) != 0 && (v13 & 0x200) != 0 )
    DelayedDestroyCacheDC(1LL);
  if ( (int)IsGetgpPublicObjectListSupported(v12) >= 0 )
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
  UnlockObjectAssignment((void **)(a1 + 672));
  UnlockObjectAssignment((void **)(a1 + 344));
  v16 = *(void **)(a1 + 400);
  if ( v16 )
  {
    CloseProtectedHandle(v16);
    *(_QWORD *)(a1 + 400) = 0LL;
  }
  *(_DWORD *)(a1 + 12) |= 0x1000u;
  v17 = *(_QWORD *)(a1 + 368);
  if ( v17 )
  {
    ObfDereferenceObject(*(PVOID *)(v17 + 32));
    v26 = (__int64 *)gpwpiFirstWow;
    v27 = &gpwpiFirstWow;
    if ( gpwpiFirstWow )
    {
      while ( v26 != (__int64 *)v17 )
      {
        v27 = v26;
        v26 = (__int64 *)*v26;
        if ( !v26 )
          goto LABEL_108;
      }
      *v27 = *(_QWORD *)v17;
    }
LABEL_108:
    Win32FreePool(v17);
    *(_QWORD *)(a1 + 368) = 0LL;
  }
  v18 = *(_QWORD **)(a1 + 704);
  if ( v18 )
  {
    do
    {
      v23 = (_QWORD *)*v18;
      Win32FreePool((__int64)v18);
      v18 = v23;
    }
    while ( v23 );
  }
  *(_QWORD *)(a1 + 704) = 0LL;
  if ( (int)IsFreeProcessMessageFilterSupported() >= 0 )
    FreeProcessMessageFilter(a1);
  if ( a1 == gppiInputProvider )
    gppiInputProvider = 0LL;
  if ( a1 == gppiLockSFW )
    gppiLockSFW = 0LL;
  if ( *(_DWORD *)(a1 + 56) == gpidLogonUI )
  {
    gpidLogonUI = 0LL;
    WPP_MAIN_CB.ActiveThreadCount = 0;
    if ( (*(_DWORD *)(a1 + 820) & 0x40000) != 0 && (int)IsTransitionCursorSuppressionStateSupported() >= 0 )
    {
      TransitionCursorSuppressionState(2LL);
      *(_DWORD *)(a1 + 820) &= ~0x40000u;
    }
  }
  if ( *(_DWORD *)(a1 + 56) == gpidLogon )
    CleanupLogonProcess();
  GreCleanDCAndSetOwnerEx(qword_1C01CFD38);
  DestroyProcessInfoEditionRundown(a1);
  RIMOnProcessDestroy(*(struct _LIST_ENTRY **)a1);
  LOBYTE(v19) = BYTE1(Microsoft_Windows_Win32kEnableBits);
  if ( SBYTE1(Microsoft_Windows_Win32kEnableBits) < 0 )
    McTemplateK0(v19, &CompleteGuiProcessExecution, (const GUID *)&Context.Flags);
  return v14;
}
