/*
 * XREFs of xxxWaitForInputIdle @ 0x1C010DAA0
 * Callers:
 *     NtUserWaitForInputIdle @ 0x1C010DA40 (NtUserWaitForInputIdle.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     LockProcessByClientId @ 0x1C0020CE8 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010DC0C (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     WaitOnPseudoEvent @ 0x1C010DE70 (WaitOnPseudoEvent.c)
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
  __int64 v16; // r8
  __int64 j; // rax
  unsigned int result; // eax
  __int64 *v19; // rbx
  _QWORD v20[4]; // [rsp+20h] [rbp-20h] BYREF
  PVOID Object; // [rsp+78h] [rbp+38h] BYREF

  memset(v20, 0, 24);
  if ( !a3 )
  {
    if ( (PsGetThreadProcessId((PETHREAD)*gptiCurrent) != a1
       || gptiCurrent != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 328LL))
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
            for ( i = *(_QWORD *)(v11 + 320); i; i = *(_QWORD *)(i + 656) )
              *(_DWORD *)(i + 480) |= 0x4000u;
            PushW32ThreadLock(v11, v20, (__int64)DereferenceW32Process);
            ObfReferenceObject(*(PVOID *)v11);
            _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
            ObfDereferenceObject(Object);
            v15 = WaitOnPseudoEvent(v11 + 16, a2);
            if ( v15 == 128 )
              v15 = xxxPollAndWaitForSingleObject(*(PVOID *)(v11 + 16), Object, a2);
            *(_DWORD *)(v11 + 12) &= ~0x20000u;
            for ( j = *(_QWORD *)(v11 + 320); j; j = *(_QWORD *)(j + 656) )
              *(_DWORD *)(j + 480) &= ~0x4000u;
            PopAndFreeW32ThreadLock((__int64)v20, v14, v16);
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
  v19 = (__int64 *)gpwtiFirst;
  if ( !gpwtiFirst )
    return -1;
  do
  {
    if ( *((_DWORD *)v19 + 6) == (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent) && (HANDLE)v19[2] == a1 )
      break;
    v19 = (__int64 *)*v19;
  }
  while ( v19 );
  if ( !v19 )
    return -1;
  result = WaitOnPseudoEvent(v19 + 4, a2);
  if ( result == 128 )
    return xxxPollAndWaitForSingleObject((PVOID)v19[4], 0LL, a2);
  return result;
}
