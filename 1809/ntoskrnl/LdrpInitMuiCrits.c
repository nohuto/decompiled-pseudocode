/*
 * XREFs of LdrpInitMuiCrits @ 0x1400F4438
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1400F4280 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400F449C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016C900 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140174B40 (LdrpSetAlternateResourceModuleHandle.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400DD378 (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x1405E2B80 (NtDelayExecution.c)
 */

signed __int32 __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int32 result; // eax
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
  LOBYTE(a3) = 1;
  result = KiInitializeMutant((__int64)&MuiMutex, 0LL, a3);
  MuiLockInitCount = 2;
  return result;
}
