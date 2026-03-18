/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C001F1B4
 * Callers:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C0028C98 (xxxFlushDeferredWindowEvents.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 * Callees:
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C001B448 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     xxxClientCallWinEventProc @ 0x1C001F5DC (xxxClientCallWinEventProc.c)
 *     ?RemoveNotify@@YAXPEAPEAUtagNOTIFY@@@Z @ 0x1C0020C7C (-RemoveNotify@@YAXPEAPEAUtagNOTIFY@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0042B50 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     DestroyNotify @ 0x1C00D8D68 (DestroyNotify.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rbp
  __int64 *ThreadWin32Thread; // rax
  int v6; // r15d
  __int64 v7; // rdi
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  __int16 ProcessMachine; // bx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // rdx
  int v21; // eax
  int v22; // ecx
  __int16 v23; // bx
  __int64 v25; // rbx
  struct _KTHREAD *v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rax
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // rbp
  unsigned int v33; // r14d
  unsigned int DLT; // eax
  __int64 v35; // rcx
  tagObjLock *DomainLockRef; // rbx
  struct tagNOTIFY **v37; // rax
  struct tagNOTIFY **v38; // rcx
  _QWORD v39[4]; // [rsp+40h] [rbp-48h] BYREF
  int ProcessInformation; // [rsp+90h] [rbp+8h] BYREF
  char v41; // [rsp+94h] [rbp+Ch]
  char v42; // [rsp+98h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a1 + 48) & 0xC) == 4 )
    goto LABEL_22;
  v8 = *(_DWORD *)(v4 + 480);
  if ( (v8 & 0xD) != 0 )
    goto LABEL_22;
  if ( !gbEnforceUIPI )
  {
    v9 = *(_QWORD *)(v4 + 416);
    v10 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL);
    if ( (*(_DWORD *)(v10 + 772) != *(_DWORD *)(v9 + 772) || *(_DWORD *)(v10 + 776) != *(_DWORD *)(v9 + 776))
      && (v8 & 0x400000) == 0 )
    {
      goto LABEL_22;
    }
  }
  v11 = *(_QWORD **)(v7 + 16);
  if ( v11[52] != *(_QWORD *)(v4 + 416) )
  {
    if ( (unsigned __int8)IsRestricted(*v11) )
      goto LABEL_22;
  }
  v12 = *(_QWORD *)(v7 + 16);
  v13 = *(_DWORD *)(v4 + 480) & 0x100;
  if ( (*(_DWORD *)(v12 + 480) & 0x100) != v13 )
    goto LABEL_22;
  if ( v13 )
  {
    ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v12 + 416));
    if ( (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v4 + 416)) != ProcessMachine )
      goto LABEL_22;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(v4 + 416) + 872LL);
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL) + 872LL);
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)v16 <= (unsigned int)v15 )
    {
      if ( (_DWORD)v16 != (_DWORD)v15
        || (v15 >>= 32, v16 >>= 32, (_DWORD)v16 != (_DWORD)v15) && (_DWORD)v16 != -1 && (_DWORD)v15 != -1 )
      {
        v6 = 1;
LABEL_22:
        v17 = *(_QWORD *)(v7 + 16);
        v18 = *(_QWORD *)(v7 + 24);
        v19 = *(_QWORD *)(v17 + 424);
        if ( v6 )
          EtwTraceUIPIEventHookError(a1, v17, v4);
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v42);
        *(_DWORD *)(a1 + 48) |= 0xCu;
        if ( !v19
          || (v20 = *(_QWORD *)(v7 + 16), v20 == gptiRit)
          || (v21 = *(_DWORD *)(v7 + 40), (v21 & 1) != 0)
          || (v21 & 0x10) != 0
          && ((v22 = *(_DWORD *)(v4 + 480) & 0x100, (*(_DWORD *)(v20 + 480) & 0x100) != v22)
           || v22
           && (v23 = PsWow64GetProcessMachine(**(_QWORD **)(v20 + 416)),
               (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v4 + 416)) != v23))
          || !(unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v7 + 16), v19, 0xCu, 0LL, 0, 0LL, a1, 0LL) )
        {
          DestroyNotify(a1);
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v42);
        return v18;
      }
    }
  }
  if ( (!*(_DWORD *)(v7 + 56) || !*(_QWORD *)(v7 + 48))
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL)) )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL);
    if ( *(int *)(v15 + 12) >= 0 )
    {
      v16 = *(_QWORD *)(v4 + 416);
      if ( v15 != v16 && (*(_DWORD *)(v15 + 812) & 0x100) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v16) )
          goto LABEL_22;
        ProcessInformation = 6;
        if ( ZwQueryInformationProcess(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               ProcessCookie|ProcessUserModeIOPL,
               &ProcessInformation,
               8u,
               0LL) < 0
          || (v41 & 1) != 0 )
        {
          goto LABEL_22;
        }
      }
    }
  }
  if ( (*(_DWORD *)(v7 + 40) & 1) != 0 )
  {
    v25 = *(_QWORD *)(v7 + 24);
    DestroyNotify(a1);
  }
  else
  {
    v26 = KeGetCurrentThread();
    v27 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v15) )
    {
      v31 = (__int64 *)PsGetThreadWin32Thread(v26);
      if ( v31 )
        v27 = *v31;
    }
    v39[0] = *(_QWORD *)(v27 + 408);
    *(_QWORD *)(v27 + 408) = v39;
    v39[1] = v7;
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    *(_QWORD *)(a1 + 56) = v4;
    if ( (*(_DWORD *)(v7 + 40) & 8) != 0 )
      EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v7);
    else
      EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v7 + 64);
    if ( EventProc )
    {
      v33 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v7 + 88));
      DLT = DLT_WINEVENT::getDLT();
      DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
      if ( DomainLockRef == (tagObjLock *)gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
      tagObjLock::UnLock(DomainLockRef);
      xxxClientCallWinEventProc(EventProc, v7, a1);
      tagObjLock::LockExclusive(DomainLockRef);
      W32SetCurrentThreadDpiAwarenessContext(v33);
    }
    *(_QWORD *)(a1 + 56) = 0LL;
    v25 = *(_QWORD *)(v7 + 24);
    ThreadUnlock1(v29, v28, v30);
    v37 = gpPendingNotifies;
    v38 = (struct tagNOTIFY **)&gpPendingNotifies;
    while ( v37 )
    {
      if ( v37 == (struct tagNOTIFY **)a1 )
      {
        RemoveNotify(v38);
        return v25;
      }
      v38 = v37;
      v37 = (struct tagNOTIFY **)*v37;
    }
  }
  return v25;
}
