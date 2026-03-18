/*
 * XREFs of _UnregisterDManipHook @ 0x1C01B04D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x1C00D8460 (RemoveHmodDependency.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterDManipHook(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( PsGetCurrentProcessWin32Process(a1) == gppiDManipHook )
  {
    gppiDManipHook = 0LL;
    if ( gihmodDManipHook >= 0 )
    {
      RemoveHmodDependency(gihmodDManipHook);
      gihmodDManipHook = -1;
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
