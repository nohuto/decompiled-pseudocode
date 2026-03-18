/*
 * XREFs of _RegisterShellPTPListener @ 0x1C013DFA8
 * Callers:
 *     NtUserRegisterShellPTPListener @ 0x1C013DEE0 (NtUserRegisterShellPTPListener.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall RegisterShellPTPListener(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // r8
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 && (v6 = *(_QWORD *)(v5 + 8)) != 0 )
  {
    v7 = (__int64 *)(v6 + 232);
    v8 = *v7;
    if ( !(_DWORD)a2 )
    {
      if ( v8 == a1 )
        HMAssignmentUnlock(v7);
      return 1LL;
    }
    if ( !v8 )
    {
      v10[0] = v7;
      v10[1] = a1;
      HMAssignmentLock(v10);
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(87LL, a2, a3, a4);
  }
  return 0LL;
}
