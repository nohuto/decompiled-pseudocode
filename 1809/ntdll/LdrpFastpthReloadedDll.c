/*
 * XREFs of LdrpFastpthReloadedDll @ 0x1800269F0
 * Callers:
 *     LdrpLoadDllInternal @ 0x180026788 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x18000A7C8 (LdrpFindLoadedDllByName.c)
 *     LdrpBuildForwarderLink @ 0x180026AA0 (LdrpBuildForwarderLink.c)
 *     LdrpIncrementModuleLoadCount @ 0x180026B34 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180042678 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDropLastInProgressCount @ 0x180079EDC (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrpFastpthReloadedDll(unsigned __int16 *a1, int a2, __int64 a3, __int64 *a4)
{
  int LoadedDllByName; // ebx
  int v7; // r8d
  unsigned __int16 *v8; // rdx
  __int16 v10; // si
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = 0;
  LoadedDllByName = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = a2;
    v8 = 0LL;
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      goto LABEL_5;
    v7 = a2;
    v8 = a1;
    a1 = 0LL;
  }
  LoadedDllByName = LdrpFindLoadedDllByName(a1, v8, v7, (__int64)a4, &v15);
LABEL_5:
  if ( LoadedDllByName >= 0 )
  {
    LoadedDllByName = -1073741275;
    if ( v15 == 9 )
    {
      LoadedDllByName = LdrpIncrementModuleLoadCount(*a4);
      if ( LoadedDllByName >= 0 )
      {
        LoadedDllByName = LdrpBuildForwarderLink(a3, *a4);
        if ( LoadedDllByName < 0 )
        {
          v10 = NtCurrentTeb()->SameTebFlags & 0x1000;
          if ( !v10 )
            LdrpDrainWorkQueue(0LL);
          LdrpDecrementModuleLoadCountEx(*a4, 0LL);
          if ( !v10 )
            LdrpDropLastInProgressCount(v12, v11, v13, v14);
        }
      }
    }
    if ( LoadedDllByName < 0 )
    {
      LdrpDereferenceModule(*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)LoadedDllByName;
}
