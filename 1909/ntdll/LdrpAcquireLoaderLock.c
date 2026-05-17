/*
 * XREFs of LdrpAcquireLoaderLock @ 0x18002D7BC
 * Callers:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180022CE8 (LdrpInitializeThread.c)
 *     LdrpPrepareModuleForExecution @ 0x18002A958 (LdrpPrepareModuleForExecution.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F3D8 (LdrpDecrementModuleLoadCountEx.c)
 *     RtlExitUserProcess @ 0x18006B150 (RtlExitUserProcess.c)
 *     LdrEnumerateLoadedModules @ 0x180074300 (LdrEnumerateLoadedModules.c)
 *     LdrLockLoaderLock @ 0x18007C5F0 (LdrLockLoaderLock.c)
 *     LdrpInitializeImportRedirection @ 0x180080C84 (LdrpInitializeImportRedirection.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x180085760 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     RtlPrepareForProcessCloning @ 0x18009C0C0 (RtlPrepareForProcessCloning.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0D30 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x1800D6830 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800CFB08 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpAcquireLoaderLock(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rcx
  struct _PEB *v6; // rcx
  int v8; // r8d
  int v9; // r9d
  char *v10; // rcx
  int v11; // r8d
  int v12; // r9d

  v1 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1) )
    v2 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v2 = 2147353476LL;
  v3 = 2147353477LL;
  if ( *(_BYTE *)v2 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v10 = (unsigned int)RtlGetCurrentServiceSessionId(v2)
        ? (char *)NtCurrentPeb()->SharedData + 555
        : (char *)2147353477;
    if ( (*v10 & 0x20) != 0 )
    {
      LOBYTE(v9) = -1;
      LOBYTE(v8) = -1;
      LdrpLogEtwEvent(5248, -1, v8, v9, 0LL, 0LL);
    }
  }
  v4 = RtlEnterCriticalSection((__int64)&LdrpLoaderLock);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v5) )
  {
    v6 = NtCurrentPeb();
    v1 = (__int64)v6->SharedData + 554;
  }
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v6) )
      v3 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v3 & 0x20) != 0 )
    {
      LOBYTE(v12) = -1;
      LOBYTE(v11) = -1;
      LdrpLogEtwEvent(5249, -1, v11, v12, 0LL, 0LL);
    }
  }
  return v4;
}
