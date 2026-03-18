/*
 * XREFs of xxxHardErrorControl @ 0x1C02273E0
 * Callers:
 *     NtUserHardErrorControl @ 0x1C0217C20 (NtUserHardErrorControl.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     CanForceForeground @ 0x1C00B3040 (CanForceForeground.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00BB8C0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00BC5C0 (xxxSetCsrssThreadDesktop.c)
 *     zzzAttachToQueue @ 0x1C00D6E7C (zzzAttachToQueue.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxHardErrorControl(int a1, void *a2, PVOID *a3)
{
  PVOID v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rbx
  NTSTATUS v15; // ebx
  __int64 v16; // rdx
  int v17; // ebx
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  PVOID v20; // rbp
  __int64 ThreadWin32Thread; // rax
  unsigned int v22; // ecx
  _QWORD v23[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  gptiBlockInput = 0LL;
  switch ( a1 )
  {
    case 0:
      if ( grpdeskRitInput && !gHardErrorHandler )
      {
        MEMORY[0] = gptiCurrent;
LABEL_31:
        *(_DWORD *)(gptiCurrent + 488LL) &= ~0x40000000u;
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
      goto LABEL_33;
    case 3:
LABEL_9:
      if ( grpdeskRitInput )
      {
        if ( (PVOID)grpdeskRitInput != gspdeskDisconnect )
        {
          if ( ObQueryNameInfo(grpdeskRitInput) )
          {
            v6 = (PVOID)grpdeskRitInput;
            goto LABEL_23;
          }
LABEL_24:
          v10 = 0LL;
          goto LABEL_25;
        }
        if ( gspdeskShouldBeForeground && gspdeskShouldBeForeground != gspdeskDisconnect )
        {
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
              UserSetLastError(5LL, v11, v12, v13);
              return 2LL;
            }
            if ( a1 == 8 )
              goto LABEL_31;
LABEL_33:
            *((_QWORD *)&gHardErrorHandler + 1) = *(_QWORD *)(gptiCurrent + 432LL);
            ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL);
            goto LABEL_34;
          }
          goto LABEL_24;
        }
      }
      return 1LL;
    case 4:
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x40000000u;
      --*(_DWORD *)(*((_QWORD *)&gHardErrorHandler + 1) + 396LL);
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&Object);
      v7 = *((_QWORD *)&gHardErrorHandler + 1);
      if ( *(_QWORD *)(gptiCurrent + 432LL) != v7 )
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
LABEL_34:
      v14 = (_DWORD *)grpdeskRitInput;
      if ( grpdeskRitInput
        && ((PVOID)grpdeskRitInput != gspdeskDisconnect
         || gspdeskShouldBeForeground && gspdeskShouldBeForeground != gspdeskDisconnect) )
      {
        gbDisconnectHardErrorAttach = 0;
        if ( (PVOID)grpdeskRitInput == gspdeskDisconnect )
        {
          v14 = gspdeskShouldBeForeground;
          gbDisconnectHardErrorAttach = 1;
        }
        PushW32ThreadLock((__int64)v14, v23, UserDereferenceObject);
        if ( v14 )
          ObfReferenceObject(v14);
        v15 = xxxSetCsrssThreadDesktop(v14, a3);
        PopAndFreeW32ThreadLock((__int64)v23, v16);
        if ( v15 >= 0 )
        {
          v17 = 0;
          if ( a2 )
          {
            v18 = ObReferenceObjectByHandle(a2, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
            v20 = Object;
            if ( v18 >= 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object, v19);
              if ( !ThreadWin32Thread || CanForceForeground(*(_QWORD *)(ThreadWin32Thread + 424)) )
                v17 = 1;
              ObfDereferenceObject(v20);
            }
          }
          v22 = *(_DWORD *)(gptiCurrent + 488LL) | 0x20;
          if ( !v17 )
            v22 = *(_DWORD *)(gptiCurrent + 488LL) & 0xFFFFFFDF;
          *(_DWORD *)(gptiCurrent + 488LL) = v22;
          return 0LL;
        }
        if ( a1 != 5 )
        {
          *((_QWORD *)&gHardErrorHandler + 1) = 0LL;
          --*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL);
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
  v8 = *(_QWORD *)(gptiCurrent + 456LL);
  xxxRestoreCsrssThreadDesktop((__int64 *)a3, 0);
  if ( !gbDisconnectHardErrorAttach )
    return grpdeskRitInput != v8 ? 3 : 0;
  gbDisconnectHardErrorAttach = 0;
  return 3LL;
}
