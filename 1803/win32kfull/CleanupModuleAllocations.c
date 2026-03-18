/*
 * XREFs of CleanupModuleAllocations @ 0x1C01129C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 CleanupModuleAllocations()
{
  __int64 result; // rax

  if ( qword_1C0322808 )
    Win32FreePool(qword_1C0322808);
  if ( gpQmsgHistory )
  {
    Win32FreePool(gpQmsgHistory);
    gpQmsgHistory = 0LL;
  }
  if ( gpQmsgHistory2 )
  {
    Win32FreePool(gpQmsgHistory2);
    gpQmsgHistory2 = 0LL;
  }
  result = gpAtomickCheckStacks;
  if ( gpAtomickCheckStacks )
  {
    Win32FreePool(gpAtomickCheckStacks);
    result = gpAtomickCheckStacks;
    gpAtomickCheckStacks = 0LL;
  }
  if ( gpLinkWindowLog )
  {
    result = Win32FreePool(gpLinkWindowLog);
    gpLinkWindowLog = 0LL;
  }
  return result;
}
