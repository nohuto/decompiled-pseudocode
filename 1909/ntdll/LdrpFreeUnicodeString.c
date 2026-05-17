/*
 * XREFs of LdrpFreeUnicodeString @ 0x18002E1A4
 * Callers:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllInternal @ 0x1800219E8 (LdrpFindLoadedDllInternal.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpApplyFileNameRedirection @ 0x1800253F0 (LdrpApplyFileNameRedirection.c)
 *     LdrpResolveDllName @ 0x180029CEC (LdrpResolveDllName.c)
 *     LdrpSearchPath @ 0x18002D8FC (LdrpSearchPath.c)
 *     LdrpMapDllSearchPath @ 0x18002DEC8 (LdrpMapDllSearchPath.c)
 *     LdrpAppCompatRedirect @ 0x18002E5E8 (LdrpAppCompatRedirect.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall LdrpFreeUnicodeString(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = NtdllpFreeStringRoutine(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
