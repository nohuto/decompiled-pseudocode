/*
 * XREFs of LdrpInitializeImportRedirection @ 0x180084E3C
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
 *     LdrpDropLastInProgressCount @ 0x180079EDC (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800D1664 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpBuildImportRedirection @ 0x1800D7534 (LdrpBuildImportRedirection.c)
 */

__int64 LdrpInitializeImportRedirection()
{
  int Dll; // ebx
  _UNICODE_STRING *p_RedirectionDllName; // rdi
  unsigned __int64 v2; // rdx
  unsigned __int64 *v3; // r8
  __int64 v4; // r9
  char v5; // al
  __int64 v6; // rcx
  _BYTE v8[8]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v9; // [rsp+40h] [rbp-41h] BYREF
  __int64 v10[15]; // [rsp+48h] [rbp-39h] BYREF
  char v11; // [rsp+C4h] [rbp+43h]

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
    LdrpInitializeDllPath(0LL, 0LL, v10);
    Dll = LdrpLoadDll((__int64)p_RedirectionDllName, (int)v10, 16777217, (__int64)&v9);
    if ( v11 )
      RtlReleasePath(v10[0], v2, v3, v4);
    if ( Dll >= 0 )
    {
      Dll = LdrpBuildImportRedirection(v9);
      if ( Dll >= 0 )
      {
        LdrpDrainWorkQueue(0);
        LdrpAcquireLoaderLock();
        v8[0] = 0;
        Dll = LdrpInitializeGraphRecurse(*(_QWORD *)(v9 + 152), 0LL, v8);
        LdrpReleaseLoaderLock(v6, 2, Dll);
        LdrpDropLastInProgressCount();
        if ( Dll >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v9 + 152) + 24LL) = -1;
          *(_WORD *)(**(_QWORD **)(v9 + 152) - 52LL) = -1;
          LdrpLogImportRedirectionTelemetry(v9);
          LdrpImportRedirectionPresent = 1;
        }
      }
      else
      {
        v5 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrredirect.c",
            521,
            (unsigned int)"LdrpInitializeImportRedirection",
            0,
            "Unable to build import redirection Table, Status = 0x%x\n",
            Dll);
          v5 = LdrpDebugFlags;
        }
        if ( (v5 & 0x10) != 0 )
          __debugbreak();
      }
    }
  }
  return (unsigned int)Dll;
}
