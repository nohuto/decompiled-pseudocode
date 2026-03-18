/*
 * XREFs of _UnregisterDManipHook @ 0x1C01D34D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     RemoveHmodDependency @ 0x1C00B5CCC (RemoveHmodDependency.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterDManipHook(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
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
    UserSetLastError(5LL, v1, v2, v3);
    return 0LL;
  }
  return result;
}
