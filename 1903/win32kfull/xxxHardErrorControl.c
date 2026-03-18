/*
 * XREFs of xxxHardErrorControl @ 0x1C023F06C
 * Callers:
 *     NtUserHardErrorControl @ 0x1C022FAE0 (NtUserHardErrorControl.c)
 * Callees:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000DD50 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000E920 (xxxSetCsrssThreadDesktop.c)
 *     zzzAttachToQueue @ 0x1C0012DFC (zzzAttachToQueue.c)
 *     CanForceForeground @ 0x1C001ABA0 (CanForceForeground.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3, __int64 a4)
{
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  void **v14; // rbx
  _DWORD *v15; // rbx
  NTSTATUS v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // ebx
  NTSTATUS v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  PVOID v26; // rbp
  __int64 ThreadWin32Thread; // rax
  int v28; // eax
  unsigned __int16 v29; // r9
  __int64 v30; // [rsp+30h] [rbp-38h] BYREF
  __int64 v31; // [rsp+38h] [rbp-30h]
  __int64 v32; // [rsp+40h] [rbp-28h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  gptiBlockInput = 0LL;
  switch ( a1 )
  {
    case 0:
      if ( grpdeskRitInput && !gHardErrorHandler )
      {
        MEMORY[0] = gptiCurrent;
LABEL_31:
        *(_DWORD *)(gptiCurrent + 480LL) &= ~0x40000000u;
        return 0LL;
      }
      return 1LL;
    case 1:
      if ( gHardErrorHandler == gptiCurrent )
      {
        gHardErrorHandler = 0LL;
        return 0LL;
      }
      return 1LL;
    case 2:
LABEL_33:
      *((_QWORD *)&gHardErrorHandler + 1) = *(_QWORD *)(gptiCurrent + 424LL);
      ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 404LL);
      goto LABEL_34;
    case 3:
LABEL_9:
      if ( grpdeskRitInput )
      {
        if ( (PVOID)grpdeskRitInput != gspdeskDisconnect )
        {
          if ( ObQueryNameInfo(grpdeskRitInput) )
          {
            v7 = (_QWORD *)grpdeskRitInput;
            goto LABEL_23;
          }
LABEL_24:
          v11 = 0LL;
          goto LABEL_25;
        }
        if ( gspdeskShouldBeForeground && (PVOID)gspdeskShouldBeForeground != gspdeskDisconnect )
        {
          if ( ObQueryNameInfo(gspdeskShouldBeForeground) )
          {
            v7 = (_QWORD *)gspdeskShouldBeForeground;
LABEL_23:
            v11 = ObQueryNameInfo(*v7) + 8;
LABEL_25:
            if ( v11
              && (!_wcsicmp(L"Winlogon", *(const wchar_t **)(v11 + 8))
               || !_wcsicmp(L"Disconnect", *(const wchar_t **)(v11 + 8))
               || !_wcsicmp(L"Screen-saver", *(const wchar_t **)(v11 + 8))) )
            {
              UserSetLastError(5LL, v12, v13, a4);
              return 2LL;
            }
            if ( a1 == 8 )
              goto LABEL_31;
            goto LABEL_33;
          }
          goto LABEL_24;
        }
      }
      return 1LL;
    case 4:
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x40000000u;
      --*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 404LL);
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&Object);
      v8 = *((_QWORD *)&gHardErrorHandler + 1);
      if ( *(_QWORD *)(gptiCurrent + 424LL) != v8 )
      {
        AllocQueue(0LL, v8);
        ++*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 400LL);
        zzzAttachToQueue(gptiCurrent, *((struct tagQ **)&gHardErrorHandler + 1), 0LL, 0);
      }
      *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&Object);
      zzzEndDeferWinEventNotify();
      break;
    case 5:
LABEL_34:
      v14 = (void **)grpdeskRitInput;
      if ( grpdeskRitInput
        && ((PVOID)grpdeskRitInput != gspdeskDisconnect
         || gspdeskShouldBeForeground && (PVOID)gspdeskShouldBeForeground != gspdeskDisconnect) )
      {
        gbDisconnectHardErrorAttach = 0;
        if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
        {
          v14 = (void **)gspdeskShouldBeForeground;
          gbDisconnectHardErrorAttach = 1;
        }
        v15 = *v14;
        PushW32ThreadLock((__int64)v15, &v30, UserDereferenceObject, a4);
        if ( v15 )
          ObfReferenceObject(v15);
        v16 = xxxSetCsrssThreadDesktop(v15, a3);
        PopAndFreeW32ThreadLock((__int64)&v30, v17, v18, v19);
        if ( v16 >= 0 )
        {
          v22 = 0;
          if ( a2 )
          {
            v23 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
            v26 = Object;
            if ( v23 >= 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object, v20, v24, v25);
              if ( !ThreadWin32Thread || CanForceForeground(*(_QWORD *)(ThreadWin32Thread + 416)) )
                v22 = 1;
              ObfDereferenceObject(v26);
            }
          }
          v28 = *(_DWORD *)(gptiCurrent + 480LL);
          if ( v22 )
          {
            *(_DWORD *)(gptiCurrent + 480LL) = v28 | 0x20;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0LL;
            v29 = 10;
          }
          else
          {
            *(_DWORD *)(gptiCurrent + 480LL) = v28 & 0xFFFFFFDF;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0LL;
            v29 = 11;
          }
          WPP_RECORDER_SF_q(
            v21,
            v20,
            2u,
            v29,
            (__int64)&WPP_604ec7a63c03390066f1de6debfbe986_Traceguids,
            gptiCurrent,
            v30,
            v31,
            v32);
          return 0LL;
        }
        if ( a1 != 5 )
        {
          *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
          --*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 404LL);
        }
      }
      return 1LL;
    case 6:
      break;
    case 8:
      goto LABEL_9;
    default:
      return 0LL;
  }
  v9 = *(_QWORD *)(gptiCurrent + 448LL);
  xxxRestoreCsrssThreadDesktop(a3, 0);
  if ( !gbDisconnectHardErrorAttach )
    return grpdeskRitInput != v9 ? 3 : 0;
  gbDisconnectHardErrorAttach = 0;
  return 3LL;
}
