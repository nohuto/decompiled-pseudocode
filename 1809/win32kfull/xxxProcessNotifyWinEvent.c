/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C00190F0
 * Callers:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C0109E58 (xxxFlushDeferredWindowEvents.c)
 * Callees:
 *     xxxClientCallWinEventProc @ 0x1C0019610 (xxxClientCallWinEventProc.c)
 *     ??0?$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C001A854 (--0-$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C001B544 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C002B480 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rsi
  int v6; // r15d
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  int v12; // ecx
  __int16 ProcessMachine; // bx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // rdx
  int v20; // eax
  int v21; // ecx
  __int16 v22; // bx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  _QWORD *v27; // rdx
  struct _KTHREAD *v29; // r14
  __int64 v30; // rbx
  __int64 *v31; // rax
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // rbp
  unsigned int v33; // ebx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD v36[11]; // [rsp+40h] [rbp-58h] BYREF
  int ProcessInformation; // [rsp+A0h] [rbp+8h] BYREF
  char v38; // [rsp+A4h] [rbp+Ch]
  tagObjLock *v39; // [rsp+A8h] [rbp+10h] BYREF
  char v40; // [rsp+B0h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  if ( !(unsigned int)((__int64 (*)(void))IsThreadCrossSessionAttached)() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  if ( (*(_DWORD *)(a1 + 56) & 0xC) == 4 )
    goto LABEL_22;
  v7 = *(_DWORD *)(v2 + 488);
  if ( (v7 & 0xD) != 0 )
    goto LABEL_22;
  if ( !gbEnforceUIPI )
  {
    v8 = *(_QWORD *)(v2 + 424);
    v9 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL);
    if ( (*(_DWORD *)(v9 + 780) != *(_DWORD *)(v8 + 780) || *(_DWORD *)(v9 + 784) != *(_DWORD *)(v8 + 784))
      && (v7 & 0x400000) == 0 )
    {
      goto LABEL_22;
    }
  }
  v10 = *(_QWORD **)(v5 + 16);
  if ( v10[53] != *(_QWORD *)(v2 + 424) )
  {
    if ( (unsigned __int8)IsRestricted(*v10) )
      goto LABEL_22;
  }
  v11 = *(_QWORD *)(v5 + 16);
  v12 = *(_DWORD *)(v2 + 488) & 0x100;
  if ( (*(_DWORD *)(v11 + 488) & 0x100) != v12 )
    goto LABEL_22;
  if ( v12 )
  {
    ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v11 + 424));
    if ( (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v2 + 424)) != ProcessMachine )
      goto LABEL_22;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v2 + 424) + 880LL);
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) + 880LL);
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)v15 <= (unsigned int)v14 )
    {
      if ( (_DWORD)v15 != (_DWORD)v14
        || (v14 >>= 32, v15 >>= 32, (_DWORD)v15 != (_DWORD)v14) && (_DWORD)v15 != -1 && (_DWORD)v14 != -1 )
      {
        v6 = 1;
LABEL_22:
        v16 = *(_QWORD *)(v5 + 16);
        v17 = *(_QWORD *)(v5 + 24);
        v18 = *(_QWORD *)(v16 + 432);
        if ( v6 )
          EtwTraceUIPIEventHookError(a1, v16, v2);
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v40);
        *(_DWORD *)(a1 + 56) |= 0xCu;
        if ( v18 )
        {
          v19 = *(_QWORD *)(v5 + 16);
          if ( v19 != gptiRit )
          {
            v20 = *(_DWORD *)(v5 + 40);
            if ( (v20 & 1) == 0 )
            {
              if ( (v20 & 0x10) == 0
                || (v21 = *(_DWORD *)(v2 + 488) & 0x100, (*(_DWORD *)(v19 + 488) & 0x100) == v21)
                && (!v21
                 || (v22 = PsWow64GetProcessMachine(**(_QWORD **)(v19 + 424)),
                     (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v2 + 424)) == v22)) )
              {
                if ( (unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v5 + 16), 0, 0LL, a1, 0LL) )
                  goto LABEL_69;
              }
            }
          }
        }
        v23 = *(_QWORD *)a1;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) == a1 )
        {
          v24 = *(_QWORD **)(a1 + 8);
          if ( *v24 == a1 )
          {
            *v24 = v23;
            *(_QWORD *)(v23 + 8) = v24;
            *(_QWORD *)(a1 + 8) = a1;
            *(_QWORD *)a1 = a1;
            if ( !*(_DWORD *)(a1 + 24) )
              HMAssignmentUnlock(a1 + 16);
            if ( (_UNKNOWN *)a1 == &unk_1C0319760 )
              dword_1C03171D8 = 0;
            else
              Win32FreePool(a1);
LABEL_69:
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v40);
            return v17;
          }
        }
LABEL_70:
        __fastfail(3u);
      }
    }
  }
  if ( (!*(_DWORD *)(v5 + 56) || !*(_QWORD *)(v5 + 48))
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL)) )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL);
    if ( *(int *)(v14 + 12) >= 0 )
    {
      v15 = *(_QWORD *)(v2 + 424);
      if ( v14 != v15 && (*(_DWORD *)(v14 + 820) & 0x100) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v15) )
          goto LABEL_22;
        ProcessInformation = 6;
        if ( ZwQueryInformationProcess(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               ProcessCookie|ProcessUserModeIOPL,
               &ProcessInformation,
               8u,
               0LL) < 0
          || (v38 & 1) != 0 )
        {
          goto LABEL_22;
        }
      }
    }
  }
  if ( (*(_DWORD *)(v5 + 40) & 1) != 0 )
  {
    v25 = *(_QWORD *)a1;
    v26 = *(_QWORD *)(v5 + 24);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
      goto LABEL_70;
    v27 = *(_QWORD **)(a1 + 8);
    if ( *v27 != a1 )
      goto LABEL_70;
    *v27 = v25;
    *(_QWORD *)(v25 + 8) = v27;
  }
  else
  {
    v29 = KeGetCurrentThread();
    v30 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14) )
    {
      v31 = (__int64 *)PsGetThreadWin32Thread(v29);
      if ( v31 )
        v30 = *v31;
    }
    v36[0] = *(_QWORD *)(v30 + 416);
    *(_QWORD *)(v30 + 416) = v36;
    v36[1] = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *(_QWORD *)(a1 + 64) = v2;
    if ( (*(_DWORD *)(v5 + 40) & 8) != 0 )
      EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v5);
    else
      EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v5 + 64);
    if ( EventProc )
    {
      v33 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v5 + 88));
      CUnLockDomainExclusive<DLT_WINEVENT>::CUnLockDomainExclusive<DLT_WINEVENT>(&v39);
      xxxClientCallWinEventProc(EventProc, v5, a1);
      tagObjLock::LockExclusive(v39);
      W32SetCurrentThreadDpiAwarenessContext(v33);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    v26 = *(_QWORD *)(v5 + 24);
    ThreadUnlock1();
    v34 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
      goto LABEL_70;
    v35 = *(_QWORD **)(a1 + 8);
    if ( *v35 != a1 )
      goto LABEL_70;
    *v35 = v34;
    *(_QWORD *)(v34 + 8) = v35;
  }
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
  if ( !*(_DWORD *)(a1 + 24) )
    HMAssignmentUnlock(a1 + 16);
  if ( (_UNKNOWN *)a1 == &unk_1C0319760 )
    dword_1C03171D8 = 0;
  else
    Win32FreePool(a1);
  return v26;
}
