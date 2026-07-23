/*
 * XREFs of LdrpFastpthReloadedDll @ 0x1800225E4
 * Callers:
 *     LdrpLoadDllInternal @ 0x180022378 (LdrpLoadDllInternal.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002228C (LdrpIncrementModuleLoadCount.c)
 *     LdrpBuildForwarderLink @ 0x1800222E4 (LdrpBuildForwarderLink.c)
 *     LdrpFindLoadedDllByName @ 0x180022698 (LdrpFindLoadedDllByName.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F3D8 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDropLastInProgressCount @ 0x1800743BC (LdrpDropLastInProgressCount.c)
 */

__int64 __fastcall LdrpFastpthReloadedDll(PUNICODE_STRING a1, __int16 a2, __int64 a3, __int64 *a4)
{
  int LoadedDllByName; // ebx
  _UNICODE_STRING *v7; // rax
  __int16 v9; // si
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v10) = 0;
  LoadedDllByName = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = a1;
    a1 = 0LL;
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      return (unsigned int)LoadedDllByName;
    v7 = 0LL;
  }
  LoadedDllByName = LdrpFindLoadedDllByName(v7, a1, (__int64)&v10);
  if ( LoadedDllByName >= 0 )
  {
    LoadedDllByName = -1073741275;
    if ( (_DWORD)v10 != 9 )
      goto LABEL_11;
    LoadedDllByName = LdrpIncrementModuleLoadCount(*a4);
    if ( LoadedDllByName >= 0 )
    {
      LoadedDllByName = LdrpBuildForwarderLink(a3, *a4);
      if ( LoadedDllByName < 0 )
      {
        v9 = NtCurrentTeb()->SameTebFlags & 0x1000;
        if ( !v9 )
          LdrpDrainWorkQueue(0LL);
        LdrpDecrementModuleLoadCountEx(*a4, 0LL);
        if ( !v9 )
          LdrpDropLastInProgressCount();
      }
    }
    if ( LoadedDllByName < 0 )
    {
LABEL_11:
      LdrpDereferenceModule((char *)*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)LoadedDllByName;
}
