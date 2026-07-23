/*
 * XREFs of LdrIsModuleSxsRedirected @ 0x1800CFE50
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180042010 (LdrpFindLoadedDllByHandle.c)
 */

BOOLEAN __cdecl LdrIsModuleSxsRedirected(PVOID DllHandle)
{
  BOOLEAN v1; // bl
  int v2; // ebx
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( (int)LdrpFindLoadedDllByHandle((unsigned __int64)DllHandle, (__int64 *)&BaseAddress, 0LL) >= 0 )
  {
    v2 = *((_DWORD *)BaseAddress + 26);
    LdrpDereferenceModule((char *)BaseAddress);
    return (v2 & 0x10000000) != 0;
  }
  return v1;
}
