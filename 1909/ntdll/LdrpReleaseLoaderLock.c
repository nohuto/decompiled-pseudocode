/*
 * XREFs of LdrpReleaseLoaderLock @ 0x18002D75C
 * Callers:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180022CE8 (LdrpInitializeThread.c)
 *     LdrpPrepareModuleForExecution @ 0x18002A958 (LdrpPrepareModuleForExecution.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F3D8 (LdrpDecrementModuleLoadCountEx.c)
 *     RtlExitUserProcess @ 0x18006B150 (RtlExitUserProcess.c)
 *     LdrEnumerateLoadedModules @ 0x180074300 (LdrEnumerateLoadedModules.c)
 *     LdrUnlockLoaderLock @ 0x18007D300 (LdrUnlockLoaderLock.c)
 *     LdrpInitializeImportRedirection @ 0x180080C84 (LdrpInitializeImportRedirection.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x1800856E0 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0D30 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800D4FF8 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x18007EA24 (LdrpLogError.c)
 *     LdrpLogEtwEvent @ 0x1800CFB08 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpReleaseLoaderLock(__int64 a1, char a2, int a3)
{
  unsigned __int32 v5; // esi
  __int64 v6; // r8
  __int64 v7; // rcx
  int v9; // r9d
  __int64 v10; // rcx

  v5 = RtlLeaveCriticalSection(&LdrpLoaderLock);
  if ( a3 < 0 )
  {
    LOBYTE(v6) = a2;
    LdrpLogError((unsigned int)a3, 5282LL, v6, 0LL);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v7 = 2147353476LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v10 = 2147353477LL;
    if ( (*(_BYTE *)v10 & 0x20) != 0 )
    {
      LOBYTE(v9) = a2;
      LdrpLogEtwEvent(5282, 0, 0, v9, 0LL, 0LL);
    }
  }
  return v5;
}
