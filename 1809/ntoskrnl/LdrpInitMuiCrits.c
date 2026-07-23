/*
 * XREFs of LdrpInitMuiCrits @ 0x1400F44B8
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1400F4300 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400F451C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016CA00 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140174C40 (LdrpSetAlternateResourceModuleHandle.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400DD3F8 (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x1405E3B80 (NtDelayExecution.c)
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
