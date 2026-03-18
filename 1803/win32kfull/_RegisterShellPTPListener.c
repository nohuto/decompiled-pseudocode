/*
 * XREFs of _RegisterShellPTPListener @ 0x1C010FEA0
 * Callers:
 *     NtUserRegisterShellPTPListener @ 0x1C010FDF0 (NtUserRegisterShellPTPListener.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall RegisterShellPTPListener(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rcx
  __int64 v6; // r8
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 && (v4 = *(_QWORD *)(v3 + 8)) != 0 )
  {
    v5 = (__int64 *)(v4 + 232);
    v6 = *v5;
    if ( !(_DWORD)a2 )
    {
      if ( v6 == a1 )
        HMAssignmentUnlock(v5);
      return 1LL;
    }
    if ( !v6 )
    {
      v8[0] = v5;
      v8[1] = a1;
      HMAssignmentLock(v8);
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(87LL, a2);
  }
  return 0LL;
}
