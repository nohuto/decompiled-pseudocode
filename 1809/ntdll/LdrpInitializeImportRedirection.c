/*
 * XREFs of LdrpInitializeImportRedirection @ 0x180084E4C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInitializeDllPath @ 0x180022848 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x180023190 (LdrpLoadDll.c)
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrpInitializeGraphRecurse @ 0x1800287D4 (LdrpInitializeGraphRecurse.c)
 *     LdrpReleaseLoaderLock @ 0x18002AFD4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002B034 (LdrpAcquireLoaderLock.c)
 *     RtlReleasePath @ 0x180071700 (RtlReleasePath.c)
 *     LdrpDropLastInProgressCount @ 0x180079EEC (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800D1664 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpBuildImportRedirection @ 0x1800D7534 (LdrpBuildImportRedirection.c)
 */

__int64 LdrpInitializeImportRedirection()
{
  int Dll; // ebx
  _UNICODE_STRING *p_RedirectionDllName; // rdi
  char v2; // al
  __int64 v3; // rcx
  _BYTE v5[8]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v6; // [rsp+40h] [rbp-41h] BYREF
  PWSTR Path[15]; // [rsp+48h] [rbp-39h] BYREF
  char v8; // [rsp+C4h] [rbp+43h]

  Dll = 0;
  p_RedirectionDllName = &NtCurrentPeb()->ProcessParameters->RedirectionDllName;
  if ( p_RedirectionDllName->Length )
  {
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrredirect.c",
        494,
        (unsigned int)"LdrpInitializeImportRedirection",
        2,
        "Loading import redirection DLL: '%wZ'\n",
        p_RedirectionDllName);
    LdrpInitializeDllPath(0LL, 0LL, (__int64 *)Path);
    Dll = LdrpLoadDll((__int64)p_RedirectionDllName, (__int64)Path, 16777217, (__int64)&v6);
    if ( v8 )
      RtlReleasePath(Path[0]);
    if ( Dll >= 0 )
    {
      Dll = LdrpBuildImportRedirection(v6);
      if ( Dll >= 0 )
      {
        LdrpDrainWorkQueue(0);
        LdrpAcquireLoaderLock();
        v5[0] = 0;
        Dll = LdrpInitializeGraphRecurse(*(_QWORD *)(v6 + 152), 0LL, v5);
        LdrpReleaseLoaderLock(v3, 2, Dll);
        LdrpDropLastInProgressCount();
        if ( Dll >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v6 + 152) + 24LL) = -1;
          *(_WORD *)(**(_QWORD **)(v6 + 152) - 52LL) = -1;
          LdrpLogImportRedirectionTelemetry(v6);
          LdrpImportRedirectionPresent = 1;
        }
      }
      else
      {
        v2 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrredirect.c",
            521,
            (unsigned int)"LdrpInitializeImportRedirection",
            0,
            "Unable to build import redirection Table, Status = 0x%x\n",
            Dll);
          v2 = LdrpDebugFlags;
        }
        if ( (v2 & 0x10) != 0 )
          __debugbreak();
      }
    }
  }
  return (unsigned int)Dll;
}
