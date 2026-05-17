/*
 * XREFs of LdrpInitializeImportRedirection @ 0x180080C84
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInitializeDllPath @ 0x180021798 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x180022180 (LdrpLoadDll.c)
 *     LdrpReleaseLoaderLock @ 0x18002D75C (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002D7BC (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     LdrpInitializeGraphRecurse @ 0x1800699C8 (LdrpInitializeGraphRecurse.c)
 *     LdrpDropLastInProgressCount @ 0x1800743BC (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800CFE34 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpBuildImportRedirection @ 0x1800D544C (LdrpBuildImportRedirection.c)
 */

__int64 LdrpInitializeImportRedirection()
{
  int Dll; // ebx
  _UNICODE_STRING *p_RedirectionDllName; // rdi
  char v3; // al
  __int64 v4; // rcx
  __int64 v5; // rcx
  _BYTE v6[8]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v7; // [rsp+40h] [rbp-41h] BYREF
  __int64 v8[15]; // [rsp+48h] [rbp-39h] BYREF
  char v9; // [rsp+C4h] [rbp+43h]

  Dll = 0;
  p_RedirectionDllName = &NtCurrentPeb()->ProcessParameters->RedirectionDllName;
  if ( p_RedirectionDllName->Length )
  {
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrredirect.c",
        541,
        (unsigned int)"LdrpInitializeImportRedirection",
        2,
        (__int64)"Loading import redirection DLL: '%wZ'\n",
        p_RedirectionDllName);
    LdrpInitializeDllPath(0LL, 0LL, v8);
    Dll = LdrpLoadDll((__int64)p_RedirectionDllName, (int)v8, 16777217, (__int64)&v7);
    if ( v9 )
      RtlReleasePath(v8[0]);
    if ( Dll >= 0 )
    {
      Dll = LdrpBuildImportRedirection(v7);
      if ( Dll >= 0 )
      {
        LdrpDrainWorkQueue(0);
        LdrpAcquireLoaderLock(v4);
        v6[0] = 0;
        Dll = LdrpInitializeGraphRecurse(*(__int64 **)(v7 + 152), 0LL, v6);
        LdrpReleaseLoaderLock(v5, 2, Dll);
        LdrpDropLastInProgressCount();
        if ( Dll >= 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v7 + 152) + 24LL) = -1;
          *(_WORD *)(**(_QWORD **)(v7 + 152) - 52LL) = -1;
          LdrpLogImportRedirectionTelemetry(v7);
          LdrpImportRedirectionPresent = 1;
        }
      }
      else
      {
        v3 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrredirect.c",
            568,
            (unsigned int)"LdrpInitializeImportRedirection",
            0,
            (__int64)"Unable to build import redirection Table, Status = 0x%x\n",
            Dll);
          v3 = LdrpDebugFlags;
        }
        if ( (v3 & 0x10) != 0 )
          __debugbreak();
      }
    }
  }
  return (unsigned int)Dll;
}
