/*
 * XREFs of _UnregisterUserApiHook @ 0x1C0162280
 * Callers:
 *     NtUserUnregisterUserApiHook @ 0x1C02364D0 (NtUserUnregisterUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x1C0053B88 (RemoveHmodDependency.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterUserApiHook(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( PsGetCurrentProcessWin32Process(a1, a2) == gppiUserApiHook )
  {
    gppiUserApiHook = 0LL;
    if ( gihmodUserApiHook >= 0 )
    {
      RemoveHmodDependency(gihmodUserApiHook);
      gihmodUserApiHook = -1;
      RemoveHmodDependency(gihmodUserApiHookWOW);
      gihmodUserApiHookWOW = -1;
    }
    _InterlockedAnd(gpsi, 0xFFFFFFEF);
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, v2, v3, v4);
    return 0LL;
  }
}
