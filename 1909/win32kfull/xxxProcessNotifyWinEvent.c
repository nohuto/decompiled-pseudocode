/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C004E6B8
 * Callers:
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00EDCC8 (xxxFlushDeferredWindowEvents.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00446E0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     xxxClientCallWinEventProc @ 0x1C004EBB8 (xxxClientCallWinEventProc.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C004F4E0 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C0050164 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rsi
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  int v14; // ecx
  __int16 ProcessMachine; // bx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // rdx
  int v23; // eax
  int v24; // ecx
  __int16 v25; // bx
  __int64 v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 *v30; // rdx
  struct _KTHREAD *v32; // r15
  __int64 v33; // rbx
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // r14
  unsigned int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 *v43; // rax
  __int64 v44; // [rsp+40h] [rbp-20h] BYREF
  __int64 v45; // [rsp+48h] [rbp-18h]
  __int64 v46; // [rsp+50h] [rbp-10h]
  __int64 ProcessInformation; // [rsp+A0h] [rbp+40h] BYREF
  tagDomLock *v48; // [rsp+A8h] [rbp+48h] BYREF
  char v49; // [rsp+B0h] [rbp+50h] BYREF

  v44 = 0LL;
  v4 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 56) & 0xC) == 4 || (*(_DWORD *)(v4 + 480) & 0xD) != 0 )
    goto LABEL_17;
  if ( !(unsigned __int8)Enforced(v6) )
  {
    v10 = *(_QWORD *)(v4 + 416);
    v11 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL);
    if ( (*(_DWORD *)(v11 + 772) != *(_DWORD *)(v10 + 772) || *(_DWORD *)(v11 + 776) != *(_DWORD *)(v10 + 776))
      && (*(_DWORD *)(v4 + 480) & 0x400000) == 0 )
    {
      goto LABEL_17;
    }
  }
  v12 = *(_QWORD **)(v8 + 16);
  if ( v12[52] != *(_QWORD *)(v4 + 416) )
  {
    if ( (unsigned __int8)IsRestricted(*v12) )
      goto LABEL_17;
  }
  v13 = *(_QWORD *)(v8 + 16);
  v14 = *(_DWORD *)(v4 + 480) & 0x100;
  if ( (*(_DWORD *)(v13 + 480) & 0x100) != v14 )
    goto LABEL_17;
  if ( v14 )
  {
    ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v13 + 416));
    if ( (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v4 + 416)) != ProcessMachine )
      goto LABEL_17;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) + 872LL, *(_QWORD *)(v4 + 416) + 872LL) )
  {
    v9 = 1;
LABEL_17:
    v19 = *(_QWORD *)(v8 + 16);
    v20 = *(_QWORD *)(v8 + 24);
    v21 = *(_QWORD *)(v19 + 424);
    if ( v9 )
      EtwTraceUIPIEventHookError(a1, v19, v4);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v49);
    *(_DWORD *)(a1 + 56) |= 0xCu;
    if ( v21 )
    {
      v22 = *(_QWORD *)(v8 + 16);
      if ( v22 != gptiRit )
      {
        v23 = *(_DWORD *)(v8 + 40);
        if ( (v23 & 1) == 0 )
        {
          if ( (v23 & 0x10) == 0
            || (v24 = *(_DWORD *)(v4 + 480) & 0x100, (*(_DWORD *)(v22 + 480) & 0x100) == v24)
            && (!v24
             || (v25 = PsWow64GetProcessMachine(**(_QWORD **)(v22 + 416)),
                 (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v4 + 416)) == v25)) )
          {
            if ( (unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v8 + 16), v21, 0xCu, 0LL, 0, 0LL, a1, 0LL) )
              goto LABEL_64;
          }
        }
      }
    }
    v26 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) == a1 )
    {
      v27 = *(__int64 **)(a1 + 8);
      if ( *v27 == a1 )
      {
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        *(_QWORD *)(a1 + 8) = a1;
        *(_QWORD *)a1 = a1;
        if ( !*(_DWORD *)(a1 + 24) )
          HMAssignmentUnlock(a1 + 16);
        if ( (__int64 *)a1 == &qword_1C032BDE0 )
          dword_1C032A200 = 0;
        else
          Win32FreePool(a1);
LABEL_64:
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v49);
        return v20;
      }
    }
LABEL_65:
    __fastfail(3u);
  }
  if ( (!*(_DWORD *)(v8 + 56) || !*(_QWORD *)(v8 + 48))
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL)) )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL);
    if ( *(int *)(v16 + 12) >= 0 )
    {
      v17 = *(_QWORD *)(v4 + 416);
      if ( v16 != v17 && (*(_DWORD *)(v16 + 812) & 0x100) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v17) )
          goto LABEL_17;
        ProcessInformation = 6LL;
        if ( ZwQueryInformationProcess(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               ProcessCookie|ProcessUserModeIOPL,
               &ProcessInformation,
               8u,
               0LL) < 0
          || (ProcessInformation & 0x100000000LL) != 0 )
        {
          goto LABEL_17;
        }
      }
    }
  }
  if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
  {
    v28 = *(_QWORD *)a1;
    v29 = *(_QWORD *)(v8 + 24);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
      goto LABEL_65;
    v30 = *(__int64 **)(a1 + 8);
    if ( *v30 != a1 )
      goto LABEL_65;
    *v30 = v28;
    *(_QWORD *)(v28 + 8) = v30;
  }
  else
  {
    v32 = KeGetCurrentThread();
    v33 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16, v18) )
    {
      v34 = (__int64 *)PsGetThreadWin32Thread(v32);
      if ( v34 )
        v33 = *v34;
    }
    v44 = *(_QWORD *)(v33 + 408);
    *(_QWORD *)(v33 + 408) = &v44;
    v45 = v8;
    HMLockObject(v8);
    *(_QWORD *)(a1 + 64) = v4;
    if ( (*(_DWORD *)(v8 + 40) & 8) != 0 )
      EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v8);
    else
      EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v8 + 64);
    if ( EventProc )
    {
      v39 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v8 + 88), v35, v37);
      CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v48);
      xxxClientCallWinEventProc(EventProc, v8, a1);
      tagDomLock::LockExclusive(v48);
      W32SetCurrentThreadDpiAwarenessContext(v39, v40, v41);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    v29 = *(_QWORD *)(v8 + 24);
    ThreadUnlock1(v36, v35, v37);
    v42 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
      goto LABEL_65;
    v43 = *(__int64 **)(a1 + 8);
    if ( *v43 != a1 )
      goto LABEL_65;
    *v43 = v42;
    *(_QWORD *)(v42 + 8) = v43;
  }
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
  if ( !*(_DWORD *)(a1 + 24) )
    HMAssignmentUnlock(a1 + 16);
  if ( (__int64 *)a1 == &qword_1C032BDE0 )
    dword_1C032A200 = 0;
  else
    Win32FreePool(a1);
  return v29;
}
