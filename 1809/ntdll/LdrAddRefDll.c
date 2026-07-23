/*
 * XREFs of LdrAddRefDll @ 0x180045070
 * Callers:
 *     TppExecuteWaitCallback @ 0x18002BDF8 (TppExecuteWaitCallback.c)
 *     TppIopExecuteCallback @ 0x18002EA60 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18002ED5C (TppWorkCallbackPrologRelease.c)
 *     TppJobpExecuteCallback @ 0x180031DC0 (TppJobpExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x180047CF0 (RtlQueueWorkItem.c)
 *     TppAlpcpExecuteCallback @ 0x180069EA0 (TppAlpcpExecuteCallback.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180026B34 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByHandle @ 0x180042010 (LdrpFindLoadedDllByHandle.c)
 *     LdrpPinModule @ 0x180047C80 (LdrpPinModule.c)
 */

NTSTATUS __cdecl LdrAddRefDll(ULONG Flags, PVOID DllHandle)
{
  char v2; // di
  NTSTATUS LoadedDllByHandle; // ebx
  bool v4; // zf
  char *v5; // rdi
  NTSTATUS Count; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  v2 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)DllHandle, (__int64 *)&BaseAddress, &v8);
  if ( LoadedDllByHandle >= 0 )
  {
    v4 = (v2 & 1) == 0;
    v5 = (char *)BaseAddress;
    if ( v4 )
      Count = LdrpIncrementModuleLoadCount((__int64)BaseAddress);
    else
      Count = LdrpPinModule(BaseAddress);
    LoadedDllByHandle = Count;
    LdrpDereferenceModule(v5);
  }
  return LoadedDllByHandle;
}
