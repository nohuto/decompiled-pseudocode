/*
 * XREFs of xxxWaitForInputIdle @ 0x1C012B420
 * Callers:
 *     NtUserWaitForInputIdle @ 0x1C012B3C0 (NtUserWaitForInputIdle.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     LockProcessByClientId @ 0x1C00B2D44 (LockProcessByClientId.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C012B584 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     WaitOnPseudoEvent @ 0x1C012B7D8 (WaitOnPseudoEvent.c)
 */

unsigned int __fastcall xxxWaitForInputIdle(HANDLE a1, unsigned int a2, int a3)
{
  char ProcessExitProcessCalled; // al
  PVOID v6; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  __int64 i; // rax
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 j; // rax
  unsigned int result; // eax
  __int64 *v18; // rbx
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( !a3 )
  {
    if ( (PsGetThreadProcessId((PETHREAD)*gptiCurrent) != a1
       || gptiCurrent != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 336LL))
      && (int)LockProcessByClientId(a1, (PEPROCESS *)&Object) >= 0 )
    {
      ProcessExitProcessCalled = PsGetProcessExitProcessCalled(Object);
      v6 = Object;
      if ( !ProcessExitProcessCalled )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Object);
        v11 = ProcessWin32Process;
        if ( ProcessWin32Process )
        {
          v12 = *(_DWORD *)(ProcessWin32Process + 12);
          if ( (v12 & 0x21) == 0x20 )
          {
            *(_DWORD *)(v11 + 12) = v12 | 0x20000;
            for ( i = *(_QWORD *)(v11 + 328); i; i = *(_QWORD *)(i + 664) )
              *(_DWORD *)(i + 488) |= 0x4000u;
            PushW32ThreadLock(v11, v19, (__int64)DereferenceW32Process);
            ObfReferenceObject(*(PVOID *)v11);
            _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
            ObfDereferenceObject(Object);
            v15 = WaitOnPseudoEvent(v11 + 16, a2);
            if ( v15 == 128 )
              v15 = xxxPollAndWaitForSingleObject(*(PVOID *)(v11 + 16), Object, a2);
            *(_DWORD *)(v11 + 12) &= ~0x20000u;
            for ( j = *(_QWORD *)(v11 + 328); j; j = *(_QWORD *)(j + 664) )
              *(_DWORD *)(j + 488) &= ~0x4000u;
            PopAndFreeW32ThreadLock((__int64)v19, v14);
            return v15;
          }
        }
        UserSetLastError(1471LL, v8, v9, v10);
        v6 = Object;
      }
      ObfDereferenceObject(v6);
    }
    return -1;
  }
  v18 = (__int64 *)gpwtiFirst;
  if ( !gpwtiFirst )
    return -1;
  do
  {
    if ( *((_DWORD *)v18 + 6) == (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent) && (HANDLE)v18[2] == a1 )
      break;
    v18 = (__int64 *)*v18;
  }
  while ( v18 );
  if ( !v18 )
    return -1;
  result = WaitOnPseudoEvent(v18 + 4, a2);
  if ( result == 128 )
    return xxxPollAndWaitForSingleObject((PVOID)v18[4], 0LL, a2);
  return result;
}
