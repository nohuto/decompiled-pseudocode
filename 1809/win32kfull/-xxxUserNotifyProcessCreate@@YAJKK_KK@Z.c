/*
 * XREFs of ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C00B1C7C
 * Callers:
 *     NtUserNotifyProcessCreate @ 0x1C00B1BF0 (NtUserNotifyProcessCreate.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     LockThreadByClientId @ 0x1C00B1D6C (LockThreadByClientId.c)
 *     LockProcessByClientId @ 0x1C00B2D44 (LockProcessByClientId.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUserNotifyProcessCreate(int a1, int a2, __int64 a3, int a4)
{
  int v4; // r11d
  char v5; // bl
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 ProcessWin32Process; // rax
  __int64 v12; // rbx
  struct _KEVENT *v13; // rcx
  __int64 v14; // rax
  PVOID v15; // [rsp+20h] [rbp-18h] BYREF
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
      result = LockThreadByClientId(v8, &v15);
      if ( (int)result >= 0 )
      {
        W32GetThreadWin32Thread((__int64)v15, v10);
LABEL_11:
        ObfDereferenceObject(v15);
        return 0LL;
      }
    }
  }
  else
  {
    if ( a4 != 4 )
      return 0LL;
    v12 = gpwtiFirst;
    if ( !gpwtiFirst )
      goto LABEL_22;
    do
    {
      if ( *(_DWORD *)(v12 + 8) == a1 )
        break;
      v12 = *(_QWORD *)v12;
    }
    while ( v12 );
    if ( v12 )
    {
      v13 = *(struct _KEVENT **)(v12 + 32);
      if ( v13 == (struct _KEVENT *)-1LL )
      {
        *(_QWORD *)(v12 + 32) = 0LL;
      }
      else if ( v13 )
      {
        KeClearEvent(v13);
      }
    }
    else
    {
LABEL_22:
      v14 = Win32AllocPoolWithQuota(48LL, 1953985365LL);
      v12 = v14;
      if ( !v14 )
        return 3221225495LL;
      *(_QWORD *)(v14 + 32) = 0LL;
      *(_DWORD *)(v14 + 8) = a1;
      *(_DWORD *)(v14 + 40) = 0;
      *(_QWORD *)v14 = gpwtiFirst;
      gpwtiFirst = v14;
    }
    *(_QWORD *)(v12 + 16) = a3;
    result = LockThreadByClientId(v8, &v15);
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(v12 + 24) = (unsigned int)PsGetThreadProcessId((PETHREAD)v15);
      goto LABEL_11;
    }
  }
  return result;
}
