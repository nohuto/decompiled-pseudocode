/*
 * XREFs of LdrpFindExistingModule @ 0x18002E6A0
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18002DEC8 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x18002E4A8 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x1800709A8 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18002284C (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindExistingModule(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        volatile signed __int32 **a5)
{
  __int64 v9; // rdx
  int LoadedDllByNameLockHeld; // ebx

  *a5 = 0LL;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v9 = 0LL;
  if ( (a3 & 0x20) == 0 )
    v9 = a2;
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(a1, v9, a3, a5, a4);
  if ( LoadedDllByNameLockHeld == -1073741515 && (a3 & 8) != 0 )
  {
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0LL, a2, 0LL, a5, a4);
    if ( LoadedDllByNameLockHeld >= 0 )
      *((_DWORD *)*a5 + 26) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByNameLockHeld;
}
