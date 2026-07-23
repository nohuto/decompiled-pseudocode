/*
 * XREFs of LdrUnloadDll @ 0x18002F330
 * Callers:
 *     RtlpTpWorkUnposted @ 0x18002F180 (RtlpTpWorkUnposted.c)
 *     RtlpTpWorkCallback @ 0x18002F4F0 (RtlpTpWorkCallback.c)
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     TppCallbackEpilog @ 0x1800351D0 (TppCallbackEpilog.c)
 *     LdrpGetShimEngineInterface @ 0x180069660 (LdrpGetShimEngineInterface.c)
 *     LdrpCodeAuthzInitialize @ 0x18007AA5C (LdrpCodeAuthzInitialize.c)
 *     RtlWnfDllUnloadCallback @ 0x180085600 (RtlWnfDllUnloadCallback.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D6C30 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x18001869C (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F3D8 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDropLastInProgressCount @ 0x1800743BC (LdrpDropLastInProgressCount.c)
 */

NTSTATUS __cdecl LdrUnloadDll(PVOID DllHandle)
{
  NTSTATUS LoadedDllByHandle; // ebx
  char *v2; // rdi
  __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_180165408 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)DllHandle, (__int64 *)&BaseAddress, &v9);
    if ( LoadedDllByHandle >= 0 )
    {
      v2 = (char *)BaseAddress;
      LoadedDllByHandle = LdrpDecrementModuleLoadCountEx(BaseAddress, 1LL);
      if ( LoadedDllByHandle == -1073741267 )
      {
        v4 = NtCurrentTeb()->SameTebFlags & 0x1000;
        if ( !v4 )
          LdrpDrainWorkQueue(0);
        v2 = (char *)BaseAddress;
        LdrpDecrementModuleLoadCountEx(BaseAddress, 0LL);
        if ( !v4 )
          LdrpDropLastInProgressCount(v6, v5, v7, v8);
        LoadedDllByHandle = 0;
      }
      LdrpDereferenceModule(v2);
    }
  }
  return LoadedDllByHandle;
}
