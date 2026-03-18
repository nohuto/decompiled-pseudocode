/*
 * XREFs of xxxHardErrorControl @ 0x1C023EA4C
 * Callers:
 *     NtUserHardErrorControl @ 0x1C022F4C0 (NtUserHardErrorControl.c)
 * Callees:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000D1C0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000D2E0 (xxxSetCsrssThreadDesktop.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     CanForceForeground @ 0x1C0021100 (CanForceForeground.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     zzzAttachToQueue @ 0x1C01362F0 (zzzAttachToQueue.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  void **v14; // rbx
  _DWORD *v15; // rbx
  NTSTATUS v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // ebx
  NTSTATUS v22; // eax
  __int64 v23; // r8
  PVOID v24; // rbp
  __int64 ThreadWin32Thread; // rax
  int v26; // eax
  int v27; // r9d
  __int64 v28; // [rsp+30h] [rbp-38h] BYREF
  __int64 v29; // [rsp+38h] [rbp-30h]
  __int64 v30; // [rsp+40h] [rbp-28h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
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
            v6 = (_QWORD *)grpdeskRitInput;
            goto LABEL_23;
          }
LABEL_24:
          v10 = 0LL;
          goto LABEL_25;
        }
        if ( gspdeskShouldBeForeground && (PVOID)gspdeskShouldBeForeground != gspdeskDisconnect )
        {
          if ( ObQueryNameInfo(gspdeskShouldBeForeground) )
          {
            v6 = (_QWORD *)gspdeskShouldBeForeground;
LABEL_23:
            v10 = ObQueryNameInfo(*v6) + 8;
LABEL_25:
            if ( v10
              && (!_wcsicmp(L"Winlogon", *(const wchar_t **)(v10 + 8))
               || !_wcsicmp(L"Disconnect", *(const wchar_t **)(v10 + 8))
               || !_wcsicmp(L"Screen-saver", *(const wchar_t **)(v10 + 8))) )
            {
              UserSetLastError(5LL, v11, v12, v13);
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
      v7 = *((_QWORD *)&gHardErrorHandler + 1);
      if ( *(_QWORD *)(gptiCurrent + 424LL) != v7 )
      {
        AllocQueue(0LL, v7);
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
        PushW32ThreadLock((__int64)v15, &v28, UserDereferenceObject);
        if ( v15 )
          ObfReferenceObject(v15);
        v16 = xxxSetCsrssThreadDesktop(v15, a3);
        PopAndFreeW32ThreadLock((__int64)&v28, v17, v18);
        if ( v16 >= 0 )
        {
          v21 = 0;
          if ( a2 )
          {
            v22 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
            v24 = Object;
            if ( v22 >= 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object, v19, v23);
              if ( !ThreadWin32Thread || CanForceForeground(*(_QWORD *)(ThreadWin32Thread + 416)) )
                v21 = 1;
              ObfDereferenceObject(v24);
            }
          }
          v26 = *(_DWORD *)(gptiCurrent + 480LL);
          if ( v21 )
          {
            *(_DWORD *)(gptiCurrent + 480LL) = v26 | 0x20;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0LL;
            v27 = 10;
          }
          else
          {
            *(_DWORD *)(gptiCurrent + 480LL) = v26 & 0xFFFFFFDF;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0LL;
            v27 = 11;
          }
          WPP_RECORDER_SF_q(
            v20,
            v19,
            2,
            v27,
            (__int64)&WPP_604ec7a63c03390066f1de6debfbe986_Traceguids,
            gptiCurrent,
            v28,
            v29,
            v30);
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
  v8 = *(_QWORD *)(gptiCurrent + 448LL);
  xxxRestoreCsrssThreadDesktop((__int64)a3, 0);
  if ( !gbDisconnectHardErrorAttach )
    return grpdeskRitInput != v8 ? 3 : 0;
  gbDisconnectHardErrorAttach = 0;
  return 3LL;
}
