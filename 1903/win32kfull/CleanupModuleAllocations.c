/*
 * XREFs of CleanupModuleAllocations @ 0x1C0140C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 CleanupModuleAllocations()
{
  __int64 result; // rax

  if ( *(__int64 *)((char *)&qword_1C0327DD4 + 4) )
    Win32FreePool(*(__int64 *)((char *)&qword_1C0327DD4 + 4));
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
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
  {
    result = Win32FreePool(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
  }
  return result;
}
