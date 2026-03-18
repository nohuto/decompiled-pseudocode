/*
 * XREFs of LdrpInitMuiCrits @ 0x1400DFE98
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400DF250 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1400DFCF8 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14017E2F4 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140180940 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400FD068 (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x1405F5590 (NtDelayExecution.c)
 */

NTSTATUS __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2, __int64 a3)
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
  LOBYTE(a3) = 1;
  result = KiInitializeMutant(&MuiMutex, 0LL, a3);
  MuiLockInitCount = 2;
  return result;
}
