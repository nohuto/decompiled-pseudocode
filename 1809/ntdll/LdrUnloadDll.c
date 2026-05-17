/*
 * XREFs of LdrUnloadDll @ 0x1800425D0
 * Callers:
 *     TppCallbackEpilog @ 0x180016F10 (TppCallbackEpilog.c)
 *     RtlpTpWorkCallback @ 0x18002F9F0 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x18002FD50 (RtlpTpWorkUnposted.c)
 *     RtlQueueWorkItem @ 0x180047CF0 (RtlQueueWorkItem.c)
 *     LdrpGetShimEngineInterface @ 0x1800707C8 (LdrpGetShimEngineInterface.c)
 *     LdrpCodeAuthzInitialize @ 0x18007FC08 (LdrpCodeAuthzInitialize.c)
 *     RtlWnfDllUnloadCallback @ 0x180089100 (RtlWnfDllUnloadCallback.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D8BF0 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByHandle @ 0x180042010 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180042678 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDropLastInProgressCount @ 0x180079EDC (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrUnloadDll(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int LoadedDllByHandle; // ebx
  __int64 v5; // rdi
  __int16 v7; // bx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_180165408 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v13, &v12, a4);
    if ( LoadedDllByHandle >= 0 )
    {
      v5 = v13;
      LoadedDllByHandle = LdrpDecrementModuleLoadCountEx(v13, 1LL);
      if ( LoadedDllByHandle == -1073741267 )
      {
        v7 = NtCurrentTeb()->SameTebFlags & 0x1000;
        if ( !v7 )
          LdrpDrainWorkQueue(0);
        v5 = v13;
        LdrpDecrementModuleLoadCountEx(v13, 0LL);
        if ( !v7 )
          LdrpDropLastInProgressCount(v9, v8, v10, v11);
        LoadedDllByHandle = 0;
      }
      LdrpDereferenceModule(v5);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
