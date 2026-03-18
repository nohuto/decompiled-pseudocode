/*
 * XREFs of _UnregisterUserApiHook @ 0x1C00D6EE0
 * Callers:
 *     NtUserUnregisterUserApiHook @ 0x1C01F6C80 (NtUserUnregisterUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x1C00D8460 (RemoveHmodDependency.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterUserApiHook(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( PsGetCurrentProcessWin32Process(a1) == gppiUserApiHook )
  {
    gppiUserApiHook = 0LL;
    if ( gihmodUserApiHook >= 0 )
    {
      RemoveHmodDependency((unsigned int)gihmodUserApiHook);
      gihmodUserApiHook = -1;
      RemoveHmodDependency((unsigned int)gihmodUserApiHookWOW);
      gihmodUserApiHookWOW = -1;
    }
    result = 1LL;
    *gpsi &= ~0x10u;
  }
  else
  {
    UserSetLastError(5LL, v1);
    return 0LL;
  }
  return result;
}
