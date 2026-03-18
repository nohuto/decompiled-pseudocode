/*
 * XREFs of LdrpInitMuiCrits @ 0x14011DB94
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14011CF4C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14011D9F4 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14017DC04 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140180250 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     KiInitializeMutant @ 0x140108C48 (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x1405F4610 (NtDelayExecution.c)
 */

NTSTATUS LdrpInitMuiCrits()
{
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -1000000LL;
  while ( 1 )
  {
    result = _InterlockedCompareExchange(&MuiLockInitCount, 1, 0);
    if ( !result )
      break;
    if ( MuiLockInitCount == 1 )
      result = NtDelayExecution(0, &Interval);
    if ( MuiLockInitCount == 2 )
      return result;
  }
  result = (unsigned int)KiInitializeMutant(&MuiMutex, 0, 1);
  MuiLockInitCount = 2;
  return result;
}
