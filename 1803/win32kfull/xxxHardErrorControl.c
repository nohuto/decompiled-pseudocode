/*
 * XREFs of xxxHardErrorControl @ 0x1C01FE504
 * Callers:
 *     NtUserHardErrorControl @ 0x1C01F0990 (NtUserHardErrorControl.c)
 * Callees:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C000E570 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C000E7C0 (xxxSetCsrssThreadDesktop.c)
 *     CanForceForeground @ 0x1C0012630 (CanForceForeground.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     zzzAttachToQueue @ 0x1C0058B78 (zzzAttachToQueue.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3)
{
  PVOID v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  _DWORD *v12; // rbx
  NTSTATUS v13; // ebx
  __int64 v14; // rdx
  int v15; // ebx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  PVOID v18; // rsi
  __int64 ThreadWin32Thread; // rax
  int v20; // eax
  unsigned int v21; // eax
  _QWORD v22[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  gptiBlockInput = 0LL;
  switch ( a1 )
  {
    case 0:
      if ( !grpdeskRitInput || gHardErrorHandler )
        return 1LL;
      MEMORY[0] = gptiCurrent;
LABEL_59:
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x40000000u;
      return 0LL;
    case 1:
      if ( gHardErrorHandler != gptiCurrent )
        return 1LL;
      gHardErrorHandler = 0LL;
      return 0LL;
    case 2:
LABEL_31:
      *((_QWORD *)&gHardErrorHandler + 1) = *(_QWORD *)(gptiCurrent + 424LL);
      ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL);
LABEL_32:
      v12 = (_DWORD *)grpdeskRitInput;
      if ( !grpdeskRitInput
        || (PVOID)grpdeskRitInput == gspdeskDisconnect
        && (!gspdeskShouldBeForeground || gspdeskShouldBeForeground == gspdeskDisconnect) )
      {
        return 1LL;
      }
      gbDisconnectHardErrorAttach = 0;
      if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
      {
        v12 = gspdeskShouldBeForeground;
        gbDisconnectHardErrorAttach = 1;
      }
      PushW32ThreadLock((__int64)v12, v22, UserDereferenceObject);
      if ( v12 )
        ObfReferenceObject(v12);
      v13 = xxxSetCsrssThreadDesktop(v12, a3);
      PopAndFreeW32ThreadLock((__int64)v22, v14);
      if ( v13 < 0 )
      {
        if ( a1 != 5 )
        {
          *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
          --*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL);
        }
        return 1LL;
      }
      v15 = 0;
      if ( a2 )
      {
        v16 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
        v18 = Object;
        if ( v16 >= 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object, v17);
          if ( !ThreadWin32Thread || (unsigned int)CanForceForeground(*(_QWORD *)(ThreadWin32Thread + 416)) )
            v15 = 1;
          ObfDereferenceObject(v18);
        }
      }
      v20 = *(_DWORD *)(gptiCurrent + 480LL);
      if ( v15 )
        v21 = v20 | 0x20;
      else
        v21 = v20 & 0xFFFFFFDF;
      *(_DWORD *)(gptiCurrent + 480LL) = v21;
      return 0LL;
    case 3:
LABEL_9:
      if ( grpdeskRitInput )
      {
        if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
        {
          if ( !gspdeskShouldBeForeground || gspdeskShouldBeForeground == gspdeskDisconnect )
            return 1LL;
          if ( ObQueryNameInfo(gspdeskShouldBeForeground) )
          {
            v6 = gspdeskShouldBeForeground;
LABEL_23:
            v10 = ObQueryNameInfo(v6) + 8;
LABEL_25:
            if ( v10
              && (!_wcsicmp(L"Winlogon", *(const wchar_t **)(v10 + 8))
               || !_wcsicmp(L"Disconnect", *(const wchar_t **)(v10 + 8))
               || !_wcsicmp(L"Screen-saver", *(const wchar_t **)(v10 + 8))) )
            {
              UserSetLastError(5LL, v11);
              return 2LL;
            }
            if ( a1 != 8 )
              goto LABEL_31;
            goto LABEL_59;
          }
        }
        else if ( ObQueryNameInfo(grpdeskRitInput) )
        {
          v6 = (PVOID)grpdeskRitInput;
          goto LABEL_23;
        }
        v10 = 0LL;
        goto LABEL_25;
      }
      return 1LL;
    case 4:
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x40000000u;
      --*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 396LL);
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&Object);
      v7 = *((_QWORD *)&gHardErrorHandler + 1);
      if ( *(_QWORD *)(gptiCurrent + 424LL) != v7 )
      {
        AllocQueue(0LL, v7);
        ++*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 392LL);
        zzzAttachToQueue(gptiCurrent, *((struct tagQ **)&gHardErrorHandler + 1), 0LL, 0);
      }
      *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&Object);
      zzzEndDeferWinEventNotify();
      break;
    case 5:
      goto LABEL_32;
    case 6:
      break;
    case 8:
      goto LABEL_9;
    default:
      return 0LL;
  }
  v8 = *(_QWORD *)(gptiCurrent + 448LL);
  xxxRestoreCsrssThreadDesktop(a3, 0);
  if ( !gbDisconnectHardErrorAttach )
    return grpdeskRitInput != v8 ? 3 : 0;
  gbDisconnectHardErrorAttach = 0;
  return 3LL;
}
