/*
 * XREFs of LdrpFindLoadedDllByMapping @ 0x180076F70
 * Callers:
 *     LdrpFindLoadedDllByMappingFile @ 0x180076D50 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x180076EC0 (LdrGetDllHandleByMapping.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180076FF4 (LdrpFindLoadedDllByMappingLockHeld.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMapping(PVOID File2MappedAsFile, void *Buf1, __int64 a3, _DWORD *a4)
{
  int LoadedDllByMappingLockHeld; // ebx

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LoadedDllByMappingLockHeld = LdrpFindLoadedDllByMappingLockHeld(File2MappedAsFile, Buf1);
  if ( LoadedDllByMappingLockHeld >= 0 && a4 )
    *a4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 152LL) + 56LL);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByMappingLockHeld;
}
