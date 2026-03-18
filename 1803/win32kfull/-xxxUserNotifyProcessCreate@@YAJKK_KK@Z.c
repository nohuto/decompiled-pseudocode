/*
 * XREFs of ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C0010298
 * Callers:
 *     NtUserNotifyProcessCreate @ 0x1C0010220 (NtUserNotifyProcessCreate.c)
 * Callees:
 *     LockThreadByClientId @ 0x1C0010378 (LockThreadByClientId.c)
 *     LockProcessByClientId @ 0x1C0012364 (LockProcessByClientId.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUserNotifyProcessCreate(int a1, int a2, __int64 a3, int a4)
{
  int v4; // r11d
  char v5; // bl
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rbx
  struct _KEVENT *v12; // rcx
  __int64 v13; // rax
  PVOID v14; // [rsp+20h] [rbp-18h] BYREF
  PVOID Object[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = `GiveForegroundActivateRight'::`2'::index;
  v5 = a4;
  v8 = a2;
  ghCanActivateForegroundPIDs[`GiveForegroundActivateRight'::`2'::index] = a1;
  `GiveForegroundActivateRight'::`2'::index = v4 + 1;
  if ( v4 == 4 )
    `GiveForegroundActivateRight'::`2'::index = 0;
  if ( (a4 & 0xB) != 0 )
  {
    result = LockProcessByClientId(a1, Object);
    if ( (int)result >= 0 )
    {
      xxxSetProcessInitState(Object[0], ((unsigned int)((v5 & 1) == 0) + 1) << 6);
      if ( (v5 & 8) != 0 )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Object[0]);
        if ( ProcessWin32Process )
          *(_DWORD *)(ProcessWin32Process + 12) |= 8u;
      }
      ObfDereferenceObject(Object[0]);
      result = LockThreadByClientId(v8, &v14);
      if ( (int)result >= 0 )
      {
        W32GetThreadWin32Thread(v14);
LABEL_11:
        ObfDereferenceObject(v14);
        return 0LL;
      }
    }
  }
  else
  {
    if ( a4 != 4 )
      return 0LL;
    v11 = gpwtiFirst;
    if ( !gpwtiFirst )
      goto LABEL_22;
    do
    {
      if ( *(_DWORD *)(v11 + 8) == a1 )
        break;
      v11 = *(_QWORD *)v11;
    }
    while ( v11 );
    if ( v11 )
    {
      v12 = *(struct _KEVENT **)(v11 + 32);
      if ( v12 == (struct _KEVENT *)-1LL )
      {
        *(_QWORD *)(v11 + 32) = 0LL;
      }
      else if ( v12 )
      {
        KeClearEvent(v12);
      }
    }
    else
    {
LABEL_22:
      v13 = Win32AllocPoolWithQuota(48LL, 1953985365LL);
      v11 = v13;
      if ( !v13 )
        return 3221225495LL;
      *(_QWORD *)(v13 + 32) = 0LL;
      *(_DWORD *)(v13 + 8) = a1;
      *(_DWORD *)(v13 + 40) = 0;
      *(_QWORD *)v13 = gpwtiFirst;
      gpwtiFirst = v13;
    }
    *(_QWORD *)(v11 + 16) = a3;
    result = LockThreadByClientId(v8, &v14);
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(v11 + 24) = (unsigned int)PsGetThreadProcessId((PETHREAD)v14);
      goto LABEL_11;
    }
  }
  return result;
}
