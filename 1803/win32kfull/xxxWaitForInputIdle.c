/*
 * XREFs of xxxWaitForInputIdle @ 0x1C010B9B4
 * Callers:
 *     NtUserWaitForInputIdle @ 0x1C010B960 (NtUserWaitForInputIdle.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C0012364 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010BB84 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     WaitOnPseudoEvent @ 0x1C010BDA0 (WaitOnPseudoEvent.c)
 *     ReferenceW32Process @ 0x1C019757C (ReferenceW32Process.c)
 */

unsigned int __fastcall xxxWaitForInputIdle(HANDLE a1, unsigned int a2, int a3)
{
  __int64 *v5; // rbx
  unsigned int result; // eax
  char ProcessExitProcessCalled; // al
  PVOID v8; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  __int64 i; // rax
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 j; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    v5 = (__int64 *)gpwtiFirst;
    if ( gpwtiFirst )
    {
      do
      {
        if ( *((_DWORD *)v5 + 6) == (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent) && (HANDLE)v5[2] == a1 )
          break;
        v5 = (__int64 *)*v5;
      }
      while ( v5 );
      if ( v5 )
      {
        result = WaitOnPseudoEvent(v5 + 4, a2);
        if ( result == 128 )
          return xxxPollAndWaitForSingleObject((PVOID)v5[4], 0LL, a2);
        return result;
      }
    }
    return -1;
  }
  if ( PsGetThreadProcessId((PETHREAD)*gptiCurrent) == a1
    && gptiCurrent == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 328LL)
    || (int)LockProcessByClientId(a1, (PEPROCESS *)&Object) < 0 )
  {
    return -1;
  }
  ProcessExitProcessCalled = PsGetProcessExitProcessCalled(Object);
  v8 = Object;
  if ( ProcessExitProcessCalled )
  {
LABEL_25:
    ObfDereferenceObject(v8);
    return -1;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  v11 = ProcessWin32Process;
  if ( !ProcessWin32Process || (v12 = *(_DWORD *)(ProcessWin32Process + 12), (v12 & 0x21) != 0x20) )
  {
    UserSetLastError(1471LL, v10);
    v8 = Object;
    goto LABEL_25;
  }
  *(_DWORD *)(v11 + 12) = v12 | 0x20000;
  for ( i = *(_QWORD *)(v11 + 320); i; i = *(_QWORD *)(i + 656) )
    *(_DWORD *)(i + 480) |= 0x4000u;
  PushW32ThreadLock(v11, v17, (__int64)DereferenceW32Process);
  ReferenceW32Process(v11);
  ObfDereferenceObject(Object);
  v15 = WaitOnPseudoEvent(v11 + 16, a2);
  if ( v15 == 128 )
    v15 = xxxPollAndWaitForSingleObject(*(PVOID *)(v11 + 16), Object, a2);
  *(_DWORD *)(v11 + 12) &= ~0x20000u;
  for ( j = *(_QWORD *)(v11 + 320); j; j = *(_QWORD *)(j + 656) )
    *(_DWORD *)(j + 480) &= ~0x4000u;
  PopAndFreeW32ThreadLock((__int64)v17, v14);
  return v15;
}
