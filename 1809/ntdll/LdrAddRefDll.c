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

__int64 __fastcall LdrAddRefDll(int a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  unsigned __int64 v5; // rdx
  int LoadedDllByHandle; // ebx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  bool v9; // zf
  __int64 v10; // rdi
  int Count; // eax
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a2, &v14, &v13, a4);
    if ( LoadedDllByHandle >= 0 )
    {
      v9 = (v4 & 1) == 0;
      v10 = v14;
      if ( v9 )
        Count = LdrpIncrementModuleLoadCount(v14, v5, v7, v8);
      else
        Count = LdrpPinModule(v14);
      LoadedDllByHandle = Count;
      LdrpDereferenceModule(v10);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
