/*
 * XREFs of DestroyProcessInfo @ 0x1C0035D10
 * Callers:
 *     xxxUserProcessCallout @ 0x1C002CAF0 (xxxUserProcessCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     GreSetDCOwnerEx @ 0x1C001AF00 (GreSetDCOwnerEx.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     DelayedDestroyCacheDC @ 0x1C002B920 (DelayedDestroyCacheDC.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003009C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00300E8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C00342F0 (UnlockObjectAssignment.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0035C9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0035CD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     CitProcessCallout @ 0x1C003625C (CitProcessCallout.c)
 *     RIMOnProcessDestroy @ 0x1C0036E00 (RIMOnProcessDestroy.c)
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C0037250 (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     ?OnProcessTermination@CActivationObject@@SAXXZ @ 0x1C0037350 (-OnProcessTermination@CActivationObject@@SAXXZ.c)
 *     IsShellProcess @ 0x1C003740C (IsShellProcess.c)
 *     CloseProtectedHandle @ 0x1C0037438 (CloseProtectedHandle.c)
 *     ClearAppStarting @ 0x1C00375B0 (ClearAppStarting.c)
 *     GiveForegroundActivateRight @ 0x1C0037820 (GiveForegroundActivateRight.c)
 *     PostWinlogonMessage @ 0x1C00679D0 (PostWinlogonMessage.c)
 *     CleanupLogonProcess @ 0x1C00A7E80 (CleanupLogonProcess.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C010BADC (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C013813C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(_QWORD *a1)
{
  struct _KEVENT *v2; // rcx
  int v3; // eax
  __int64 i; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 k; // rax
  __int64 j; // rax
  HANDLE ProcessId; // rax
  __int64 *v12; // rcx
  __int64 n; // rax
  int v14; // eax
  unsigned int v15; // ebp
  __int64 *ii; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  void *v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 m; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rbx
  NTSTATUS ProcessExitStatus; // eax
  NTSTATUS v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 *v40; // rcx
  __int64 *v41; // rdx
  __int64 *v42; // [rsp+50h] [rbp+8h] BYREF

  CitProcessCallout(a1, 0LL);
  v2 = (struct _KEVENT *)a1[2];
  if ( v2 != (struct _KEVENT *)-1LL )
  {
    if ( !v2 )
      goto LABEL_3;
    KeSetEvent(v2, 1, 0);
    ObfDereferenceObject((PVOID)a1[2]);
  }
  a1[2] = 0LL;
LABEL_3:
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v42);
  ++gdwDeferWinEvent;
  v3 = *((_DWORD *)a1 + 3);
  if ( (v3 & 4) != 0 )
  {
    *((_DWORD *)a1 + 3) = v3 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
      zzzCalcStartCursorHide(0LL, 0LL);
  }
  --gdwDeferWinEvent;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v42);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v42, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      if ( *(_QWORD **)(j + 256) == a1 )
        *(_QWORD *)(j + 256) = 0LL;
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v42);
  if ( (*((_DWORD *)a1 + 3) & 0x8000) == 0 )
    return 0LL;
  PsUpdateComponentPower(*a1, 6LL);
  v7 = a1[34];
  if ( v7 )
  {
    PsReleaseProcessWakeCounter(v7, 1LL);
    a1[34] = 0LL;
  }
  GetDomainLockRef(15LL, v5, v6);
  if ( a1[103] && (int)IsDestroyProcessHidRequestsSupported() >= 0 )
    DestroyProcessHidRequests(a1);
  if ( a1[111] && (int)IsCleanupInjectedTouchProcessSupported() >= 0 )
    CleanupInjectedTouchProcess(a1);
  if ( a1[112] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( a1[113] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( (int)IsMSGSQMRemoveProcessSupported() >= 0 )
    MSGSQMRemoveProcess(a1);
  if ( (*((_DWORD *)a1 + 3) & 0x40001) == 0x40000 )
  {
    v8 = a1[83];
    if ( (!v8 || (*(_DWORD *)(v8 + 32) & 2) == 0) && (int)IsPostPlaySoundMessageSupported() >= 0 )
      PostPlaySoundMessage(8LL);
  }
  if ( (unsigned int)IsShellProcess(a1) && a1[42] == grpdeskIODefault )
  {
    if ( (int)IsCleanupIAMAccessSupported() >= 0 )
      CleanupIAMAccess(a1[42]);
    if ( (*(_DWORD *)(a1[83] + 32LL) & 2) == 0 )
    {
      ProcessExitStatus = PsGetProcessExitStatus((PEPROCESS)*a1);
      if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
      {
        v36 = PsGetProcessExitStatus((PEPROCESS)*a1);
        PostWinlogonMessage(1025LL, v36);
      }
    }
  }
  for ( k = grpWinStaList; k; k = *(_QWORD *)(k + 8) )
  {
    for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
    {
      v33 = *(_QWORD *)(m + 8);
      if ( *(_QWORD **)(v33 + 176) == a1 )
        *(_QWORD *)(v33 + 176) = 0LL;
    }
  }
  if ( (*((_DWORD *)a1 + 3) & 0x40) != 0 )
  {
    ProcessId = PsGetProcessId((PEPROCESS)*a1);
    GiveForegroundActivateRight(ProcessId);
    ClearAppStarting(a1);
  }
  v12 = &gppiList;
  for ( n = gppiList; n; n = *(_QWORD *)(n + 376) )
  {
    if ( (_QWORD *)n == a1 )
    {
      *v12 = a1[47];
      break;
    }
    v12 = (__int64 *)(n + 376);
  }
  v14 = *((_DWORD *)a1 + 3);
  v15 = v14 & 0x4000;
  if ( (v14 & 0x4000) != 0 && (v14 & 0x200) != 0 )
    DelayedDestroyCacheDC(1);
  if ( (int)IsGetgpPublicObjectListSupported(v12) >= 0 )
  {
    GetgpPublicObjectList(&v42);
    for ( ii = v42; ii; ii = (__int64 *)*ii )
    {
      if ( *((_DWORD *)ii + 5) == *((_DWORD *)a1 + 14) )
        *((_DWORD *)ii + 5) = 0;
    }
  }
  if ( (_QWORD *)gppiScreenSaver == a1 )
  {
    gppiScreenSaver = 0LL;
    EtwTraceScreenSaverProcessEvent(2LL);
  }
  CActivationObject::OnProcessTermination();
  InputObjectMap::OnProcessTermination();
  if ( (_QWORD *)gppiUserApiHook == a1 && (int)Is_UnregisterUserApiHookSupported(v18, v17, v19) >= 0 )
    _UnregisterUserApiHook(v18, v17, v19);
  if ( (_QWORD *)gppiDManipHook == a1 && (int)Is_UnregisterDManipHookSupported(v18, v17, v19) >= 0 )
    _UnregisterDManipHook(v38, v37, v39);
  UnlockObjectAssignment((void **)a1 + 83);
  UnlockObjectAssignment((void **)a1 + 42);
  v22 = (void *)a1[49];
  if ( v22 )
  {
    CloseProtectedHandle(v22);
    a1[49] = 0LL;
  }
  *((_DWORD *)a1 + 3) |= 0x1000u;
  v23 = a1[45];
  if ( v23 )
  {
    ObfDereferenceObject(*(PVOID *)(v23 + 32));
    v40 = (__int64 *)gpwpiFirstWow;
    v41 = &gpwpiFirstWow;
    if ( gpwpiFirstWow )
    {
      while ( v40 != (__int64 *)v23 )
      {
        v41 = v40;
        v40 = (__int64 *)*v40;
        if ( !v40 )
          goto LABEL_104;
      }
      *v41 = *(_QWORD *)v23;
    }
LABEL_104:
    Win32FreePool(v23);
    a1[45] = 0LL;
  }
  GetDomainLockRef(2LL, v20, v21);
  v26 = (_QWORD *)a1[87];
  if ( v26 )
  {
    do
    {
      v34 = (_QWORD *)*v26;
      Win32FreePool((__int64)v26);
      v26 = v34;
    }
    while ( v34 );
  }
  a1[87] = 0LL;
  if ( (int)IsFreeProcessMessageFilterSupported(v26, v24, v25) >= 0 )
    FreeProcessMessageFilter(a1);
  if ( a1 == (_QWORD *)gppiInputProvider )
    gppiInputProvider = 0LL;
  if ( a1 == (_QWORD *)gppiLockSFW )
    gppiLockSFW = 0LL;
  if ( *((_DWORD *)a1 + 14) == gpidLogonUI )
  {
    gpidLogonUI = 0LL;
    gbLockScreenActive = 0;
    if ( (*((_DWORD *)a1 + 203) & 0x80000) != 0 && (int)IsTransitionCursorSuppressionStateSupported(v28, v27, v29) >= 0 )
    {
      TransitionCursorSuppressionState(2LL);
      *((_DWORD *)a1 + 203) &= ~0x80000u;
    }
  }
  if ( *((_DWORD *)a1 + 14) == gpidLogon )
    CleanupLogonProcess(v28, v27, v29);
  GreSetDCOwnerEx((unsigned int)qword_1C0215948, 0, 0, 1u);
  DestroyProcessInfoEditionRundown(a1);
  RIMOnProcessDestroy(*a1);
  LOBYTE(v30) = BYTE1(Microsoft_Windows_Win32kEnableBits);
  if ( SBYTE1(Microsoft_Windows_Win32kEnableBits) < 0 )
    McTemplateK0(v30, &CompleteGuiProcessExecution, &Context.Flags);
  return v15;
}
