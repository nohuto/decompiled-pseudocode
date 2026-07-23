/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x18007BFA0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180042010 (LdrpFindLoadedDllByHandle.c)
 */

NTSTATUS __cdecl LdrDisableThreadCalloutsForDll(PVOID DllImageBase)
{
  NTSTATUS LoadedDllByHandle; // ebx
  char *v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_180165408 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)DllImageBase, (__int64 *)&BaseAddress, &v4);
    if ( LoadedDllByHandle >= 0 )
    {
      v2 = (char *)BaseAddress;
      if ( !*((_WORD *)BaseAddress + 55) )
        *((_BYTE *)BaseAddress + 106) |= 4u;
      LdrpDereferenceModule(v2);
    }
  }
  return LoadedDllByHandle;
}
