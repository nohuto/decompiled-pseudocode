/*
 * XREFs of LdrpFindLoadedDllByMapping @ 0x180076F60
 * Callers:
 *     LdrpFindLoadedDllByMappingFile @ 0x180076D40 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x180076EB0 (LdrGetDllHandleByMapping.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180076FE4 (LdrpFindLoadedDllByMappingLockHeld.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMapping(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, _DWORD *a4)
{
  int LoadedDllByMappingLockHeld; // ebx
  int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v10 = *(_DWORD *)(a2 + 8);
  v11 = *(_DWORD *)(a2 + 80);
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, (__int64)a4);
  LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(a1, a2, &v10, a3);
  if ( LoadedDllByMappingLockHeld >= 0 && a4 )
    *a4 = *(_DWORD *)(*(_QWORD *)(*a3 + 152) + 56LL);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByMappingLockHeld;
}
