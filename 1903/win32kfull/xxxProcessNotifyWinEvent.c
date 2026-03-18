/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C00AD898
 * Callers:
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C0113978 (xxxFlushDeferredWindowEvents.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00A3910 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     xxxClientCallWinEventProc @ 0x1C00ADD98 (xxxClientCallWinEventProc.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00AE6C0 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00AF344 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rsi
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  __int16 ProcessMachine; // bx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // rdx
  int v25; // eax
  int v26; // ecx
  __int16 v27; // bx
  __int64 v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 *v32; // rdx
  struct _KTHREAD *v34; // r15
  __int64 v35; // rbx
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // r14
  unsigned int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 *v47; // rax
  __int64 v48; // [rsp+40h] [rbp-20h] BYREF
  __int64 v49; // [rsp+48h] [rbp-18h]
  __int64 v50; // [rsp+50h] [rbp-10h]
  __int64 ProcessInformation; // [rsp+A0h] [rbp+40h] BYREF
  tagDomLock *v52; // [rsp+A8h] [rbp+48h] BYREF
  char v53; // [rsp+B0h] [rbp+50h] BYREF

  v48 = 0LL;
  v5 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 56) & 0xC) == 4 || (*(_DWORD *)(v5 + 480) & 0xD) != 0 )
    goto LABEL_17;
  if ( !(unsigned __int8)Enforced(v7) )
  {
    v11 = *(_QWORD *)(v5 + 416);
    v12 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 416LL);
    if ( (*(_DWORD *)(v12 + 772) != *(_DWORD *)(v11 + 772) || *(_DWORD *)(v12 + 776) != *(_DWORD *)(v11 + 776))
      && (*(_DWORD *)(v5 + 480) & 0x400000) == 0 )
    {
      goto LABEL_17;
    }
  }
  v13 = *(_QWORD **)(v9 + 16);
  if ( v13[52] != *(_QWORD *)(v5 + 416) )
  {
    if ( (unsigned __int8)IsRestricted(*v13) )
      goto LABEL_17;
  }
  v14 = *(_QWORD *)(v9 + 16);
  v15 = *(_DWORD *)(v5 + 480) & 0x100;
  if ( (*(_DWORD *)(v14 + 480) & 0x100) != v15 )
    goto LABEL_17;
  if ( v15 )
  {
    ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v14 + 416));
    if ( (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v5 + 416)) != ProcessMachine )
      goto LABEL_17;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 416LL) + 872LL, *(_QWORD *)(v5 + 416) + 872LL) )
  {
    v10 = 1;
LABEL_17:
    v21 = *(_QWORD *)(v9 + 16);
    v22 = *(_QWORD *)(v9 + 24);
    v23 = *(_QWORD *)(v21 + 424);
    if ( v10 )
      EtwTraceUIPIEventHookError(a1, v21, v5);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v53);
    *(_DWORD *)(a1 + 56) |= 0xCu;
    if ( v23 )
    {
      v24 = *(_QWORD *)(v9 + 16);
      if ( v24 != gptiRit )
      {
        v25 = *(_DWORD *)(v9 + 40);
        if ( (v25 & 1) == 0 )
        {
          if ( (v25 & 0x10) == 0
            || (v26 = *(_DWORD *)(v5 + 480) & 0x100, (*(_DWORD *)(v24 + 480) & 0x100) == v26)
            && (!v26
             || (v27 = PsWow64GetProcessMachine(**(_QWORD **)(v24 + 416)),
                 (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v5 + 416)) == v27)) )
          {
            if ( (unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v9 + 16), v23, 0xCu, 0LL, 0, 0LL, a1, 0LL) )
              goto LABEL_64;
          }
        }
      }
    }
    v28 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) == a1 )
    {
      v29 = *(__int64 **)(a1 + 8);
      if ( *v29 == a1 )
      {
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        *(_QWORD *)(a1 + 8) = a1;
        *(_QWORD *)a1 = a1;
        if ( !*(_DWORD *)(a1 + 24) )
          HMAssignmentUnlock(a1 + 16);
        if ( (__int64 *)a1 == &qword_1C032DDF0 )
          dword_1C032C208 = 0;
        else
          Win32FreePool(a1);
LABEL_64:
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v53);
        return v22;
      }
    }
LABEL_65:
    __fastfail(3u);
  }
  if ( (!*(_DWORD *)(v9 + 56) || !*(_QWORD *)(v9 + 48))
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 416LL)) )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 416LL);
    if ( *(int *)(v17 + 12) >= 0 )
    {
      v18 = *(_QWORD *)(v5 + 416);
      if ( v17 != v18 && (*(_DWORD *)(v17 + 812) & 0x100) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v18) )
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
  if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
  {
    v30 = *(_QWORD *)a1;
    v31 = *(_QWORD *)(v9 + 24);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
      goto LABEL_65;
    v32 = *(__int64 **)(a1 + 8);
    if ( *v32 != a1 )
      goto LABEL_65;
    *v32 = v30;
    *(_QWORD *)(v30 + 8) = v32;
  }
  else
  {
    v34 = KeGetCurrentThread();
    v35 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17, v19, v20) )
    {
      v36 = (__int64 *)PsGetThreadWin32Thread(v34);
      if ( v36 )
        v35 = *v36;
    }
    v48 = *(_QWORD *)(v35 + 408);
    *(_QWORD *)(v35 + 408) = &v48;
    v49 = v9;
    HMLockObject(v9);
    *(_QWORD *)(a1 + 64) = v5;
    if ( (*(_DWORD *)(v9 + 40) & 8) != 0 )
      EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v9);
    else
      EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v9 + 64);
    if ( EventProc )
    {
      v42 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v9 + 88), v37, v39, v40);
      CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v52);
      xxxClientCallWinEventProc(EventProc, v9, a1);
      tagDomLock::LockExclusive(v52);
      W32SetCurrentThreadDpiAwarenessContext(v42, v43, v44, v45);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    v31 = *(_QWORD *)(v9 + 24);
    ThreadUnlock1(v38, v37, v39);
    v46 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
      goto LABEL_65;
    v47 = *(__int64 **)(a1 + 8);
    if ( *v47 != a1 )
      goto LABEL_65;
    *v47 = v46;
    *(_QWORD *)(v46 + 8) = v47;
  }
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
  if ( !*(_DWORD *)(a1 + 24) )
    HMAssignmentUnlock(a1 + 16);
  if ( (__int64 *)a1 == &qword_1C032DDF0 )
    dword_1C032C208 = 0;
  else
    Win32FreePool(a1);
  return v31;
}
