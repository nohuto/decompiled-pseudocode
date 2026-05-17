/*
 * XREFs of LdrpFindExistingModule @ 0x180071428
 * Callers:
 *     LdrpMapDllFullPath @ 0x180070F28 (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180071120 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllRetry @ 0x180071958 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18000A950 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindExistingModule(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned __int64 *a3,
        __int64 a4,
        volatile signed __int32 **a5)
{
  int v6; // ebp
  char v7; // si
  unsigned __int16 *v9; // rdx
  int LoadedDllByNameLockHeld; // ebx

  v6 = a4;
  v7 = (char)a3;
  *a5 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, (unsigned __int64)a2, a3, a4);
  v9 = 0LL;
  if ( (v7 & 0x20) == 0 )
    v9 = a2;
  LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(a1, v9, v7, a5, v6);
  if ( LoadedDllByNameLockHeld == -1073741515 && (v7 & 8) != 0 )
  {
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0LL, a2, 0, a5, v6);
    if ( LoadedDllByNameLockHeld >= 0 )
      *((_DWORD *)*a5 + 26) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return (unsigned int)LoadedDllByNameLockHeld;
}
